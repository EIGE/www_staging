<?php

/**
 * Search service class using Primo
 */
class SearchApiPrimoService extends SearchApiAbstractService {
  
  
  
  public function configurationForm(array $form, array &$form_state) {
    $form['domain'] = array(
      '#type' => 'textfield',
      '#title' => t('Primo domain'),
      '#description' => t('The primo domain (with optional port number, without http part) to which this service will connect to fetch results (e.g. primop.eige.europa.eu:1701)'),
      '#required' => TRUE,
    );
    $form['institution'] = array(
      '#type' => 'textfield',
      '#title' => t('Primo institution'),
      '#description' => t('The institution code for the primo service (e.g. EIGE)'),
      '#required' => TRUE,
    );
    
    return $form;
  }
  
  // List of additional features that this Service supports.
  public function supportsFeature($feature) {
    $supported = drupal_map_assoc(array(
      'search_api_facets',
      //'search_api_facets_operator_or',
    ));
    return isset($supported[$feature]);
  }
  
  public function search(SearchApiQueryInterface $query) {
    
    $time_method_called = microtime(TRUE);
    
    $results = array();
    $results['result count'] = 0;
    $results['performance'] = array(
      'complete' => 0,
      'preprocessing' => 0,
      'execution' => 0,
      'postprocessing' => 0,
    );
    
    $domain = (isset($this->options['domain'])) ? $this->options['domain'] : null;
    $institution = (isset($this->options['institution'])) ? $this->options['institution'] : null;
    if ($domain==null) {
      watchdog("search_api", "Primo domain is not set, thus search results cannot be retrieved.", array(), WATCHDOG_ALERT);
      return $results;
    }
    if ($institution==null) {
      watchdog("search_api", "Primo institution is not set, thus search results cannot be retrieved.", array(), WATCHDOG_ALERT);
      return $results;
    }
    
    $query_options = $query->getOptions();
    $query_terms = $this->getSerializedQueryTerms($query);
    
    // no need to execute Primo request in case of no search terms
    if (!strlen($query_terms)) {
      return $results;
    }
    
    $datasource = new SearchApiPrimoDataSourceController("primo_item");
    $primo_item_wrapper = $datasource->getMetadataWrapper();
    $primo_item_properties = $primo_item_wrapper->getPropertyInfo();
    
    $facet_query = '';
    if (module_exists('search_api_facetapi')) {
      // TODO AKZ - is there a better way to do this not hardcoded? same for the custom 'facet_local1' which is required by EIGE
      $allowed_primo_facets = array("facet_creator", "facet_lang", "facet_rtype", "facet_pfilter", 
        "facet_topic", "facet_creationdate", "facet_library", "facet_dcc", "facet_lcc", "facet_rvk", "facet_tlevel", "facet_domain", 
        "facet_fsize", "facet_fmt", "facet_frbrgroupid", "facet_frbrtype", "facet_local1");
      $searcher = 'search_api@' . $query->getIndex()->machine_name;
      // http://www.drupalcontrib.org/api/drupal/contributions!search_api!contrib!search_api_facetapi!plugins!facetapi!adapter.inc/class/SearchApiFacetapiAdapter/7
      $adapter = facetapi_adapter_load($searcher);
      $selected_facets = $adapter->getAllActiveItems();
      foreach ($selected_facets as $key => $value) {
        $field_name = $value['field alias'];
        $facet_value = $value['value'];
        if (strlen($facet_value)) {
          if ($field_name=='cdate') {
            $facet_value = '[' . $facet_value . '+TO+' . $facet_value . ']';
          } else {
            $facet_value = str_replace(" ", "+", $facet_value);
          }
          $facet_query_param_name = "facet_" . (isset($primo_item_properties[$field_name]['facet_alias']) ? $primo_item_properties[$field_name]['facet_alias'] : $field_name);
          if (in_array($facet_query_param_name, $allowed_primo_facets)) {
            $facet_query .= '&query=' . $facet_query_param_name . ',exact,' . $facet_value;
          }
        }
      }
    }
    
    // TODO AKZ
    $sort_mappings = array(
      // rank is not included as it is the default primo option
      "title" => "stitle",
      "cdate" => "scdate",
      "creator" => "screator",
      "popularity" => "popularity",
    );
    $sort_query = '';
    if (isset($_GET['sort_by'])) {
      $drupal_sort_key = trim(check_plain($_GET['sort_by']));
      $primo_sort_key = isset($sort_mappings[$drupal_sort_key]) ? $sort_mappings[$drupal_sort_key] : '';
      if (strlen($primo_sort_key)) {
        $sort_query = "&sortField=" . $primo_sort_key;
      }
    }
    
    
    // https://developers.exlibrisgroup.com/primo/apis/webservices/xservices/search/briefsearch
    // TODO AKZ hardcoded domain (need to find a way to retrieve this from service.inc)
    $primo_url = "http://primop.eige.europa.eu:1701/PrimoWebServices/xservice/search/brief?institution=" . $institution;
    $primo_url .=  "&json=true"; // data format parameter (available values: xml or json)
    $primo_url .=  "&highlight=true&displayField=description&displayField=title&displayField=subject&displayField=creator"; // TODO AKZ highlight option from index? what fields should be highlighted?
    $primo_url .=  "&indx=" . ((int)$query_options['offset']+1); // pagination offset (Primo is base 1 not base 0)
    $primo_url .=  "&bulkSize=" . $query_options['limit'];       // pagination step
    $primo_url .=  "&query=any,contains," . $query_terms; // TODO AKZ proper terms parsing, proper condition
    $primo_url .=  $facet_query;
    $primo_url .=  $sort_query;
    // TODO AKZ: make this scopes configurable and add a filter in the search box for this?
    //$primo_url .=  '&loc=local,scope:(EIGE_studies)&loc=local,scope:(metalib)&loc=local,scope:(EIGE_SFX_KB)&loc=local,scope:(EIGE)&loc=local,scope:("KVI_VOY")&loc=local,scope:("GIB_VUF")&loc=local,scope:(ARI_ALE_RELEVANT)&loc=local,scope:(CID_ALE_RELEVANT)&loc=local,scope:(ETUI_ALE_RELEVANT)&loc=local,scope:(GSGE_RELEVANT)&loc=local,scope:(IAV_ADL_RELEVANT)&loc=local,scope:(KVI_ALE_RELEVANT)&loc=local,scope:(AMZ_NET_RELEVANT)';
    $primo_url .=  '&loc=local,scope:(EIGE_studies)&loc=local,scope:(metalib)&loc=local,scope:(EIGE_SFX_KB)&loc=local,scope:(EIGE)&loc=local,scope:(IAV_ADL)&loc=local,scope:("AMZ_NET")&loc=local,scope:("GIB_VUF")&loc=local,scope:("EOF_ZEN")&loc=local,scope:(GBV)&loc=local,scope:("EUC_ALE")&loc=local,scope:(GCC)&loc=local,scope:(GAM)&loc=local,scope:(GFW)&loc=local,scope:(GIM)&loc=local,scope:(GAS)&loc=local,scope:(GRT)&loc=local,scope:(WDM)&loc=local,scope:(WEE)&loc=local,scope:(GME) ';
    
    $json_result = _get_remote_primo_data($primo_url);
    if ($json_result == null) {
      return $results;
    }
    
    $docset = null;
    if (isset($json_result['DOCSET'])) {
      $docset = $json_result['DOCSET'];
    }
    if ($docset==null) {
      $error_message = "Error while connecting to Primo (%url) - Invalid data structure; missing ['SEGMENTS']['JAGROOT']['RESULT']['DOCSET']";
      watchdog("search_api", $error_message, array("%url" => $primo_url), WATCHDOG_ALERT);
      return null;
    }
      
    $total_time = isset($docset['@TOTAL_TIME']) ? $docset['@TOTAL_TIME'] : 0;
    $hit_time = isset($docset['@HIT_TIME']) ? $docset['@HIT_TIME'] : 0;
    $results['performance'] = array(
      'complete' => $total_time,
      'preprocessing' => 0,
      'execution' => $hit_time,
      'postprocessing' => 0,
    );

    $total_results = isset($docset['@TOTALHITS']) ? $docset['@TOTALHITS'] : 0;
    // for a summary of all attributes expected in $results array see SearchApiQueryInterface->execute()
    $results['result count'] = $total_results;
    $results['results'] = array();
    $docs = isset($docset['DOC']) ? $docset['DOC'] : array();
    // well in case of more than one results, DOC is an array with numeric keys (base zero) each one corresponding to a result array
    // [DOC] => array(0 => array(@ID => 4432, @RANK => 124564, ...), 1 => array(@ID => 4433, ...), 2 => array(@ID => 4434, ...), ...)
    // but in case of just one result, the API devs thought it was a great idea to change the structure and instead of the [DOC] 
    // array containing just one element with zero key, they decided it was best to explode the result array directly into [DOC] array
    // [DOC] => array(@ID => 4432, @RANK => 124564, ....)
    // so here, this case is checked, and the proper structure is created manually, so the parsing works in both cases. Awesome (#not)
    if (array_key_exists("@ID", $docs)) {
      // case of single result, exploded into [DOC]
      $docs = array(0 => $docs);
    }
    foreach ($docs as $delta => $doc) {
      $result = array();
      $result['id'] = $doc['PrimoNMBib']['record']['control']['recordid'];
      $result['score'] = $doc['@RANK'];
      
      $record = $doc['PrimoNMBib']['record']['display'];
      
      $fields = array();
      $entity = new stdClass();
      $entity->id = $result['id'];
      // TODO AKZ dynamic options for direct link to primo
      $entity->path = 'rdc/library/resource/' . $result['id'];
      $entity->rank = $doc['@RANK'];
      $fields['id'] = $entity->id;
      $fields['path'] = $entity->path;
      $fields['rank'] = $entity->rank;
      
      _process_entity_fields($doc, $entity, $fields);
      // TODO AKZ hardcoded resolution of links and libraries/institutions      
      _process_libraries_and_links($doc, $entity, $fields);
      
      // according to SearchApiQueryInterface->execute() we can pre-populate the results with the field values
      // so that they won't have to be loaded again in SearchApiDataSourceControllerInterface->loadItems
      // in case of search_api_views, $result['fields'] is used instead of $result['entity']
      $result['entity'] = $entity;
      $result['fields'] = $fields;

      $results['results'][$entity->id] = $result;
    }
    
    // dealing with facets http://www.drupalcontrib.org/api/drupal/contributions!search_api!contrib!search_api_facetapi!example_service.php/7
    if (module_exists('search_api_facetapi') && isset($query_options['search_api_facets'])) {
      $active_facets = $query_options['search_api_facets'];
      
      // In case of Primo, facets are returned along with the results, so in contrast to the documentation above
      // we don't have to query Primo again per case in order to retrieve the results.
      // 'missing' and 'OR' functionalities are not supported. If we decide to provide support for "search_api_facets_operator_or"
      // in the future, then we may have to revise this code, since existing filters on the fields should be ignored for computing 
      // the facets that are configured as 'OR' ones. 
      // Finally, the logical thing would be to iterate the $active_facets array and then look
      // up for the respective facet definition and terms in the $json_result data. However, the returned facet array by primo is not keyed
      // with the facet field name, rather with an auto-increment number, which means we have to iterate the whole facet array and look for the facet 
      // with the desired name. So, instead of going through this process foreach entry in $active_facets, we first resolve the facet data returned by Primo
      // and then compare the two arrays
      
      $available_facets = array();
      if (isset($json_result['FACETLIST']) && isset($json_result['FACETLIST']['FACET'])) {
        $primo_facets = $json_result['FACETLIST']['FACET'];
        foreach ($primo_facets as $primo_facet) {
          if (!isset($primo_facet['FACET_VALUES'])) {
            continue;
          }
          $filters = array();
          $facet_field_name = $primo_facet['@NAME'];
          $facet_values = $primo_facet['FACET_VALUES'];
          // once more, kudos to Primo devs, where in case of a single value in the facet, the single facet term is exploded directly in the $facet_values table
          // normal behavior $facet_values = array(0 => array("@KEY"=> 'something', "@VALUE" => 5), 1 => array("@KEY"=> 'something else', "@VALUE" => 3), 2 => ...) 
          // behavior in case of single facet term: $facet_values= array("@KEY" => 'something', "@VALUE" => 5)
          if (array_key_exists("@KEY", $facet_values)) {
            // case of single result, exploded into [DOC]
            $facet_values = array(0 => $facet_values);
          }
          // TODO AKZ - perhaps there is a better way to do this?
         
          foreach ($facet_values as $value) {
            $term = $value['@KEY'];
            $count = $value['@VALUE'];
            // For single-valued terms, we just need to wrap them in quotes.
            $filter = '"' . $term . '"';
            $filters[$filter] = $count;
          }
          
          // If we should also return a "missing" facet ($filters['!'] = $count), compute that as the
          // number of results without a value for the facet field.
          
          // Sort the facets descending by result count. This is required later on to check if facet configuration
          // limit is reached; in that case, terms with the lowest counts (from the bottom of the array) will be removed
          arsort($filters);
          
          foreach ($filters as $filter => $count) {
            $available_facets[$facet_field_name][] = array(
              'count' => $count,
              'filter' => $filter,
            );
          }
        }
      }
      
      foreach ($active_facets as $field_name => $facet_options) {
        $facet_alias = $field_name;
        $field_info = $primo_item_properties[$field_name]; // this exists in any case, as search_api allows facets only for existing fields/properties
        if (isset($field_info['facet_alias'])) {
          $facet_alias = $field_info['facet_alias'];
        }
        if (!isset($available_facets[$facet_alias])) {
          watchdog("search_api", "Primo does not support faceted search for field '%field_name'", array("%field_name" => $field_name), WATCHDOG_ERROR);
          continue;
        }
        $limit = empty($facet_options['limit']) ? 'all' : $facet_options['limit'];
        $min_count = $facet_options['min_count'];
        $missing = $facet_options['missing'];
        $or = isset($facet_options['operator']) && $facet_options['operator'] == 'or'; 
        $primo_facet = $available_facets[$facet_alias];
        
        // NOT supported by Primo
        if ($missing) {}
        // NOT supported (at least yet)
        if ($or) {}
        
        foreach ($primo_facet as $key => $term) {
          if ($term['count'] < $min_count) {
            unset($primo_facet[$key]);
          }
        }
        
        if (is_numeric($limit) && $limit > 0) {
          while (count($primo_facet) > $limit) {
            array_pop($primo_facet);
          }
        }
        
        $results['search_api_facets'][$field_name] = $primo_facet;
      }
      
    }
    
    return $results;
  }
  
  /**
   * Helper function that serializes the search term(s) ($query->getKeys())
   * taking into account the conjuction method (AND or OR). Furthermore, the function
   * makes sure that search term(s) sent to Primo, do not contain comma characters (,)
   * as required by Primo documentation ("Values including commas in them should replace the comma with a space.")
   * 
   * @param SearchApiQueryInterface $query
   * @return type
   */
  public function getSerializedQueryTerms(SearchApiQueryInterface $query) {
    $query_string = '';
    $keys = $query->getKeys();
    if ($keys==null) {
      return '';
    }
    if (is_string($keys)) {
      $keys = array($keys);
    }
    if (is_array($keys)) {
      if (isset($keys['#conjunction'])) {
        $conjunction = $keys['#conjunction'];
        unset($keys['#conjunction']);   // Remove key from array
      }
      $query_string = '';
      foreach ($keys as $value) {
        // http://stackoverflow.com/a/2770927 - no need to replace commas with spaces and worry about url encoding
        // we could replace them with an empty string, but that would mess up cases where a whitespace was falsely omitted (e.g. women,gender)
        // both cases are taken into account here
        $subvalues = explode(",", $value);
        foreach ($subvalues as $subvalue) {
          $subvalue = trim($subvalue);
          if (strlen($subvalue)) {
            if (strlen($query_string)) {
              // TODO AKZ take into account the $conjunction and implode either using '+' or ' OR '
              $query_string .= '+';
            }
            $query_string .= $subvalue;
          }
        }
      }
    }
    return $query_string;
  }
  
  /* UNUSED */
  /* This is a read-only service to external datasource (items are persisted/indexed in another server, thus these don't need to do anything. */
  public function addIndex(SearchApiIndex $index) { }
  public function fieldsUpdated(SearchApiIndex $index) { }
  public function removeIndex($index) { }
  public function indexItems(SearchApiIndex $index, array $items) { }
  public function deleteItems($ids = 'all', SearchApiIndex $index = NULL) { }


}
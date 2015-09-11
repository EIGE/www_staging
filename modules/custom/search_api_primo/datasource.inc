<?php

/**
 * @file
 * Contains the SearchApiPrimoDataSourceController class, which extends the SearchApiExternalDataSourceController class
 * and provides methods for the primo items in search results.
 */

class SearchApiPrimoDataSourceController extends SearchApiExternalDataSourceController {
  
  public function __construct($type) {
    parent::__construct($type);
    $this->table = null;
  }

  /**
   * Return information on the ID field for this controller's type.
   *
   * This implementation will return a field named "id" of type "string". This
   * can also be used if the item type in question has no IDs.
   *
   * @return array
   *   An associative array containing the following keys:
   *   - key: The property key for the ID field, as used in the item wrapper.
   *   - type: The type of the ID field. Has to be one of the types from
   *     search_api_field_types(). List types ("list<*>") are not allowed.
   */
  public function getIdFieldInfo() {
    return array(
      'key' => 'id',
      'type' => 'string',
    );
  }

  /**
   * Specifies the property information to be used when creating a metadata wrapper for
   * this entity/datasource. All known fields from Primo Technical Guide and 
   * Primo X-Services API documentation (https://developers.exlibrisgroup.com/primo/apis/webservices/xservices) are included here
   * These will be filled with values upon search execution and will become available in the presentation layer in case they are needed
   * (e.g. Search API Views will use these definitions to expose them as View fields). Note that Primo uses different subsets of fields 
   * (and in some cases different field names) per usecase (Display, Search, Facets, Sort sections). However, search_api does not support this;
   * only fields that are defined here may be used as searchable fields, appear in the UI and allow for facets. So, striving for supporting the majority 
   * of Primo API features, we are obliged to "mix" fields from different Primo sections.
   * 
   * Moreover these will be available in the Search API index configuration, even though some configurations will not have any effect:
   * - Checking or unchecking 'Indexed' column in the 'Fields' tab of the search api index, will not have an affect since this is a read only index and Primo does the actual indexing/searching
   * - Boost configurations will not have any affect either, since these search settings are defined in Primo platform and cannot be controlled via X-Service queries
   * TODO AKZ: how to define fields that can be searched here? 'Fulltext' selection might be the solution I am looking for?
   * 
   * NOTE: The exposure of the majority of the Primo fields here, may lead to multiple facets being available via the UI while actual faceting infrastructure may not
   * be supported by Primo platform (e.g. there is no supported Primo facet for 'Description' field)
   * TODO AKZ: can I somehow limit the number of available facets to the actual supported ones?
   * 
   * The 'field_display_alias' field property found in some fields is a custom property used by this module and has no affiliation with hook_entity_property_info() expected propeties.
   * This additional info is required to map each field's actual name with the name it should be retrieved by the xml/json response upon search. For example, 
   * for field 'Resource type', name 'rtype' is used for constructing the search and facet query according to Primo documentation, but when search results are parsed 
   * (xml or json) this field's value is retrieved by the element with name 'type' (see PNX record, Display section). Same case for 'facet_alias' property
   * 
   * The 'process_subfield_delimiters' field property found in some fields is a custom property used by this module and has no affiliation with hook_entity_property_info() expected propeties.
   * This is required to indicate that some fields should be post-processed against a know set of delimiters as defined in Primo Technical Guide, section 'Subfields in the PNX'
   *
   * @return array
   *   Property information as specified by hook_entity_property_info().
   *
   * @see hook_entity_property_info()
   */
  protected function getPropertyInfo() {
    // ID corresponds to 'recordid' property which according to Primo Technical Guide is
    // ".. a unique identifier of the record in the Primo repository. The sourceid and sourcerecordid are concatenated to create the recordid"
    $info['property info']['id'] = array(
      'label' => t('ID'),
      'type' => 'text',
      'description' => 'The identifier of the record in the Primo repository'
    );
    $info['property info']['path'] = array(
      'label' => t('Path'),
      'type' => 'text',
      'description' => 'The Primo url/path for the details/display page for this item',
    );
    $info['property info']['rank'] = array(
      'label' => t('Relevance'),
      'type' => 'text',
      'description' => 'The ranking of the item against the specific search fetced via Primo X-Service for brief search',
    );
    $info['property info']['title'] = array(
      'label' => t('Title'),
      'type' => 'text',
    );
    /** FACET **/
    $info['property info']['rtype'] = array(
      'label' => t('Type'),
      'type' => 'text',
      'description' => 'Resource type',
      'field_display_alias' => 'type',
    );
    /** FACET **/
    $info['property info']['creator'] = array(
      'label' => t('Creator'),
      'type' => 'text',
    );
    $info['property info']['contributor'] = array(
      'label' => t('Contributor'),
      'type' => 'text',
    );
    $info['property info']['publisher'] = array(
      'label' => t('Publisher'),
      'type' => 'text',
    );
    // Primo Technical Guide specifies only 'identifier' as display field, 
    // but 'Brief Search' XS API documentation specifies both 'isbn' and 'issn' as
    // indexed fields, so I am adding them all
    $info['property info']['identifier'] = array(
      'label' => t('Identifier'),
      'type' => 'text',
      'process_subfield_delimiters' => TRUE,
    );
    $info['property info']['isbn'] = array(
      'label' => t('ISBN'),
      'type' => 'text',
      'process_subfield_delimiters' => TRUE,
    );
    $info['property info']['issn'] = array(
      'label' => t('ISSN'),
      'type' => 'text',
      'process_subfield_delimiters' => TRUE,
    );
    /** FACET **/
    $info['property info']['cdate'] = array(
      'label' => t('Creation date'),
      'type' => 'integer',
      'field_display_alias' => 'creationdate',
      'facet_alias' => 'creationdate',
    );
    $info['property info']['fmt'] = array(
      'label' => t('Format'),
      'type' => 'text',
      'field_display_alias' => 'format',
    );
    /** FACET **/
    $info['property info']['sub'] = array(
      'label' => t('Subject'),
      'type' => 'text',
      'field_display_alias' => 'subject',
      'facet_alias' => 'topic',
    );
    $info['property info']['desc'] = array(
      'label' => t('Description'),
      'type' => 'text',
      'field_display_alias' => 'description',
      'process_subfield_delimiters' => TRUE,
    );
    /** FACET **/
    $info['property info']['lang'] = array(
      'label' => t('Language'),
      'type' => 'text',
      'field_display_alias' => 'language',
    );
    $info['property info']['coverage'] = array(
      'label' => t('Coverage'),
      'type' => 'text',
    );
    $info['property info']['relation'] = array(
      'label' => t('Relation'),
      'type' => 'text',
      'process_subfield_delimiters' => TRUE,
    );
    $info['property info']['ispartof'] = array(
      'label' => t('Is part of'),
      'type' => 'text',
    );
    $info['property info']['rights'] = array(
      'label' => t('Rights'),
      'type' => 'text',
    );
    $info['property info']['edition'] = array(
      'label' => t('Edition'),
      'type' => 'text',
    );
    
    // links
    $info['property info']['linktorsrc'] = array(
      'label' => t('Link to resource'),
      'type' => 'text',
      'description' => 'The direct resource link(s) for this item (external repositories, and/or files)',
      'pnx_record_section' => 'links',
    );
    $info['property info']['backlink'] = array(
      'label' => t('Link to library catalogue'),
      'type' => 'text',
      'description' => 'The link(s) for this item in the library catalogue. Usually pairs with a library value.',
      'pnx_doc_section' => 'LINKS',
    );
    $info['property info']['cataloguelink'] = array(
      'label' => t('Link to library catalogue'),
      'type' => 'text',
      'description' => 'The link(s) for this item in the library catalogue. Usually pairs with a library value.',
      'field_display_alias' => 'url',
      'pnx_doc_section' => 'LIBRARIES',
    );
    
    // source/library/institution
    $info['property info']['source'] = array(
      'label' => t('Source'),
      'description' => 'Code of the library/institution kept for backwards compatibility',
      'type' => 'text',
    );
    $info['property info']['institution'] = array(
      'label' => t('Institution'),
      'type' => 'text',
      'description' => 'Library in whose catalogue this item can be found. This information usually pairs with a link and an (optional) call number',
      'pnx_doc_section' => 'LIBRARIES',
    );
    /** FACET **/
    $info['property info']['library'] = array(
      'label' => t('Library'),
      'description' => 'Library in whose catalogue this item can be found. This information usually pairs with a link and an (optional) call number',
      'type' => 'text',
    );
    $info['property info']['library_call_number'] = array(
      'label' => t('Call number'),
      'type' => 'text',
    );
    
    // Fields that are only declared as fields because of required facets
    
    /** FACET **/
    $info['property info']['availability'] = array(
      'label' => t('Availability'),
      'type' => 'text',
      'facet_alias' => 'tlevel',
    );
    
    // Fields that are only declared as fields because of required sorting options
    
    /** FACET **/
    $info['property info']['popularity'] = array(
      'label' => t('Popularity'),
      'type' => 'text',
    );
    
    // TODO AKZ hook for additional fields
    return $info;
  }
  
  /**
   * Load items of the type of this data source controller.
   */
  public function loadItems(array $ids) {
    // items are pre-loaded during SearchApiPrimoService::search(SearchApiQueryInterface $query)
    return array();
  }

  /**
   * Get the unique ID of an item.
   *
   * Always returns 1.
   *
   * @param $item
   *   An item of this controller's type.
   *
   * @return
   *   Either the unique ID of the item, or NULL if none is available.
   */
  public function getItemId($item) {
    $item_wrapper = $this->getMetadataWrapper($item);
    return $item_wrapper->id->value();
  }

  /**
   * Get a human-readable label for an item.
   */
  public function getItemLabel($item) {
    $item_wrapper = $this->getMetadataWrapper($item);
    return ($item_wrapper->title->value()) ? $item_wrapper->title->value() : NULL;
  }

  /**
   * Get a URL at which the item can be viewed on the web.
   *
   * @param $item
   *   An item of this controller's type.
   *
   * @return
   *   Either an array containing the 'path' and 'options' keys used to build
   *   the URL of the item, and matching the signature of url(), or NULL if the
   *   item has no URL of its own.
   */
  public function getItemUrl($item) {
    $item_wrapper = $this->getMetadataWrapper($item);
    return array(
      'path' => $item_wrapper->path->value(),
      'options' => array('external' => TRUE, 'absolute' => TRUE, 'attributes' => array('target' => '_blank') ),
    );
  }


  /* UNUSED */
  /* This is a read-only service to external datasource (items are persisted/indexed in another server, thus these don't need to do anything. */
  public function startTracking(array $indexes) {return;}
  public function stopTracking(array $indexes) {return;}
  public function trackItemInsert(array $item_ids, array $indexes) {return;}
  public function trackItemChange($item_ids, array $indexes, $dequeue = FALSE) {return;}
  public function trackItemIndexed(array $item_ids, SearchApiIndex $index) {return;}
  public function trackItemDelete(array $item_ids, array $indexes) {return;}
  public function getChangedItems(SearchApiIndex $index, $limit = -1) {
    return array();
  }
  public function getIndexStatus(SearchApiIndex $index) {
    return array(
      'indexed' => 0,
      'total' => 0,
    );
  }
}

<?php
/**
 * @file
 * eige_search.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function eige_search_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'eige_primo_search';
  $view->description = 'Search in remote Primo server';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_eige_primo_index';
  $view->human_name = 'EIGE\'s primo';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'EIGE\'s primo context';
  $handler->display->display_options['css_class'] = 'view-with-enhanced-collapsible-filters';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'search_api_views_fulltext' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 1;
  $handler->display->display_options['exposed_form']['options']['text_input_required'] = '';
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'full_html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<div class="view-results-count"><strong>@total</strong> results found</div>';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p><em>There are no results that match the selected criteria in E-library</em></p>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Field: Indexed Primo search result: ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'search_api_index_eige_primo_index';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['label'] = '';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['id']['link_to_entity'] = 0;
  /* Field: Indexed Primo search result: Type */
  $handler->display->display_options['fields']['rtype']['id'] = 'rtype';
  $handler->display->display_options['fields']['rtype']['table'] = 'search_api_index_eige_primo_index';
  $handler->display->display_options['fields']['rtype']['field'] = 'rtype';
  $handler->display->display_options['fields']['rtype']['label'] = '';
  $handler->display->display_options['fields']['rtype']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['rtype']['alter']['text'] = '<span class="field-content">[rtype]</span>';
  $handler->display->display_options['fields']['rtype']['element_type'] = 'div';
  $handler->display->display_options['fields']['rtype']['element_class'] = 'views-field-type';
  $handler->display->display_options['fields']['rtype']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rtype']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['rtype']['link_to_entity'] = 0;
  /* Field: Indexed Primo search result: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_eige_primo_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'rdc/library/resource/[id]';
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_class'] = 'views-field-title-field';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 0;
  /* Field: Indexed Primo search result: Creation date */
  $handler->display->display_options['fields']['cdate']['id'] = 'cdate';
  $handler->display->display_options['fields']['cdate']['table'] = 'search_api_index_eige_primo_index';
  $handler->display->display_options['fields']['cdate']['field'] = 'cdate';
  $handler->display->display_options['fields']['cdate']['label'] = '';
  $handler->display->display_options['fields']['cdate']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['cdate']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['cdate']['separator'] = '';
  $handler->display->display_options['fields']['cdate']['link_to_entity'] = 0;
  /* Field: Indexed Primo search result: Subject */
  $handler->display->display_options['fields']['sub']['id'] = 'sub';
  $handler->display->display_options['fields']['sub']['table'] = 'search_api_index_eige_primo_index';
  $handler->display->display_options['fields']['sub']['field'] = 'sub';
  $handler->display->display_options['fields']['sub']['label'] = '';
  $handler->display->display_options['fields']['sub']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['sub']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['sub']['link_to_entity'] = 0;
  /* Field: Indexed Primo search result: Institution */
  $handler->display->display_options['fields']['institution']['id'] = 'institution';
  $handler->display->display_options['fields']['institution']['table'] = 'search_api_index_eige_primo_index';
  $handler->display->display_options['fields']['institution']['field'] = 'institution';
  $handler->display->display_options['fields']['institution']['label'] = 'Location';
  $handler->display->display_options['fields']['institution']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['institution']['link_to_entity'] = 0;
  /* Field: Indexed Primo search result: Creator */
  $handler->display->display_options['fields']['creator']['id'] = 'creator';
  $handler->display->display_options['fields']['creator']['table'] = 'search_api_index_eige_primo_index';
  $handler->display->display_options['fields']['creator']['field'] = 'creator';
  $handler->display->display_options['fields']['creator']['label'] = 'Creator/Contributor/Publisher';
  $handler->display->display_options['fields']['creator']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['creator']['link_to_entity'] = 0;
  /* Field: Search: Excerpt */
  $handler->display->display_options['fields']['search_api_excerpt']['id'] = 'search_api_excerpt';
  $handler->display->display_options['fields']['search_api_excerpt']['table'] = 'search_api_index_eige_primo_index';
  $handler->display->display_options['fields']['search_api_excerpt']['field'] = 'search_api_excerpt';
  $handler->display->display_options['fields']['search_api_excerpt']['label'] = '';
  $handler->display->display_options['fields']['search_api_excerpt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['search_api_excerpt']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['search_api_excerpt']['link_to_entity'] = 0;
  /* Field: Indexed Primo search result: Link to resource */
  $handler->display->display_options['fields']['linktorsrc']['id'] = 'linktorsrc';
  $handler->display->display_options['fields']['linktorsrc']['table'] = 'search_api_index_eige_primo_index';
  $handler->display->display_options['fields']['linktorsrc']['field'] = 'linktorsrc';
  $handler->display->display_options['fields']['linktorsrc']['label'] = '';
  $handler->display->display_options['fields']['linktorsrc']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['linktorsrc']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['linktorsrc']['link_to_entity'] = 0;
  /* Sort criterion: Indexed Primo search result: Relevance */
  $handler->display->display_options['sorts']['rank']['id'] = 'rank';
  $handler->display->display_options['sorts']['rank']['table'] = 'search_api_index_eige_primo_index';
  $handler->display->display_options['sorts']['rank']['field'] = 'rank';
  $handler->display->display_options['sorts']['rank']['order'] = 'DESC';
  $handler->display->display_options['sorts']['rank']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['rank']['expose']['label'] = 'Relevance';
  /* Sort criterion: Indexed Primo search result: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'search_api_index_eige_primo_index';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
  /* Sort criterion: Indexed Primo search result: Creation date */
  $handler->display->display_options['sorts']['cdate']['id'] = 'cdate';
  $handler->display->display_options['sorts']['cdate']['table'] = 'search_api_index_eige_primo_index';
  $handler->display->display_options['sorts']['cdate']['field'] = 'cdate';
  $handler->display->display_options['sorts']['cdate']['order'] = 'DESC';
  $handler->display->display_options['sorts']['cdate']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['cdate']['expose']['label'] = 'Date';
  /* Sort criterion: Indexed Primo search result: Creator */
  $handler->display->display_options['sorts']['creator']['id'] = 'creator';
  $handler->display->display_options['sorts']['creator']['table'] = 'search_api_index_eige_primo_index';
  $handler->display->display_options['sorts']['creator']['field'] = 'creator';
  $handler->display->display_options['sorts']['creator']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['creator']['expose']['label'] = 'Author';
  /* Sort criterion: Indexed Primo search result: Popularity */
  $handler->display->display_options['sorts']['popularity']['id'] = 'popularity';
  $handler->display->display_options['sorts']['popularity']['table'] = 'search_api_index_eige_primo_index';
  $handler->display->display_options['sorts']['popularity']['field'] = 'popularity';
  $handler->display->display_options['sorts']['popularity']['order'] = 'DESC';
  $handler->display->display_options['sorts']['popularity']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['popularity']['expose']['label'] = 'Popularity';
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_eige_primo_index';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 't';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['search_api_views_fulltext']['min_length'] = '2';

  /* Display: Context */
  $handler = $view->new_display('ctools_context', 'Context', 'ctools_context_1');
  $handler->display->display_options['style_plugin'] = 'ctools_context';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['inherit_panels_path'] = '1';
  $export['eige_primo_search'] = $view;

  $view = new view();
  $view->name = 'eige_solr_search_research';
  $view->description = 'Solr search for index: Research';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_eige_solr_index_research';
  $view->human_name = 'EIGE\'s research';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'EIGE\'s research context';
  $handler->display->display_options['css_class'] = 'view-with-enhanced-collapsible-filters';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['search_api_bypass_access'] = 0;
  $handler->display->display_options['query']['options']['entity_access'] = 0;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'search_api_views_fulltext' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 1;
  $handler->display->display_options['exposed_form']['options']['text_input_required'] = '';
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'full_html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<div class="view-results-count"><strong>@total</strong> results found</div>';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p><em>There are no results that match the selected criteria in EIGE\'s research</em></p>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Field: Indexed Content: Content type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'search_api_index_eige_solr_index_research';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['type']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['type']['format_name'] = 1;
  /* Field: Indexed Content: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'search_api_index_eige_solr_index_research';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Indexed Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'search_api_index_eige_solr_index_research';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title_field']['alter']['path'] = '[url]';
  $handler->display->display_options['fields']['title_field']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title_field']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title_field']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['title_field']['type'] = 'eige_text_trimmed_formatter';
  $handler->display->display_options['fields']['title_field']['settings'] = array(
    'trim_length' => '140',
    'wrap_in_paragraph' => 0,
    'add_ellipsis' => 1,
  );
  /* Field: Indexed Content: Display date */
  $handler->display->display_options['fields']['field_display_date']['id'] = 'field_display_date';
  $handler->display->display_options['fields']['field_display_date']['table'] = 'search_api_index_eige_solr_index_research';
  $handler->display->display_options['fields']['field_display_date']['field'] = 'field_display_date';
  $handler->display->display_options['fields']['field_display_date']['label'] = '';
  $handler->display->display_options['fields']['field_display_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_display_date']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_display_date']['settings'] = array(
    'format_type' => 'eige_short_m_d_y',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Indexed Content: Topic */
  $handler->display->display_options['fields']['field_topic']['id'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic']['table'] = 'search_api_index_eige_solr_index_research';
  $handler->display->display_options['fields']['field_topic']['field'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic']['label'] = '';
  $handler->display->display_options['fields']['field_topic']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_topic']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_topic']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_topic']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_topic']['bypass_access'] = 0;
  /* Field: Indexed Content: Keywords */
  $handler->display->display_options['fields']['field_keywords']['id'] = 'field_keywords';
  $handler->display->display_options['fields']['field_keywords']['table'] = 'search_api_index_eige_solr_index_research';
  $handler->display->display_options['fields']['field_keywords']['field'] = 'field_keywords';
  $handler->display->display_options['fields']['field_keywords']['label'] = '';
  $handler->display->display_options['fields']['field_keywords']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_keywords']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_keywords']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_keywords']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_keywords']['bypass_access'] = 0;
  /* Field: Search: Excerpt */
  $handler->display->display_options['fields']['search_api_excerpt']['id'] = 'search_api_excerpt';
  $handler->display->display_options['fields']['search_api_excerpt']['table'] = 'search_api_index_eige_solr_index_research';
  $handler->display->display_options['fields']['search_api_excerpt']['field'] = 'search_api_excerpt';
  $handler->display->display_options['fields']['search_api_excerpt']['label'] = '';
  $handler->display->display_options['fields']['search_api_excerpt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['search_api_excerpt']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['search_api_excerpt']['link_to_entity'] = 0;
  /* Sort criterion: Search: Relevance */
  $handler->display->display_options['sorts']['search_api_relevance']['id'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['table'] = 'search_api_index_eige_solr_index_research';
  $handler->display->display_options['sorts']['search_api_relevance']['field'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['order'] = 'DESC';
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_eige_solr_index_research';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 't';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['search_api_views_fulltext']['min_length'] = '2';

  /* Display: Context */
  $handler = $view->new_display('ctools_context', 'Context', 'ctools_context_1');
  $handler->display->display_options['style_plugin'] = 'ctools_context';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['inherit_panels_path'] = '1';
  $handler->display->display_options['argument_input'] = array(
    'search_api_views_fulltext' => array(
      'type' => 'none',
      'context' => 'entity:cer.cer_bidirectional',
      'context_optional' => 0,
    ),
  );
  $export['eige_solr_search_research'] = $view;

  $view = new view();
  $view->name = 'eige_solr_search_website';
  $view->description = 'Solr search for index: Website';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_eige_solr_index_website';
  $view->human_name = 'EIGE\'s website';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'EIGE\'s website context';
  $handler->display->display_options['css_class'] = 'view-with-enhanced-collapsible-filters';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['search_api_bypass_access'] = 0;
  $handler->display->display_options['query']['options']['entity_access'] = 0;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Clear All';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'search_api_views_fulltext' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 1;
  $handler->display->display_options['exposed_form']['options']['text_input_required'] = '';
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'full_html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<div class="view-results-count"><strong>@total</strong> results found</div>';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p><em>There are no results that match the selected criteria in EIGE\'s website</em></p>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Field: Indexed Content: Content type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'search_api_index_eige_solr_index_website';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['type']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['type']['format_name'] = 1;
  /* Field: Indexed Content: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'search_api_index_eige_solr_index_website';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Indexed Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'search_api_index_eige_solr_index_website';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title_field']['alter']['path'] = '[url]';
  $handler->display->display_options['fields']['title_field']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title_field']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['title_field']['type'] = 'eige_text_trimmed_formatter';
  $handler->display->display_options['fields']['title_field']['settings'] = array(
    'trim_length' => '140',
    'wrap_in_paragraph' => 0,
    'add_ellipsis' => 1,
  );
  /* Field: Indexed Content: Display date */
  $handler->display->display_options['fields']['field_display_date']['id'] = 'field_display_date';
  $handler->display->display_options['fields']['field_display_date']['table'] = 'search_api_index_eige_solr_index_website';
  $handler->display->display_options['fields']['field_display_date']['field'] = 'field_display_date';
  $handler->display->display_options['fields']['field_display_date']['label'] = '';
  $handler->display->display_options['fields']['field_display_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_display_date']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_display_date']['settings'] = array(
    'format_type' => 'eige_short_m_d_y',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Indexed Content: Keywords */
  $handler->display->display_options['fields']['field_keywords']['id'] = 'field_keywords';
  $handler->display->display_options['fields']['field_keywords']['table'] = 'search_api_index_eige_solr_index_website';
  $handler->display->display_options['fields']['field_keywords']['field'] = 'field_keywords';
  $handler->display->display_options['fields']['field_keywords']['label'] = '';
  $handler->display->display_options['fields']['field_keywords']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_keywords']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_keywords']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_keywords']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_keywords']['bypass_access'] = 0;
  /* Field: Search: Excerpt */
  $handler->display->display_options['fields']['search_api_excerpt']['id'] = 'search_api_excerpt';
  $handler->display->display_options['fields']['search_api_excerpt']['table'] = 'search_api_index_eige_solr_index_website';
  $handler->display->display_options['fields']['search_api_excerpt']['field'] = 'search_api_excerpt';
  $handler->display->display_options['fields']['search_api_excerpt']['label'] = '';
  $handler->display->display_options['fields']['search_api_excerpt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['search_api_excerpt']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['search_api_excerpt']['link_to_entity'] = 0;
  /* Sort criterion: Search: Relevance */
  $handler->display->display_options['sorts']['search_api_relevance']['id'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['table'] = 'search_api_index_eige_solr_index_website';
  $handler->display->display_options['sorts']['search_api_relevance']['field'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['order'] = 'DESC';
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_eige_solr_index_website';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 't';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );

  /* Display: Context */
  $handler = $view->new_display('ctools_context', 'Context', 'ctools_context_1');
  $handler->display->display_options['display_description'] = 'EIGE\'s website search view context display';
  $handler->display->display_options['style_plugin'] = 'ctools_context';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['inherit_panels_path'] = '1';
  $export['eige_solr_search_website'] = $view;

  return $export;
}

<?php
/**
 * @file
 * eige_business.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function eige_business_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'procurement';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Procurement';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Closed procedures';
  $handler->display->display_options['css_class'] = 'view-with-enhanced-collapsible-filters';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Clear All';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'field_procurement_type_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => 'Select type',
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
    'field_closing_date_value_1' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => 'Select year',
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
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'full_html';
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['more_button_text'] = 'Load more procedures';
  $handler->display->display_options['pager']['options']['advance']['content_class'] = '.view-content:eq(0)';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'grouped-items-list';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Open Procedures';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<h2>Open Procedures</h2>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = 'Closed procedures link';
  $handler->display->display_options['footer']['area']['empty'] = TRUE;
  $handler->display->display_options['footer']['area']['content'] = '<div class="link-to-other"><a href="/about-eige/procurement/closed-procedures">View closed procedures</a></div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No open procedures';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are currently no open procedures';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: Content: Type (field_procurement_type) */
  $handler->display->display_options['relationships']['field_procurement_type_tid']['id'] = 'field_procurement_type_tid';
  $handler->display->display_options['relationships']['field_procurement_type_tid']['table'] = 'field_data_field_procurement_type';
  $handler->display->display_options['relationships']['field_procurement_type_tid']['field'] = 'field_procurement_type_tid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Ref. number */
  $handler->display->display_options['fields']['field_ref_number']['id'] = 'field_ref_number';
  $handler->display->display_options['fields']['field_ref_number']['table'] = 'field_data_field_ref_number';
  $handler->display->display_options['fields']['field_ref_number']['field'] = 'field_ref_number';
  /* Field: Content: Closing date */
  $handler->display->display_options['fields']['field_closing_date']['id'] = 'field_closing_date';
  $handler->display->display_options['fields']['field_closing_date']['table'] = 'field_data_field_closing_date';
  $handler->display->display_options['fields']['field_closing_date']['field'] = 'field_closing_date';
  $handler->display->display_options['fields']['field_closing_date']['settings'] = array(
    'format_type' => 'eige_short_m_d_y',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_procurement_type']['id'] = 'field_procurement_type';
  $handler->display->display_options['fields']['field_procurement_type']['table'] = 'field_data_field_procurement_type';
  $handler->display->display_options['fields']['field_procurement_type']['field'] = 'field_procurement_type';
  $handler->display->display_options['fields']['field_procurement_type']['label'] = '';
  $handler->display->display_options['fields']['field_procurement_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_procurement_type']['empty'] = 'No results';
  $handler->display->display_options['fields']['field_procurement_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'field_procurement_type_tid';
  /* Sort criterion: Content: Closing date (field_closing_date) */
  $handler->display->display_options['sorts']['field_closing_date_value']['id'] = 'field_closing_date_value';
  $handler->display->display_options['sorts']['field_closing_date_value']['table'] = 'field_data_field_closing_date';
  $handler->display->display_options['sorts']['field_closing_date_value']['field'] = 'field_closing_date_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'procurement' => 'procurement',
  );
  /* Filter criterion: Open (closing date future) */
  $handler->display->display_options['filters']['field_closing_date_value']['id'] = 'field_closing_date_value';
  $handler->display->display_options['filters']['field_closing_date_value']['table'] = 'field_data_field_closing_date';
  $handler->display->display_options['filters']['field_closing_date_value']['field'] = 'field_closing_date_value';
  $handler->display->display_options['filters']['field_closing_date_value']['ui_name'] = 'Open (closing date future)';
  $handler->display->display_options['filters']['field_closing_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_closing_date_value']['default_date'] = 'now';

  /* Display: Open procedures */
  $handler = $view->new_display('page', 'Open procedures', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Procurement';
  $handler->display->display_options['path'] = 'about-eige/procurement';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Closed procedures */
  $handler = $view->new_display('page', 'Closed procedures', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Closed Procedures';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Clear All';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'field_procurement_type_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
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
    'field_closing_date_value_1' => array(
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
    'populate' => array(
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
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'full_html';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<div class="view-results-count"><strong>@total</strong> Closed procedures found</div>';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = 'Open procedures link';
  $handler->display->display_options['footer']['area']['empty'] = TRUE;
  $handler->display->display_options['footer']['area']['content'] = '<div class="link-to-other"><a href="/about-eige/procurement">View open procedures</a></div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No closed procedures';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are currently no closed procedures';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Closing date (field_closing_date) */
  $handler->display->display_options['sorts']['field_closing_date_value']['id'] = 'field_closing_date_value';
  $handler->display->display_options['sorts']['field_closing_date_value']['table'] = 'field_data_field_closing_date';
  $handler->display->display_options['sorts']['field_closing_date_value']['field'] = 'field_closing_date_value';
  $handler->display->display_options['sorts']['field_closing_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'procurement' => 'procurement',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Closed (closing date past) */
  $handler->display->display_options['filters']['field_closing_date_value']['id'] = 'field_closing_date_value';
  $handler->display->display_options['filters']['field_closing_date_value']['table'] = 'field_data_field_closing_date';
  $handler->display->display_options['filters']['field_closing_date_value']['field'] = 'field_closing_date_value';
  $handler->display->display_options['filters']['field_closing_date_value']['ui_name'] = 'Closed (closing date past)';
  $handler->display->display_options['filters']['field_closing_date_value']['operator'] = '<';
  $handler->display->display_options['filters']['field_closing_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_closing_date_value']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_closing_date_value']['year_range'] = '-7:+3';
  /* Filter criterion: Procurement type */
  $handler->display->display_options['filters']['field_procurement_type_tid']['id'] = 'field_procurement_type_tid';
  $handler->display->display_options['filters']['field_procurement_type_tid']['table'] = 'field_data_field_procurement_type';
  $handler->display->display_options['filters']['field_procurement_type_tid']['field'] = 'field_procurement_type_tid';
  $handler->display->display_options['filters']['field_procurement_type_tid']['ui_name'] = 'Procurement type';
  $handler->display->display_options['filters']['field_procurement_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_procurement_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_procurement_type_tid']['expose']['operator_id'] = 'field_procurement_type_tid_op';
  $handler->display->display_options['filters']['field_procurement_type_tid']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_procurement_type_tid']['expose']['operator'] = 'field_procurement_type_tid_op';
  $handler->display->display_options['filters']['field_procurement_type_tid']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['field_procurement_type_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_procurement_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_procurement_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_procurement_type_tid']['vocabulary'] = 'procurement_types';
  $handler->display->display_options['filters']['field_procurement_type_tid']['error_message'] = FALSE;
  /* Filter criterion: Year */
  $handler->display->display_options['filters']['field_closing_date_value_1']['id'] = 'field_closing_date_value_1';
  $handler->display->display_options['filters']['field_closing_date_value_1']['table'] = 'field_data_field_closing_date';
  $handler->display->display_options['filters']['field_closing_date_value_1']['field'] = 'field_closing_date_value';
  $handler->display->display_options['filters']['field_closing_date_value_1']['ui_name'] = 'Year';
  $handler->display->display_options['filters']['field_closing_date_value_1']['group'] = 1;
  $handler->display->display_options['filters']['field_closing_date_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_closing_date_value_1']['expose']['operator_id'] = 'field_closing_date_value_1_op';
  $handler->display->display_options['filters']['field_closing_date_value_1']['expose']['label'] = 'Year';
  $handler->display->display_options['filters']['field_closing_date_value_1']['expose']['operator'] = 'field_closing_date_value_1_op';
  $handler->display->display_options['filters']['field_closing_date_value_1']['expose']['identifier'] = 'year';
  $handler->display->display_options['filters']['field_closing_date_value_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_closing_date_value_1']['granularity'] = 'year';
  $handler->display->display_options['filters']['field_closing_date_value_1']['year_range'] = '-5:+0';
  /* Filter criterion: Global: Populate filters */
  $handler->display->display_options['filters']['populate']['id'] = 'populate';
  $handler->display->display_options['filters']['populate']['table'] = 'views_filters_populate';
  $handler->display->display_options['filters']['populate']['field'] = 'populate';
  $handler->display->display_options['filters']['populate']['group'] = 1;
  $handler->display->display_options['filters']['populate']['exposed'] = TRUE;
  $handler->display->display_options['filters']['populate']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['populate']['expose']['label'] = 'Search Closed procedures';
  $handler->display->display_options['filters']['populate']['expose']['operator'] = 'populate_op';
  $handler->display->display_options['filters']['populate']['expose']['identifier'] = 't';
  $handler->display->display_options['filters']['populate']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['populate']['filters'] = array(
    'body_value' => 'body_value',
    'title' => 'title',
    'status' => 0,
    'type' => 0,
    'field_closing_date_value' => 0,
    'field_procurement_type_tid' => 0,
    'field_closing_date_value_1' => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'allwords';
  $handler->display->display_options['filters']['title']['group'] = 2;
  /* Filter criterion: Content: Body (body) */
  $handler->display->display_options['filters']['body_value']['id'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['table'] = 'field_data_body';
  $handler->display->display_options['filters']['body_value']['field'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['operator'] = 'allwords';
  $handler->display->display_options['filters']['body_value']['group'] = 2;
  $handler->display->display_options['path'] = 'about-eige/procurement/closed-procedures';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: CSV data export */
  $handler = $view->new_display('views_data_export', 'CSV data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['attach_text'] = 'Export results as CSV';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%timestamp-yyyy-%timestamp-mm-%timestamp-dd-%view.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 1;
  $handler->display->display_options['style_options']['quote'] = '1';
  $handler->display->display_options['style_options']['trim'] = 1;
  $handler->display->display_options['style_options']['replace_newlines'] = 1;
  $handler->display->display_options['style_options']['newline_replacement'] = ' ';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 1;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['title_field']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title_field']['type'] = 'text_plain';
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: Content: Document type */
  $handler->display->display_options['fields']['field_document_type']['id'] = 'field_document_type';
  $handler->display->display_options['fields']['field_document_type']['table'] = 'field_data_field_document_type';
  $handler->display->display_options['fields']['field_document_type']['field'] = 'field_document_type';
  $handler->display->display_options['fields']['field_document_type']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_document_type']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_document_type']['type'] = 'ds_taxonomy_separator_localized';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_procurement_type']['id'] = 'field_procurement_type';
  $handler->display->display_options['fields']['field_procurement_type']['table'] = 'field_data_field_procurement_type';
  $handler->display->display_options['fields']['field_procurement_type']['field'] = 'field_procurement_type';
  $handler->display->display_options['fields']['field_procurement_type']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_procurement_type']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_procurement_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_procurement_type']['empty'] = 'No results';
  $handler->display->display_options['fields']['field_procurement_type']['type'] = 'ds_taxonomy_separator_localized';
  /* Field: Content: Closing date */
  $handler->display->display_options['fields']['field_closing_date']['id'] = 'field_closing_date';
  $handler->display->display_options['fields']['field_closing_date']['table'] = 'field_data_field_closing_date';
  $handler->display->display_options['fields']['field_closing_date']['field'] = 'field_closing_date';
  $handler->display->display_options['fields']['field_closing_date']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_closing_date']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_closing_date']['settings'] = array(
    'format_type' => 'eige_short_m_d_y',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Published date */
  $handler->display->display_options['fields']['field_publication_date']['id'] = 'field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['table'] = 'field_data_field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['field'] = 'field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_publication_date']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_publication_date']['settings'] = array(
    'format_type' => 'eige_short_m_d_y',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Ref. number */
  $handler->display->display_options['fields']['field_ref_number']['id'] = 'field_ref_number';
  $handler->display->display_options['fields']['field_ref_number']['table'] = 'field_data_field_ref_number';
  $handler->display->display_options['fields']['field_ref_number']['field'] = 'field_ref_number';
  $handler->display->display_options['fields']['field_ref_number']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_ref_number']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_ref_number']['type'] = 'text_plain';
  /* Field: Content: Areas */
  $handler->display->display_options['fields']['field_activities']['id'] = 'field_activities';
  $handler->display->display_options['fields']['field_activities']['table'] = 'field_data_field_activities';
  $handler->display->display_options['fields']['field_activities']['field'] = 'field_activities';
  $handler->display->display_options['fields']['field_activities']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_activities']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_activities']['type'] = 'ds_taxonomy_separator_localized';
  $handler->display->display_options['fields']['field_activities']['delta_offset'] = '0';
  /* Field: Content: Keywords */
  $handler->display->display_options['fields']['field_keywords']['id'] = 'field_keywords';
  $handler->display->display_options['fields']['field_keywords']['table'] = 'field_data_field_keywords';
  $handler->display->display_options['fields']['field_keywords']['field'] = 'field_keywords';
  $handler->display->display_options['fields']['field_keywords']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_keywords']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_keywords']['type'] = 'ds_taxonomy_separator_localized';
  $handler->display->display_options['fields']['field_keywords']['delta_offset'] = '0';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = TRUE;
  /* Field: Content: Download(s) */
  $handler->display->display_options['fields']['field_downloads']['id'] = 'field_downloads';
  $handler->display->display_options['fields']['field_downloads']['table'] = 'field_data_field_downloads';
  $handler->display->display_options['fields']['field_downloads']['field'] = 'field_downloads';
  $handler->display->display_options['fields']['field_downloads']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_downloads']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_downloads']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_downloads']['settings'] = array(
    'view_mode' => 'token',
  );
  $handler->display->display_options['fields']['field_downloads']['delta_offset'] = '0';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  $handler->display->display_options['path'] = 'about-eige/procurement/csv';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
    'page_1' => 0,
  );

  /* Display: XML data export */
  $handler = $view->new_display('views_data_export', 'XML data export', 'views_data_export_2');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  $handler->display->display_options['style_options']['attach_text'] = 'Export results as XML';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%timestamp-yyyy-%timestamp-mm-%timestamp-dd-%view.xml';
  $handler->display->display_options['style_options']['parent_sort'] = 1;
  $handler->display->display_options['style_options']['transform'] = 1;
  $handler->display->display_options['style_options']['root_node'] = 'nodes';
  $handler->display->display_options['style_options']['item_node'] = 'node';
  $handler->display->display_options['style_options']['no_entity_encode'] = array(
    'body' => 'body',
  );
  $handler->display->display_options['style_options']['cdata_wrapper'] = array(
    'title_field' => 'title_field',
    'field_ref_number' => 'field_ref_number',
    'field_activities' => 'field_activities',
    'field_keywords' => 'field_keywords',
    'body' => 'body',
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['title_field']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title_field']['type'] = 'text_plain';
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: Content: Document type */
  $handler->display->display_options['fields']['field_document_type']['id'] = 'field_document_type';
  $handler->display->display_options['fields']['field_document_type']['table'] = 'field_data_field_document_type';
  $handler->display->display_options['fields']['field_document_type']['field'] = 'field_document_type';
  $handler->display->display_options['fields']['field_document_type']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_document_type']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_document_type']['type'] = 'ds_taxonomy_separator_localized';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_procurement_type']['id'] = 'field_procurement_type';
  $handler->display->display_options['fields']['field_procurement_type']['table'] = 'field_data_field_procurement_type';
  $handler->display->display_options['fields']['field_procurement_type']['field'] = 'field_procurement_type';
  $handler->display->display_options['fields']['field_procurement_type']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_procurement_type']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_procurement_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_procurement_type']['empty'] = 'No results';
  $handler->display->display_options['fields']['field_procurement_type']['type'] = 'ds_taxonomy_separator_localized';
  /* Field: Content: Closing date */
  $handler->display->display_options['fields']['field_closing_date']['id'] = 'field_closing_date';
  $handler->display->display_options['fields']['field_closing_date']['table'] = 'field_data_field_closing_date';
  $handler->display->display_options['fields']['field_closing_date']['field'] = 'field_closing_date';
  $handler->display->display_options['fields']['field_closing_date']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_closing_date']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_closing_date']['settings'] = array(
    'format_type' => 'eige_short_m_d_y',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Published date */
  $handler->display->display_options['fields']['field_publication_date']['id'] = 'field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['table'] = 'field_data_field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['field'] = 'field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_publication_date']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_publication_date']['settings'] = array(
    'format_type' => 'eige_short_m_d_y',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Ref. number */
  $handler->display->display_options['fields']['field_ref_number']['id'] = 'field_ref_number';
  $handler->display->display_options['fields']['field_ref_number']['table'] = 'field_data_field_ref_number';
  $handler->display->display_options['fields']['field_ref_number']['field'] = 'field_ref_number';
  $handler->display->display_options['fields']['field_ref_number']['label'] = 'Ref number';
  $handler->display->display_options['fields']['field_ref_number']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_ref_number']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_ref_number']['type'] = 'text_plain';
  /* Field: Content: Areas */
  $handler->display->display_options['fields']['field_activities']['id'] = 'field_activities';
  $handler->display->display_options['fields']['field_activities']['table'] = 'field_data_field_activities';
  $handler->display->display_options['fields']['field_activities']['field'] = 'field_activities';
  $handler->display->display_options['fields']['field_activities']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_activities']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_activities']['type'] = 'ds_taxonomy_separator_localized';
  $handler->display->display_options['fields']['field_activities']['delta_offset'] = '0';
  /* Field: Content: Keywords */
  $handler->display->display_options['fields']['field_keywords']['id'] = 'field_keywords';
  $handler->display->display_options['fields']['field_keywords']['table'] = 'field_data_field_keywords';
  $handler->display->display_options['fields']['field_keywords']['field'] = 'field_keywords';
  $handler->display->display_options['fields']['field_keywords']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_keywords']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_keywords']['type'] = 'ds_taxonomy_separator_localized';
  $handler->display->display_options['fields']['field_keywords']['delta_offset'] = '0';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = TRUE;
  /* Field: Content: Download(s) */
  $handler->display->display_options['fields']['field_downloads']['id'] = 'field_downloads';
  $handler->display->display_options['fields']['field_downloads']['table'] = 'field_data_field_downloads';
  $handler->display->display_options['fields']['field_downloads']['field'] = 'field_downloads';
  $handler->display->display_options['fields']['field_downloads']['label'] = 'Downloads';
  $handler->display->display_options['fields']['field_downloads']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_downloads']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_downloads']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_downloads']['settings'] = array(
    'view_mode' => 'token',
  );
  $handler->display->display_options['fields']['field_downloads']['delta_offset'] = '0';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  $handler->display->display_options['path'] = 'about-eige/procurement/xml';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
    'page_1' => 0,
  );

  /* Display: CSV data export (closed) */
  $handler = $view->new_display('views_data_export', 'CSV data export (closed)', 'views_data_export_3');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['attach_text'] = 'Export results as CSV';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%timestamp-yyyy-%timestamp-mm-%timestamp-dd-%view.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 1;
  $handler->display->display_options['style_options']['quote'] = '1';
  $handler->display->display_options['style_options']['trim'] = 1;
  $handler->display->display_options['style_options']['replace_newlines'] = 1;
  $handler->display->display_options['style_options']['newline_replacement'] = ' ';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 1;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['title_field']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title_field']['type'] = 'text_plain';
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: Content: Document type */
  $handler->display->display_options['fields']['field_document_type']['id'] = 'field_document_type';
  $handler->display->display_options['fields']['field_document_type']['table'] = 'field_data_field_document_type';
  $handler->display->display_options['fields']['field_document_type']['field'] = 'field_document_type';
  $handler->display->display_options['fields']['field_document_type']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_document_type']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_document_type']['type'] = 'ds_taxonomy_separator_localized';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_procurement_type']['id'] = 'field_procurement_type';
  $handler->display->display_options['fields']['field_procurement_type']['table'] = 'field_data_field_procurement_type';
  $handler->display->display_options['fields']['field_procurement_type']['field'] = 'field_procurement_type';
  $handler->display->display_options['fields']['field_procurement_type']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_procurement_type']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_procurement_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_procurement_type']['empty'] = 'No results';
  $handler->display->display_options['fields']['field_procurement_type']['type'] = 'ds_taxonomy_separator_localized';
  /* Field: Content: Closing date */
  $handler->display->display_options['fields']['field_closing_date']['id'] = 'field_closing_date';
  $handler->display->display_options['fields']['field_closing_date']['table'] = 'field_data_field_closing_date';
  $handler->display->display_options['fields']['field_closing_date']['field'] = 'field_closing_date';
  $handler->display->display_options['fields']['field_closing_date']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_closing_date']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_closing_date']['settings'] = array(
    'format_type' => 'eige_short_m_d_y',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Published date */
  $handler->display->display_options['fields']['field_publication_date']['id'] = 'field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['table'] = 'field_data_field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['field'] = 'field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_publication_date']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_publication_date']['settings'] = array(
    'format_type' => 'eige_short_m_d_y',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Ref. number */
  $handler->display->display_options['fields']['field_ref_number']['id'] = 'field_ref_number';
  $handler->display->display_options['fields']['field_ref_number']['table'] = 'field_data_field_ref_number';
  $handler->display->display_options['fields']['field_ref_number']['field'] = 'field_ref_number';
  $handler->display->display_options['fields']['field_ref_number']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_ref_number']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_ref_number']['type'] = 'text_plain';
  /* Field: Content: Areas */
  $handler->display->display_options['fields']['field_activities']['id'] = 'field_activities';
  $handler->display->display_options['fields']['field_activities']['table'] = 'field_data_field_activities';
  $handler->display->display_options['fields']['field_activities']['field'] = 'field_activities';
  $handler->display->display_options['fields']['field_activities']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_activities']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_activities']['type'] = 'ds_taxonomy_separator_localized';
  $handler->display->display_options['fields']['field_activities']['delta_offset'] = '0';
  /* Field: Content: Keywords */
  $handler->display->display_options['fields']['field_keywords']['id'] = 'field_keywords';
  $handler->display->display_options['fields']['field_keywords']['table'] = 'field_data_field_keywords';
  $handler->display->display_options['fields']['field_keywords']['field'] = 'field_keywords';
  $handler->display->display_options['fields']['field_keywords']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_keywords']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_keywords']['type'] = 'ds_taxonomy_separator_localized';
  $handler->display->display_options['fields']['field_keywords']['delta_offset'] = '0';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = TRUE;
  /* Field: Content: Download(s) */
  $handler->display->display_options['fields']['field_downloads']['id'] = 'field_downloads';
  $handler->display->display_options['fields']['field_downloads']['table'] = 'field_data_field_downloads';
  $handler->display->display_options['fields']['field_downloads']['field'] = 'field_downloads';
  $handler->display->display_options['fields']['field_downloads']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_downloads']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_downloads']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_downloads']['settings'] = array(
    'view_mode' => 'token',
  );
  $handler->display->display_options['fields']['field_downloads']['delta_offset'] = '0';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'procurement' => 'procurement',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Closed (closing date past) */
  $handler->display->display_options['filters']['field_closing_date_value']['id'] = 'field_closing_date_value';
  $handler->display->display_options['filters']['field_closing_date_value']['table'] = 'field_data_field_closing_date';
  $handler->display->display_options['filters']['field_closing_date_value']['field'] = 'field_closing_date_value';
  $handler->display->display_options['filters']['field_closing_date_value']['ui_name'] = 'Closed (closing date past)';
  $handler->display->display_options['filters']['field_closing_date_value']['operator'] = '<';
  $handler->display->display_options['filters']['field_closing_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_closing_date_value']['granularity'] = 'second';
  $handler->display->display_options['filters']['field_closing_date_value']['default_date'] = 'now';
  /* Filter criterion: Procurement type */
  $handler->display->display_options['filters']['field_procurement_type_tid']['id'] = 'field_procurement_type_tid';
  $handler->display->display_options['filters']['field_procurement_type_tid']['table'] = 'field_data_field_procurement_type';
  $handler->display->display_options['filters']['field_procurement_type_tid']['field'] = 'field_procurement_type_tid';
  $handler->display->display_options['filters']['field_procurement_type_tid']['ui_name'] = 'Procurement type';
  $handler->display->display_options['filters']['field_procurement_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_procurement_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_procurement_type_tid']['expose']['operator_id'] = 'field_procurement_type_tid_op';
  $handler->display->display_options['filters']['field_procurement_type_tid']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_procurement_type_tid']['expose']['operator'] = 'field_procurement_type_tid_op';
  $handler->display->display_options['filters']['field_procurement_type_tid']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['field_procurement_type_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_procurement_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_procurement_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_procurement_type_tid']['vocabulary'] = 'procurement_types';
  $handler->display->display_options['filters']['field_procurement_type_tid']['error_message'] = FALSE;
  /* Filter criterion: Year */
  $handler->display->display_options['filters']['field_closing_date_value_1']['id'] = 'field_closing_date_value_1';
  $handler->display->display_options['filters']['field_closing_date_value_1']['table'] = 'field_data_field_closing_date';
  $handler->display->display_options['filters']['field_closing_date_value_1']['field'] = 'field_closing_date_value';
  $handler->display->display_options['filters']['field_closing_date_value_1']['ui_name'] = 'Year';
  $handler->display->display_options['filters']['field_closing_date_value_1']['group'] = 1;
  $handler->display->display_options['filters']['field_closing_date_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_closing_date_value_1']['expose']['operator_id'] = 'field_closing_date_value_1_op';
  $handler->display->display_options['filters']['field_closing_date_value_1']['expose']['label'] = 'Year';
  $handler->display->display_options['filters']['field_closing_date_value_1']['expose']['operator'] = 'field_closing_date_value_1_op';
  $handler->display->display_options['filters']['field_closing_date_value_1']['expose']['identifier'] = 'year';
  $handler->display->display_options['filters']['field_closing_date_value_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_closing_date_value_1']['granularity'] = 'year';
  $handler->display->display_options['filters']['field_closing_date_value_1']['year_range'] = '-5:+0';
  /* Filter criterion: Global: Populate filters */
  $handler->display->display_options['filters']['populate']['id'] = 'populate';
  $handler->display->display_options['filters']['populate']['table'] = 'views_filters_populate';
  $handler->display->display_options['filters']['populate']['field'] = 'populate';
  $handler->display->display_options['filters']['populate']['group'] = 1;
  $handler->display->display_options['filters']['populate']['exposed'] = TRUE;
  $handler->display->display_options['filters']['populate']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['populate']['expose']['label'] = 'Search Closed procedures';
  $handler->display->display_options['filters']['populate']['expose']['operator'] = 'populate_op';
  $handler->display->display_options['filters']['populate']['expose']['identifier'] = 't';
  $handler->display->display_options['filters']['populate']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['populate']['filters'] = array(
    'body_value' => 'body_value',
    'title' => 'title',
    'status' => 0,
    'type' => 0,
    'field_closing_date_value' => 0,
    'field_procurement_type_tid' => 0,
    'field_closing_date_value_1' => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'allwords';
  $handler->display->display_options['filters']['title']['group'] = 2;
  /* Filter criterion: Content: Body (body) */
  $handler->display->display_options['filters']['body_value']['id'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['table'] = 'field_data_body';
  $handler->display->display_options['filters']['body_value']['field'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['operator'] = 'allwords';
  $handler->display->display_options['filters']['body_value']['group'] = 2;
  $handler->display->display_options['path'] = 'about-eige/procurement/closed-procedures/csv';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
    'page' => 0,
  );

  /* Display: XML data export (closed) */
  $handler = $view->new_display('views_data_export', 'XML data export (closed)', 'views_data_export_4');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  $handler->display->display_options['style_options']['attach_text'] = 'Export results as XML';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%timestamp-yyyy-%timestamp-mm-%timestamp-dd-%view.xml';
  $handler->display->display_options['style_options']['parent_sort'] = 1;
  $handler->display->display_options['style_options']['transform'] = 1;
  $handler->display->display_options['style_options']['root_node'] = 'nodes';
  $handler->display->display_options['style_options']['item_node'] = 'node';
  $handler->display->display_options['style_options']['no_entity_encode'] = array(
    'body' => 'body',
  );
  $handler->display->display_options['style_options']['cdata_wrapper'] = array(
    'title_field' => 'title_field',
    'field_ref_number' => 'field_ref_number',
    'field_activities' => 'field_activities',
    'field_keywords' => 'field_keywords',
    'body' => 'body',
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['title_field']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title_field']['type'] = 'text_plain';
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: Content: Document type */
  $handler->display->display_options['fields']['field_document_type']['id'] = 'field_document_type';
  $handler->display->display_options['fields']['field_document_type']['table'] = 'field_data_field_document_type';
  $handler->display->display_options['fields']['field_document_type']['field'] = 'field_document_type';
  $handler->display->display_options['fields']['field_document_type']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_document_type']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_document_type']['type'] = 'ds_taxonomy_separator_localized';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_procurement_type']['id'] = 'field_procurement_type';
  $handler->display->display_options['fields']['field_procurement_type']['table'] = 'field_data_field_procurement_type';
  $handler->display->display_options['fields']['field_procurement_type']['field'] = 'field_procurement_type';
  $handler->display->display_options['fields']['field_procurement_type']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_procurement_type']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_procurement_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_procurement_type']['empty'] = 'No results';
  $handler->display->display_options['fields']['field_procurement_type']['type'] = 'ds_taxonomy_separator_localized';
  /* Field: Content: Closing date */
  $handler->display->display_options['fields']['field_closing_date']['id'] = 'field_closing_date';
  $handler->display->display_options['fields']['field_closing_date']['table'] = 'field_data_field_closing_date';
  $handler->display->display_options['fields']['field_closing_date']['field'] = 'field_closing_date';
  $handler->display->display_options['fields']['field_closing_date']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_closing_date']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_closing_date']['settings'] = array(
    'format_type' => 'eige_short_m_d_y',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Published date */
  $handler->display->display_options['fields']['field_publication_date']['id'] = 'field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['table'] = 'field_data_field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['field'] = 'field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_publication_date']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_publication_date']['settings'] = array(
    'format_type' => 'eige_short_m_d_y',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Ref. number */
  $handler->display->display_options['fields']['field_ref_number']['id'] = 'field_ref_number';
  $handler->display->display_options['fields']['field_ref_number']['table'] = 'field_data_field_ref_number';
  $handler->display->display_options['fields']['field_ref_number']['field'] = 'field_ref_number';
  $handler->display->display_options['fields']['field_ref_number']['label'] = 'Ref number';
  $handler->display->display_options['fields']['field_ref_number']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_ref_number']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_ref_number']['type'] = 'text_plain';
  /* Field: Content: Areas */
  $handler->display->display_options['fields']['field_activities']['id'] = 'field_activities';
  $handler->display->display_options['fields']['field_activities']['table'] = 'field_data_field_activities';
  $handler->display->display_options['fields']['field_activities']['field'] = 'field_activities';
  $handler->display->display_options['fields']['field_activities']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_activities']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_activities']['type'] = 'ds_taxonomy_separator_localized';
  $handler->display->display_options['fields']['field_activities']['delta_offset'] = '0';
  /* Field: Content: Keywords */
  $handler->display->display_options['fields']['field_keywords']['id'] = 'field_keywords';
  $handler->display->display_options['fields']['field_keywords']['table'] = 'field_data_field_keywords';
  $handler->display->display_options['fields']['field_keywords']['field'] = 'field_keywords';
  $handler->display->display_options['fields']['field_keywords']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_keywords']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_keywords']['type'] = 'ds_taxonomy_separator_localized';
  $handler->display->display_options['fields']['field_keywords']['delta_offset'] = '0';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = TRUE;
  /* Field: Content: Download(s) */
  $handler->display->display_options['fields']['field_downloads']['id'] = 'field_downloads';
  $handler->display->display_options['fields']['field_downloads']['table'] = 'field_data_field_downloads';
  $handler->display->display_options['fields']['field_downloads']['field'] = 'field_downloads';
  $handler->display->display_options['fields']['field_downloads']['label'] = 'Downloads';
  $handler->display->display_options['fields']['field_downloads']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_downloads']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_downloads']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_downloads']['settings'] = array(
    'view_mode' => 'token',
  );
  $handler->display->display_options['fields']['field_downloads']['delta_offset'] = '0';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'procurement' => 'procurement',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Closed (closing date past) */
  $handler->display->display_options['filters']['field_closing_date_value']['id'] = 'field_closing_date_value';
  $handler->display->display_options['filters']['field_closing_date_value']['table'] = 'field_data_field_closing_date';
  $handler->display->display_options['filters']['field_closing_date_value']['field'] = 'field_closing_date_value';
  $handler->display->display_options['filters']['field_closing_date_value']['ui_name'] = 'Closed (closing date past)';
  $handler->display->display_options['filters']['field_closing_date_value']['operator'] = '<';
  $handler->display->display_options['filters']['field_closing_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_closing_date_value']['granularity'] = 'second';
  $handler->display->display_options['filters']['field_closing_date_value']['default_date'] = 'now';
  /* Filter criterion: Procurement type */
  $handler->display->display_options['filters']['field_procurement_type_tid']['id'] = 'field_procurement_type_tid';
  $handler->display->display_options['filters']['field_procurement_type_tid']['table'] = 'field_data_field_procurement_type';
  $handler->display->display_options['filters']['field_procurement_type_tid']['field'] = 'field_procurement_type_tid';
  $handler->display->display_options['filters']['field_procurement_type_tid']['ui_name'] = 'Procurement type';
  $handler->display->display_options['filters']['field_procurement_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_procurement_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_procurement_type_tid']['expose']['operator_id'] = 'field_procurement_type_tid_op';
  $handler->display->display_options['filters']['field_procurement_type_tid']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_procurement_type_tid']['expose']['operator'] = 'field_procurement_type_tid_op';
  $handler->display->display_options['filters']['field_procurement_type_tid']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['field_procurement_type_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_procurement_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_procurement_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_procurement_type_tid']['vocabulary'] = 'procurement_types';
  $handler->display->display_options['filters']['field_procurement_type_tid']['error_message'] = FALSE;
  /* Filter criterion: Year */
  $handler->display->display_options['filters']['field_closing_date_value_1']['id'] = 'field_closing_date_value_1';
  $handler->display->display_options['filters']['field_closing_date_value_1']['table'] = 'field_data_field_closing_date';
  $handler->display->display_options['filters']['field_closing_date_value_1']['field'] = 'field_closing_date_value';
  $handler->display->display_options['filters']['field_closing_date_value_1']['ui_name'] = 'Year';
  $handler->display->display_options['filters']['field_closing_date_value_1']['group'] = 1;
  $handler->display->display_options['filters']['field_closing_date_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_closing_date_value_1']['expose']['operator_id'] = 'field_closing_date_value_1_op';
  $handler->display->display_options['filters']['field_closing_date_value_1']['expose']['label'] = 'Year';
  $handler->display->display_options['filters']['field_closing_date_value_1']['expose']['operator'] = 'field_closing_date_value_1_op';
  $handler->display->display_options['filters']['field_closing_date_value_1']['expose']['identifier'] = 'year';
  $handler->display->display_options['filters']['field_closing_date_value_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_closing_date_value_1']['granularity'] = 'year';
  $handler->display->display_options['filters']['field_closing_date_value_1']['year_range'] = '-5:+0';
  /* Filter criterion: Global: Populate filters */
  $handler->display->display_options['filters']['populate']['id'] = 'populate';
  $handler->display->display_options['filters']['populate']['table'] = 'views_filters_populate';
  $handler->display->display_options['filters']['populate']['field'] = 'populate';
  $handler->display->display_options['filters']['populate']['group'] = 1;
  $handler->display->display_options['filters']['populate']['exposed'] = TRUE;
  $handler->display->display_options['filters']['populate']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['populate']['expose']['label'] = 'Search Closed procedures';
  $handler->display->display_options['filters']['populate']['expose']['operator'] = 'populate_op';
  $handler->display->display_options['filters']['populate']['expose']['identifier'] = 't';
  $handler->display->display_options['filters']['populate']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['populate']['filters'] = array(
    'body_value' => 'body_value',
    'title' => 'title',
    'status' => 0,
    'type' => 0,
    'field_closing_date_value' => 0,
    'field_procurement_type_tid' => 0,
    'field_closing_date_value_1' => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'allwords';
  $handler->display->display_options['filters']['title']['group'] = 2;
  /* Filter criterion: Content: Body (body) */
  $handler->display->display_options['filters']['body_value']['id'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['table'] = 'field_data_body';
  $handler->display->display_options['filters']['body_value']['field'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['operator'] = 'allwords';
  $handler->display->display_options['filters']['body_value']['group'] = 2;
  $handler->display->display_options['path'] = 'about-eige/procurement/closed-procedures/xml';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
    'page' => 0,
  );
  $export['procurement'] = $view;

  $view = new view();
  $view->name = 'recruitment';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Recruitment';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Recruitment';
  $handler->display->display_options['css_class'] = 'view-with-enhanced-collapsible-filters';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Clear All';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'field_procurement_type_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => 'Select type',
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
    'field_closing_date_value_1' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => 'Select year',
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
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'full_html';
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['more_button_text'] = 'Load more positions';
  $handler->display->display_options['pager']['options']['advance']['content_class'] = '.view-content:eq(0)';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'grouped-items-list';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Open Positions';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<h2>Open Positions</h2>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = 'Past positions link';
  $handler->display->display_options['footer']['area']['empty'] = TRUE;
  $handler->display->display_options['footer']['area']['content'] = '<div class="link-to-other"><a href="/about-eige/recruitment/past-positions">View past positions</a></div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No open positions';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are currently no open positions';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: Content: Type (field_procurement_type) */
  $handler->display->display_options['relationships']['field_procurement_type_tid']['id'] = 'field_procurement_type_tid';
  $handler->display->display_options['relationships']['field_procurement_type_tid']['table'] = 'field_data_field_procurement_type';
  $handler->display->display_options['relationships']['field_procurement_type_tid']['field'] = 'field_procurement_type_tid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Ref. number */
  $handler->display->display_options['fields']['field_ref_number']['id'] = 'field_ref_number';
  $handler->display->display_options['fields']['field_ref_number']['table'] = 'field_data_field_ref_number';
  $handler->display->display_options['fields']['field_ref_number']['field'] = 'field_ref_number';
  /* Field: Content: Closing date */
  $handler->display->display_options['fields']['field_closing_date']['id'] = 'field_closing_date';
  $handler->display->display_options['fields']['field_closing_date']['table'] = 'field_data_field_closing_date';
  $handler->display->display_options['fields']['field_closing_date']['field'] = 'field_closing_date';
  $handler->display->display_options['fields']['field_closing_date']['settings'] = array(
    'format_type' => 'eige_short_m_d_y',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_procurement_type']['id'] = 'field_procurement_type';
  $handler->display->display_options['fields']['field_procurement_type']['table'] = 'field_data_field_procurement_type';
  $handler->display->display_options['fields']['field_procurement_type']['field'] = 'field_procurement_type';
  $handler->display->display_options['fields']['field_procurement_type']['label'] = '';
  $handler->display->display_options['fields']['field_procurement_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_procurement_type']['empty'] = 'No results';
  $handler->display->display_options['fields']['field_procurement_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'field_procurement_type_tid';
  /* Sort criterion: Content: Closing date (field_closing_date) */
  $handler->display->display_options['sorts']['field_closing_date_value']['id'] = 'field_closing_date_value';
  $handler->display->display_options['sorts']['field_closing_date_value']['table'] = 'field_data_field_closing_date';
  $handler->display->display_options['sorts']['field_closing_date_value']['field'] = 'field_closing_date_value';
  $handler->display->display_options['sorts']['field_closing_date_value']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'career_opportunity' => 'career_opportunity',
  );
  /* Filter criterion: Open (closing date future) */
  $handler->display->display_options['filters']['field_closing_date_value']['id'] = 'field_closing_date_value';
  $handler->display->display_options['filters']['field_closing_date_value']['table'] = 'field_data_field_closing_date';
  $handler->display->display_options['filters']['field_closing_date_value']['field'] = 'field_closing_date_value';
  $handler->display->display_options['filters']['field_closing_date_value']['ui_name'] = 'Open (closing date future)';
  $handler->display->display_options['filters']['field_closing_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_closing_date_value']['default_date'] = 'now';

  /* Display: Open positions */
  $handler = $view->new_display('page', 'Open positions', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Recruitment';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Closing date (field_closing_date) */
  $handler->display->display_options['sorts']['field_closing_date_value']['id'] = 'field_closing_date_value';
  $handler->display->display_options['sorts']['field_closing_date_value']['table'] = 'field_data_field_closing_date';
  $handler->display->display_options['sorts']['field_closing_date_value']['field'] = 'field_closing_date_value';
  $handler->display->display_options['path'] = 'about-eige/recruitment';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Past positions */
  $handler = $view->new_display('page', 'Past positions', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Past Positions';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Clear All';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'field_career_opportunity_type_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
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
    'field_closing_date_value_1' => array(
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
    'populate' => array(
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
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'full_html';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<div class="view-results-count"><strong>@total</strong> Past positions found</div>';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = 'Open positions link';
  $handler->display->display_options['footer']['area']['empty'] = TRUE;
  $handler->display->display_options['footer']['area']['content'] = '<div class="link-to-other"><a href="/about-eige/recruitment">View open positions</a></div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No past positions';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are currently no past positions';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'career_opportunity' => 'career_opportunity',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Closed (closing date past) */
  $handler->display->display_options['filters']['field_closing_date_value']['id'] = 'field_closing_date_value';
  $handler->display->display_options['filters']['field_closing_date_value']['table'] = 'field_data_field_closing_date';
  $handler->display->display_options['filters']['field_closing_date_value']['field'] = 'field_closing_date_value';
  $handler->display->display_options['filters']['field_closing_date_value']['ui_name'] = 'Closed (closing date past)';
  $handler->display->display_options['filters']['field_closing_date_value']['operator'] = '<';
  $handler->display->display_options['filters']['field_closing_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_closing_date_value']['default_date'] = 'now';
  /* Filter criterion: Career opportunity type */
  $handler->display->display_options['filters']['field_career_opportunity_type_tid']['id'] = 'field_career_opportunity_type_tid';
  $handler->display->display_options['filters']['field_career_opportunity_type_tid']['table'] = 'field_data_field_career_opportunity_type';
  $handler->display->display_options['filters']['field_career_opportunity_type_tid']['field'] = 'field_career_opportunity_type_tid';
  $handler->display->display_options['filters']['field_career_opportunity_type_tid']['ui_name'] = 'Career opportunity type';
  $handler->display->display_options['filters']['field_career_opportunity_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_career_opportunity_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_career_opportunity_type_tid']['expose']['operator_id'] = 'field_career_opportunity_type_tid_op';
  $handler->display->display_options['filters']['field_career_opportunity_type_tid']['expose']['label'] = 'Type ';
  $handler->display->display_options['filters']['field_career_opportunity_type_tid']['expose']['operator'] = 'field_career_opportunity_type_tid_op';
  $handler->display->display_options['filters']['field_career_opportunity_type_tid']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['field_career_opportunity_type_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_career_opportunity_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_career_opportunity_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_career_opportunity_type_tid']['vocabulary'] = 'career_opportunity_types';
  $handler->display->display_options['filters']['field_career_opportunity_type_tid']['error_message'] = FALSE;
  /* Filter criterion: Year */
  $handler->display->display_options['filters']['field_closing_date_value_1']['id'] = 'field_closing_date_value_1';
  $handler->display->display_options['filters']['field_closing_date_value_1']['table'] = 'field_data_field_closing_date';
  $handler->display->display_options['filters']['field_closing_date_value_1']['field'] = 'field_closing_date_value';
  $handler->display->display_options['filters']['field_closing_date_value_1']['ui_name'] = 'Year';
  $handler->display->display_options['filters']['field_closing_date_value_1']['group'] = 1;
  $handler->display->display_options['filters']['field_closing_date_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_closing_date_value_1']['expose']['operator_id'] = 'field_closing_date_value_1_op';
  $handler->display->display_options['filters']['field_closing_date_value_1']['expose']['label'] = 'Year';
  $handler->display->display_options['filters']['field_closing_date_value_1']['expose']['operator'] = 'field_closing_date_value_1_op';
  $handler->display->display_options['filters']['field_closing_date_value_1']['expose']['identifier'] = 'year';
  $handler->display->display_options['filters']['field_closing_date_value_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_closing_date_value_1']['granularity'] = 'year';
  $handler->display->display_options['filters']['field_closing_date_value_1']['year_range'] = '-5:+0';
  /* Filter criterion: Global: Populate filters */
  $handler->display->display_options['filters']['populate']['id'] = 'populate';
  $handler->display->display_options['filters']['populate']['table'] = 'views_filters_populate';
  $handler->display->display_options['filters']['populate']['field'] = 'populate';
  $handler->display->display_options['filters']['populate']['group'] = 1;
  $handler->display->display_options['filters']['populate']['exposed'] = TRUE;
  $handler->display->display_options['filters']['populate']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['populate']['expose']['label'] = 'Search Past positions';
  $handler->display->display_options['filters']['populate']['expose']['operator'] = 'populate_op';
  $handler->display->display_options['filters']['populate']['expose']['identifier'] = 't';
  $handler->display->display_options['filters']['populate']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['populate']['filters'] = array(
    'body_value' => 'body_value',
    'title' => 'title',
    'status' => 0,
    'type' => 0,
    'field_closing_date_value' => 0,
    'field_career_opportunity_type_tid' => 0,
    'field_closing_date_value_1' => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'allwords';
  $handler->display->display_options['filters']['title']['group'] = 2;
  /* Filter criterion: Content: Body (body) */
  $handler->display->display_options['filters']['body_value']['id'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['table'] = 'field_data_body';
  $handler->display->display_options['filters']['body_value']['field'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['operator'] = 'allwords';
  $handler->display->display_options['filters']['body_value']['group'] = 2;
  $handler->display->display_options['path'] = 'about-eige/recruitment/past-positions';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: CSV data export */
  $handler = $view->new_display('views_data_export', 'CSV data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['attach_text'] = 'Export results as CSV';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%timestamp-yyyy-%timestamp-mm-%timestamp-dd-%view.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 1;
  $handler->display->display_options['style_options']['quote'] = '1';
  $handler->display->display_options['style_options']['trim'] = 1;
  $handler->display->display_options['style_options']['replace_newlines'] = 1;
  $handler->display->display_options['style_options']['newline_replacement'] = ' ';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 1;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['title_field']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title_field']['type'] = 'text_plain';
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: Content: Document type */
  $handler->display->display_options['fields']['field_document_type']['id'] = 'field_document_type';
  $handler->display->display_options['fields']['field_document_type']['table'] = 'field_data_field_document_type';
  $handler->display->display_options['fields']['field_document_type']['field'] = 'field_document_type';
  $handler->display->display_options['fields']['field_document_type']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_document_type']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_document_type']['type'] = 'ds_taxonomy_separator_localized';
  /* Field: Content: Career Opportunity Type */
  $handler->display->display_options['fields']['field_career_opportunity_type']['id'] = 'field_career_opportunity_type';
  $handler->display->display_options['fields']['field_career_opportunity_type']['table'] = 'field_data_field_career_opportunity_type';
  $handler->display->display_options['fields']['field_career_opportunity_type']['field'] = 'field_career_opportunity_type';
  $handler->display->display_options['fields']['field_career_opportunity_type']['label'] = 'Type';
  $handler->display->display_options['fields']['field_career_opportunity_type']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_career_opportunity_type']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_career_opportunity_type']['type'] = 'ds_taxonomy_separator_localized';
  /* Field: Content: Closing date */
  $handler->display->display_options['fields']['field_closing_date']['id'] = 'field_closing_date';
  $handler->display->display_options['fields']['field_closing_date']['table'] = 'field_data_field_closing_date';
  $handler->display->display_options['fields']['field_closing_date']['field'] = 'field_closing_date';
  $handler->display->display_options['fields']['field_closing_date']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_closing_date']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_closing_date']['settings'] = array(
    'format_type' => 'eige_short_m_d_y_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Published date */
  $handler->display->display_options['fields']['field_publication_date']['id'] = 'field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['table'] = 'field_data_field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['field'] = 'field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_publication_date']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_publication_date']['settings'] = array(
    'format_type' => 'eige_short_m_d_y_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Ref. number */
  $handler->display->display_options['fields']['field_ref_number']['id'] = 'field_ref_number';
  $handler->display->display_options['fields']['field_ref_number']['table'] = 'field_data_field_ref_number';
  $handler->display->display_options['fields']['field_ref_number']['field'] = 'field_ref_number';
  $handler->display->display_options['fields']['field_ref_number']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_ref_number']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_ref_number']['type'] = 'text_plain';
  /* Field: Content: Grade */
  $handler->display->display_options['fields']['field_grade']['id'] = 'field_grade';
  $handler->display->display_options['fields']['field_grade']['table'] = 'field_data_field_grade';
  $handler->display->display_options['fields']['field_grade']['field'] = 'field_grade';
  $handler->display->display_options['fields']['field_grade']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_grade']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_grade']['type'] = 'text_plain';
  /* Field: Content: Maximum n° on reserve list */
  $handler->display->display_options['fields']['field_maximum_n_on_reserve_list']['id'] = 'field_maximum_n_on_reserve_list';
  $handler->display->display_options['fields']['field_maximum_n_on_reserve_list']['table'] = 'field_data_field_maximum_n_on_reserve_list';
  $handler->display->display_options['fields']['field_maximum_n_on_reserve_list']['field'] = 'field_maximum_n_on_reserve_list';
  $handler->display->display_options['fields']['field_maximum_n_on_reserve_list']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_maximum_n_on_reserve_list']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_maximum_n_on_reserve_list']['type'] = 'text_plain';
  /* Field: Content: Areas */
  $handler->display->display_options['fields']['field_activities']['id'] = 'field_activities';
  $handler->display->display_options['fields']['field_activities']['table'] = 'field_data_field_activities';
  $handler->display->display_options['fields']['field_activities']['field'] = 'field_activities';
  $handler->display->display_options['fields']['field_activities']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_activities']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_activities']['type'] = 'ds_taxonomy_separator_localized';
  $handler->display->display_options['fields']['field_activities']['delta_offset'] = '0';
  /* Field: Content: Keywords */
  $handler->display->display_options['fields']['field_keywords']['id'] = 'field_keywords';
  $handler->display->display_options['fields']['field_keywords']['table'] = 'field_data_field_keywords';
  $handler->display->display_options['fields']['field_keywords']['field'] = 'field_keywords';
  $handler->display->display_options['fields']['field_keywords']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_keywords']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_keywords']['type'] = 'ds_taxonomy_separator_localized';
  $handler->display->display_options['fields']['field_keywords']['delta_offset'] = '0';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = TRUE;
  /* Field: Content: Download(s) */
  $handler->display->display_options['fields']['field_downloads']['id'] = 'field_downloads';
  $handler->display->display_options['fields']['field_downloads']['table'] = 'field_data_field_downloads';
  $handler->display->display_options['fields']['field_downloads']['field'] = 'field_downloads';
  $handler->display->display_options['fields']['field_downloads']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_downloads']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_downloads']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_downloads']['settings'] = array(
    'view_mode' => 'token',
  );
  $handler->display->display_options['fields']['field_downloads']['delta_offset'] = '0';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'career_opportunity' => 'career_opportunity',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Open (closing date future) */
  $handler->display->display_options['filters']['field_closing_date_value']['id'] = 'field_closing_date_value';
  $handler->display->display_options['filters']['field_closing_date_value']['table'] = 'field_data_field_closing_date';
  $handler->display->display_options['filters']['field_closing_date_value']['field'] = 'field_closing_date_value';
  $handler->display->display_options['filters']['field_closing_date_value']['ui_name'] = 'Open (closing date future)';
  $handler->display->display_options['filters']['field_closing_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_closing_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_closing_date_value']['granularity'] = 'second';
  $handler->display->display_options['filters']['field_closing_date_value']['default_date'] = 'now';
  $handler->display->display_options['path'] = 'about-eige/recruitment/csv';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
    'page_1' => 0,
  );

  /* Display: XML data export */
  $handler = $view->new_display('views_data_export', 'XML data export', 'views_data_export_2');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  $handler->display->display_options['style_options']['attach_text'] = 'Export results as XML';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%timestamp-yyyy-%timestamp-mm-%timestamp-dd-%view.xml';
  $handler->display->display_options['style_options']['parent_sort'] = 1;
  $handler->display->display_options['style_options']['transform'] = 1;
  $handler->display->display_options['style_options']['root_node'] = 'nodes';
  $handler->display->display_options['style_options']['item_node'] = 'node';
  $handler->display->display_options['style_options']['no_entity_encode'] = array(
    'body' => 'body',
  );
  $handler->display->display_options['style_options']['cdata_wrapper'] = array(
    'title_field' => 'title_field',
    'field_ref_number' => 'field_ref_number',
    'field_grade' => 'field_grade',
    'field_maximum_n_on_reserve_list' => 'field_maximum_n_on_reserve_list',
    'field_activities' => 'field_activities',
    'field_keywords' => 'field_keywords',
    'body' => 'body',
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['title_field']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title_field']['type'] = 'text_plain';
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: Content: Document type */
  $handler->display->display_options['fields']['field_document_type']['id'] = 'field_document_type';
  $handler->display->display_options['fields']['field_document_type']['table'] = 'field_data_field_document_type';
  $handler->display->display_options['fields']['field_document_type']['field'] = 'field_document_type';
  $handler->display->display_options['fields']['field_document_type']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_document_type']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_document_type']['type'] = 'ds_taxonomy_separator_localized';
  /* Field: Content: Career Opportunity Type */
  $handler->display->display_options['fields']['field_career_opportunity_type']['id'] = 'field_career_opportunity_type';
  $handler->display->display_options['fields']['field_career_opportunity_type']['table'] = 'field_data_field_career_opportunity_type';
  $handler->display->display_options['fields']['field_career_opportunity_type']['field'] = 'field_career_opportunity_type';
  $handler->display->display_options['fields']['field_career_opportunity_type']['label'] = 'Type';
  $handler->display->display_options['fields']['field_career_opportunity_type']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_career_opportunity_type']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_career_opportunity_type']['type'] = 'ds_taxonomy_separator_localized';
  /* Field: Content: Closing date */
  $handler->display->display_options['fields']['field_closing_date']['id'] = 'field_closing_date';
  $handler->display->display_options['fields']['field_closing_date']['table'] = 'field_data_field_closing_date';
  $handler->display->display_options['fields']['field_closing_date']['field'] = 'field_closing_date';
  $handler->display->display_options['fields']['field_closing_date']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_closing_date']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_closing_date']['settings'] = array(
    'format_type' => 'eige_short_m_d_y_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Published date */
  $handler->display->display_options['fields']['field_publication_date']['id'] = 'field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['table'] = 'field_data_field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['field'] = 'field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_publication_date']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_publication_date']['settings'] = array(
    'format_type' => 'eige_short_m_d_y_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Ref. number */
  $handler->display->display_options['fields']['field_ref_number']['id'] = 'field_ref_number';
  $handler->display->display_options['fields']['field_ref_number']['table'] = 'field_data_field_ref_number';
  $handler->display->display_options['fields']['field_ref_number']['field'] = 'field_ref_number';
  $handler->display->display_options['fields']['field_ref_number']['label'] = 'Ref number';
  $handler->display->display_options['fields']['field_ref_number']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_ref_number']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_ref_number']['type'] = 'text_plain';
  /* Field: Content: Grade */
  $handler->display->display_options['fields']['field_grade']['id'] = 'field_grade';
  $handler->display->display_options['fields']['field_grade']['table'] = 'field_data_field_grade';
  $handler->display->display_options['fields']['field_grade']['field'] = 'field_grade';
  $handler->display->display_options['fields']['field_grade']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_grade']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_grade']['type'] = 'text_plain';
  /* Field: Content: Maximum n° on reserve list */
  $handler->display->display_options['fields']['field_maximum_n_on_reserve_list']['id'] = 'field_maximum_n_on_reserve_list';
  $handler->display->display_options['fields']['field_maximum_n_on_reserve_list']['table'] = 'field_data_field_maximum_n_on_reserve_list';
  $handler->display->display_options['fields']['field_maximum_n_on_reserve_list']['field'] = 'field_maximum_n_on_reserve_list';
  $handler->display->display_options['fields']['field_maximum_n_on_reserve_list']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_maximum_n_on_reserve_list']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_maximum_n_on_reserve_list']['type'] = 'text_plain';
  /* Field: Content: Areas */
  $handler->display->display_options['fields']['field_activities']['id'] = 'field_activities';
  $handler->display->display_options['fields']['field_activities']['table'] = 'field_data_field_activities';
  $handler->display->display_options['fields']['field_activities']['field'] = 'field_activities';
  $handler->display->display_options['fields']['field_activities']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_activities']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_activities']['type'] = 'ds_taxonomy_separator_localized';
  $handler->display->display_options['fields']['field_activities']['delta_offset'] = '0';
  /* Field: Content: Keywords */
  $handler->display->display_options['fields']['field_keywords']['id'] = 'field_keywords';
  $handler->display->display_options['fields']['field_keywords']['table'] = 'field_data_field_keywords';
  $handler->display->display_options['fields']['field_keywords']['field'] = 'field_keywords';
  $handler->display->display_options['fields']['field_keywords']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_keywords']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_keywords']['type'] = 'ds_taxonomy_separator_localized';
  $handler->display->display_options['fields']['field_keywords']['delta_offset'] = '0';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = TRUE;
  /* Field: Content: Download(s) */
  $handler->display->display_options['fields']['field_downloads']['id'] = 'field_downloads';
  $handler->display->display_options['fields']['field_downloads']['table'] = 'field_data_field_downloads';
  $handler->display->display_options['fields']['field_downloads']['field'] = 'field_downloads';
  $handler->display->display_options['fields']['field_downloads']['label'] = 'Downloads';
  $handler->display->display_options['fields']['field_downloads']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_downloads']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_downloads']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_downloads']['settings'] = array(
    'view_mode' => 'token',
  );
  $handler->display->display_options['fields']['field_downloads']['delta_offset'] = '0';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'career_opportunity' => 'career_opportunity',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Open (closing date future) */
  $handler->display->display_options['filters']['field_closing_date_value']['id'] = 'field_closing_date_value';
  $handler->display->display_options['filters']['field_closing_date_value']['table'] = 'field_data_field_closing_date';
  $handler->display->display_options['filters']['field_closing_date_value']['field'] = 'field_closing_date_value';
  $handler->display->display_options['filters']['field_closing_date_value']['ui_name'] = 'Open (closing date future)';
  $handler->display->display_options['filters']['field_closing_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_closing_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_closing_date_value']['granularity'] = 'second';
  $handler->display->display_options['filters']['field_closing_date_value']['default_date'] = 'now';
  $handler->display->display_options['path'] = 'about-eige/recruitment/xml';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
    'page_1' => 0,
  );

  /* Display: CSV data export (past) */
  $handler = $view->new_display('views_data_export', 'CSV data export (past)', 'views_data_export_3');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['attach_text'] = 'Export results as CSV';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%timestamp-yyyy-%timestamp-mm-%timestamp-dd-%view.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 1;
  $handler->display->display_options['style_options']['quote'] = '1';
  $handler->display->display_options['style_options']['trim'] = 1;
  $handler->display->display_options['style_options']['replace_newlines'] = 1;
  $handler->display->display_options['style_options']['newline_replacement'] = ' ';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 1;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['title_field']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title_field']['type'] = 'text_plain';
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: Content: Document type */
  $handler->display->display_options['fields']['field_document_type']['id'] = 'field_document_type';
  $handler->display->display_options['fields']['field_document_type']['table'] = 'field_data_field_document_type';
  $handler->display->display_options['fields']['field_document_type']['field'] = 'field_document_type';
  $handler->display->display_options['fields']['field_document_type']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_document_type']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_document_type']['type'] = 'ds_taxonomy_separator_localized';
  /* Field: Content: Career Opportunity Type */
  $handler->display->display_options['fields']['field_career_opportunity_type']['id'] = 'field_career_opportunity_type';
  $handler->display->display_options['fields']['field_career_opportunity_type']['table'] = 'field_data_field_career_opportunity_type';
  $handler->display->display_options['fields']['field_career_opportunity_type']['field'] = 'field_career_opportunity_type';
  $handler->display->display_options['fields']['field_career_opportunity_type']['label'] = 'Type';
  $handler->display->display_options['fields']['field_career_opportunity_type']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_career_opportunity_type']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_career_opportunity_type']['type'] = 'ds_taxonomy_separator_localized';
  /* Field: Content: Closing date */
  $handler->display->display_options['fields']['field_closing_date']['id'] = 'field_closing_date';
  $handler->display->display_options['fields']['field_closing_date']['table'] = 'field_data_field_closing_date';
  $handler->display->display_options['fields']['field_closing_date']['field'] = 'field_closing_date';
  $handler->display->display_options['fields']['field_closing_date']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_closing_date']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_closing_date']['settings'] = array(
    'format_type' => 'eige_short_m_d_y_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Published date */
  $handler->display->display_options['fields']['field_publication_date']['id'] = 'field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['table'] = 'field_data_field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['field'] = 'field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_publication_date']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_publication_date']['settings'] = array(
    'format_type' => 'eige_short_m_d_y_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Ref. number */
  $handler->display->display_options['fields']['field_ref_number']['id'] = 'field_ref_number';
  $handler->display->display_options['fields']['field_ref_number']['table'] = 'field_data_field_ref_number';
  $handler->display->display_options['fields']['field_ref_number']['field'] = 'field_ref_number';
  $handler->display->display_options['fields']['field_ref_number']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_ref_number']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_ref_number']['type'] = 'text_plain';
  /* Field: Content: Grade */
  $handler->display->display_options['fields']['field_grade']['id'] = 'field_grade';
  $handler->display->display_options['fields']['field_grade']['table'] = 'field_data_field_grade';
  $handler->display->display_options['fields']['field_grade']['field'] = 'field_grade';
  $handler->display->display_options['fields']['field_grade']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_grade']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_grade']['type'] = 'text_plain';
  /* Field: Content: Maximum n° on reserve list */
  $handler->display->display_options['fields']['field_maximum_n_on_reserve_list']['id'] = 'field_maximum_n_on_reserve_list';
  $handler->display->display_options['fields']['field_maximum_n_on_reserve_list']['table'] = 'field_data_field_maximum_n_on_reserve_list';
  $handler->display->display_options['fields']['field_maximum_n_on_reserve_list']['field'] = 'field_maximum_n_on_reserve_list';
  $handler->display->display_options['fields']['field_maximum_n_on_reserve_list']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_maximum_n_on_reserve_list']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_maximum_n_on_reserve_list']['type'] = 'text_plain';
  /* Field: Content: Areas */
  $handler->display->display_options['fields']['field_activities']['id'] = 'field_activities';
  $handler->display->display_options['fields']['field_activities']['table'] = 'field_data_field_activities';
  $handler->display->display_options['fields']['field_activities']['field'] = 'field_activities';
  $handler->display->display_options['fields']['field_activities']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_activities']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_activities']['type'] = 'ds_taxonomy_separator_localized';
  $handler->display->display_options['fields']['field_activities']['delta_offset'] = '0';
  /* Field: Content: Keywords */
  $handler->display->display_options['fields']['field_keywords']['id'] = 'field_keywords';
  $handler->display->display_options['fields']['field_keywords']['table'] = 'field_data_field_keywords';
  $handler->display->display_options['fields']['field_keywords']['field'] = 'field_keywords';
  $handler->display->display_options['fields']['field_keywords']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_keywords']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_keywords']['type'] = 'ds_taxonomy_separator_localized';
  $handler->display->display_options['fields']['field_keywords']['delta_offset'] = '0';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = TRUE;
  /* Field: Content: Download(s) */
  $handler->display->display_options['fields']['field_downloads']['id'] = 'field_downloads';
  $handler->display->display_options['fields']['field_downloads']['table'] = 'field_data_field_downloads';
  $handler->display->display_options['fields']['field_downloads']['field'] = 'field_downloads';
  $handler->display->display_options['fields']['field_downloads']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_downloads']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_downloads']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_downloads']['settings'] = array(
    'view_mode' => 'token',
  );
  $handler->display->display_options['fields']['field_downloads']['delta_offset'] = '0';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'career_opportunity' => 'career_opportunity',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Closed (closing date past) */
  $handler->display->display_options['filters']['field_closing_date_value']['id'] = 'field_closing_date_value';
  $handler->display->display_options['filters']['field_closing_date_value']['table'] = 'field_data_field_closing_date';
  $handler->display->display_options['filters']['field_closing_date_value']['field'] = 'field_closing_date_value';
  $handler->display->display_options['filters']['field_closing_date_value']['ui_name'] = 'Closed (closing date past)';
  $handler->display->display_options['filters']['field_closing_date_value']['operator'] = '<';
  $handler->display->display_options['filters']['field_closing_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_closing_date_value']['granularity'] = 'second';
  $handler->display->display_options['filters']['field_closing_date_value']['default_date'] = 'now';
  /* Filter criterion: Career opportunity type */
  $handler->display->display_options['filters']['field_career_opportunity_type_tid']['id'] = 'field_career_opportunity_type_tid';
  $handler->display->display_options['filters']['field_career_opportunity_type_tid']['table'] = 'field_data_field_career_opportunity_type';
  $handler->display->display_options['filters']['field_career_opportunity_type_tid']['field'] = 'field_career_opportunity_type_tid';
  $handler->display->display_options['filters']['field_career_opportunity_type_tid']['ui_name'] = 'Career opportunity type';
  $handler->display->display_options['filters']['field_career_opportunity_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_career_opportunity_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_career_opportunity_type_tid']['expose']['operator_id'] = 'field_career_opportunity_type_tid_op';
  $handler->display->display_options['filters']['field_career_opportunity_type_tid']['expose']['label'] = 'Type ';
  $handler->display->display_options['filters']['field_career_opportunity_type_tid']['expose']['operator'] = 'field_career_opportunity_type_tid_op';
  $handler->display->display_options['filters']['field_career_opportunity_type_tid']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['field_career_opportunity_type_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_career_opportunity_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_career_opportunity_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_career_opportunity_type_tid']['vocabulary'] = 'career_opportunity_types';
  $handler->display->display_options['filters']['field_career_opportunity_type_tid']['error_message'] = FALSE;
  /* Filter criterion: Year */
  $handler->display->display_options['filters']['field_closing_date_value_1']['id'] = 'field_closing_date_value_1';
  $handler->display->display_options['filters']['field_closing_date_value_1']['table'] = 'field_data_field_closing_date';
  $handler->display->display_options['filters']['field_closing_date_value_1']['field'] = 'field_closing_date_value';
  $handler->display->display_options['filters']['field_closing_date_value_1']['ui_name'] = 'Year';
  $handler->display->display_options['filters']['field_closing_date_value_1']['group'] = 1;
  $handler->display->display_options['filters']['field_closing_date_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_closing_date_value_1']['expose']['operator_id'] = 'field_closing_date_value_1_op';
  $handler->display->display_options['filters']['field_closing_date_value_1']['expose']['label'] = 'Year';
  $handler->display->display_options['filters']['field_closing_date_value_1']['expose']['operator'] = 'field_closing_date_value_1_op';
  $handler->display->display_options['filters']['field_closing_date_value_1']['expose']['identifier'] = 'year';
  $handler->display->display_options['filters']['field_closing_date_value_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_closing_date_value_1']['granularity'] = 'year';
  $handler->display->display_options['filters']['field_closing_date_value_1']['year_range'] = '-5:+0';
  /* Filter criterion: Global: Populate filters */
  $handler->display->display_options['filters']['populate']['id'] = 'populate';
  $handler->display->display_options['filters']['populate']['table'] = 'views_filters_populate';
  $handler->display->display_options['filters']['populate']['field'] = 'populate';
  $handler->display->display_options['filters']['populate']['group'] = 1;
  $handler->display->display_options['filters']['populate']['exposed'] = TRUE;
  $handler->display->display_options['filters']['populate']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['populate']['expose']['label'] = 'Search Past positions';
  $handler->display->display_options['filters']['populate']['expose']['operator'] = 'populate_op';
  $handler->display->display_options['filters']['populate']['expose']['identifier'] = 't';
  $handler->display->display_options['filters']['populate']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['populate']['filters'] = array(
    'body_value' => 'body_value',
    'title' => 'title',
    'status' => 0,
    'type' => 0,
    'field_closing_date_value' => 0,
    'field_career_opportunity_type_tid' => 0,
    'field_closing_date_value_1' => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'allwords';
  $handler->display->display_options['filters']['title']['group'] = 2;
  /* Filter criterion: Content: Body (body) */
  $handler->display->display_options['filters']['body_value']['id'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['table'] = 'field_data_body';
  $handler->display->display_options['filters']['body_value']['field'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['operator'] = 'allwords';
  $handler->display->display_options['filters']['body_value']['group'] = 2;
  $handler->display->display_options['path'] = 'about-eige/recruitment/past-positions/csv';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
    'page' => 0,
  );

  /* Display: XML data export (past) */
  $handler = $view->new_display('views_data_export', 'XML data export (past)', 'views_data_export_4');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  $handler->display->display_options['style_options']['attach_text'] = 'Export results as XML';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%timestamp-yyyy-%timestamp-mm-%timestamp-dd-%view.xml';
  $handler->display->display_options['style_options']['parent_sort'] = 1;
  $handler->display->display_options['style_options']['transform'] = 1;
  $handler->display->display_options['style_options']['root_node'] = 'nodes';
  $handler->display->display_options['style_options']['item_node'] = 'node';
  $handler->display->display_options['style_options']['no_entity_encode'] = array(
    'body' => 'body',
  );
  $handler->display->display_options['style_options']['cdata_wrapper'] = array(
    'title_field' => 'title_field',
    'field_ref_number' => 'field_ref_number',
    'field_grade' => 'field_grade',
    'field_maximum_n_on_reserve_list' => 'field_maximum_n_on_reserve_list',
    'field_activities' => 'field_activities',
    'field_keywords' => 'field_keywords',
    'body' => 'body',
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['title_field']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title_field']['type'] = 'text_plain';
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: Content: Document type */
  $handler->display->display_options['fields']['field_document_type']['id'] = 'field_document_type';
  $handler->display->display_options['fields']['field_document_type']['table'] = 'field_data_field_document_type';
  $handler->display->display_options['fields']['field_document_type']['field'] = 'field_document_type';
  $handler->display->display_options['fields']['field_document_type']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_document_type']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_document_type']['type'] = 'ds_taxonomy_separator_localized';
  /* Field: Content: Career Opportunity Type */
  $handler->display->display_options['fields']['field_career_opportunity_type']['id'] = 'field_career_opportunity_type';
  $handler->display->display_options['fields']['field_career_opportunity_type']['table'] = 'field_data_field_career_opportunity_type';
  $handler->display->display_options['fields']['field_career_opportunity_type']['field'] = 'field_career_opportunity_type';
  $handler->display->display_options['fields']['field_career_opportunity_type']['label'] = 'Type';
  $handler->display->display_options['fields']['field_career_opportunity_type']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_career_opportunity_type']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_career_opportunity_type']['type'] = 'ds_taxonomy_separator_localized';
  /* Field: Content: Closing date */
  $handler->display->display_options['fields']['field_closing_date']['id'] = 'field_closing_date';
  $handler->display->display_options['fields']['field_closing_date']['table'] = 'field_data_field_closing_date';
  $handler->display->display_options['fields']['field_closing_date']['field'] = 'field_closing_date';
  $handler->display->display_options['fields']['field_closing_date']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_closing_date']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_closing_date']['settings'] = array(
    'format_type' => 'eige_short_m_d_y_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Published date */
  $handler->display->display_options['fields']['field_publication_date']['id'] = 'field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['table'] = 'field_data_field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['field'] = 'field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_publication_date']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_publication_date']['settings'] = array(
    'format_type' => 'eige_short_m_d_y_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Ref. number */
  $handler->display->display_options['fields']['field_ref_number']['id'] = 'field_ref_number';
  $handler->display->display_options['fields']['field_ref_number']['table'] = 'field_data_field_ref_number';
  $handler->display->display_options['fields']['field_ref_number']['field'] = 'field_ref_number';
  $handler->display->display_options['fields']['field_ref_number']['label'] = 'Ref number';
  $handler->display->display_options['fields']['field_ref_number']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_ref_number']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_ref_number']['type'] = 'text_plain';
  /* Field: Content: Grade */
  $handler->display->display_options['fields']['field_grade']['id'] = 'field_grade';
  $handler->display->display_options['fields']['field_grade']['table'] = 'field_data_field_grade';
  $handler->display->display_options['fields']['field_grade']['field'] = 'field_grade';
  $handler->display->display_options['fields']['field_grade']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_grade']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_grade']['type'] = 'text_plain';
  /* Field: Content: Maximum n° on reserve list */
  $handler->display->display_options['fields']['field_maximum_n_on_reserve_list']['id'] = 'field_maximum_n_on_reserve_list';
  $handler->display->display_options['fields']['field_maximum_n_on_reserve_list']['table'] = 'field_data_field_maximum_n_on_reserve_list';
  $handler->display->display_options['fields']['field_maximum_n_on_reserve_list']['field'] = 'field_maximum_n_on_reserve_list';
  $handler->display->display_options['fields']['field_maximum_n_on_reserve_list']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_maximum_n_on_reserve_list']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_maximum_n_on_reserve_list']['type'] = 'text_plain';
  /* Field: Content: Areas */
  $handler->display->display_options['fields']['field_activities']['id'] = 'field_activities';
  $handler->display->display_options['fields']['field_activities']['table'] = 'field_data_field_activities';
  $handler->display->display_options['fields']['field_activities']['field'] = 'field_activities';
  $handler->display->display_options['fields']['field_activities']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_activities']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_activities']['type'] = 'ds_taxonomy_separator_localized';
  $handler->display->display_options['fields']['field_activities']['delta_offset'] = '0';
  /* Field: Content: Keywords */
  $handler->display->display_options['fields']['field_keywords']['id'] = 'field_keywords';
  $handler->display->display_options['fields']['field_keywords']['table'] = 'field_data_field_keywords';
  $handler->display->display_options['fields']['field_keywords']['field'] = 'field_keywords';
  $handler->display->display_options['fields']['field_keywords']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_keywords']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_keywords']['type'] = 'ds_taxonomy_separator_localized';
  $handler->display->display_options['fields']['field_keywords']['delta_offset'] = '0';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = TRUE;
  /* Field: Content: Download(s) */
  $handler->display->display_options['fields']['field_downloads']['id'] = 'field_downloads';
  $handler->display->display_options['fields']['field_downloads']['table'] = 'field_data_field_downloads';
  $handler->display->display_options['fields']['field_downloads']['field'] = 'field_downloads';
  $handler->display->display_options['fields']['field_downloads']['label'] = 'Downloads';
  $handler->display->display_options['fields']['field_downloads']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_downloads']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_downloads']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_downloads']['settings'] = array(
    'view_mode' => 'token',
  );
  $handler->display->display_options['fields']['field_downloads']['delta_offset'] = '0';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'career_opportunity' => 'career_opportunity',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Closed (closing date past) */
  $handler->display->display_options['filters']['field_closing_date_value']['id'] = 'field_closing_date_value';
  $handler->display->display_options['filters']['field_closing_date_value']['table'] = 'field_data_field_closing_date';
  $handler->display->display_options['filters']['field_closing_date_value']['field'] = 'field_closing_date_value';
  $handler->display->display_options['filters']['field_closing_date_value']['ui_name'] = 'Closed (closing date past)';
  $handler->display->display_options['filters']['field_closing_date_value']['operator'] = '<';
  $handler->display->display_options['filters']['field_closing_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_closing_date_value']['granularity'] = 'second';
  $handler->display->display_options['filters']['field_closing_date_value']['default_date'] = 'now';
  /* Filter criterion: Career opportunity type */
  $handler->display->display_options['filters']['field_career_opportunity_type_tid']['id'] = 'field_career_opportunity_type_tid';
  $handler->display->display_options['filters']['field_career_opportunity_type_tid']['table'] = 'field_data_field_career_opportunity_type';
  $handler->display->display_options['filters']['field_career_opportunity_type_tid']['field'] = 'field_career_opportunity_type_tid';
  $handler->display->display_options['filters']['field_career_opportunity_type_tid']['ui_name'] = 'Career opportunity type';
  $handler->display->display_options['filters']['field_career_opportunity_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_career_opportunity_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_career_opportunity_type_tid']['expose']['operator_id'] = 'field_career_opportunity_type_tid_op';
  $handler->display->display_options['filters']['field_career_opportunity_type_tid']['expose']['label'] = 'Type ';
  $handler->display->display_options['filters']['field_career_opportunity_type_tid']['expose']['operator'] = 'field_career_opportunity_type_tid_op';
  $handler->display->display_options['filters']['field_career_opportunity_type_tid']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['field_career_opportunity_type_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_career_opportunity_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_career_opportunity_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_career_opportunity_type_tid']['vocabulary'] = 'career_opportunity_types';
  $handler->display->display_options['filters']['field_career_opportunity_type_tid']['error_message'] = FALSE;
  /* Filter criterion: Year */
  $handler->display->display_options['filters']['field_closing_date_value_1']['id'] = 'field_closing_date_value_1';
  $handler->display->display_options['filters']['field_closing_date_value_1']['table'] = 'field_data_field_closing_date';
  $handler->display->display_options['filters']['field_closing_date_value_1']['field'] = 'field_closing_date_value';
  $handler->display->display_options['filters']['field_closing_date_value_1']['ui_name'] = 'Year';
  $handler->display->display_options['filters']['field_closing_date_value_1']['group'] = 1;
  $handler->display->display_options['filters']['field_closing_date_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_closing_date_value_1']['expose']['operator_id'] = 'field_closing_date_value_1_op';
  $handler->display->display_options['filters']['field_closing_date_value_1']['expose']['label'] = 'Year';
  $handler->display->display_options['filters']['field_closing_date_value_1']['expose']['operator'] = 'field_closing_date_value_1_op';
  $handler->display->display_options['filters']['field_closing_date_value_1']['expose']['identifier'] = 'year';
  $handler->display->display_options['filters']['field_closing_date_value_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_closing_date_value_1']['granularity'] = 'year';
  $handler->display->display_options['filters']['field_closing_date_value_1']['year_range'] = '-5:+0';
  /* Filter criterion: Global: Populate filters */
  $handler->display->display_options['filters']['populate']['id'] = 'populate';
  $handler->display->display_options['filters']['populate']['table'] = 'views_filters_populate';
  $handler->display->display_options['filters']['populate']['field'] = 'populate';
  $handler->display->display_options['filters']['populate']['group'] = 1;
  $handler->display->display_options['filters']['populate']['exposed'] = TRUE;
  $handler->display->display_options['filters']['populate']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['populate']['expose']['label'] = 'Search Past positions';
  $handler->display->display_options['filters']['populate']['expose']['operator'] = 'populate_op';
  $handler->display->display_options['filters']['populate']['expose']['identifier'] = 't';
  $handler->display->display_options['filters']['populate']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['populate']['filters'] = array(
    'body_value' => 'body_value',
    'title' => 'title',
    'status' => 0,
    'type' => 0,
    'field_closing_date_value' => 0,
    'field_career_opportunity_type_tid' => 0,
    'field_closing_date_value_1' => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'allwords';
  $handler->display->display_options['filters']['title']['group'] = 2;
  /* Filter criterion: Content: Body (body) */
  $handler->display->display_options['filters']['body_value']['id'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['table'] = 'field_data_body';
  $handler->display->display_options['filters']['body_value']['field'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['operator'] = 'allwords';
  $handler->display->display_options['filters']['body_value']['group'] = 2;
  $handler->display->display_options['path'] = 'about-eige/recruitment/past-positions/xml';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
    'page' => 0,
  );
  $export['recruitment'] = $view;

  return $export;
}

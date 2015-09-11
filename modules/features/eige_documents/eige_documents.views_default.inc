<?php
/**
 * @file
 * eige_documents.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function eige_documents_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'documents_registry';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Documents registry';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Documents Registry';
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
    'field_document_type_tid_1' => array(
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
    'field_document_type_tid_2' => array(
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
    'field_document_type_tid_3' => array(
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
    'field_document_type_tid_4' => array(
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
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'full_html';
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['more_button_text'] = 'Load more documents';
  $handler->display->display_options['pager']['options']['advance']['content_class'] = '.view-content:eq(0)';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'documents-list';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'document_registry';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<div class="view-results-count"><strong>@total</strong> Documents found</div>';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Publication date (field_publication_date) */
  $handler->display->display_options['sorts']['field_publication_date_value']['id'] = 'field_publication_date_value';
  $handler->display->display_options['sorts']['field_publication_date_value']['table'] = 'field_data_field_publication_date';
  $handler->display->display_options['sorts']['field_publication_date_value']['field'] = 'field_publication_date_value';
  $handler->display->display_options['sorts']['field_publication_date_value']['order'] = 'DESC';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
    3 => 'OR',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'career_opportunity' => 'career_opportunity',
    'document' => 'document',
    'procurement' => 'procurement',
    'publication' => 'publication',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Global: Populate filters */
  $handler->display->display_options['filters']['populate']['id'] = 'populate';
  $handler->display->display_options['filters']['populate']['table'] = 'views_filters_populate';
  $handler->display->display_options['filters']['populate']['field'] = 'populate';
  $handler->display->display_options['filters']['populate']['group'] = 1;
  $handler->display->display_options['filters']['populate']['exposed'] = TRUE;
  $handler->display->display_options['filters']['populate']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['populate']['expose']['label'] = 'Search Documents';
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
  );
  /* Filter criterion: Bodies of the agency */
  $handler->display->display_options['filters']['field_document_type_tid_1']['id'] = 'field_document_type_tid_1';
  $handler->display->display_options['filters']['field_document_type_tid_1']['table'] = 'field_data_field_document_type';
  $handler->display->display_options['filters']['field_document_type_tid_1']['field'] = 'field_document_type_tid';
  $handler->display->display_options['filters']['field_document_type_tid_1']['ui_name'] = 'Bodies of the agency';
  $handler->display->display_options['filters']['field_document_type_tid_1']['group'] = 2;
  $handler->display->display_options['filters']['field_document_type_tid_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_document_type_tid_1']['expose']['operator_id'] = 'field_document_type_tid_1_op';
  $handler->display->display_options['filters']['field_document_type_tid_1']['expose']['label'] = 'Bodies of the agency';
  $handler->display->display_options['filters']['field_document_type_tid_1']['expose']['operator'] = 'field_document_type_tid_1_op';
  $handler->display->display_options['filters']['field_document_type_tid_1']['expose']['identifier'] = 'ct1';
  $handler->display->display_options['filters']['field_document_type_tid_1']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_document_type_tid_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_document_type_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['field_document_type_tid_1']['vocabulary'] = 'document_types';
  $handler->display->display_options['filters']['field_document_type_tid_1']['error_message'] = FALSE;
  /* Filter criterion: The agency&#039;s work */
  $handler->display->display_options['filters']['field_document_type_tid_2']['id'] = 'field_document_type_tid_2';
  $handler->display->display_options['filters']['field_document_type_tid_2']['table'] = 'field_data_field_document_type';
  $handler->display->display_options['filters']['field_document_type_tid_2']['field'] = 'field_document_type_tid';
  $handler->display->display_options['filters']['field_document_type_tid_2']['ui_name'] = 'The agency\'s work';
  $handler->display->display_options['filters']['field_document_type_tid_2']['group'] = 2;
  $handler->display->display_options['filters']['field_document_type_tid_2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_document_type_tid_2']['expose']['operator_id'] = 'field_document_type_tid_2_op';
  $handler->display->display_options['filters']['field_document_type_tid_2']['expose']['label'] = 'The agency\'s work';
  $handler->display->display_options['filters']['field_document_type_tid_2']['expose']['operator'] = 'field_document_type_tid_2_op';
  $handler->display->display_options['filters']['field_document_type_tid_2']['expose']['identifier'] = 'ct2';
  $handler->display->display_options['filters']['field_document_type_tid_2']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_document_type_tid_2']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_document_type_tid_2']['type'] = 'select';
  $handler->display->display_options['filters']['field_document_type_tid_2']['vocabulary'] = 'document_types';
  $handler->display->display_options['filters']['field_document_type_tid_2']['error_message'] = FALSE;
  /* Filter criterion: Administrative documents */
  $handler->display->display_options['filters']['field_document_type_tid_3']['id'] = 'field_document_type_tid_3';
  $handler->display->display_options['filters']['field_document_type_tid_3']['table'] = 'field_data_field_document_type';
  $handler->display->display_options['filters']['field_document_type_tid_3']['field'] = 'field_document_type_tid';
  $handler->display->display_options['filters']['field_document_type_tid_3']['ui_name'] = 'Administrative documents';
  $handler->display->display_options['filters']['field_document_type_tid_3']['group'] = 2;
  $handler->display->display_options['filters']['field_document_type_tid_3']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_document_type_tid_3']['expose']['operator_id'] = 'field_document_type_tid_3_op';
  $handler->display->display_options['filters']['field_document_type_tid_3']['expose']['label'] = 'Administrative documents';
  $handler->display->display_options['filters']['field_document_type_tid_3']['expose']['operator'] = 'field_document_type_tid_3_op';
  $handler->display->display_options['filters']['field_document_type_tid_3']['expose']['identifier'] = 'ct3';
  $handler->display->display_options['filters']['field_document_type_tid_3']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_document_type_tid_3']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_document_type_tid_3']['type'] = 'select';
  $handler->display->display_options['filters']['field_document_type_tid_3']['vocabulary'] = 'document_types';
  $handler->display->display_options['filters']['field_document_type_tid_3']['error_message'] = FALSE;
  /* Filter criterion: Announcements */
  $handler->display->display_options['filters']['field_document_type_tid_4']['id'] = 'field_document_type_tid_4';
  $handler->display->display_options['filters']['field_document_type_tid_4']['table'] = 'field_data_field_document_type';
  $handler->display->display_options['filters']['field_document_type_tid_4']['field'] = 'field_document_type_tid';
  $handler->display->display_options['filters']['field_document_type_tid_4']['ui_name'] = 'Announcements';
  $handler->display->display_options['filters']['field_document_type_tid_4']['group'] = 2;
  $handler->display->display_options['filters']['field_document_type_tid_4']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_document_type_tid_4']['expose']['operator_id'] = 'field_document_type_tid_4_op';
  $handler->display->display_options['filters']['field_document_type_tid_4']['expose']['label'] = 'Announcements';
  $handler->display->display_options['filters']['field_document_type_tid_4']['expose']['operator'] = 'field_document_type_tid_4_op';
  $handler->display->display_options['filters']['field_document_type_tid_4']['expose']['identifier'] = 'ct4';
  $handler->display->display_options['filters']['field_document_type_tid_4']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_document_type_tid_4']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_document_type_tid_4']['type'] = 'select';
  $handler->display->display_options['filters']['field_document_type_tid_4']['vocabulary'] = 'document_types';
  $handler->display->display_options['filters']['field_document_type_tid_4']['error_message'] = FALSE;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'allwords';
  $handler->display->display_options['filters']['title']['group'] = 3;
  /* Filter criterion: Content: Body (body) */
  $handler->display->display_options['filters']['body_value']['id'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['table'] = 'field_data_body';
  $handler->display->display_options['filters']['body_value']['field'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['operator'] = 'allwords';
  $handler->display->display_options['filters']['body_value']['group'] = 3;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'about-eige/documents-registry';

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
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['type']['alter']['strip_tags'] = TRUE;
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
  $handler->display->display_options['fields']['field_career_opportunity_type']['label'] = 'Career opportunity type';
  $handler->display->display_options['fields']['field_career_opportunity_type']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_career_opportunity_type']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_career_opportunity_type']['type'] = 'ds_taxonomy_separator_localized';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_procurement_type']['id'] = 'field_procurement_type';
  $handler->display->display_options['fields']['field_procurement_type']['table'] = 'field_data_field_procurement_type';
  $handler->display->display_options['fields']['field_procurement_type']['field'] = 'field_procurement_type';
  $handler->display->display_options['fields']['field_procurement_type']['label'] = 'Procurement type';
  $handler->display->display_options['fields']['field_procurement_type']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_procurement_type']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_procurement_type']['type'] = 'ds_taxonomy_separator_localized';
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
  /* Field: Content: Publication date */
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
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author']['id'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['table'] = 'field_data_field_author';
  $handler->display->display_options['fields']['field_author']['field'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_author']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_author']['type'] = 'text_plain';
  /* Field: Content: Publisher */
  $handler->display->display_options['fields']['field_publisher']['id'] = 'field_publisher';
  $handler->display->display_options['fields']['field_publisher']['table'] = 'field_data_field_publisher';
  $handler->display->display_options['fields']['field_publisher']['field'] = 'field_publisher';
  $handler->display->display_options['fields']['field_publisher']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_publisher']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_publisher']['type'] = 'text_plain';
  /* Field: Content: ISBN */
  $handler->display->display_options['fields']['field_isbn']['id'] = 'field_isbn';
  $handler->display->display_options['fields']['field_isbn']['table'] = 'field_data_field_isbn';
  $handler->display->display_options['fields']['field_isbn']['field'] = 'field_isbn';
  $handler->display->display_options['fields']['field_isbn']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_isbn']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_isbn']['type'] = 'text_plain';
  /* Field: Content: DOI */
  $handler->display->display_options['fields']['field_doi']['id'] = 'field_doi';
  $handler->display->display_options['fields']['field_doi']['table'] = 'field_data_field_doi';
  $handler->display->display_options['fields']['field_doi']['field'] = 'field_doi';
  $handler->display->display_options['fields']['field_doi']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_doi']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_doi']['type'] = 'text_plain';
  /* Field: Content: Ref. number */
  $handler->display->display_options['fields']['field_ref_number']['id'] = 'field_ref_number';
  $handler->display->display_options['fields']['field_ref_number']['table'] = 'field_data_field_ref_number';
  $handler->display->display_options['fields']['field_ref_number']['field'] = 'field_ref_number';
  $handler->display->display_options['fields']['field_ref_number']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_ref_number']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_ref_number']['type'] = 'text_plain';
  /* Field: Content: Serial Number */
  $handler->display->display_options['fields']['field_serial_number']['id'] = 'field_serial_number';
  $handler->display->display_options['fields']['field_serial_number']['table'] = 'field_data_field_serial_number';
  $handler->display->display_options['fields']['field_serial_number']['field'] = 'field_serial_number';
  $handler->display->display_options['fields']['field_serial_number']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_serial_number']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_serial_number']['type'] = 'text_plain';
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
  /* Field: Content: BPfA Area */
  $handler->display->display_options['fields']['field_bpfa_areas']['id'] = 'field_bpfa_areas';
  $handler->display->display_options['fields']['field_bpfa_areas']['table'] = 'field_data_field_bpfa_areas';
  $handler->display->display_options['fields']['field_bpfa_areas']['field'] = 'field_bpfa_areas';
  $handler->display->display_options['fields']['field_bpfa_areas']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_bpfa_areas']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_bpfa_areas']['type'] = 'ds_taxonomy_separator_localized';
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
  /* Field: Content: Hard copy order URL */
  $handler->display->display_options['fields']['field_hard_copy_order_url']['id'] = 'field_hard_copy_order_url';
  $handler->display->display_options['fields']['field_hard_copy_order_url']['table'] = 'field_data_field_hard_copy_order_url';
  $handler->display->display_options['fields']['field_hard_copy_order_url']['field'] = 'field_hard_copy_order_url';
  $handler->display->display_options['fields']['field_hard_copy_order_url']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_hard_copy_order_url']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_hard_copy_order_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_hard_copy_order_url']['type'] = 'link_plain';
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
  $handler->display->display_options['path'] = 'about-eige/documents-registry/csv';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );

  /* Display: XML data export */
  $handler = $view->new_display('views_data_export', 'XML data export', 'views_data_export_2');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  $handler->display->display_options['style_options']['attach_text'] = 'E';
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
    'field_author' => 'field_author',
    'field_publisher' => 'field_publisher',
    'field_isbn' => 'field_isbn',
    'field_doi' => 'field_doi',
    'field_ref_number' => 'field_ref_number',
    'field_serial_number' => 'field_serial_number',
    'field_grade' => 'field_grade',
    'field_maximum_n_on_reserve_list' => 'field_maximum_n_on_reserve_list',
    'field_keywords' => 'field_keywords',
    'body' => 'body',
    'field_hard_copy_order_url' => 'field_hard_copy_order_url',
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
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['type']['alter']['strip_tags'] = TRUE;
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
  $handler->display->display_options['fields']['field_career_opportunity_type']['label'] = 'Career opportunity type';
  $handler->display->display_options['fields']['field_career_opportunity_type']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_career_opportunity_type']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_career_opportunity_type']['type'] = 'ds_taxonomy_separator_localized';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_procurement_type']['id'] = 'field_procurement_type';
  $handler->display->display_options['fields']['field_procurement_type']['table'] = 'field_data_field_procurement_type';
  $handler->display->display_options['fields']['field_procurement_type']['field'] = 'field_procurement_type';
  $handler->display->display_options['fields']['field_procurement_type']['label'] = 'Procurement type';
  $handler->display->display_options['fields']['field_procurement_type']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_procurement_type']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_procurement_type']['type'] = 'ds_taxonomy_separator_localized';
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
  /* Field: Content: Publication date */
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
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author']['id'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['table'] = 'field_data_field_author';
  $handler->display->display_options['fields']['field_author']['field'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_author']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_author']['type'] = 'text_plain';
  /* Field: Content: Publisher */
  $handler->display->display_options['fields']['field_publisher']['id'] = 'field_publisher';
  $handler->display->display_options['fields']['field_publisher']['table'] = 'field_data_field_publisher';
  $handler->display->display_options['fields']['field_publisher']['field'] = 'field_publisher';
  $handler->display->display_options['fields']['field_publisher']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_publisher']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_publisher']['type'] = 'text_plain';
  /* Field: Content: ISBN */
  $handler->display->display_options['fields']['field_isbn']['id'] = 'field_isbn';
  $handler->display->display_options['fields']['field_isbn']['table'] = 'field_data_field_isbn';
  $handler->display->display_options['fields']['field_isbn']['field'] = 'field_isbn';
  $handler->display->display_options['fields']['field_isbn']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_isbn']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_isbn']['type'] = 'text_plain';
  /* Field: Content: DOI */
  $handler->display->display_options['fields']['field_doi']['id'] = 'field_doi';
  $handler->display->display_options['fields']['field_doi']['table'] = 'field_data_field_doi';
  $handler->display->display_options['fields']['field_doi']['field'] = 'field_doi';
  $handler->display->display_options['fields']['field_doi']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_doi']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_doi']['type'] = 'text_plain';
  /* Field: Content: Ref. number */
  $handler->display->display_options['fields']['field_ref_number']['id'] = 'field_ref_number';
  $handler->display->display_options['fields']['field_ref_number']['table'] = 'field_data_field_ref_number';
  $handler->display->display_options['fields']['field_ref_number']['field'] = 'field_ref_number';
  $handler->display->display_options['fields']['field_ref_number']['label'] = 'Ref number';
  $handler->display->display_options['fields']['field_ref_number']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_ref_number']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_ref_number']['type'] = 'text_plain';
  /* Field: Content: Serial Number */
  $handler->display->display_options['fields']['field_serial_number']['id'] = 'field_serial_number';
  $handler->display->display_options['fields']['field_serial_number']['table'] = 'field_data_field_serial_number';
  $handler->display->display_options['fields']['field_serial_number']['field'] = 'field_serial_number';
  $handler->display->display_options['fields']['field_serial_number']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_serial_number']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_serial_number']['type'] = 'text_plain';
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
  /* Field: Content: BPfA Area */
  $handler->display->display_options['fields']['field_bpfa_areas']['id'] = 'field_bpfa_areas';
  $handler->display->display_options['fields']['field_bpfa_areas']['table'] = 'field_data_field_bpfa_areas';
  $handler->display->display_options['fields']['field_bpfa_areas']['field'] = 'field_bpfa_areas';
  $handler->display->display_options['fields']['field_bpfa_areas']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_bpfa_areas']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_bpfa_areas']['type'] = 'ds_taxonomy_separator_localized';
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
  /* Field: Content: Hard copy order URL */
  $handler->display->display_options['fields']['field_hard_copy_order_url']['id'] = 'field_hard_copy_order_url';
  $handler->display->display_options['fields']['field_hard_copy_order_url']['table'] = 'field_data_field_hard_copy_order_url';
  $handler->display->display_options['fields']['field_hard_copy_order_url']['field'] = 'field_hard_copy_order_url';
  $handler->display->display_options['fields']['field_hard_copy_order_url']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_hard_copy_order_url']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_hard_copy_order_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_hard_copy_order_url']['type'] = 'link_plain';
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
  $handler->display->display_options['path'] = 'about-eige/documents-registry/xml';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $export['documents_registry'] = $view;

  $view = new view();
  $view->name = 'eige_publications';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'EIGE publications';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'EIGE\'s publications';
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
    'field_activities_tid_i18n' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
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
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'full_html';
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['more_button_text'] = 'Load more publications';
  $handler->display->display_options['pager']['options']['advance']['content_class'] = '.view-content:eq(0)';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'items-list large-centered large-block-grid-3 medium-block-grid-3 small-block-grid-2 columns';
  $handler->display->display_options['style_options']['wrapper_class'] = 'items-list-wrapper';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<div class="view-results-count"><strong>@total</strong> Publications found</div>';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: BPfA Area */
  $handler->display->display_options['fields']['field_bpfa_areas']['id'] = 'field_bpfa_areas';
  $handler->display->display_options['fields']['field_bpfa_areas']['table'] = 'field_data_field_bpfa_areas';
  $handler->display->display_options['fields']['field_bpfa_areas']['field'] = 'field_bpfa_areas';
  $handler->display->display_options['fields']['field_bpfa_areas']['label'] = '';
  $handler->display->display_options['fields']['field_bpfa_areas']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_bpfa_areas']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Publication date (field_publication_date) */
  $handler->display->display_options['sorts']['field_publication_date_value']['id'] = 'field_publication_date_value';
  $handler->display->display_options['sorts']['field_publication_date_value']['table'] = 'field_data_field_publication_date';
  $handler->display->display_options['sorts']['field_publication_date_value']['field'] = 'field_publication_date_value';
  $handler->display->display_options['sorts']['field_publication_date_value']['order'] = 'DESC';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
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
    'publication' => 'publication',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Global: Populate filters */
  $handler->display->display_options['filters']['populate']['id'] = 'populate';
  $handler->display->display_options['filters']['populate']['table'] = 'views_filters_populate';
  $handler->display->display_options['filters']['populate']['field'] = 'populate';
  $handler->display->display_options['filters']['populate']['group'] = 1;
  $handler->display->display_options['filters']['populate']['exposed'] = TRUE;
  $handler->display->display_options['filters']['populate']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['populate']['expose']['label'] = 'Search Publications';
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
    'title' => 'title',
    'body_value' => 'body_value',
    'status' => 0,
    'type' => 0,
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
  /* Filter criterion: Content: Areas (field_activities) (translated) */
  $handler->display->display_options['filters']['field_activities_tid_i18n']['id'] = 'field_activities_tid_i18n';
  $handler->display->display_options['filters']['field_activities_tid_i18n']['table'] = 'field_data_field_activities';
  $handler->display->display_options['filters']['field_activities_tid_i18n']['field'] = 'field_activities_tid_i18n';
  $handler->display->display_options['filters']['field_activities_tid_i18n']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_activities_tid_i18n']['expose']['operator_id'] = 'field_activities_tid_i18n_op';
  $handler->display->display_options['filters']['field_activities_tid_i18n']['expose']['label'] = 'Areas (field_activities) (translated)';
  $handler->display->display_options['filters']['field_activities_tid_i18n']['expose']['operator'] = 'field_activities_tid_i18n_op';
  $handler->display->display_options['filters']['field_activities_tid_i18n']['expose']['identifier'] = 'field_activities_tid_i18n';
  $handler->display->display_options['filters']['field_activities_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_activities_tid_i18n']['vocabulary'] = 'areas';
  $handler->display->display_options['filters']['field_activities_tid_i18n']['error_message'] = FALSE;

  /* Display: EIGE's publications */
  $handler = $view->new_display('page', 'EIGE\'s publications', 'page');
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Publication date (field_publication_date) */
  $handler->display->display_options['sorts']['field_publication_date_value']['id'] = 'field_publication_date_value';
  $handler->display->display_options['sorts']['field_publication_date_value']['table'] = 'field_data_field_publication_date';
  $handler->display->display_options['sorts']['field_publication_date_value']['field'] = 'field_publication_date_value';
  $handler->display->display_options['sorts']['field_publication_date_value']['order'] = 'DESC';
  /* Sort criterion: Content: Display date (field_display_date) */
  $handler->display->display_options['sorts']['field_display_date_value']['id'] = 'field_display_date_value';
  $handler->display->display_options['sorts']['field_display_date_value']['table'] = 'field_data_field_display_date';
  $handler->display->display_options['sorts']['field_display_date_value']['field'] = 'field_display_date_value';
  $handler->display->display_options['sorts']['field_display_date_value']['order'] = 'DESC';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'publication' => 'publication',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Areas (field_activities) (translated) */
  $handler->display->display_options['filters']['field_activities_tid_i18n']['id'] = 'field_activities_tid_i18n';
  $handler->display->display_options['filters']['field_activities_tid_i18n']['table'] = 'field_data_field_activities';
  $handler->display->display_options['filters']['field_activities_tid_i18n']['field'] = 'field_activities_tid_i18n';
  $handler->display->display_options['filters']['field_activities_tid_i18n']['group'] = 1;
  $handler->display->display_options['filters']['field_activities_tid_i18n']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_activities_tid_i18n']['expose']['operator_id'] = 'field_activities_tid_i18n_op';
  $handler->display->display_options['filters']['field_activities_tid_i18n']['expose']['label'] = 'Areas';
  $handler->display->display_options['filters']['field_activities_tid_i18n']['expose']['operator'] = 'field_activities_tid_i18n_op';
  $handler->display->display_options['filters']['field_activities_tid_i18n']['expose']['identifier'] = 'a';
  $handler->display->display_options['filters']['field_activities_tid_i18n']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_activities_tid_i18n']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_activities_tid_i18n']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_activities_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_activities_tid_i18n']['vocabulary'] = 'areas';
  $handler->display->display_options['filters']['field_activities_tid_i18n']['error_message'] = FALSE;
  /* Filter criterion: Global: Populate filters */
  $handler->display->display_options['filters']['populate']['id'] = 'populate';
  $handler->display->display_options['filters']['populate']['table'] = 'views_filters_populate';
  $handler->display->display_options['filters']['populate']['field'] = 'populate';
  $handler->display->display_options['filters']['populate']['group'] = 1;
  $handler->display->display_options['filters']['populate']['exposed'] = TRUE;
  $handler->display->display_options['filters']['populate']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['populate']['expose']['label'] = 'Search Publications';
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
    'title' => 'title',
    'body_value' => 'body_value',
    'status' => 0,
    'type' => 0,
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
  $handler->display->display_options['metatags'] = array(
    'und' => array(
      'title' => array(
        'value' => '[view:title] | [site:name]',
        'default' => '[view:title] | [site:name]',
      ),
      'description' => array(
        'value' => 'EIGE\'s publications on the Beijing Platform for Action, Gender Equality Index, gender statistics, gender-based violence, gender mainstreaming and research on gender equality.',
        'default' => '[view:description]',
      ),
      'abstract' => array(
        'value' => 'EIGE\'s publications on the Beijing Platform for Action, Gender Equality Index, gender statistics, gender-based violence, gender mainstreaming and research on gender equality.',
        'default' => '',
      ),
      'keywords' => array(
        'value' => '',
        'default' => '',
      ),
      'robots' => array(
        'value' => array(
          'index' => 'index',
          'follow' => 'follow',
          'noindex' => 0,
          'nofollow' => 0,
          'noarchive' => 0,
          'nosnippet' => 0,
          'noodp' => 0,
          'noydir' => 0,
          'noimageindex' => 0,
          'notranslate' => 0,
        ),
        'default' => array(
          'index' => 'index',
          'follow' => 'follow',
          'noindex' => 0,
          'nofollow' => 0,
          'noarchive' => 0,
          'nosnippet' => 0,
          'noodp' => 0,
          'noydir' => 0,
          'noimageindex' => 0,
          'notranslate' => 0,
        ),
      ),
      'news_keywords' => array(
        'value' => '',
        'default' => '',
      ),
      'standout' => array(
        'value' => '',
        'default' => '',
      ),
      'rights' => array(
        'value' => '',
        'default' => '',
      ),
      'image_src' => array(
        'value' => '',
        'default' => '',
      ),
      'canonical' => array(
        'value' => '[view:url]',
        'default' => '[view:url]',
      ),
      'shortlink' => array(
        'value' => '',
        'default' => '',
      ),
      'publisher' => array(
        'value' => '',
        'default' => '',
      ),
      'author' => array(
        'value' => '',
        'default' => '',
      ),
      'original-source' => array(
        'value' => '',
        'default' => '',
      ),
      'revisit-after' => array(
        'value' => '',
        'period' => '',
        'default' => '',
      ),
      'content-language' => array(
        'value' => '',
        'default' => '',
      ),
      'og:type' => array(
        'value' => 'website',
        'default' => 'website',
      ),
      'og:url' => array(
        'value' => '[current-page:url:absolute]',
        'default' => '[current-page:url:absolute]',
      ),
      'og:title' => array(
        'value' => '[current-page:title]',
        'default' => '[current-page:title]',
      ),
      'og:determiner' => array(
        'value' => '',
        'default' => '',
      ),
      'og:description' => array(
        'value' => 'EIGE\'s publications on the Beijing Platform for Action, Gender Equality Index, gender statistics, gender-based violence, gender mainstreaming and research on gender equality.',
        'default' => '',
      ),
      'og:updated_time' => array(
        'value' => '',
        'default' => '',
      ),
      'og:see_also' => array(
        'value' => '',
        'default' => '',
      ),
      'og:image' => array(
        'value' => '[site:url]sites/default/files/homepage-publications.jpg',
        'default' => '[site:url]sites/all/themes/eigefoundationtheme/images/logo-share.jpg',
      ),
      'og:image:secure_url' => array(
        'value' => '',
        'default' => '',
      ),
      'og:image:type' => array(
        'value' => '',
        'default' => '',
      ),
      'og:image:width' => array(
        'value' => '',
        'default' => '',
      ),
      'og:image:height' => array(
        'value' => '',
        'default' => '',
      ),
      'og:latitude' => array(
        'value' => '',
        'default' => '',
      ),
      'og:longitude' => array(
        'value' => '',
        'default' => '',
      ),
      'og:street-address' => array(
        'value' => '',
        'default' => '',
      ),
      'og:locality' => array(
        'value' => '',
        'default' => '',
      ),
      'og:region' => array(
        'value' => '',
        'default' => '',
      ),
      'og:postal-code' => array(
        'value' => '',
        'default' => '',
      ),
      'og:country-name' => array(
        'value' => '',
        'default' => '',
      ),
      'og:email' => array(
        'value' => '',
        'default' => '',
      ),
      'og:phone_number' => array(
        'value' => '',
        'default' => '',
      ),
      'og:fax_number' => array(
        'value' => '',
        'default' => '',
      ),
      'og:locale' => array(
        'value' => '',
        'default' => '',
      ),
      'og:locale:alternate' => array(
        'value' => '',
        'default' => '',
      ),
      'article:author' => array(
        'value' => '',
        'default' => '',
      ),
      'article:publisher' => array(
        'value' => '',
        'default' => '',
      ),
      'article:section' => array(
        'value' => '',
        'default' => '',
      ),
      'article:tag' => array(
        'value' => '',
        'default' => '',
      ),
      'article:published_time' => array(
        'value' => '',
        'default' => '',
      ),
      'article:modified_time' => array(
        'value' => '',
        'default' => '',
      ),
      'article:expiration_time' => array(
        'value' => '',
        'default' => '',
      ),
      'profile:first_name' => array(
        'value' => '',
        'default' => '',
      ),
      'profile:last_name' => array(
        'value' => '',
        'default' => '',
      ),
      'profile:username' => array(
        'value' => '',
        'default' => '',
      ),
      'profile:gender' => array(
        'value' => '',
        'default' => '',
      ),
      'og:audio' => array(
        'value' => '',
        'default' => '',
      ),
      'og:audio:secure_url' => array(
        'value' => '',
        'default' => '',
      ),
      'og:audio:type' => array(
        'value' => '',
        'default' => '',
      ),
      'book:author' => array(
        'value' => '',
        'default' => '',
      ),
      'book:isbn' => array(
        'value' => '',
        'default' => '',
      ),
      'book:release_date' => array(
        'value' => '',
        'default' => '',
      ),
      'book:tag' => array(
        'value' => '',
        'default' => '',
      ),
      'og:video' => array(
        'value' => '',
        'default' => '',
      ),
      'og:video:secure_url' => array(
        'value' => '',
        'default' => '',
      ),
      'og:video:width' => array(
        'value' => '',
        'default' => '',
      ),
      'og:video:height' => array(
        'value' => '',
        'default' => '',
      ),
      'og:video:type' => array(
        'value' => '',
        'default' => '',
      ),
      'video:actor' => array(
        'value' => '',
        'default' => '',
      ),
      'video:actor:role' => array(
        'value' => '',
        'default' => '',
      ),
      'video:director' => array(
        'value' => '',
        'default' => '',
      ),
      'video:writer' => array(
        'value' => '',
        'default' => '',
      ),
      'video:duration' => array(
        'value' => '',
        'default' => '',
      ),
      'video:release_date' => array(
        'value' => '',
        'default' => '',
      ),
      'video:tag' => array(
        'value' => '',
        'default' => '',
      ),
      'video:series' => array(
        'value' => '',
        'default' => '',
      ),
    ),
  );
  $handler->display->display_options['path'] = 'rdc/eige-publications';

  /* Display: BPfA publications */
  $handler = $view->new_display('page', 'BPfA publications', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Monitoring the Beijing Platform for Action';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_bpfa_areas',
      'rendered' => 0,
      'rendered_strip' => 1,
    ),
  );
  $handler->display->display_options['style_options']['class'] = 'items-list large-centered large-block-grid-3 medium-block-grid-3 small-block-grid-2 columns';
  $handler->display->display_options['style_options']['wrapper_class'] = 'items-list-wrapper';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'bpfa_areas' => 'bpfa_areas',
    'administrative_data_sectors' => 0,
    'areas' => 0,
    'career_opportunity_types' => 0,
    'coverage' => 0,
    'document_type_categories' => 0,
    'document_types' => 0,
    'domain' => 0,
    'gender_story_topic' => 0,
    'gm_concepts_and_definitions' => 0,
    'good_practice_tools' => 0,
    'tags' => 0,
    'languages' => 0,
    'method_tool_target_groups' => 0,
    'newsletter' => 0,
    'primary_gender_story_topic' => 0,
    'procurement_types' => 0,
    'types' => 0,
    'resource_formats' => 0,
    'sex' => 0,
    'structure_scopes' => 0,
    'structure_types' => 0,
    'topic_categories' => 0,
    'topics' => 0,
    'gender_based_violence_types' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: URL */
  $handler->display->display_options['fields']['field_area_url']['id'] = 'field_area_url';
  $handler->display->display_options['fields']['field_area_url']['table'] = 'field_data_field_area_url';
  $handler->display->display_options['fields']['field_area_url']['field'] = 'field_area_url';
  $handler->display->display_options['fields']['field_area_url']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['field_area_url']['label'] = '';
  $handler->display->display_options['fields']['field_area_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_area_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_area_url']['alter']['text'] = '<div class="area-url">[field_area_url]</div>';
  $handler->display->display_options['fields']['field_area_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_area_url']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_area_url']['click_sort_column'] = 'url';
  /* Field: Taxonomy term: Description */
  $handler->display->display_options['fields']['description_field']['id'] = 'description_field';
  $handler->display->display_options['fields']['description_field']['table'] = 'field_data_description_field';
  $handler->display->display_options['fields']['description_field']['field'] = 'description_field';
  $handler->display->display_options['fields']['description_field']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['description_field']['label'] = '';
  $handler->display->display_options['fields']['description_field']['exclude'] = TRUE;
  $handler->display->display_options['fields']['description_field']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['description_field']['alter']['text'] = '<div class="area-description">[description_field]</div>';
  $handler->display->display_options['fields']['description_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['description_field']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['description_field']['link_to_entity'] = 0;
  /* Field: Content: BPfA Area */
  $handler->display->display_options['fields']['field_bpfa_areas']['id'] = 'field_bpfa_areas';
  $handler->display->display_options['fields']['field_bpfa_areas']['table'] = 'field_data_field_bpfa_areas';
  $handler->display->display_options['fields']['field_bpfa_areas']['field'] = 'field_bpfa_areas';
  $handler->display->display_options['fields']['field_bpfa_areas']['label'] = '';
  $handler->display->display_options['fields']['field_bpfa_areas']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_bpfa_areas']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_bpfa_areas']['alter']['text'] = '[field_bpfa_areas][field_area_url][description_field]';
  $handler->display->display_options['fields']['field_bpfa_areas']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bpfa_areas']['type'] = 'i18n_taxonomy_term_reference_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'term_node_tid';
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
    'publication' => 'publication',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Areas (field_activities) (translated) */
  $handler->display->display_options['filters']['field_activities_tid_i18n']['id'] = 'field_activities_tid_i18n';
  $handler->display->display_options['filters']['field_activities_tid_i18n']['table'] = 'field_data_field_activities';
  $handler->display->display_options['filters']['field_activities_tid_i18n']['field'] = 'field_activities_tid_i18n';
  $handler->display->display_options['filters']['field_activities_tid_i18n']['value'] = array(
    613 => '613',
  );
  $handler->display->display_options['filters']['field_activities_tid_i18n']['group'] = 1;
  $handler->display->display_options['filters']['field_activities_tid_i18n']['expose']['operator_id'] = 'field_activities_tid_i18n_op';
  $handler->display->display_options['filters']['field_activities_tid_i18n']['expose']['label'] = 'Areas';
  $handler->display->display_options['filters']['field_activities_tid_i18n']['expose']['operator'] = 'field_activities_tid_i18n_op';
  $handler->display->display_options['filters']['field_activities_tid_i18n']['expose']['identifier'] = 'field_activities_tid_i18n';
  $handler->display->display_options['filters']['field_activities_tid_i18n']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_activities_tid_i18n']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_activities_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_activities_tid_i18n']['vocabulary'] = 'areas';
  $handler->display->display_options['filters']['field_activities_tid_i18n']['error_message'] = FALSE;
  $handler->display->display_options['metatags'] = array(
    'und' => array(
      'title' => array(
        'value' => '[view:title] | [site:name]',
        'default' => '[view:title] | [site:name]',
      ),
      'description' => array(
        'value' => 'EIGE\'s reports on the progress of gender equality in the critical areas of concern of the Beijing Platform for Action chosen by the EU Presidencies.',
        'default' => '[view:description]',
      ),
      'abstract' => array(
        'value' => 'EIGE\'s reports on the progress of gender equality in the critical areas of concern of the Beijing Platform for Action chosen by the EU Presidencies.',
        'default' => '',
      ),
      'keywords' => array(
        'value' => '',
        'default' => '',
      ),
      'robots' => array(
        'value' => array(
          'index' => 'index',
          'follow' => 'follow',
          'noindex' => 0,
          'nofollow' => 0,
          'noarchive' => 0,
          'nosnippet' => 0,
          'noodp' => 0,
          'noydir' => 0,
          'noimageindex' => 0,
          'notranslate' => 0,
        ),
        'default' => array(
          'index' => 'index',
          'follow' => 'follow',
          'noindex' => 0,
          'nofollow' => 0,
          'noarchive' => 0,
          'nosnippet' => 0,
          'noodp' => 0,
          'noydir' => 0,
          'noimageindex' => 0,
          'notranslate' => 0,
        ),
      ),
      'news_keywords' => array(
        'value' => '',
        'default' => '',
      ),
      'standout' => array(
        'value' => '',
        'default' => '',
      ),
      'rights' => array(
        'value' => '',
        'default' => '',
      ),
      'image_src' => array(
        'value' => '',
        'default' => '',
      ),
      'canonical' => array(
        'value' => '[view:url]',
        'default' => '[view:url]',
      ),
      'shortlink' => array(
        'value' => '',
        'default' => '',
      ),
      'publisher' => array(
        'value' => '',
        'default' => '',
      ),
      'author' => array(
        'value' => '',
        'default' => '',
      ),
      'original-source' => array(
        'value' => '',
        'default' => '',
      ),
      'revisit-after' => array(
        'value' => '',
        'period' => '',
        'default' => '',
      ),
      'content-language' => array(
        'value' => '',
        'default' => '',
      ),
      'og:type' => array(
        'value' => 'website',
        'default' => 'website',
      ),
      'og:url' => array(
        'value' => '[current-page:url:absolute]',
        'default' => '[current-page:url:absolute]',
      ),
      'og:title' => array(
        'value' => '[current-page:title]',
        'default' => '[current-page:title]',
      ),
      'og:determiner' => array(
        'value' => '',
        'default' => '',
      ),
      'og:description' => array(
        'value' => '',
        'default' => '',
      ),
      'og:updated_time' => array(
        'value' => '',
        'default' => '',
      ),
      'og:see_also' => array(
        'value' => '',
        'default' => '',
      ),
      'og:image' => array(
        'value' => '[site:url]sites/default/files/bpfa-homepage.jpg',
        'default' => '[site:url]sites/all/themes/eigefoundationtheme/images/logo-share.jpg',
      ),
      'og:image:secure_url' => array(
        'value' => '',
        'default' => '',
      ),
      'og:image:type' => array(
        'value' => '',
        'default' => '',
      ),
      'og:image:width' => array(
        'value' => '',
        'default' => '',
      ),
      'og:image:height' => array(
        'value' => '',
        'default' => '',
      ),
      'og:latitude' => array(
        'value' => '',
        'default' => '',
      ),
      'og:longitude' => array(
        'value' => '',
        'default' => '',
      ),
      'og:street-address' => array(
        'value' => '',
        'default' => '',
      ),
      'og:locality' => array(
        'value' => '',
        'default' => '',
      ),
      'og:region' => array(
        'value' => '',
        'default' => '',
      ),
      'og:postal-code' => array(
        'value' => '',
        'default' => '',
      ),
      'og:country-name' => array(
        'value' => '',
        'default' => '',
      ),
      'og:email' => array(
        'value' => '',
        'default' => '',
      ),
      'og:phone_number' => array(
        'value' => '',
        'default' => '',
      ),
      'og:fax_number' => array(
        'value' => '',
        'default' => '',
      ),
      'og:locale' => array(
        'value' => '',
        'default' => '',
      ),
      'og:locale:alternate' => array(
        'value' => '',
        'default' => '',
      ),
      'article:author' => array(
        'value' => '',
        'default' => '',
      ),
      'article:publisher' => array(
        'value' => '',
        'default' => '',
      ),
      'article:section' => array(
        'value' => '',
        'default' => '',
      ),
      'article:tag' => array(
        'value' => '',
        'default' => '',
      ),
      'article:published_time' => array(
        'value' => '',
        'default' => '',
      ),
      'article:modified_time' => array(
        'value' => '',
        'default' => '',
      ),
      'article:expiration_time' => array(
        'value' => '',
        'default' => '',
      ),
      'profile:first_name' => array(
        'value' => '',
        'default' => '',
      ),
      'profile:last_name' => array(
        'value' => '',
        'default' => '',
      ),
      'profile:username' => array(
        'value' => '',
        'default' => '',
      ),
      'profile:gender' => array(
        'value' => '',
        'default' => '',
      ),
      'og:audio' => array(
        'value' => '',
        'default' => '',
      ),
      'og:audio:secure_url' => array(
        'value' => '',
        'default' => '',
      ),
      'og:audio:type' => array(
        'value' => '',
        'default' => '',
      ),
      'book:author' => array(
        'value' => '',
        'default' => '',
      ),
      'book:isbn' => array(
        'value' => '',
        'default' => '',
      ),
      'book:release_date' => array(
        'value' => '',
        'default' => '',
      ),
      'book:tag' => array(
        'value' => '',
        'default' => '',
      ),
      'og:video' => array(
        'value' => '',
        'default' => '',
      ),
      'og:video:secure_url' => array(
        'value' => '',
        'default' => '',
      ),
      'og:video:width' => array(
        'value' => '',
        'default' => '',
      ),
      'og:video:height' => array(
        'value' => '',
        'default' => '',
      ),
      'og:video:type' => array(
        'value' => '',
        'default' => '',
      ),
      'video:actor' => array(
        'value' => '',
        'default' => '',
      ),
      'video:actor:role' => array(
        'value' => '',
        'default' => '',
      ),
      'video:director' => array(
        'value' => '',
        'default' => '',
      ),
      'video:writer' => array(
        'value' => '',
        'default' => '',
      ),
      'video:duration' => array(
        'value' => '',
        'default' => '',
      ),
      'video:release_date' => array(
        'value' => '',
        'default' => '',
      ),
      'video:tag' => array(
        'value' => '',
        'default' => '',
      ),
      'video:series' => array(
        'value' => '',
        'default' => '',
      ),
    ),
  );
  $handler->display->display_options['path'] = 'monitoring-the-bpfa';

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
  /* Field: Content: Areas */
  $handler->display->display_options['fields']['field_activities']['id'] = 'field_activities';
  $handler->display->display_options['fields']['field_activities']['table'] = 'field_data_field_activities';
  $handler->display->display_options['fields']['field_activities']['field'] = 'field_activities';
  $handler->display->display_options['fields']['field_activities']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_activities']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_activities']['type'] = 'ds_taxonomy_separator_localized';
  $handler->display->display_options['fields']['field_activities']['delta_offset'] = '0';
  /* Field: Content: BPfA Area */
  $handler->display->display_options['fields']['field_bpfa_areas']['id'] = 'field_bpfa_areas';
  $handler->display->display_options['fields']['field_bpfa_areas']['table'] = 'field_data_field_bpfa_areas';
  $handler->display->display_options['fields']['field_bpfa_areas']['field'] = 'field_bpfa_areas';
  $handler->display->display_options['fields']['field_bpfa_areas']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_bpfa_areas']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_bpfa_areas']['type'] = 'ds_taxonomy_separator_localized';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author']['id'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['table'] = 'field_data_field_author';
  $handler->display->display_options['fields']['field_author']['field'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_author']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_author']['type'] = 'text_plain';
  /* Field: Content: Publication date */
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
  /* Field: Content: Publisher */
  $handler->display->display_options['fields']['field_publisher']['id'] = 'field_publisher';
  $handler->display->display_options['fields']['field_publisher']['table'] = 'field_data_field_publisher';
  $handler->display->display_options['fields']['field_publisher']['field'] = 'field_publisher';
  $handler->display->display_options['fields']['field_publisher']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_publisher']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_publisher']['type'] = 'text_plain';
  /* Field: Content: ISBN */
  $handler->display->display_options['fields']['field_isbn']['id'] = 'field_isbn';
  $handler->display->display_options['fields']['field_isbn']['table'] = 'field_data_field_isbn';
  $handler->display->display_options['fields']['field_isbn']['field'] = 'field_isbn';
  $handler->display->display_options['fields']['field_isbn']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_isbn']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_isbn']['type'] = 'text_plain';
  /* Field: Content: DOI */
  $handler->display->display_options['fields']['field_doi']['id'] = 'field_doi';
  $handler->display->display_options['fields']['field_doi']['table'] = 'field_data_field_doi';
  $handler->display->display_options['fields']['field_doi']['field'] = 'field_doi';
  $handler->display->display_options['fields']['field_doi']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_doi']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_doi']['type'] = 'text_plain';
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
  /* Field: Content: Hard copy order URL */
  $handler->display->display_options['fields']['field_hard_copy_order_url']['id'] = 'field_hard_copy_order_url';
  $handler->display->display_options['fields']['field_hard_copy_order_url']['table'] = 'field_data_field_hard_copy_order_url';
  $handler->display->display_options['fields']['field_hard_copy_order_url']['field'] = 'field_hard_copy_order_url';
  $handler->display->display_options['fields']['field_hard_copy_order_url']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_hard_copy_order_url']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_hard_copy_order_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_hard_copy_order_url']['type'] = 'link_plain';
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
  $handler->display->display_options['path'] = 'rdc/eige-publications/csv';
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
    'field_author' => 'field_author',
    'field_publisher' => 'field_publisher',
    'field_isbn' => 'field_isbn',
    'field_doi' => 'field_doi',
    'field_keywords' => 'field_keywords',
    'body' => 'body',
    'field_hard_copy_order_url' => 'field_hard_copy_order_url',
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
  /* Field: Content: Areas */
  $handler->display->display_options['fields']['field_activities']['id'] = 'field_activities';
  $handler->display->display_options['fields']['field_activities']['table'] = 'field_data_field_activities';
  $handler->display->display_options['fields']['field_activities']['field'] = 'field_activities';
  $handler->display->display_options['fields']['field_activities']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_activities']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_activities']['type'] = 'ds_taxonomy_separator_localized';
  $handler->display->display_options['fields']['field_activities']['delta_offset'] = '0';
  /* Field: Content: BPfA Area */
  $handler->display->display_options['fields']['field_bpfa_areas']['id'] = 'field_bpfa_areas';
  $handler->display->display_options['fields']['field_bpfa_areas']['table'] = 'field_data_field_bpfa_areas';
  $handler->display->display_options['fields']['field_bpfa_areas']['field'] = 'field_bpfa_areas';
  $handler->display->display_options['fields']['field_bpfa_areas']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_bpfa_areas']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_bpfa_areas']['type'] = 'ds_taxonomy_separator_localized';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author']['id'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['table'] = 'field_data_field_author';
  $handler->display->display_options['fields']['field_author']['field'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_author']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_author']['type'] = 'text_plain';
  /* Field: Content: Publication date */
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
  /* Field: Content: Publisher */
  $handler->display->display_options['fields']['field_publisher']['id'] = 'field_publisher';
  $handler->display->display_options['fields']['field_publisher']['table'] = 'field_data_field_publisher';
  $handler->display->display_options['fields']['field_publisher']['field'] = 'field_publisher';
  $handler->display->display_options['fields']['field_publisher']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_publisher']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_publisher']['type'] = 'text_plain';
  /* Field: Content: ISBN */
  $handler->display->display_options['fields']['field_isbn']['id'] = 'field_isbn';
  $handler->display->display_options['fields']['field_isbn']['table'] = 'field_data_field_isbn';
  $handler->display->display_options['fields']['field_isbn']['field'] = 'field_isbn';
  $handler->display->display_options['fields']['field_isbn']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_isbn']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_isbn']['type'] = 'text_plain';
  /* Field: Content: DOI */
  $handler->display->display_options['fields']['field_doi']['id'] = 'field_doi';
  $handler->display->display_options['fields']['field_doi']['table'] = 'field_data_field_doi';
  $handler->display->display_options['fields']['field_doi']['field'] = 'field_doi';
  $handler->display->display_options['fields']['field_doi']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_doi']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_doi']['type'] = 'text_plain';
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
  /* Field: Content: Hard copy order URL */
  $handler->display->display_options['fields']['field_hard_copy_order_url']['id'] = 'field_hard_copy_order_url';
  $handler->display->display_options['fields']['field_hard_copy_order_url']['table'] = 'field_data_field_hard_copy_order_url';
  $handler->display->display_options['fields']['field_hard_copy_order_url']['field'] = 'field_hard_copy_order_url';
  $handler->display->display_options['fields']['field_hard_copy_order_url']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_hard_copy_order_url']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_hard_copy_order_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_hard_copy_order_url']['type'] = 'link_plain';
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
  $handler->display->display_options['path'] = 'rdc/eige-publications/xml';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
    'page_1' => 0,
  );

  /* Display: CSV data export (BPfA) */
  $handler = $view->new_display('views_data_export', 'CSV data export (BPfA)', 'views_data_export_3');
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
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'bpfa_areas' => 'bpfa_areas',
    'administrative_data_sectors' => 0,
    'areas' => 0,
    'career_opportunity_types' => 0,
    'coverage' => 0,
    'document_type_categories' => 0,
    'document_types' => 0,
    'domain' => 0,
    'gender_story_topic' => 0,
    'primary_gender_story_topic' => 0,
    'gm_concepts_and_definitions' => 0,
    'good_practice_tools' => 0,
    'tags' => 0,
    'languages' => 0,
    'method_tool_target_groups' => 0,
    'newsletter' => 0,
    'procurement_types' => 0,
    'types' => 0,
    'resource_formats' => 0,
    'sex' => 0,
    'structure_scopes' => 0,
    'structure_types' => 0,
    'topic_categories' => 0,
    'topics' => 0,
    'gender_based_violence_types' => 0,
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
  /* Field: Content: Areas */
  $handler->display->display_options['fields']['field_activities']['id'] = 'field_activities';
  $handler->display->display_options['fields']['field_activities']['table'] = 'field_data_field_activities';
  $handler->display->display_options['fields']['field_activities']['field'] = 'field_activities';
  $handler->display->display_options['fields']['field_activities']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_activities']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_activities']['type'] = 'ds_taxonomy_separator_localized';
  $handler->display->display_options['fields']['field_activities']['delta_offset'] = '0';
  /* Field: Content: BPfA Area */
  $handler->display->display_options['fields']['field_bpfa_areas']['id'] = 'field_bpfa_areas';
  $handler->display->display_options['fields']['field_bpfa_areas']['table'] = 'field_data_field_bpfa_areas';
  $handler->display->display_options['fields']['field_bpfa_areas']['field'] = 'field_bpfa_areas';
  $handler->display->display_options['fields']['field_bpfa_areas']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_bpfa_areas']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_bpfa_areas']['type'] = 'ds_taxonomy_separator_localized';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author']['id'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['table'] = 'field_data_field_author';
  $handler->display->display_options['fields']['field_author']['field'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_author']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_author']['type'] = 'text_plain';
  /* Field: Content: Publication date */
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
  /* Field: Content: Publisher */
  $handler->display->display_options['fields']['field_publisher']['id'] = 'field_publisher';
  $handler->display->display_options['fields']['field_publisher']['table'] = 'field_data_field_publisher';
  $handler->display->display_options['fields']['field_publisher']['field'] = 'field_publisher';
  $handler->display->display_options['fields']['field_publisher']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_publisher']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_publisher']['type'] = 'text_plain';
  /* Field: Content: ISBN */
  $handler->display->display_options['fields']['field_isbn']['id'] = 'field_isbn';
  $handler->display->display_options['fields']['field_isbn']['table'] = 'field_data_field_isbn';
  $handler->display->display_options['fields']['field_isbn']['field'] = 'field_isbn';
  $handler->display->display_options['fields']['field_isbn']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_isbn']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_isbn']['type'] = 'text_plain';
  /* Field: Content: DOI */
  $handler->display->display_options['fields']['field_doi']['id'] = 'field_doi';
  $handler->display->display_options['fields']['field_doi']['table'] = 'field_data_field_doi';
  $handler->display->display_options['fields']['field_doi']['field'] = 'field_doi';
  $handler->display->display_options['fields']['field_doi']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_doi']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_doi']['type'] = 'text_plain';
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
  /* Field: Content: Hard copy order URL */
  $handler->display->display_options['fields']['field_hard_copy_order_url']['id'] = 'field_hard_copy_order_url';
  $handler->display->display_options['fields']['field_hard_copy_order_url']['table'] = 'field_data_field_hard_copy_order_url';
  $handler->display->display_options['fields']['field_hard_copy_order_url']['field'] = 'field_hard_copy_order_url';
  $handler->display->display_options['fields']['field_hard_copy_order_url']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_hard_copy_order_url']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_hard_copy_order_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_hard_copy_order_url']['type'] = 'link_plain';
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
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'term_node_tid';
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
    'publication' => 'publication',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Areas (field_activities) (translated) */
  $handler->display->display_options['filters']['field_activities_tid_i18n']['id'] = 'field_activities_tid_i18n';
  $handler->display->display_options['filters']['field_activities_tid_i18n']['table'] = 'field_data_field_activities';
  $handler->display->display_options['filters']['field_activities_tid_i18n']['field'] = 'field_activities_tid_i18n';
  $handler->display->display_options['filters']['field_activities_tid_i18n']['value'] = array(
    613 => '613',
  );
  $handler->display->display_options['filters']['field_activities_tid_i18n']['group'] = 1;
  $handler->display->display_options['filters']['field_activities_tid_i18n']['expose']['operator_id'] = 'field_activities_tid_i18n_op';
  $handler->display->display_options['filters']['field_activities_tid_i18n']['expose']['label'] = 'Areas (field_activities) (translated)';
  $handler->display->display_options['filters']['field_activities_tid_i18n']['expose']['operator'] = 'field_activities_tid_i18n_op';
  $handler->display->display_options['filters']['field_activities_tid_i18n']['expose']['identifier'] = 'field_activities_tid_i18n';
  $handler->display->display_options['filters']['field_activities_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_activities_tid_i18n']['vocabulary'] = 'areas';
  $handler->display->display_options['filters']['field_activities_tid_i18n']['error_message'] = FALSE;
  $handler->display->display_options['path'] = 'monitoring-the-bpfa/csv';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
    'page' => 0,
  );

  /* Display: XML data export (BPfA) */
  $handler = $view->new_display('views_data_export', 'XML data export (BPfA)', 'views_data_export_4');
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
    'field_author' => 'field_author',
    'field_publisher' => 'field_publisher',
    'field_isbn' => 'field_isbn',
    'field_doi' => 'field_doi',
    'field_keywords' => 'field_keywords',
    'body' => 'body',
    'field_hard_copy_order_url' => 'field_hard_copy_order_url',
  );
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'bpfa_areas' => 'bpfa_areas',
    'administrative_data_sectors' => 0,
    'areas' => 0,
    'career_opportunity_types' => 0,
    'coverage' => 0,
    'document_type_categories' => 0,
    'document_types' => 0,
    'domain' => 0,
    'gender_story_topic' => 0,
    'primary_gender_story_topic' => 0,
    'gm_concepts_and_definitions' => 0,
    'good_practice_tools' => 0,
    'tags' => 0,
    'languages' => 0,
    'method_tool_target_groups' => 0,
    'newsletter' => 0,
    'procurement_types' => 0,
    'types' => 0,
    'resource_formats' => 0,
    'sex' => 0,
    'structure_scopes' => 0,
    'structure_types' => 0,
    'topic_categories' => 0,
    'topics' => 0,
    'gender_based_violence_types' => 0,
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
  /* Field: Content: Areas */
  $handler->display->display_options['fields']['field_activities']['id'] = 'field_activities';
  $handler->display->display_options['fields']['field_activities']['table'] = 'field_data_field_activities';
  $handler->display->display_options['fields']['field_activities']['field'] = 'field_activities';
  $handler->display->display_options['fields']['field_activities']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_activities']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_activities']['type'] = 'ds_taxonomy_separator_localized';
  $handler->display->display_options['fields']['field_activities']['delta_offset'] = '0';
  /* Field: Content: BPfA Area */
  $handler->display->display_options['fields']['field_bpfa_areas']['id'] = 'field_bpfa_areas';
  $handler->display->display_options['fields']['field_bpfa_areas']['table'] = 'field_data_field_bpfa_areas';
  $handler->display->display_options['fields']['field_bpfa_areas']['field'] = 'field_bpfa_areas';
  $handler->display->display_options['fields']['field_bpfa_areas']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_bpfa_areas']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_bpfa_areas']['type'] = 'ds_taxonomy_separator_localized';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author']['id'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['table'] = 'field_data_field_author';
  $handler->display->display_options['fields']['field_author']['field'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_author']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_author']['type'] = 'text_plain';
  /* Field: Content: Publication date */
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
  /* Field: Content: Publisher */
  $handler->display->display_options['fields']['field_publisher']['id'] = 'field_publisher';
  $handler->display->display_options['fields']['field_publisher']['table'] = 'field_data_field_publisher';
  $handler->display->display_options['fields']['field_publisher']['field'] = 'field_publisher';
  $handler->display->display_options['fields']['field_publisher']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_publisher']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_publisher']['type'] = 'text_plain';
  /* Field: Content: ISBN */
  $handler->display->display_options['fields']['field_isbn']['id'] = 'field_isbn';
  $handler->display->display_options['fields']['field_isbn']['table'] = 'field_data_field_isbn';
  $handler->display->display_options['fields']['field_isbn']['field'] = 'field_isbn';
  $handler->display->display_options['fields']['field_isbn']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_isbn']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_isbn']['type'] = 'text_plain';
  /* Field: Content: DOI */
  $handler->display->display_options['fields']['field_doi']['id'] = 'field_doi';
  $handler->display->display_options['fields']['field_doi']['table'] = 'field_data_field_doi';
  $handler->display->display_options['fields']['field_doi']['field'] = 'field_doi';
  $handler->display->display_options['fields']['field_doi']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_doi']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_doi']['type'] = 'text_plain';
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
  /* Field: Content: Hard copy order URL */
  $handler->display->display_options['fields']['field_hard_copy_order_url']['id'] = 'field_hard_copy_order_url';
  $handler->display->display_options['fields']['field_hard_copy_order_url']['table'] = 'field_data_field_hard_copy_order_url';
  $handler->display->display_options['fields']['field_hard_copy_order_url']['field'] = 'field_hard_copy_order_url';
  $handler->display->display_options['fields']['field_hard_copy_order_url']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_hard_copy_order_url']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_hard_copy_order_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_hard_copy_order_url']['type'] = 'link_plain';
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
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'term_node_tid';
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
    'publication' => 'publication',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Areas (field_activities) (translated) */
  $handler->display->display_options['filters']['field_activities_tid_i18n']['id'] = 'field_activities_tid_i18n';
  $handler->display->display_options['filters']['field_activities_tid_i18n']['table'] = 'field_data_field_activities';
  $handler->display->display_options['filters']['field_activities_tid_i18n']['field'] = 'field_activities_tid_i18n';
  $handler->display->display_options['filters']['field_activities_tid_i18n']['value'] = array(
    613 => '613',
  );
  $handler->display->display_options['filters']['field_activities_tid_i18n']['group'] = 1;
  $handler->display->display_options['filters']['field_activities_tid_i18n']['expose']['operator_id'] = 'field_activities_tid_i18n_op';
  $handler->display->display_options['filters']['field_activities_tid_i18n']['expose']['label'] = 'Areas (field_activities) (translated)';
  $handler->display->display_options['filters']['field_activities_tid_i18n']['expose']['operator'] = 'field_activities_tid_i18n_op';
  $handler->display->display_options['filters']['field_activities_tid_i18n']['expose']['identifier'] = 'field_activities_tid_i18n';
  $handler->display->display_options['filters']['field_activities_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_activities_tid_i18n']['vocabulary'] = 'areas';
  $handler->display->display_options['filters']['field_activities_tid_i18n']['error_message'] = FALSE;
  $handler->display->display_options['path'] = 'monitoring-the-bpfa/xml';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
    'page' => 0,
  );
  $export['eige_publications'] = $view;

  return $export;
}

<?php
/**
 * @file
 * eige_studies.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function eige_studies_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'men_and_gender_equality_methods_tools';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Men and Gender equality Methods/Tools';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Men and Gender Equality - Activities';
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
    'name_list' => array(
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
    'field_mt_target_group_tid_i18n' => array(
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
    'field_type_tid_i18n' => array(
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
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['more_button_text'] = 'Load more activities';
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
  $handler->display->display_options['header']['result']['content'] = '<div class="view-results-count"><strong>@total</strong> Activities found</div>';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p><em>There are no results that match the selected criteria</em></p>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: Content: Topic (field_topic) */
  $handler->display->display_options['relationships']['field_topic_tid']['id'] = 'field_topic_tid';
  $handler->display->display_options['relationships']['field_topic_tid']['table'] = 'field_data_field_topic';
  $handler->display->display_options['relationships']['field_topic_tid']['field'] = 'field_topic_tid';
  $handler->display->display_options['relationships']['field_topic_tid']['label'] = 'Topic';
  $handler->display->display_options['relationships']['field_topic_tid']['required'] = TRUE;
  /* Relationship: Content: Country (field_country) */
  $handler->display->display_options['relationships']['field_country_iso2']['id'] = 'field_country_iso2';
  $handler->display->display_options['relationships']['field_country_iso2']['table'] = 'field_data_field_country';
  $handler->display->display_options['relationships']['field_country_iso2']['field'] = 'field_country_iso2';
  $handler->display->display_options['relationships']['field_country_iso2']['label'] = 'Country';
  $handler->display->display_options['relationships']['field_country_iso2']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Display date (field_display_date) */
  $handler->display->display_options['sorts']['field_display_date_value']['id'] = 'field_display_date_value';
  $handler->display->display_options['sorts']['field_display_date_value']['table'] = 'field_data_field_display_date';
  $handler->display->display_options['sorts']['field_display_date_value']['field'] = 'field_display_date_value';
  $handler->display->display_options['sorts']['field_display_date_value']['order'] = 'DESC';
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
    'method_tool' => 'method_tool',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Taxonomy term: Topic category (field_topic_category) */
  $handler->display->display_options['filters']['field_topic_category_tid']['id'] = 'field_topic_category_tid';
  $handler->display->display_options['filters']['field_topic_category_tid']['table'] = 'field_data_field_topic_category';
  $handler->display->display_options['filters']['field_topic_category_tid']['field'] = 'field_topic_category_tid';
  $handler->display->display_options['filters']['field_topic_category_tid']['relationship'] = 'field_topic_tid';
  $handler->display->display_options['filters']['field_topic_category_tid']['value'] = array(
    0 => '784',
  );
  $handler->display->display_options['filters']['field_topic_category_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_topic_category_tid']['vocabulary'] = 'topic_categories';
  /* Filter criterion: Countries: Name - list */
  $handler->display->display_options['filters']['name_list']['id'] = 'name_list';
  $handler->display->display_options['filters']['name_list']['table'] = 'countries_country';
  $handler->display->display_options['filters']['name_list']['field'] = 'name_list';
  $handler->display->display_options['filters']['name_list']['relationship'] = 'field_country_iso2';
  $handler->display->display_options['filters']['name_list']['group'] = 1;
  $handler->display->display_options['filters']['name_list']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name_list']['expose']['operator_id'] = 'name_list_op';
  $handler->display->display_options['filters']['name_list']['expose']['label'] = 'Country';
  $handler->display->display_options['filters']['name_list']['expose']['operator'] = 'name_list_op';
  $handler->display->display_options['filters']['name_list']['expose']['identifier'] = 'c';
  $handler->display->display_options['filters']['name_list']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['name_list']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Target group (field_mt_target_group) (translated) */
  $handler->display->display_options['filters']['field_mt_target_group_tid_i18n']['id'] = 'field_mt_target_group_tid_i18n';
  $handler->display->display_options['filters']['field_mt_target_group_tid_i18n']['table'] = 'field_data_field_mt_target_group';
  $handler->display->display_options['filters']['field_mt_target_group_tid_i18n']['field'] = 'field_mt_target_group_tid_i18n';
  $handler->display->display_options['filters']['field_mt_target_group_tid_i18n']['group'] = 1;
  $handler->display->display_options['filters']['field_mt_target_group_tid_i18n']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_mt_target_group_tid_i18n']['expose']['operator_id'] = 'field_mt_target_group_tid_i18n_op';
  $handler->display->display_options['filters']['field_mt_target_group_tid_i18n']['expose']['label'] = 'Target group';
  $handler->display->display_options['filters']['field_mt_target_group_tid_i18n']['expose']['operator'] = 'field_mt_target_group_tid_i18n_op';
  $handler->display->display_options['filters']['field_mt_target_group_tid_i18n']['expose']['identifier'] = 'tg';
  $handler->display->display_options['filters']['field_mt_target_group_tid_i18n']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_mt_target_group_tid_i18n']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_mt_target_group_tid_i18n']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_mt_target_group_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_mt_target_group_tid_i18n']['vocabulary'] = 'method_tool_target_groups';
  /* Filter criterion: Content: Type (field_type) (translated) */
  $handler->display->display_options['filters']['field_type_tid_i18n']['id'] = 'field_type_tid_i18n';
  $handler->display->display_options['filters']['field_type_tid_i18n']['table'] = 'field_data_field_type';
  $handler->display->display_options['filters']['field_type_tid_i18n']['field'] = 'field_type_tid_i18n';
  $handler->display->display_options['filters']['field_type_tid_i18n']['group'] = 1;
  $handler->display->display_options['filters']['field_type_tid_i18n']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_type_tid_i18n']['expose']['operator_id'] = 'field_type_tid_i18n_op';
  $handler->display->display_options['filters']['field_type_tid_i18n']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_type_tid_i18n']['expose']['operator'] = 'field_type_tid_i18n_op';
  $handler->display->display_options['filters']['field_type_tid_i18n']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['field_type_tid_i18n']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_type_tid_i18n']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_type_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_type_tid_i18n']['vocabulary'] = 'types';
  $handler->display->display_options['filters']['field_type_tid_i18n']['error_message'] = FALSE;
  /* Filter criterion: Global: Populate filters */
  $handler->display->display_options['filters']['populate']['id'] = 'populate';
  $handler->display->display_options['filters']['populate']['table'] = 'views_filters_populate';
  $handler->display->display_options['filters']['populate']['field'] = 'populate';
  $handler->display->display_options['filters']['populate']['group'] = 1;
  $handler->display->display_options['filters']['populate']['exposed'] = TRUE;
  $handler->display->display_options['filters']['populate']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['populate']['expose']['label'] = 'Search Methods and tools';
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'more-areas/men-and-gender-equality/activities';

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
  /* Field: Content: Title in English */
  $handler->display->display_options['fields']['field_english_title']['id'] = 'field_english_title';
  $handler->display->display_options['fields']['field_english_title']['table'] = 'field_data_field_english_title';
  $handler->display->display_options['fields']['field_english_title']['field'] = 'field_english_title';
  $handler->display->display_options['fields']['field_english_title']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_english_title']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_english_title']['type'] = 'text_plain';
  /* Field: Content: Unofficial title in English */
  $handler->display->display_options['fields']['field_unofficial_english_title']['id'] = 'field_unofficial_english_title';
  $handler->display->display_options['fields']['field_unofficial_english_title']['table'] = 'field_data_field_unofficial_english_title';
  $handler->display->display_options['fields']['field_unofficial_english_title']['field'] = 'field_unofficial_english_title';
  $handler->display->display_options['fields']['field_unofficial_english_title']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_unofficial_english_title']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_unofficial_english_title']['type'] = 'text_plain';
  /* Field: Content: Country */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_country']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_country']['type'] = 'country_default_i18n';
  /* Field: Content: Topic */
  $handler->display->display_options['fields']['field_topic']['id'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic']['table'] = 'field_data_field_topic';
  $handler->display->display_options['fields']['field_topic']['field'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_topic']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_topic']['type'] = 'ds_taxonomy_separator_localized';
  /* Field: Content: Types of GBV */
  $handler->display->display_options['fields']['field_violence_types']['id'] = 'field_violence_types';
  $handler->display->display_options['fields']['field_violence_types']['table'] = 'field_data_field_violence_types';
  $handler->display->display_options['fields']['field_violence_types']['field'] = 'field_violence_types';
  $handler->display->display_options['fields']['field_violence_types']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_violence_types']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_violence_types']['type'] = 'ds_taxonomy_separator_localized';
  $handler->display->display_options['fields']['field_violence_types']['delta_offset'] = '0';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_type']['id'] = 'field_type';
  $handler->display->display_options['fields']['field_type']['table'] = 'field_data_field_type';
  $handler->display->display_options['fields']['field_type']['field'] = 'field_type';
  $handler->display->display_options['fields']['field_type']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_type']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_type']['type'] = 'ds_taxonomy_separator_localized';
  $handler->display->display_options['fields']['field_type']['delta_offset'] = '0';
  /* Field: Content: Start date */
  $handler->display->display_options['fields']['field_start_date']['id'] = 'field_start_date';
  $handler->display->display_options['fields']['field_start_date']['table'] = 'field_data_field_start_date';
  $handler->display->display_options['fields']['field_start_date']['field'] = 'field_start_date';
  $handler->display->display_options['fields']['field_start_date']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_start_date']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_start_date']['settings'] = array(
    'format_type' => 'eige_short_m_d_y',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: End date */
  $handler->display->display_options['fields']['field_mt_end_date']['id'] = 'field_mt_end_date';
  $handler->display->display_options['fields']['field_mt_end_date']['table'] = 'field_data_field_mt_end_date';
  $handler->display->display_options['fields']['field_mt_end_date']['field'] = 'field_mt_end_date';
  $handler->display->display_options['fields']['field_mt_end_date']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_mt_end_date']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_mt_end_date']['settings'] = array(
    'format_type' => 'eige_short_m_d_y',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Ongoing */
  $handler->display->display_options['fields']['field_mt_ongoing']['id'] = 'field_mt_ongoing';
  $handler->display->display_options['fields']['field_mt_ongoing']['table'] = 'field_data_field_mt_ongoing';
  $handler->display->display_options['fields']['field_mt_ongoing']['field'] = 'field_mt_ongoing';
  $handler->display->display_options['fields']['field_mt_ongoing']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_mt_ongoing']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_mt_ongoing']['type'] = 'list_key';
  /* Field: Content: Language */
  $handler->display->display_options['fields']['field_language']['id'] = 'field_language';
  $handler->display->display_options['fields']['field_language']['table'] = 'field_data_field_language';
  $handler->display->display_options['fields']['field_language']['field'] = 'field_language';
  $handler->display->display_options['fields']['field_language']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_language']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_language']['type'] = 'ds_taxonomy_separator_localized';
  $handler->display->display_options['fields']['field_language']['delta_offset'] = '0';
  /* Field: Content: Keywords */
  $handler->display->display_options['fields']['field_keywords']['id'] = 'field_keywords';
  $handler->display->display_options['fields']['field_keywords']['table'] = 'field_data_field_keywords';
  $handler->display->display_options['fields']['field_keywords']['field'] = 'field_keywords';
  $handler->display->display_options['fields']['field_keywords']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_keywords']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_keywords']['type'] = 'ds_taxonomy_separator_localized';
  $handler->display->display_options['fields']['field_keywords']['delta_offset'] = '0';
  /* Field: Content: Coverage */
  $handler->display->display_options['fields']['field_coverage']['id'] = 'field_coverage';
  $handler->display->display_options['fields']['field_coverage']['table'] = 'field_data_field_coverage';
  $handler->display->display_options['fields']['field_coverage']['field'] = 'field_coverage';
  $handler->display->display_options['fields']['field_coverage']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_coverage']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_coverage']['type'] = 'text_plain';
  /* Field: Content: Target group */
  $handler->display->display_options['fields']['field_mt_target_group']['id'] = 'field_mt_target_group';
  $handler->display->display_options['fields']['field_mt_target_group']['table'] = 'field_data_field_mt_target_group';
  $handler->display->display_options['fields']['field_mt_target_group']['field'] = 'field_mt_target_group';
  $handler->display->display_options['fields']['field_mt_target_group']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_mt_target_group']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_mt_target_group']['type'] = 'ds_taxonomy_separator_localized';
  $handler->display->display_options['fields']['field_mt_target_group']['delta_offset'] = '0';
  /* Field: Content: Sector */
  $handler->display->display_options['fields']['field_sector']['id'] = 'field_sector';
  $handler->display->display_options['fields']['field_sector']['table'] = 'field_data_field_sector';
  $handler->display->display_options['fields']['field_sector']['field'] = 'field_sector';
  $handler->display->display_options['fields']['field_sector']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_sector']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_sector']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_sector']['delta_offset'] = '0';
  /* Field: Content: Tool Category */
  $handler->display->display_options['fields']['field_category']['id'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['table'] = 'field_data_field_category';
  $handler->display->display_options['fields']['field_category']['field'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_category']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_category']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_category']['delta_offset'] = '0';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = TRUE;
  /* Field: Content: Funding body */
  $handler->display->display_options['fields']['field_mt_funding_body']['id'] = 'field_mt_funding_body';
  $handler->display->display_options['fields']['field_mt_funding_body']['table'] = 'field_data_field_mt_funding_body';
  $handler->display->display_options['fields']['field_mt_funding_body']['field'] = 'field_mt_funding_body';
  $handler->display->display_options['fields']['field_mt_funding_body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_mt_funding_body']['alter']['nl2br'] = TRUE;
  /* Field: Content: Aims and objectives */
  $handler->display->display_options['fields']['field_mt_aims_objectives']['id'] = 'field_mt_aims_objectives';
  $handler->display->display_options['fields']['field_mt_aims_objectives']['table'] = 'field_data_field_mt_aims_objectives';
  $handler->display->display_options['fields']['field_mt_aims_objectives']['field'] = 'field_mt_aims_objectives';
  $handler->display->display_options['fields']['field_mt_aims_objectives']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_mt_aims_objectives']['alter']['nl2br'] = TRUE;
  /* Field: Content: Results and impact */
  $handler->display->display_options['fields']['field_mt_results_impact']['id'] = 'field_mt_results_impact';
  $handler->display->display_options['fields']['field_mt_results_impact']['table'] = 'field_data_field_mt_results_impact';
  $handler->display->display_options['fields']['field_mt_results_impact']['field'] = 'field_mt_results_impact';
  $handler->display->display_options['fields']['field_mt_results_impact']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_mt_results_impact']['alter']['nl2br'] = TRUE;
  /* Field: Content: Publication information */
  $handler->display->display_options['fields']['field_mt_publication_information']['id'] = 'field_mt_publication_information';
  $handler->display->display_options['fields']['field_mt_publication_information']['table'] = 'field_data_field_mt_publication_information';
  $handler->display->display_options['fields']['field_mt_publication_information']['field'] = 'field_mt_publication_information';
  $handler->display->display_options['fields']['field_mt_publication_information']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_mt_publication_information']['alter']['nl2br'] = TRUE;
  /* Field: Content: Creator/owner/responsible institution */
  $handler->display->display_options['fields']['field_mt_creator_owner']['id'] = 'field_mt_creator_owner';
  $handler->display->display_options['fields']['field_mt_creator_owner']['table'] = 'field_data_field_mt_creator_owner';
  $handler->display->display_options['fields']['field_mt_creator_owner']['field'] = 'field_mt_creator_owner';
  $handler->display->display_options['fields']['field_mt_creator_owner']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_mt_creator_owner']['alter']['nl2br'] = TRUE;
  /* Field: Content: Contents/activities/services */
  $handler->display->display_options['fields']['field_mt_contents_activities']['id'] = 'field_mt_contents_activities';
  $handler->display->display_options['fields']['field_mt_contents_activities']['table'] = 'field_data_field_mt_contents_activities';
  $handler->display->display_options['fields']['field_mt_contents_activities']['field'] = 'field_mt_contents_activities';
  $handler->display->display_options['fields']['field_mt_contents_activities']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_mt_contents_activities']['alter']['nl2br'] = TRUE;
  /* Field: Content: Additional Information */
  $handler->display->display_options['fields']['field_additional_information']['id'] = 'field_additional_information';
  $handler->display->display_options['fields']['field_additional_information']['table'] = 'field_data_field_additional_information';
  $handler->display->display_options['fields']['field_additional_information']['field'] = 'field_additional_information';
  $handler->display->display_options['fields']['field_additional_information']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_additional_information']['alter']['nl2br'] = TRUE;
  /* Field: Content: Weblink(s) */
  $handler->display->display_options['fields']['field_weblink']['id'] = 'field_weblink';
  $handler->display->display_options['fields']['field_weblink']['table'] = 'field_data_field_weblink';
  $handler->display->display_options['fields']['field_weblink']['field'] = 'field_weblink';
  $handler->display->display_options['fields']['field_weblink']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_weblink']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_weblink']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_weblink']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_weblink']['delta_offset'] = '0';
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
  $handler->display->display_options['path'] = 'more-areas/men-and-gender-equality/activities/csv';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
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
    'field_mt_funding_body' => 'field_mt_funding_body',
    'field_mt_aims_objectives' => 'field_mt_aims_objectives',
    'field_mt_results_impact' => 'field_mt_results_impact',
    'field_mt_publication_information' => 'field_mt_publication_information',
    'field_mt_creator_owner' => 'field_mt_creator_owner',
    'field_mt_contents_activities' => 'field_mt_contents_activities',
    'field_additional_information' => 'field_additional_information',
  );
  $handler->display->display_options['style_options']['cdata_wrapper'] = array(
    'title_field' => 'title_field',
    'field_english_title' => 'field_english_title',
    'field_unofficial_english_title' => 'field_unofficial_english_title',
    'field_keywords' => 'field_keywords',
    'field_coverage' => 'field_coverage',
    'field_mt_target_group' => 'field_mt_target_group',
    'field_sector' => 'field_sector',
    'field_category' => 'field_category',
    'body' => 'body',
    'field_mt_funding_body' => 'field_mt_funding_body',
    'field_mt_aims_objectives' => 'field_mt_aims_objectives',
    'field_mt_results_impact' => 'field_mt_results_impact',
    'field_mt_publication_information' => 'field_mt_publication_information',
    'field_mt_creator_owner' => 'field_mt_creator_owner',
    'field_mt_contents_activities' => 'field_mt_contents_activities',
    'field_additional_information' => 'field_additional_information',
    'field_weblink' => 'field_weblink',
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
  /* Field: Content: Title in English */
  $handler->display->display_options['fields']['field_english_title']['id'] = 'field_english_title';
  $handler->display->display_options['fields']['field_english_title']['table'] = 'field_data_field_english_title';
  $handler->display->display_options['fields']['field_english_title']['field'] = 'field_english_title';
  $handler->display->display_options['fields']['field_english_title']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_english_title']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_english_title']['type'] = 'text_plain';
  /* Field: Content: Unofficial title in English */
  $handler->display->display_options['fields']['field_unofficial_english_title']['id'] = 'field_unofficial_english_title';
  $handler->display->display_options['fields']['field_unofficial_english_title']['table'] = 'field_data_field_unofficial_english_title';
  $handler->display->display_options['fields']['field_unofficial_english_title']['field'] = 'field_unofficial_english_title';
  $handler->display->display_options['fields']['field_unofficial_english_title']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_unofficial_english_title']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_unofficial_english_title']['type'] = 'text_plain';
  /* Field: Content: Country */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_country']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_country']['type'] = 'country_default_i18n';
  /* Field: Content: Topic */
  $handler->display->display_options['fields']['field_topic']['id'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic']['table'] = 'field_data_field_topic';
  $handler->display->display_options['fields']['field_topic']['field'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_topic']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_topic']['type'] = 'ds_taxonomy_separator_localized';
  /* Field: Content: Types of GBV */
  $handler->display->display_options['fields']['field_violence_types']['id'] = 'field_violence_types';
  $handler->display->display_options['fields']['field_violence_types']['table'] = 'field_data_field_violence_types';
  $handler->display->display_options['fields']['field_violence_types']['field'] = 'field_violence_types';
  $handler->display->display_options['fields']['field_violence_types']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_violence_types']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_violence_types']['type'] = 'ds_taxonomy_separator_localized';
  $handler->display->display_options['fields']['field_violence_types']['delta_offset'] = '0';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_type']['id'] = 'field_type';
  $handler->display->display_options['fields']['field_type']['table'] = 'field_data_field_type';
  $handler->display->display_options['fields']['field_type']['field'] = 'field_type';
  $handler->display->display_options['fields']['field_type']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_type']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_type']['type'] = 'ds_taxonomy_separator_localized';
  $handler->display->display_options['fields']['field_type']['delta_offset'] = '0';
  /* Field: Content: Start date */
  $handler->display->display_options['fields']['field_start_date']['id'] = 'field_start_date';
  $handler->display->display_options['fields']['field_start_date']['table'] = 'field_data_field_start_date';
  $handler->display->display_options['fields']['field_start_date']['field'] = 'field_start_date';
  $handler->display->display_options['fields']['field_start_date']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_start_date']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_start_date']['settings'] = array(
    'format_type' => 'eige_short_m_d_y',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: End date */
  $handler->display->display_options['fields']['field_mt_end_date']['id'] = 'field_mt_end_date';
  $handler->display->display_options['fields']['field_mt_end_date']['table'] = 'field_data_field_mt_end_date';
  $handler->display->display_options['fields']['field_mt_end_date']['field'] = 'field_mt_end_date';
  $handler->display->display_options['fields']['field_mt_end_date']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_mt_end_date']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_mt_end_date']['settings'] = array(
    'format_type' => 'eige_short_m_d_y',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Ongoing */
  $handler->display->display_options['fields']['field_mt_ongoing']['id'] = 'field_mt_ongoing';
  $handler->display->display_options['fields']['field_mt_ongoing']['table'] = 'field_data_field_mt_ongoing';
  $handler->display->display_options['fields']['field_mt_ongoing']['field'] = 'field_mt_ongoing';
  $handler->display->display_options['fields']['field_mt_ongoing']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_mt_ongoing']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_mt_ongoing']['type'] = 'list_key';
  /* Field: Content: Language */
  $handler->display->display_options['fields']['field_language']['id'] = 'field_language';
  $handler->display->display_options['fields']['field_language']['table'] = 'field_data_field_language';
  $handler->display->display_options['fields']['field_language']['field'] = 'field_language';
  $handler->display->display_options['fields']['field_language']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_language']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_language']['type'] = 'ds_taxonomy_separator_localized';
  $handler->display->display_options['fields']['field_language']['delta_offset'] = '0';
  /* Field: Content: Keywords */
  $handler->display->display_options['fields']['field_keywords']['id'] = 'field_keywords';
  $handler->display->display_options['fields']['field_keywords']['table'] = 'field_data_field_keywords';
  $handler->display->display_options['fields']['field_keywords']['field'] = 'field_keywords';
  $handler->display->display_options['fields']['field_keywords']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_keywords']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_keywords']['type'] = 'ds_taxonomy_separator_localized';
  $handler->display->display_options['fields']['field_keywords']['delta_offset'] = '0';
  /* Field: Content: Coverage */
  $handler->display->display_options['fields']['field_coverage']['id'] = 'field_coverage';
  $handler->display->display_options['fields']['field_coverage']['table'] = 'field_data_field_coverage';
  $handler->display->display_options['fields']['field_coverage']['field'] = 'field_coverage';
  $handler->display->display_options['fields']['field_coverage']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_coverage']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_coverage']['type'] = 'text_plain';
  /* Field: Content: Target group */
  $handler->display->display_options['fields']['field_mt_target_group']['id'] = 'field_mt_target_group';
  $handler->display->display_options['fields']['field_mt_target_group']['table'] = 'field_data_field_mt_target_group';
  $handler->display->display_options['fields']['field_mt_target_group']['field'] = 'field_mt_target_group';
  $handler->display->display_options['fields']['field_mt_target_group']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_mt_target_group']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_mt_target_group']['type'] = 'ds_taxonomy_separator_localized';
  $handler->display->display_options['fields']['field_mt_target_group']['delta_offset'] = '0';
  /* Field: Content: Sector */
  $handler->display->display_options['fields']['field_sector']['id'] = 'field_sector';
  $handler->display->display_options['fields']['field_sector']['table'] = 'field_data_field_sector';
  $handler->display->display_options['fields']['field_sector']['field'] = 'field_sector';
  $handler->display->display_options['fields']['field_sector']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_sector']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_sector']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_sector']['delta_offset'] = '0';
  /* Field: Content: Tool Category */
  $handler->display->display_options['fields']['field_category']['id'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['table'] = 'field_data_field_category';
  $handler->display->display_options['fields']['field_category']['field'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_category']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_category']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_category']['delta_offset'] = '0';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = TRUE;
  /* Field: Content: Funding body */
  $handler->display->display_options['fields']['field_mt_funding_body']['id'] = 'field_mt_funding_body';
  $handler->display->display_options['fields']['field_mt_funding_body']['table'] = 'field_data_field_mt_funding_body';
  $handler->display->display_options['fields']['field_mt_funding_body']['field'] = 'field_mt_funding_body';
  $handler->display->display_options['fields']['field_mt_funding_body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_mt_funding_body']['alter']['nl2br'] = TRUE;
  /* Field: Content: Aims and objectives */
  $handler->display->display_options['fields']['field_mt_aims_objectives']['id'] = 'field_mt_aims_objectives';
  $handler->display->display_options['fields']['field_mt_aims_objectives']['table'] = 'field_data_field_mt_aims_objectives';
  $handler->display->display_options['fields']['field_mt_aims_objectives']['field'] = 'field_mt_aims_objectives';
  $handler->display->display_options['fields']['field_mt_aims_objectives']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_mt_aims_objectives']['alter']['nl2br'] = TRUE;
  /* Field: Content: Results and impact */
  $handler->display->display_options['fields']['field_mt_results_impact']['id'] = 'field_mt_results_impact';
  $handler->display->display_options['fields']['field_mt_results_impact']['table'] = 'field_data_field_mt_results_impact';
  $handler->display->display_options['fields']['field_mt_results_impact']['field'] = 'field_mt_results_impact';
  $handler->display->display_options['fields']['field_mt_results_impact']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_mt_results_impact']['alter']['nl2br'] = TRUE;
  /* Field: Content: Publication information */
  $handler->display->display_options['fields']['field_mt_publication_information']['id'] = 'field_mt_publication_information';
  $handler->display->display_options['fields']['field_mt_publication_information']['table'] = 'field_data_field_mt_publication_information';
  $handler->display->display_options['fields']['field_mt_publication_information']['field'] = 'field_mt_publication_information';
  $handler->display->display_options['fields']['field_mt_publication_information']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_mt_publication_information']['alter']['nl2br'] = TRUE;
  /* Field: Content: Creator/owner/responsible institution */
  $handler->display->display_options['fields']['field_mt_creator_owner']['id'] = 'field_mt_creator_owner';
  $handler->display->display_options['fields']['field_mt_creator_owner']['table'] = 'field_data_field_mt_creator_owner';
  $handler->display->display_options['fields']['field_mt_creator_owner']['field'] = 'field_mt_creator_owner';
  $handler->display->display_options['fields']['field_mt_creator_owner']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_mt_creator_owner']['alter']['nl2br'] = TRUE;
  /* Field: Content: Contents/activities/services */
  $handler->display->display_options['fields']['field_mt_contents_activities']['id'] = 'field_mt_contents_activities';
  $handler->display->display_options['fields']['field_mt_contents_activities']['table'] = 'field_data_field_mt_contents_activities';
  $handler->display->display_options['fields']['field_mt_contents_activities']['field'] = 'field_mt_contents_activities';
  $handler->display->display_options['fields']['field_mt_contents_activities']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_mt_contents_activities']['alter']['nl2br'] = TRUE;
  /* Field: Content: Additional Information */
  $handler->display->display_options['fields']['field_additional_information']['id'] = 'field_additional_information';
  $handler->display->display_options['fields']['field_additional_information']['table'] = 'field_data_field_additional_information';
  $handler->display->display_options['fields']['field_additional_information']['field'] = 'field_additional_information';
  $handler->display->display_options['fields']['field_additional_information']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_additional_information']['alter']['nl2br'] = TRUE;
  /* Field: Content: Weblink(s) */
  $handler->display->display_options['fields']['field_weblink']['id'] = 'field_weblink';
  $handler->display->display_options['fields']['field_weblink']['table'] = 'field_data_field_weblink';
  $handler->display->display_options['fields']['field_weblink']['field'] = 'field_weblink';
  $handler->display->display_options['fields']['field_weblink']['label'] = 'Weblinks';
  $handler->display->display_options['fields']['field_weblink']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_weblink']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_weblink']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_weblink']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_weblink']['delta_offset'] = '0';
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
  $handler->display->display_options['path'] = 'more-areas/men-and-gender-equality/activities/xml';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $export['men_and_gender_equality_methods_tools'] = $view;

  return $export;
}

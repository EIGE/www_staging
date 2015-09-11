<?php
/**
 * @file
 * eige_gender_based_violence.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function eige_gender_based_violence_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'gender_based_violence_good_practices';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Gender-Based violence Good practices';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Good practices combating gender-based violence';
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
    'field_topic_tid' => array(
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
    'field_gp_tool_tid' => array(
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
  $handler->display->display_options['pager']['options']['more_button_text'] = 'Load more good practices';
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
  $handler->display->display_options['header']['result']['content'] = '<div class="view-results-count"><strong>@total</strong> Good practices found</div>';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p><em>There are no results that match the selected criteria</em></p>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: Topic */
  $handler->display->display_options['relationships']['field_topic_tid']['id'] = 'field_topic_tid';
  $handler->display->display_options['relationships']['field_topic_tid']['table'] = 'field_data_field_topic';
  $handler->display->display_options['relationships']['field_topic_tid']['field'] = 'field_topic_tid';
  $handler->display->display_options['relationships']['field_topic_tid']['ui_name'] = 'Topic';
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
    'good_practice' => 'good_practice',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Taxonomy term: Topic category (field_topic_category) */
  $handler->display->display_options['filters']['field_topic_category_tid']['id'] = 'field_topic_category_tid';
  $handler->display->display_options['filters']['field_topic_category_tid']['table'] = 'field_data_field_topic_category';
  $handler->display->display_options['filters']['field_topic_category_tid']['field'] = 'field_topic_category_tid';
  $handler->display->display_options['filters']['field_topic_category_tid']['relationship'] = 'field_topic_tid';
  $handler->display->display_options['filters']['field_topic_category_tid']['value'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_topic_category_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_topic_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_topic_category_tid']['vocabulary'] = 'topic_categories';
  /* Filter criterion: Content: Topic (field_topic) */
  $handler->display->display_options['filters']['field_topic_tid']['id'] = 'field_topic_tid';
  $handler->display->display_options['filters']['field_topic_tid']['table'] = 'field_data_field_topic';
  $handler->display->display_options['filters']['field_topic_tid']['field'] = 'field_topic_tid';
  $handler->display->display_options['filters']['field_topic_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_topic_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_topic_tid']['expose']['operator_id'] = 'field_topic_tid_op';
  $handler->display->display_options['filters']['field_topic_tid']['expose']['label'] = 'Topic';
  $handler->display->display_options['filters']['field_topic_tid']['expose']['operator'] = 'field_topic_tid_op';
  $handler->display->display_options['filters']['field_topic_tid']['expose']['identifier'] = 'topic';
  $handler->display->display_options['filters']['field_topic_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_topic_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_topic_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_topic_tid']['vocabulary'] = 'topics';
  $handler->display->display_options['filters']['field_topic_tid']['error_message'] = FALSE;
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
  /* Filter criterion: Content: Tool (field_gp_tool) */
  $handler->display->display_options['filters']['field_gp_tool_tid']['id'] = 'field_gp_tool_tid';
  $handler->display->display_options['filters']['field_gp_tool_tid']['table'] = 'field_data_field_gp_tool';
  $handler->display->display_options['filters']['field_gp_tool_tid']['field'] = 'field_gp_tool_tid';
  $handler->display->display_options['filters']['field_gp_tool_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_gp_tool_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_gp_tool_tid']['expose']['operator_id'] = 'field_gp_tool_tid_op';
  $handler->display->display_options['filters']['field_gp_tool_tid']['expose']['label'] = 'Tool';
  $handler->display->display_options['filters']['field_gp_tool_tid']['expose']['operator'] = 'field_gp_tool_tid_op';
  $handler->display->display_options['filters']['field_gp_tool_tid']['expose']['identifier'] = 'tool';
  $handler->display->display_options['filters']['field_gp_tool_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_gp_tool_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_gp_tool_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_gp_tool_tid']['vocabulary'] = 'good_practice_tools';
  $handler->display->display_options['filters']['field_gp_tool_tid']['error_message'] = FALSE;
  /* Filter criterion: Global: Populate filters */
  $handler->display->display_options['filters']['populate']['id'] = 'populate';
  $handler->display->display_options['filters']['populate']['table'] = 'views_filters_populate';
  $handler->display->display_options['filters']['populate']['field'] = 'populate';
  $handler->display->display_options['filters']['populate']['group'] = 1;
  $handler->display->display_options['filters']['populate']['exposed'] = TRUE;
  $handler->display->display_options['filters']['populate']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['populate']['expose']['label'] = 'Search Good practices';
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
  $handler->display->display_options['path'] = 'gender-based-violence/good-practices';

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
  /* Field: Content: Tool */
  $handler->display->display_options['fields']['field_gp_tool']['id'] = 'field_gp_tool';
  $handler->display->display_options['fields']['field_gp_tool']['table'] = 'field_data_field_gp_tool';
  $handler->display->display_options['fields']['field_gp_tool']['field'] = 'field_gp_tool';
  $handler->display->display_options['fields']['field_gp_tool']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_gp_tool']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_gp_tool']['type'] = 'ds_taxonomy_separator_localized';
  $handler->display->display_options['fields']['field_gp_tool']['delta_offset'] = '0';
  /* Field: Content: Period */
  $handler->display->display_options['fields']['field_gp_period']['id'] = 'field_gp_period';
  $handler->display->display_options['fields']['field_gp_period']['table'] = 'field_data_field_gp_period';
  $handler->display->display_options['fields']['field_gp_period']['field'] = 'field_gp_period';
  $handler->display->display_options['fields']['field_gp_period']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_gp_period']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_gp_period']['type'] = 'text_plain';
  /* Field: Content: Keywords */
  $handler->display->display_options['fields']['field_keywords']['id'] = 'field_keywords';
  $handler->display->display_options['fields']['field_keywords']['table'] = 'field_data_field_keywords';
  $handler->display->display_options['fields']['field_keywords']['field'] = 'field_keywords';
  $handler->display->display_options['fields']['field_keywords']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_keywords']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_keywords']['type'] = 'ds_taxonomy_separator_localized';
  $handler->display->display_options['fields']['field_keywords']['delta_offset'] = '0';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: NB image copyright */
  $handler->display->display_options['fields']['field_gp_image_copyright']['id'] = 'field_gp_image_copyright';
  $handler->display->display_options['fields']['field_gp_image_copyright']['table'] = 'field_data_field_gp_image_copyright';
  $handler->display->display_options['fields']['field_gp_image_copyright']['field'] = 'field_gp_image_copyright';
  $handler->display->display_options['fields']['field_gp_image_copyright']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_gp_image_copyright']['alter']['nl2br'] = TRUE;
  /* Field: Content: Quote */
  $handler->display->display_options['fields']['field_quote']['id'] = 'field_quote';
  $handler->display->display_options['fields']['field_quote']['table'] = 'field_data_field_quote';
  $handler->display->display_options['fields']['field_quote']['field'] = 'field_quote';
  $handler->display->display_options['fields']['field_quote']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_quote']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_quote']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_quote']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Introduction */
  $handler->display->display_options['fields']['field_introduction']['id'] = 'field_introduction';
  $handler->display->display_options['fields']['field_introduction']['table'] = 'field_data_field_introduction';
  $handler->display->display_options['fields']['field_introduction']['field'] = 'field_introduction';
  $handler->display->display_options['fields']['field_introduction']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_introduction']['alter']['nl2br'] = TRUE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = TRUE;
  /* Field: Content: Contacts */
  $handler->display->display_options['fields']['field_gp_contacts']['id'] = 'field_gp_contacts';
  $handler->display->display_options['fields']['field_gp_contacts']['table'] = 'field_data_field_gp_contacts';
  $handler->display->display_options['fields']['field_gp_contacts']['field'] = 'field_gp_contacts';
  $handler->display->display_options['fields']['field_gp_contacts']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_gp_contacts']['alter']['nl2br'] = TRUE;
  /* Field: Content: Further information */
  $handler->display->display_options['fields']['field_gp_further_info']['id'] = 'field_gp_further_info';
  $handler->display->display_options['fields']['field_gp_further_info']['table'] = 'field_data_field_gp_further_info';
  $handler->display->display_options['fields']['field_gp_further_info']['field'] = 'field_gp_further_info';
  $handler->display->display_options['fields']['field_gp_further_info']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_gp_further_info']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_gp_further_info']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_gp_further_info']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_gp_further_info']['delta_offset'] = '0';
  /* Field: Content: Sources */
  $handler->display->display_options['fields']['field_gp_sources']['id'] = 'field_gp_sources';
  $handler->display->display_options['fields']['field_gp_sources']['table'] = 'field_data_field_gp_sources';
  $handler->display->display_options['fields']['field_gp_sources']['field'] = 'field_gp_sources';
  $handler->display->display_options['fields']['field_gp_sources']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_gp_sources']['alter']['nl2br'] = TRUE;
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
  $handler->display->display_options['path'] = 'gender-based-violence/good-practices/csv';
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
    'field_image' => 'field_image',
    'field_gp_image_copyright' => 'field_gp_image_copyright',
    'field_introduction' => 'field_introduction',
    'body' => 'body',
    'field_gp_contacts' => 'field_gp_contacts',
    'field_gp_sources' => 'field_gp_sources',
  );
  $handler->display->display_options['style_options']['cdata_wrapper'] = array(
    'title_field' => 'title_field',
    'field_english_title' => 'field_english_title',
    'field_gp_tool' => 'field_gp_tool',
    'field_gp_period' => 'field_gp_period',
    'field_keywords' => 'field_keywords',
    'field_image' => 'field_image',
    'field_gp_image_copyright' => 'field_gp_image_copyright',
    'field_quote' => 'field_quote',
    'field_introduction' => 'field_introduction',
    'body' => 'body',
    'field_gp_contacts' => 'field_gp_contacts',
    'field_gp_further_info' => 'field_gp_further_info',
    'field_gp_sources' => 'field_gp_sources',
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
  /* Field: Content: Tool */
  $handler->display->display_options['fields']['field_gp_tool']['id'] = 'field_gp_tool';
  $handler->display->display_options['fields']['field_gp_tool']['table'] = 'field_data_field_gp_tool';
  $handler->display->display_options['fields']['field_gp_tool']['field'] = 'field_gp_tool';
  $handler->display->display_options['fields']['field_gp_tool']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_gp_tool']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_gp_tool']['type'] = 'ds_taxonomy_separator_localized';
  $handler->display->display_options['fields']['field_gp_tool']['delta_offset'] = '0';
  /* Field: Content: Period */
  $handler->display->display_options['fields']['field_gp_period']['id'] = 'field_gp_period';
  $handler->display->display_options['fields']['field_gp_period']['table'] = 'field_data_field_gp_period';
  $handler->display->display_options['fields']['field_gp_period']['field'] = 'field_gp_period';
  $handler->display->display_options['fields']['field_gp_period']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_gp_period']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_gp_period']['type'] = 'text_plain';
  /* Field: Content: Keywords */
  $handler->display->display_options['fields']['field_keywords']['id'] = 'field_keywords';
  $handler->display->display_options['fields']['field_keywords']['table'] = 'field_data_field_keywords';
  $handler->display->display_options['fields']['field_keywords']['field'] = 'field_keywords';
  $handler->display->display_options['fields']['field_keywords']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_keywords']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_keywords']['type'] = 'ds_taxonomy_separator_localized';
  $handler->display->display_options['fields']['field_keywords']['delta_offset'] = '0';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: NB image copyright */
  $handler->display->display_options['fields']['field_gp_image_copyright']['id'] = 'field_gp_image_copyright';
  $handler->display->display_options['fields']['field_gp_image_copyright']['table'] = 'field_data_field_gp_image_copyright';
  $handler->display->display_options['fields']['field_gp_image_copyright']['field'] = 'field_gp_image_copyright';
  $handler->display->display_options['fields']['field_gp_image_copyright']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_gp_image_copyright']['alter']['nl2br'] = TRUE;
  /* Field: Content: Quote */
  $handler->display->display_options['fields']['field_quote']['id'] = 'field_quote';
  $handler->display->display_options['fields']['field_quote']['table'] = 'field_data_field_quote';
  $handler->display->display_options['fields']['field_quote']['field'] = 'field_quote';
  $handler->display->display_options['fields']['field_quote']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_quote']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_quote']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_quote']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Introduction */
  $handler->display->display_options['fields']['field_introduction']['id'] = 'field_introduction';
  $handler->display->display_options['fields']['field_introduction']['table'] = 'field_data_field_introduction';
  $handler->display->display_options['fields']['field_introduction']['field'] = 'field_introduction';
  $handler->display->display_options['fields']['field_introduction']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_introduction']['alter']['nl2br'] = TRUE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = TRUE;
  /* Field: Content: Contacts */
  $handler->display->display_options['fields']['field_gp_contacts']['id'] = 'field_gp_contacts';
  $handler->display->display_options['fields']['field_gp_contacts']['table'] = 'field_data_field_gp_contacts';
  $handler->display->display_options['fields']['field_gp_contacts']['field'] = 'field_gp_contacts';
  $handler->display->display_options['fields']['field_gp_contacts']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_gp_contacts']['alter']['nl2br'] = TRUE;
  /* Field: Content: Further information */
  $handler->display->display_options['fields']['field_gp_further_info']['id'] = 'field_gp_further_info';
  $handler->display->display_options['fields']['field_gp_further_info']['table'] = 'field_data_field_gp_further_info';
  $handler->display->display_options['fields']['field_gp_further_info']['field'] = 'field_gp_further_info';
  $handler->display->display_options['fields']['field_gp_further_info']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_gp_further_info']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_gp_further_info']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_gp_further_info']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_gp_further_info']['delta_offset'] = '0';
  /* Field: Content: Sources */
  $handler->display->display_options['fields']['field_gp_sources']['id'] = 'field_gp_sources';
  $handler->display->display_options['fields']['field_gp_sources']['table'] = 'field_data_field_gp_sources';
  $handler->display->display_options['fields']['field_gp_sources']['field'] = 'field_gp_sources';
  $handler->display->display_options['fields']['field_gp_sources']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_gp_sources']['alter']['nl2br'] = TRUE;
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
  $handler->display->display_options['path'] = 'gender-based-violence/good-practices/xml';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $export['gender_based_violence_good_practices'] = $view;

  $view = new view();
  $view->name = 'gender_based_violence_methods_tools';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Gender-Based violence Methods/Tools';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Methods and tools combating gender-based violence';
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
    'field_topic_tid' => array(
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
    'field_sector_target_id_entityreference_filter' => array(
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
    'field_category_target_id_entityreference_filter' => array(
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
    'field_violence_types_tid' => array(
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
  $handler->display->display_options['pager']['options']['more_button_text'] = 'Load more methods and tools';
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
  $handler->display->display_options['header']['result']['content'] = '<div class="view-results-count"><strong>@total</strong> Methods and tools found</div>';
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
    2 => '2',
  );
  $handler->display->display_options['filters']['field_topic_category_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_topic_category_tid']['type'] = 'select';
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
  /* Filter criterion: Content: Types of GBV (field_violence_types) */
  $handler->display->display_options['filters']['field_violence_types_tid']['id'] = 'field_violence_types_tid';
  $handler->display->display_options['filters']['field_violence_types_tid']['table'] = 'field_data_field_violence_types';
  $handler->display->display_options['filters']['field_violence_types_tid']['field'] = 'field_violence_types_tid';
  $handler->display->display_options['filters']['field_violence_types_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_violence_types_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_violence_types_tid']['expose']['operator_id'] = 'field_violence_types_tid_op';
  $handler->display->display_options['filters']['field_violence_types_tid']['expose']['label'] = 'Type of GBV';
  $handler->display->display_options['filters']['field_violence_types_tid']['expose']['operator'] = 'field_violence_types_tid_op';
  $handler->display->display_options['filters']['field_violence_types_tid']['expose']['identifier'] = 'vt';
  $handler->display->display_options['filters']['field_violence_types_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_violence_types_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_violence_types_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_violence_types_tid']['vocabulary'] = 'gender_based_violence_types';
  $handler->display->display_options['filters']['field_violence_types_tid']['error_message'] = FALSE;
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
  $handler->display->display_options['path'] = 'gender-based-violence/methods-and-tools';

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
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_start_date']['id'] = 'field_start_date';
  $handler->display->display_options['fields']['field_start_date']['table'] = 'field_data_field_start_date';
  $handler->display->display_options['fields']['field_start_date']['field'] = 'field_start_date';
  $handler->display->display_options['fields']['field_start_date']['label'] = 'Start date';
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
  $handler->display->display_options['fields']['field_additional_information']['label'] = 'Additional information';
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
  $handler->display->display_options['path'] = 'gender-based-violence/methods-and-tools/csv';
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
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_start_date']['id'] = 'field_start_date';
  $handler->display->display_options['fields']['field_start_date']['table'] = 'field_data_field_start_date';
  $handler->display->display_options['fields']['field_start_date']['field'] = 'field_start_date';
  $handler->display->display_options['fields']['field_start_date']['label'] = 'Start date';
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
  $handler->display->display_options['fields']['field_additional_information']['label'] = 'Additional information';
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
  $handler->display->display_options['path'] = 'gender-based-violence/methods-and-tools/xml';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $export['gender_based_violence_methods_tools'] = $view;

  $view = new view();
  $view->name = 'gender_based_violence_resources';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Gender-Based violence Resources';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Literature and legislation';
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
    'field_topic_tid' => array(
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
    'field_sector_target_id_entityreference_filter' => array(
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
    'field_category_target_id_entityreference_filter' => array(
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
    'field_violence_types_tid' => array(
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
  $handler->display->display_options['pager']['options']['more_button_text'] = 'Load more resources';
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
  $handler->display->display_options['header']['result']['content'] = '<div class="view-results-count"><strong>@total</strong> Resources found</div>';
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
    'resource' => 'resource',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Taxonomy term: Topic category (field_topic_category) */
  $handler->display->display_options['filters']['field_topic_category_tid']['id'] = 'field_topic_category_tid';
  $handler->display->display_options['filters']['field_topic_category_tid']['table'] = 'field_data_field_topic_category';
  $handler->display->display_options['filters']['field_topic_category_tid']['field'] = 'field_topic_category_tid';
  $handler->display->display_options['filters']['field_topic_category_tid']['relationship'] = 'field_topic_tid';
  $handler->display->display_options['filters']['field_topic_category_tid']['value'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_topic_category_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_topic_category_tid']['type'] = 'select';
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
  /* Filter criterion: Content: Types of GBV (field_violence_types) */
  $handler->display->display_options['filters']['field_violence_types_tid']['id'] = 'field_violence_types_tid';
  $handler->display->display_options['filters']['field_violence_types_tid']['table'] = 'field_data_field_violence_types';
  $handler->display->display_options['filters']['field_violence_types_tid']['field'] = 'field_violence_types_tid';
  $handler->display->display_options['filters']['field_violence_types_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_violence_types_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_violence_types_tid']['expose']['operator_id'] = 'field_violence_types_tid_op';
  $handler->display->display_options['filters']['field_violence_types_tid']['expose']['label'] = 'Type of GBV';
  $handler->display->display_options['filters']['field_violence_types_tid']['expose']['operator'] = 'field_violence_types_tid_op';
  $handler->display->display_options['filters']['field_violence_types_tid']['expose']['identifier'] = 'vt';
  $handler->display->display_options['filters']['field_violence_types_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_violence_types_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_violence_types_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_violence_types_tid']['vocabulary'] = 'gender_based_violence_types';
  $handler->display->display_options['filters']['field_violence_types_tid']['error_message'] = FALSE;
  /* Filter criterion: Global: Populate filters */
  $handler->display->display_options['filters']['populate']['id'] = 'populate';
  $handler->display->display_options['filters']['populate']['table'] = 'views_filters_populate';
  $handler->display->display_options['filters']['populate']['field'] = 'populate';
  $handler->display->display_options['filters']['populate']['group'] = 1;
  $handler->display->display_options['filters']['populate']['exposed'] = TRUE;
  $handler->display->display_options['filters']['populate']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['populate']['expose']['label'] = 'Search Resources';
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
  $handler->display->display_options['path'] = 'gender-based-violence/literature-and-legislation';

  /* Display: Literature and legislation content pane */
  $handler = $view->new_display('panel_pane', 'Literature and legislation content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['display_description'] = 'Displays max 3 resources for the specified country';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'View all';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = 'gender-based-violence/literature-and-legislation?c[]=%1';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<div class="view-results-count"><strong>@total</strong> entries</div>';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Countries: ISO2 */
  $handler->display->display_options['arguments']['iso2']['id'] = 'iso2';
  $handler->display->display_options['arguments']['iso2']['table'] = 'countries_country';
  $handler->display->display_options['arguments']['iso2']['field'] = 'iso2';
  $handler->display->display_options['arguments']['iso2']['relationship'] = 'field_country_iso2';
  $handler->display->display_options['arguments']['iso2']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['iso2']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['iso2']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['iso2']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['iso2']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['iso2']['limit'] = '0';
  $handler->display->display_options['arguments']['iso2']['title_property'] = 'iso2';
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
    'resource' => 'resource',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Taxonomy term: Topic category (field_topic_category) */
  $handler->display->display_options['filters']['field_topic_category_tid']['id'] = 'field_topic_category_tid';
  $handler->display->display_options['filters']['field_topic_category_tid']['table'] = 'field_data_field_topic_category';
  $handler->display->display_options['filters']['field_topic_category_tid']['field'] = 'field_topic_category_tid';
  $handler->display->display_options['filters']['field_topic_category_tid']['relationship'] = 'field_topic_tid';
  $handler->display->display_options['filters']['field_topic_category_tid']['value'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_topic_category_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_topic_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_topic_category_tid']['vocabulary'] = 'topic_categories';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'iso2' => array(
      'type' => 'user',
      'context' => 'entity:cer.cer_bidirectional',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Countries: ISO2',
    ),
  );

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
  /* Field: Content: Additional countries */
  $handler->display->display_options['fields']['field_additional_countries']['id'] = 'field_additional_countries';
  $handler->display->display_options['fields']['field_additional_countries']['table'] = 'field_data_field_additional_countries';
  $handler->display->display_options['fields']['field_additional_countries']['field'] = 'field_additional_countries';
  $handler->display->display_options['fields']['field_additional_countries']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_additional_countries']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_additional_countries']['type'] = 'country_default_i18n';
  $handler->display->display_options['fields']['field_additional_countries']['delta_offset'] = '0';
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
  /* Field: Content: Creator/Author */
  $handler->display->display_options['fields']['field_rsc_creator_author']['id'] = 'field_rsc_creator_author';
  $handler->display->display_options['fields']['field_rsc_creator_author']['table'] = 'field_data_field_rsc_creator_author';
  $handler->display->display_options['fields']['field_rsc_creator_author']['field'] = 'field_rsc_creator_author';
  $handler->display->display_options['fields']['field_rsc_creator_author']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_rsc_creator_author']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_rsc_creator_author']['type'] = 'text_plain';
  /* Field: Content: Publisher */
  $handler->display->display_options['fields']['field_rsc_publisher']['id'] = 'field_rsc_publisher';
  $handler->display->display_options['fields']['field_rsc_publisher']['table'] = 'field_data_field_rsc_publisher';
  $handler->display->display_options['fields']['field_rsc_publisher']['field'] = 'field_rsc_publisher';
  $handler->display->display_options['fields']['field_rsc_publisher']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_rsc_publisher']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_rsc_publisher']['type'] = 'text_plain';
  /* Field: Content: Contributor */
  $handler->display->display_options['fields']['field_rsc_contributor']['id'] = 'field_rsc_contributor';
  $handler->display->display_options['fields']['field_rsc_contributor']['table'] = 'field_data_field_rsc_contributor';
  $handler->display->display_options['fields']['field_rsc_contributor']['field'] = 'field_rsc_contributor';
  $handler->display->display_options['fields']['field_rsc_contributor']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_rsc_contributor']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_rsc_contributor']['type'] = 'text_plain';
  /* Field: Content: Reviewer */
  $handler->display->display_options['fields']['field_rsc_reviewer']['id'] = 'field_rsc_reviewer';
  $handler->display->display_options['fields']['field_rsc_reviewer']['table'] = 'field_data_field_rsc_reviewer';
  $handler->display->display_options['fields']['field_rsc_reviewer']['field'] = 'field_rsc_reviewer';
  $handler->display->display_options['fields']['field_rsc_reviewer']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_rsc_reviewer']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_rsc_reviewer']['type'] = 'text_plain';
  /* Field: Content: Date */
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
  /* Field: Content: Language */
  $handler->display->display_options['fields']['field_language']['id'] = 'field_language';
  $handler->display->display_options['fields']['field_language']['table'] = 'field_data_field_language';
  $handler->display->display_options['fields']['field_language']['field'] = 'field_language';
  $handler->display->display_options['fields']['field_language']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_language']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_language']['type'] = 'ds_taxonomy_separator_localized';
  $handler->display->display_options['fields']['field_language']['delta_offset'] = '0';
  /* Field: Content: Format */
  $handler->display->display_options['fields']['field_rsc_format']['id'] = 'field_rsc_format';
  $handler->display->display_options['fields']['field_rsc_format']['table'] = 'field_data_field_rsc_format';
  $handler->display->display_options['fields']['field_rsc_format']['field'] = 'field_rsc_format';
  $handler->display->display_options['fields']['field_rsc_format']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_rsc_format']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_rsc_format']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_rsc_format']['delta_offset'] = '0';
  /* Field: Content: Identifier */
  $handler->display->display_options['fields']['field_rsc_identifier']['id'] = 'field_rsc_identifier';
  $handler->display->display_options['fields']['field_rsc_identifier']['table'] = 'field_data_field_rsc_identifier';
  $handler->display->display_options['fields']['field_rsc_identifier']['field'] = 'field_rsc_identifier';
  $handler->display->display_options['fields']['field_rsc_identifier']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_rsc_identifier']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_rsc_identifier']['type'] = 'text_plain';
  /* Field: Content: Importance */
  $handler->display->display_options['fields']['field_rsc_importance']['id'] = 'field_rsc_importance';
  $handler->display->display_options['fields']['field_rsc_importance']['table'] = 'field_data_field_rsc_importance';
  $handler->display->display_options['fields']['field_rsc_importance']['field'] = 'field_rsc_importance';
  $handler->display->display_options['fields']['field_rsc_importance']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_rsc_importance']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_rsc_importance']['type'] = 'i18n_list_default';
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
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* Field: Content: Additional Information */
  $handler->display->display_options['fields']['field_additional_information']['id'] = 'field_additional_information';
  $handler->display->display_options['fields']['field_additional_information']['table'] = 'field_data_field_additional_information';
  $handler->display->display_options['fields']['field_additional_information']['field'] = 'field_additional_information';
  $handler->display->display_options['fields']['field_additional_information']['label'] = 'Additional information';
  $handler->display->display_options['fields']['field_additional_information']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_additional_information']['alter']['nl2br'] = TRUE;
  /* Field: Content: Rights */
  $handler->display->display_options['fields']['field_rsc_rights']['id'] = 'field_rsc_rights';
  $handler->display->display_options['fields']['field_rsc_rights']['table'] = 'field_data_field_rsc_rights';
  $handler->display->display_options['fields']['field_rsc_rights']['field'] = 'field_rsc_rights';
  $handler->display->display_options['fields']['field_rsc_rights']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_rsc_rights']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_rsc_rights']['type'] = 'text_plain';
  /* Field: Content: Source */
  $handler->display->display_options['fields']['field_rsc_source']['id'] = 'field_rsc_source';
  $handler->display->display_options['fields']['field_rsc_source']['table'] = 'field_data_field_rsc_source';
  $handler->display->display_options['fields']['field_rsc_source']['field'] = 'field_rsc_source';
  $handler->display->display_options['fields']['field_rsc_source']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_rsc_source']['alter']['nl2br'] = TRUE;
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
  $handler->display->display_options['path'] = 'gender-based-violence/literature-and-legislation/csv';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
    'panel_pane_1' => 0,
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
    'field_additional_information' => 'field_additional_information',
    'field_rsc_source' => 'field_rsc_source',
  );
  $handler->display->display_options['style_options']['cdata_wrapper'] = array(
    'field_english_title' => 'field_english_title',
    'field_unofficial_english_title' => 'field_unofficial_english_title',
    'field_rsc_creator_author' => 'field_rsc_creator_author',
    'field_rsc_publisher' => 'field_rsc_publisher',
    'field_rsc_contributor' => 'field_rsc_contributor',
    'field_rsc_reviewer' => 'field_rsc_reviewer',
    'field_rsc_identifier' => 'field_rsc_identifier',
    'field_keywords' => 'field_keywords',
    'field_coverage' => 'field_coverage',
    'field_sector' => 'field_sector',
    'field_category' => 'field_category',
    'body' => 'body',
    'field_additional_information' => 'field_additional_information',
    'field_rsc_rights' => 'field_rsc_rights',
    'field_rsc_source' => 'field_rsc_source',
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
  /* Field: Content: Additional countries */
  $handler->display->display_options['fields']['field_additional_countries']['id'] = 'field_additional_countries';
  $handler->display->display_options['fields']['field_additional_countries']['table'] = 'field_data_field_additional_countries';
  $handler->display->display_options['fields']['field_additional_countries']['field'] = 'field_additional_countries';
  $handler->display->display_options['fields']['field_additional_countries']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_additional_countries']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_additional_countries']['type'] = 'country_default_i18n';
  $handler->display->display_options['fields']['field_additional_countries']['delta_offset'] = '0';
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
  /* Field: Content: Creator/Author */
  $handler->display->display_options['fields']['field_rsc_creator_author']['id'] = 'field_rsc_creator_author';
  $handler->display->display_options['fields']['field_rsc_creator_author']['table'] = 'field_data_field_rsc_creator_author';
  $handler->display->display_options['fields']['field_rsc_creator_author']['field'] = 'field_rsc_creator_author';
  $handler->display->display_options['fields']['field_rsc_creator_author']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_rsc_creator_author']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_rsc_creator_author']['type'] = 'text_plain';
  /* Field: Content: Publisher */
  $handler->display->display_options['fields']['field_rsc_publisher']['id'] = 'field_rsc_publisher';
  $handler->display->display_options['fields']['field_rsc_publisher']['table'] = 'field_data_field_rsc_publisher';
  $handler->display->display_options['fields']['field_rsc_publisher']['field'] = 'field_rsc_publisher';
  $handler->display->display_options['fields']['field_rsc_publisher']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_rsc_publisher']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_rsc_publisher']['type'] = 'text_plain';
  /* Field: Content: Contributor */
  $handler->display->display_options['fields']['field_rsc_contributor']['id'] = 'field_rsc_contributor';
  $handler->display->display_options['fields']['field_rsc_contributor']['table'] = 'field_data_field_rsc_contributor';
  $handler->display->display_options['fields']['field_rsc_contributor']['field'] = 'field_rsc_contributor';
  $handler->display->display_options['fields']['field_rsc_contributor']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_rsc_contributor']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_rsc_contributor']['type'] = 'text_plain';
  /* Field: Content: Reviewer */
  $handler->display->display_options['fields']['field_rsc_reviewer']['id'] = 'field_rsc_reviewer';
  $handler->display->display_options['fields']['field_rsc_reviewer']['table'] = 'field_data_field_rsc_reviewer';
  $handler->display->display_options['fields']['field_rsc_reviewer']['field'] = 'field_rsc_reviewer';
  $handler->display->display_options['fields']['field_rsc_reviewer']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_rsc_reviewer']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_rsc_reviewer']['type'] = 'text_plain';
  /* Field: Content: Date */
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
  /* Field: Content: Language */
  $handler->display->display_options['fields']['field_language']['id'] = 'field_language';
  $handler->display->display_options['fields']['field_language']['table'] = 'field_data_field_language';
  $handler->display->display_options['fields']['field_language']['field'] = 'field_language';
  $handler->display->display_options['fields']['field_language']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_language']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_language']['type'] = 'ds_taxonomy_separator_localized';
  $handler->display->display_options['fields']['field_language']['delta_offset'] = '0';
  /* Field: Content: Format */
  $handler->display->display_options['fields']['field_rsc_format']['id'] = 'field_rsc_format';
  $handler->display->display_options['fields']['field_rsc_format']['table'] = 'field_data_field_rsc_format';
  $handler->display->display_options['fields']['field_rsc_format']['field'] = 'field_rsc_format';
  $handler->display->display_options['fields']['field_rsc_format']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_rsc_format']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_rsc_format']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_rsc_format']['delta_offset'] = '0';
  /* Field: Content: Identifier */
  $handler->display->display_options['fields']['field_rsc_identifier']['id'] = 'field_rsc_identifier';
  $handler->display->display_options['fields']['field_rsc_identifier']['table'] = 'field_data_field_rsc_identifier';
  $handler->display->display_options['fields']['field_rsc_identifier']['field'] = 'field_rsc_identifier';
  $handler->display->display_options['fields']['field_rsc_identifier']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_rsc_identifier']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_rsc_identifier']['type'] = 'text_plain';
  /* Field: Content: Importance */
  $handler->display->display_options['fields']['field_rsc_importance']['id'] = 'field_rsc_importance';
  $handler->display->display_options['fields']['field_rsc_importance']['table'] = 'field_data_field_rsc_importance';
  $handler->display->display_options['fields']['field_rsc_importance']['field'] = 'field_rsc_importance';
  $handler->display->display_options['fields']['field_rsc_importance']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_rsc_importance']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_rsc_importance']['type'] = 'i18n_list_default';
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
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* Field: Content: Additional Information */
  $handler->display->display_options['fields']['field_additional_information']['id'] = 'field_additional_information';
  $handler->display->display_options['fields']['field_additional_information']['table'] = 'field_data_field_additional_information';
  $handler->display->display_options['fields']['field_additional_information']['field'] = 'field_additional_information';
  $handler->display->display_options['fields']['field_additional_information']['label'] = 'Additional information';
  $handler->display->display_options['fields']['field_additional_information']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_additional_information']['alter']['nl2br'] = TRUE;
  /* Field: Content: Rights */
  $handler->display->display_options['fields']['field_rsc_rights']['id'] = 'field_rsc_rights';
  $handler->display->display_options['fields']['field_rsc_rights']['table'] = 'field_data_field_rsc_rights';
  $handler->display->display_options['fields']['field_rsc_rights']['field'] = 'field_rsc_rights';
  $handler->display->display_options['fields']['field_rsc_rights']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_rsc_rights']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_rsc_rights']['type'] = 'text_plain';
  /* Field: Content: Source */
  $handler->display->display_options['fields']['field_rsc_source']['id'] = 'field_rsc_source';
  $handler->display->display_options['fields']['field_rsc_source']['table'] = 'field_data_field_rsc_source';
  $handler->display->display_options['fields']['field_rsc_source']['field'] = 'field_rsc_source';
  $handler->display->display_options['fields']['field_rsc_source']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_rsc_source']['alter']['nl2br'] = TRUE;
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
  $handler->display->display_options['path'] = 'gender-based-violence/literature-and-legislation/xml';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
    'panel_pane_1' => 0,
  );
  $export['gender_based_violence_resources'] = $view;

  $view = new view();
  $view->name = 'legal_definitions_in_the_eu';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Legal Definitions in the EU';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Legal Definitions in the EU';
  $handler->display->display_options['css_class'] = 'view-with-enhanced-collapsible-filters';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['hide_admin_links'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
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
    'field_violence_types_tid_i18n' => array(
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
  $handler->display->display_options['pager']['options']['more_button_text'] = 'Load more legal definitions';
  $handler->display->display_options['pager']['options']['advance']['content_class'] = '.view-content:eq(0)';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<div class="view-results-count"><strong>@total</strong> Legal definitions found</div>';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p><em>There are no results that match the selected criteria</em></p>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: Content: Country (field_country) */
  $handler->display->display_options['relationships']['field_country_iso2']['id'] = 'field_country_iso2';
  $handler->display->display_options['relationships']['field_country_iso2']['table'] = 'field_data_field_country';
  $handler->display->display_options['relationships']['field_country_iso2']['field'] = 'field_country_iso2';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Country: Native name (field_native_name) */
  $handler->display->display_options['sorts']['field_native_name_value']['id'] = 'field_native_name_value';
  $handler->display->display_options['sorts']['field_native_name_value']['table'] = 'field_data_field_native_name';
  $handler->display->display_options['sorts']['field_native_name_value']['field'] = 'field_native_name_value';
  $handler->display->display_options['sorts']['field_native_name_value']['relationship'] = 'field_country_iso2';
  /* Sort criterion: Content: Types of GBV (field_violence_types) */
  $handler->display->display_options['sorts']['field_violence_types_tid']['id'] = 'field_violence_types_tid';
  $handler->display->display_options['sorts']['field_violence_types_tid']['table'] = 'field_data_field_violence_types';
  $handler->display->display_options['sorts']['field_violence_types_tid']['field'] = 'field_violence_types_tid';
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
    'legal_definition' => 'legal_definition',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Types of GBV (field_violence_types) (translated) */
  $handler->display->display_options['filters']['field_violence_types_tid_i18n']['id'] = 'field_violence_types_tid_i18n';
  $handler->display->display_options['filters']['field_violence_types_tid_i18n']['table'] = 'field_data_field_violence_types';
  $handler->display->display_options['filters']['field_violence_types_tid_i18n']['field'] = 'field_violence_types_tid_i18n';
  $handler->display->display_options['filters']['field_violence_types_tid_i18n']['group'] = 1;
  $handler->display->display_options['filters']['field_violence_types_tid_i18n']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_violence_types_tid_i18n']['expose']['operator_id'] = 'field_violence_types_tid_i18n_op';
  $handler->display->display_options['filters']['field_violence_types_tid_i18n']['expose']['label'] = 'Types of GBV';
  $handler->display->display_options['filters']['field_violence_types_tid_i18n']['expose']['operator'] = 'field_violence_types_tid_i18n_op';
  $handler->display->display_options['filters']['field_violence_types_tid_i18n']['expose']['identifier'] = 'vt';
  $handler->display->display_options['filters']['field_violence_types_tid_i18n']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_violence_types_tid_i18n']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_violence_types_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_violence_types_tid_i18n']['vocabulary'] = 'gender_based_violence_types';
  $handler->display->display_options['filters']['field_violence_types_tid_i18n']['error_message'] = FALSE;
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
  /* Filter criterion: Global: Populate filters */
  $handler->display->display_options['filters']['populate']['id'] = 'populate';
  $handler->display->display_options['filters']['populate']['table'] = 'views_filters_populate';
  $handler->display->display_options['filters']['populate']['field'] = 'populate';
  $handler->display->display_options['filters']['populate']['group'] = 1;
  $handler->display->display_options['filters']['populate']['exposed'] = TRUE;
  $handler->display->display_options['filters']['populate']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['populate']['expose']['label'] = 'Search legal definitions';
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
    'field_violence_types_tid_i18n' => 0,
    'name_list' => 0,
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
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Legal Definitions in the EU Member States';
  $handler->display->display_options['path'] = 'gender-based-violence/regulatory-and-legal-framework/legal-definitions-in-the-eu';

  /* Display: Legal definitions content pane */
  $handler = $view->new_display('panel_pane', 'Legal definitions content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Legal Definitions';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['display_description'] = 'Displays max 6 legal definitions for the specified country';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'View all';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = 'gender-based-violence/regulatory-and-legal-framework/legal-definitions-in-the-eu?c[]=%1';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<div class="view-results-count"><strong>@total</strong> entries</div>';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Types of GBV (field_violence_types) */
  $handler->display->display_options['sorts']['field_violence_types_tid']['id'] = 'field_violence_types_tid';
  $handler->display->display_options['sorts']['field_violence_types_tid']['table'] = 'field_data_field_violence_types';
  $handler->display->display_options['sorts']['field_violence_types_tid']['field'] = 'field_violence_types_tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Countries: ISO2 */
  $handler->display->display_options['arguments']['iso2']['id'] = 'iso2';
  $handler->display->display_options['arguments']['iso2']['table'] = 'countries_country';
  $handler->display->display_options['arguments']['iso2']['field'] = 'iso2';
  $handler->display->display_options['arguments']['iso2']['relationship'] = 'field_country_iso2';
  $handler->display->display_options['arguments']['iso2']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['iso2']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['iso2']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['iso2']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['iso2']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['iso2']['limit'] = '0';
  $handler->display->display_options['arguments']['iso2']['title_property'] = 'iso2';
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
    'legal_definition' => 'legal_definition',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'iso2' => array(
      'type' => 'user',
      'context' => 'entity:cer.cer_bidirectional',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Countries: ISO2',
    ),
  );

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
  /* Field: Content: Types of GBV */
  $handler->display->display_options['fields']['field_violence_types']['id'] = 'field_violence_types';
  $handler->display->display_options['fields']['field_violence_types']['table'] = 'field_data_field_violence_types';
  $handler->display->display_options['fields']['field_violence_types']['field'] = 'field_violence_types';
  $handler->display->display_options['fields']['field_violence_types']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_violence_types']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_violence_types']['type'] = 'ds_taxonomy_separator_localized';
  $handler->display->display_options['fields']['field_violence_types']['delta_offset'] = '0';
  /* Field: Content: Country */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_country']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_country']['type'] = 'country_default_i18n';
  /* Field: Content: General legal definition */
  $handler->display->display_options['fields']['field_general_legal_definition']['id'] = 'field_general_legal_definition';
  $handler->display->display_options['fields']['field_general_legal_definition']['table'] = 'field_data_field_general_legal_definition';
  $handler->display->display_options['fields']['field_general_legal_definition']['field'] = 'field_general_legal_definition';
  $handler->display->display_options['fields']['field_general_legal_definition']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_general_legal_definition']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_general_legal_definition']['type'] = 'list_key';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = TRUE;
  /* Field: Content: Observations */
  $handler->display->display_options['fields']['field_observations']['id'] = 'field_observations';
  $handler->display->display_options['fields']['field_observations']['table'] = 'field_data_field_observations';
  $handler->display->display_options['fields']['field_observations']['field'] = 'field_observations';
  $handler->display->display_options['fields']['field_observations']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_observations']['alter']['nl2br'] = TRUE;
  /* Field: Content: Legal Source */
  $handler->display->display_options['fields']['field_legal_source']['id'] = 'field_legal_source';
  $handler->display->display_options['fields']['field_legal_source']['table'] = 'field_data_field_legal_source';
  $handler->display->display_options['fields']['field_legal_source']['field'] = 'field_legal_source';
  $handler->display->display_options['fields']['field_legal_source']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_legal_source']['alter']['nl2br'] = TRUE;
  /* Field: Content: Legal provisions on protection orders */
  $handler->display->display_options['fields']['field_legal_provisions']['id'] = 'field_legal_provisions';
  $handler->display->display_options['fields']['field_legal_provisions']['table'] = 'field_data_field_legal_provisions';
  $handler->display->display_options['fields']['field_legal_provisions']['field'] = 'field_legal_provisions';
  $handler->display->display_options['fields']['field_legal_provisions']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_legal_provisions']['alter']['nl2br'] = TRUE;
  /* Field: Content: Keywords */
  $handler->display->display_options['fields']['field_keywords']['id'] = 'field_keywords';
  $handler->display->display_options['fields']['field_keywords']['table'] = 'field_data_field_keywords';
  $handler->display->display_options['fields']['field_keywords']['field'] = 'field_keywords';
  $handler->display->display_options['fields']['field_keywords']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_keywords']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_keywords']['type'] = 'ds_taxonomy_separator_localized';
  $handler->display->display_options['fields']['field_keywords']['delta_offset'] = '0';
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
  $handler->display->display_options['path'] = 'gender-based-violence/regulatory-and-legal-framework/legal-definitions-in-the-eu/csv';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
    'panel_pane_1' => 0,
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
    'field_observations' => 'field_observations',
    'field_legal_source' => 'field_legal_source',
    'field_legal_provisions' => 'field_legal_provisions',
  );
  $handler->display->display_options['style_options']['cdata_wrapper'] = array(
    'body' => 'body',
    'field_observations' => 'field_observations',
    'field_legal_source' => 'field_legal_source',
    'field_legal_provisions' => 'field_legal_provisions',
    'field_keywords' => 'field_keywords',
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Types of GBV */
  $handler->display->display_options['fields']['field_violence_types']['id'] = 'field_violence_types';
  $handler->display->display_options['fields']['field_violence_types']['table'] = 'field_data_field_violence_types';
  $handler->display->display_options['fields']['field_violence_types']['field'] = 'field_violence_types';
  $handler->display->display_options['fields']['field_violence_types']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_violence_types']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_violence_types']['type'] = 'ds_taxonomy_separator_localized';
  $handler->display->display_options['fields']['field_violence_types']['delta_offset'] = '0';
  /* Field: Content: Country */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_country']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_country']['type'] = 'country_default_i18n';
  /* Field: Content: General legal definition */
  $handler->display->display_options['fields']['field_general_legal_definition']['id'] = 'field_general_legal_definition';
  $handler->display->display_options['fields']['field_general_legal_definition']['table'] = 'field_data_field_general_legal_definition';
  $handler->display->display_options['fields']['field_general_legal_definition']['field'] = 'field_general_legal_definition';
  $handler->display->display_options['fields']['field_general_legal_definition']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_general_legal_definition']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_general_legal_definition']['type'] = 'list_key';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = TRUE;
  /* Field: Content: Observations */
  $handler->display->display_options['fields']['field_observations']['id'] = 'field_observations';
  $handler->display->display_options['fields']['field_observations']['table'] = 'field_data_field_observations';
  $handler->display->display_options['fields']['field_observations']['field'] = 'field_observations';
  $handler->display->display_options['fields']['field_observations']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_observations']['alter']['nl2br'] = TRUE;
  /* Field: Content: Legal Source */
  $handler->display->display_options['fields']['field_legal_source']['id'] = 'field_legal_source';
  $handler->display->display_options['fields']['field_legal_source']['table'] = 'field_data_field_legal_source';
  $handler->display->display_options['fields']['field_legal_source']['field'] = 'field_legal_source';
  $handler->display->display_options['fields']['field_legal_source']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_legal_source']['alter']['nl2br'] = TRUE;
  /* Field: Content: Legal provisions on protection orders */
  $handler->display->display_options['fields']['field_legal_provisions']['id'] = 'field_legal_provisions';
  $handler->display->display_options['fields']['field_legal_provisions']['table'] = 'field_data_field_legal_provisions';
  $handler->display->display_options['fields']['field_legal_provisions']['field'] = 'field_legal_provisions';
  $handler->display->display_options['fields']['field_legal_provisions']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_legal_provisions']['alter']['nl2br'] = TRUE;
  /* Field: Content: Keywords */
  $handler->display->display_options['fields']['field_keywords']['id'] = 'field_keywords';
  $handler->display->display_options['fields']['field_keywords']['table'] = 'field_data_field_keywords';
  $handler->display->display_options['fields']['field_keywords']['field'] = 'field_keywords';
  $handler->display->display_options['fields']['field_keywords']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_keywords']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_keywords']['type'] = 'ds_taxonomy_separator_localized';
  $handler->display->display_options['fields']['field_keywords']['delta_offset'] = '0';
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
  $handler->display->display_options['path'] = 'gender-based-violence/regulatory-and-legal-framework/legal-definitions-in-the-eu/xml';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
    'panel_pane_1' => 0,
  );
  $export['legal_definitions_in_the_eu'] = $view;

  return $export;
}

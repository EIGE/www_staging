<?php
/**
 * @file
 * eige_resource_pool.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function eige_resource_pool_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'resource_pool';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Women and Men Inspiring Europe Resource-Pool';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Women and Men Inspiring Europe Resource-Pool';
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
    'field_keywords_tid' => array(
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
    'field_language_tid' => array(
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
  $handler->display->display_options['pager']['options']['more_button_text'] = 'Load more results';
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
  $handler->display->display_options['header']['result']['content'] = '<div class="view-results-count"><strong>@total</strong> results found</div>';
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
    'resource_pool_item' => 'resource_pool_item',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
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
  /* Filter criterion: Content: Keywords (field_keywords) */
  $handler->display->display_options['filters']['field_keywords_tid']['id'] = 'field_keywords_tid';
  $handler->display->display_options['filters']['field_keywords_tid']['table'] = 'field_data_field_keywords';
  $handler->display->display_options['filters']['field_keywords_tid']['field'] = 'field_keywords_tid';
  $handler->display->display_options['filters']['field_keywords_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_keywords_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_keywords_tid']['expose']['operator_id'] = 'field_keywords_tid_op';
  $handler->display->display_options['filters']['field_keywords_tid']['expose']['label'] = 'Gender areas';
  $handler->display->display_options['filters']['field_keywords_tid']['expose']['operator'] = 'field_keywords_tid_op';
  $handler->display->display_options['filters']['field_keywords_tid']['expose']['identifier'] = 'k';
  $handler->display->display_options['filters']['field_keywords_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_keywords_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_keywords_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_keywords_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_keywords_tid']['vocabulary'] = 'tags';
  $handler->display->display_options['filters']['field_keywords_tid']['error_message'] = FALSE;
  /* Filter criterion: Content: Language (field_language) */
  $handler->display->display_options['filters']['field_language_tid']['id'] = 'field_language_tid';
  $handler->display->display_options['filters']['field_language_tid']['table'] = 'field_data_field_language';
  $handler->display->display_options['filters']['field_language_tid']['field'] = 'field_language_tid';
  $handler->display->display_options['filters']['field_language_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_language_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_language_tid']['expose']['operator_id'] = 'field_language_tid_op';
  $handler->display->display_options['filters']['field_language_tid']['expose']['label'] = 'Language';
  $handler->display->display_options['filters']['field_language_tid']['expose']['operator'] = 'field_language_tid_op';
  $handler->display->display_options['filters']['field_language_tid']['expose']['identifier'] = 'lg';
  $handler->display->display_options['filters']['field_language_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_language_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_language_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_language_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_language_tid']['vocabulary'] = 'languages';
  /* Filter criterion: Global: Populate filters */
  $handler->display->display_options['filters']['populate']['id'] = 'populate';
  $handler->display->display_options['filters']['populate']['table'] = 'views_filters_populate';
  $handler->display->display_options['filters']['populate']['field'] = 'populate';
  $handler->display->display_options['filters']['populate']['group'] = 1;
  $handler->display->display_options['filters']['populate']['exposed'] = TRUE;
  $handler->display->display_options['filters']['populate']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['populate']['expose']['label'] = 'Search Women and Men Inspiring Europe';
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
    'field_topic_category_tid' => 0,
    'field_topic_tid' => 0,
    'name_list' => 0,
    'field_gp_tool_tid' => 0,
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
  $handler->display->display_options['path'] = 'more-areas/women-and-men-inspiring-europe-resource-pool';

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
  /* Field: Content: Quote */
  $handler->display->display_options['fields']['field_quote']['id'] = 'field_quote';
  $handler->display->display_options['fields']['field_quote']['table'] = 'field_data_field_quote';
  $handler->display->display_options['fields']['field_quote']['field'] = 'field_quote';
  $handler->display->display_options['fields']['field_quote']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_quote']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_quote']['type'] = 'text_plain';
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
  /* Field: Content: Sex */
  $handler->display->display_options['fields']['field_sex']['id'] = 'field_sex';
  $handler->display->display_options['fields']['field_sex']['table'] = 'field_data_field_sex';
  $handler->display->display_options['fields']['field_sex']['field'] = 'field_sex';
  $handler->display->display_options['fields']['field_sex']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_sex']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_sex']['type'] = 'ds_taxonomy_separator_localized';
  /* Field: Content: Weekly profile */
  $handler->display->display_options['fields']['field_weekly_profile']['id'] = 'field_weekly_profile';
  $handler->display->display_options['fields']['field_weekly_profile']['table'] = 'field_data_field_weekly_profile';
  $handler->display->display_options['fields']['field_weekly_profile']['field'] = 'field_weekly_profile';
  $handler->display->display_options['fields']['field_weekly_profile']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_weekly_profile']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_weekly_profile']['settings'] = array(
    'format_type' => 'eige_short_m_d_y',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Monthly profile */
  $handler->display->display_options['fields']['field_monthly_profile']['id'] = 'field_monthly_profile';
  $handler->display->display_options['fields']['field_monthly_profile']['table'] = 'field_data_field_monthly_profile';
  $handler->display->display_options['fields']['field_monthly_profile']['field'] = 'field_monthly_profile';
  $handler->display->display_options['fields']['field_monthly_profile']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_monthly_profile']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_monthly_profile']['settings'] = array(
    'format_type' => 'eige_short_m_d_y',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Nominated by */
  $handler->display->display_options['fields']['field_nominated_by']['id'] = 'field_nominated_by';
  $handler->display->display_options['fields']['field_nominated_by']['table'] = 'field_data_field_nominated_by';
  $handler->display->display_options['fields']['field_nominated_by']['field'] = 'field_nominated_by';
  $handler->display->display_options['fields']['field_nominated_by']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_nominated_by']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_nominated_by']['type'] = 'text_plain';
  /* Field: Content: Keywords */
  $handler->display->display_options['fields']['field_keywords']['id'] = 'field_keywords';
  $handler->display->display_options['fields']['field_keywords']['table'] = 'field_data_field_keywords';
  $handler->display->display_options['fields']['field_keywords']['field'] = 'field_keywords';
  $handler->display->display_options['fields']['field_keywords']['label'] = 'Gender areas';
  $handler->display->display_options['fields']['field_keywords']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_keywords']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_keywords']['type'] = 'ds_taxonomy_separator_localized';
  $handler->display->display_options['fields']['field_keywords']['delta_offset'] = '0';
  /* Field: Content: Language */
  $handler->display->display_options['fields']['field_language']['id'] = 'field_language';
  $handler->display->display_options['fields']['field_language']['table'] = 'field_data_field_language';
  $handler->display->display_options['fields']['field_language']['field'] = 'field_language';
  $handler->display->display_options['fields']['field_language']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_language']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_language']['type'] = 'ds_taxonomy_separator_localized';
  $handler->display->display_options['fields']['field_language']['delta_offset'] = '0';
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_website']['id'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['table'] = 'field_data_field_website';
  $handler->display->display_options['fields']['field_website']['field'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_website']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_website']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_website']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_website']['delta_offset'] = '0';
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_email']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_email']['type'] = 'email_plain';
  $handler->display->display_options['fields']['field_email']['delta_offset'] = '0';
  /* Field: Content: Facebook */
  $handler->display->display_options['fields']['field_facebook']['id'] = 'field_facebook';
  $handler->display->display_options['fields']['field_facebook']['table'] = 'field_data_field_facebook';
  $handler->display->display_options['fields']['field_facebook']['field'] = 'field_facebook';
  $handler->display->display_options['fields']['field_facebook']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_facebook']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_facebook']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_facebook']['type'] = 'link_plain';
  /* Field: Content: Twitter */
  $handler->display->display_options['fields']['field_twitter']['id'] = 'field_twitter';
  $handler->display->display_options['fields']['field_twitter']['table'] = 'field_data_field_twitter';
  $handler->display->display_options['fields']['field_twitter']['field'] = 'field_twitter';
  $handler->display->display_options['fields']['field_twitter']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_twitter']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_twitter']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_twitter']['type'] = 'link_plain';
  /* Field: Content: Linked in */
  $handler->display->display_options['fields']['field_linked_in']['id'] = 'field_linked_in';
  $handler->display->display_options['fields']['field_linked_in']['table'] = 'field_data_field_linked_in';
  $handler->display->display_options['fields']['field_linked_in']['field'] = 'field_linked_in';
  $handler->display->display_options['fields']['field_linked_in']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_linked_in']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_linked_in']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_linked_in']['type'] = 'link_plain';
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
  $handler->display->display_options['path'] = 'more-areas/women-and-men-inspiring-europe-resource-pool/csv';
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
    'body' => 'body',
  );
  $handler->display->display_options['style_options']['cdata_wrapper'] = array(
    'title_field' => 'title_field',
    'field_quote' => 'field_quote',
    'field_image' => 'field_image',
    'field_nominated_by' => 'field_nominated_by',
    'field_keywords' => 'field_keywords',
    'field_website' => 'field_website',
    'field_email' => 'field_email',
    'field_facebook' => 'field_facebook',
    'field_twitter' => 'field_twitter',
    'field_linked_in' => 'field_linked_in',
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
  /* Field: Content: Quote */
  $handler->display->display_options['fields']['field_quote']['id'] = 'field_quote';
  $handler->display->display_options['fields']['field_quote']['table'] = 'field_data_field_quote';
  $handler->display->display_options['fields']['field_quote']['field'] = 'field_quote';
  $handler->display->display_options['fields']['field_quote']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_quote']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_quote']['type'] = 'text_plain';
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
  /* Field: Content: Sex */
  $handler->display->display_options['fields']['field_sex']['id'] = 'field_sex';
  $handler->display->display_options['fields']['field_sex']['table'] = 'field_data_field_sex';
  $handler->display->display_options['fields']['field_sex']['field'] = 'field_sex';
  $handler->display->display_options['fields']['field_sex']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_sex']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_sex']['type'] = 'ds_taxonomy_separator_localized';
  /* Field: Content: Weekly profile */
  $handler->display->display_options['fields']['field_weekly_profile']['id'] = 'field_weekly_profile';
  $handler->display->display_options['fields']['field_weekly_profile']['table'] = 'field_data_field_weekly_profile';
  $handler->display->display_options['fields']['field_weekly_profile']['field'] = 'field_weekly_profile';
  $handler->display->display_options['fields']['field_weekly_profile']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_weekly_profile']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_weekly_profile']['settings'] = array(
    'format_type' => 'eige_short_m_d_y',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Monthly profile */
  $handler->display->display_options['fields']['field_monthly_profile']['id'] = 'field_monthly_profile';
  $handler->display->display_options['fields']['field_monthly_profile']['table'] = 'field_data_field_monthly_profile';
  $handler->display->display_options['fields']['field_monthly_profile']['field'] = 'field_monthly_profile';
  $handler->display->display_options['fields']['field_monthly_profile']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_monthly_profile']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_monthly_profile']['settings'] = array(
    'format_type' => 'eige_short_m_d_y',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Nominated by */
  $handler->display->display_options['fields']['field_nominated_by']['id'] = 'field_nominated_by';
  $handler->display->display_options['fields']['field_nominated_by']['table'] = 'field_data_field_nominated_by';
  $handler->display->display_options['fields']['field_nominated_by']['field'] = 'field_nominated_by';
  $handler->display->display_options['fields']['field_nominated_by']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_nominated_by']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_nominated_by']['type'] = 'text_plain';
  /* Field: Content: Keywords */
  $handler->display->display_options['fields']['field_keywords']['id'] = 'field_keywords';
  $handler->display->display_options['fields']['field_keywords']['table'] = 'field_data_field_keywords';
  $handler->display->display_options['fields']['field_keywords']['field'] = 'field_keywords';
  $handler->display->display_options['fields']['field_keywords']['label'] = 'Gender areas';
  $handler->display->display_options['fields']['field_keywords']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_keywords']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_keywords']['type'] = 'ds_taxonomy_separator_localized';
  $handler->display->display_options['fields']['field_keywords']['delta_offset'] = '0';
  /* Field: Content: Language */
  $handler->display->display_options['fields']['field_language']['id'] = 'field_language';
  $handler->display->display_options['fields']['field_language']['table'] = 'field_data_field_language';
  $handler->display->display_options['fields']['field_language']['field'] = 'field_language';
  $handler->display->display_options['fields']['field_language']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_language']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_language']['type'] = 'ds_taxonomy_separator_localized';
  $handler->display->display_options['fields']['field_language']['delta_offset'] = '0';
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_website']['id'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['table'] = 'field_data_field_website';
  $handler->display->display_options['fields']['field_website']['field'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_website']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_website']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_website']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_website']['delta_offset'] = '0';
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_email']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_email']['type'] = 'email_plain';
  $handler->display->display_options['fields']['field_email']['delta_offset'] = '0';
  /* Field: Content: Facebook */
  $handler->display->display_options['fields']['field_facebook']['id'] = 'field_facebook';
  $handler->display->display_options['fields']['field_facebook']['table'] = 'field_data_field_facebook';
  $handler->display->display_options['fields']['field_facebook']['field'] = 'field_facebook';
  $handler->display->display_options['fields']['field_facebook']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_facebook']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_facebook']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_facebook']['type'] = 'link_plain';
  /* Field: Content: Twitter */
  $handler->display->display_options['fields']['field_twitter']['id'] = 'field_twitter';
  $handler->display->display_options['fields']['field_twitter']['table'] = 'field_data_field_twitter';
  $handler->display->display_options['fields']['field_twitter']['field'] = 'field_twitter';
  $handler->display->display_options['fields']['field_twitter']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_twitter']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_twitter']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_twitter']['type'] = 'link_plain';
  /* Field: Content: Linked in */
  $handler->display->display_options['fields']['field_linked_in']['id'] = 'field_linked_in';
  $handler->display->display_options['fields']['field_linked_in']['table'] = 'field_data_field_linked_in';
  $handler->display->display_options['fields']['field_linked_in']['field'] = 'field_linked_in';
  $handler->display->display_options['fields']['field_linked_in']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_linked_in']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_linked_in']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_linked_in']['type'] = 'link_plain';
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
  $handler->display->display_options['path'] = 'more-areas/women-and-men-inspiring-europe-resource-pool/xml';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $export['resource_pool'] = $view;

  return $export;
}

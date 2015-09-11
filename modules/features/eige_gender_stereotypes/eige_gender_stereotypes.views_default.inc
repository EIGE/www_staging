<?php
/**
 * @file
 * eige_gender_stereotypes.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function eige_gender_stereotypes_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'search_for_gender_stories';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Search for Gender Stories';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Search for gender stories';
  $handler->display->display_options['css_class'] = 'view-with-enhanced-collapsible-filters';
  $handler->display->display_options['use_ajax'] = TRUE;
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
    'field_primary_topic_category_tid_i18n' => array(
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
    'field_sex_tid_i18n' => array(
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
    'field_age_value' => array(
      'bef_format' => 'bef_slider',
      'slider_options' => array(
        'bef_slider_min' => '1',
        'bef_slider_max' => '110',
        'bef_slider_step' => '1',
        'bef_slider_animate' => 'normal',
        'bef_slider_orientation' => 'horizontal',
      ),
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
  $handler->display->display_options['pager']['options']['more_button_text'] = 'Load more gender stories';
  $handler->display->display_options['pager']['options']['advance']['content_class'] = '.view-content:eq(0)';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<div class="view-results-count"><strong>@total</strong> Gender stories found</div>';
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
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'gender_story' => 'gender_story',
  );
  /* Filter criterion: Content: Primary Topic category (field_primary_topic_category) (translated) */
  $handler->display->display_options['filters']['field_primary_topic_category_tid_i18n']['id'] = 'field_primary_topic_category_tid_i18n';
  $handler->display->display_options['filters']['field_primary_topic_category_tid_i18n']['table'] = 'field_data_field_primary_topic_category';
  $handler->display->display_options['filters']['field_primary_topic_category_tid_i18n']['field'] = 'field_primary_topic_category_tid_i18n';
  $handler->display->display_options['filters']['field_primary_topic_category_tid_i18n']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_primary_topic_category_tid_i18n']['expose']['operator_id'] = 'field_primary_topic_category_tid_i18n_op';
  $handler->display->display_options['filters']['field_primary_topic_category_tid_i18n']['expose']['label'] = 'Topics';
  $handler->display->display_options['filters']['field_primary_topic_category_tid_i18n']['expose']['operator'] = 'field_primary_topic_category_tid_i18n_op';
  $handler->display->display_options['filters']['field_primary_topic_category_tid_i18n']['expose']['identifier'] = 'pt';
  $handler->display->display_options['filters']['field_primary_topic_category_tid_i18n']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_primary_topic_category_tid_i18n']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_primary_topic_category_tid_i18n']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_primary_topic_category_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_primary_topic_category_tid_i18n']['vocabulary'] = 'primary_gender_story_topic';
  $handler->display->display_options['filters']['field_primary_topic_category_tid_i18n']['error_message'] = FALSE;
  /* Filter criterion: Content: Sex (field_sex) (translated) */
  $handler->display->display_options['filters']['field_sex_tid_i18n']['id'] = 'field_sex_tid_i18n';
  $handler->display->display_options['filters']['field_sex_tid_i18n']['table'] = 'field_data_field_sex';
  $handler->display->display_options['filters']['field_sex_tid_i18n']['field'] = 'field_sex_tid_i18n';
  $handler->display->display_options['filters']['field_sex_tid_i18n']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_sex_tid_i18n']['expose']['operator_id'] = 'field_sex_tid_i18n_op';
  $handler->display->display_options['filters']['field_sex_tid_i18n']['expose']['label'] = 'Sex';
  $handler->display->display_options['filters']['field_sex_tid_i18n']['expose']['operator'] = 'field_sex_tid_i18n_op';
  $handler->display->display_options['filters']['field_sex_tid_i18n']['expose']['identifier'] = 'sex';
  $handler->display->display_options['filters']['field_sex_tid_i18n']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_sex_tid_i18n']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_sex_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_sex_tid_i18n']['vocabulary'] = 'sex';
  $handler->display->display_options['filters']['field_sex_tid_i18n']['error_message'] = FALSE;
  /* Filter criterion: Countries: Name - list */
  $handler->display->display_options['filters']['name_list']['id'] = 'name_list';
  $handler->display->display_options['filters']['name_list']['table'] = 'countries_country';
  $handler->display->display_options['filters']['name_list']['field'] = 'name_list';
  $handler->display->display_options['filters']['name_list']['relationship'] = 'field_country_iso2';
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
  /* Filter criterion: Content: Age (field_age) */
  $handler->display->display_options['filters']['field_age_value']['id'] = 'field_age_value';
  $handler->display->display_options['filters']['field_age_value']['table'] = 'field_data_field_age';
  $handler->display->display_options['filters']['field_age_value']['field'] = 'field_age_value';
  $handler->display->display_options['filters']['field_age_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_age_value']['value']['min'] = '18';
  $handler->display->display_options['filters']['field_age_value']['value']['max'] = '95';
  $handler->display->display_options['filters']['field_age_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_age_value']['expose']['operator_id'] = 'field_age_value_op';
  $handler->display->display_options['filters']['field_age_value']['expose']['label'] = 'Age';
  $handler->display->display_options['filters']['field_age_value']['expose']['operator'] = 'field_age_value_op';
  $handler->display->display_options['filters']['field_age_value']['expose']['identifier'] = 'age';
  $handler->display->display_options['filters']['field_age_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Body (body) */
  $handler->display->display_options['filters']['body_value']['id'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['table'] = 'field_data_body';
  $handler->display->display_options['filters']['body_value']['field'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['operator'] = 'allwords';
  $handler->display->display_options['filters']['body_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['body_value']['expose']['operator_id'] = 'body_value_op';
  $handler->display->display_options['filters']['body_value']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['body_value']['expose']['operator'] = 'body_value_op';
  $handler->display->display_options['filters']['body_value']['expose']['identifier'] = 't';
  $handler->display->display_options['filters']['body_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'more-areas/gender-stereotypes/search-for-gender-stories';

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
  /* Field: Content: Country */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_country']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_country']['type'] = 'country_default_i18n';
  /* Field: Content: Age */
  $handler->display->display_options['fields']['field_age']['id'] = 'field_age';
  $handler->display->display_options['fields']['field_age']['table'] = 'field_data_field_age';
  $handler->display->display_options['fields']['field_age']['field'] = 'field_age';
  $handler->display->display_options['fields']['field_age']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_age']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_age']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Sex */
  $handler->display->display_options['fields']['field_sex']['id'] = 'field_sex';
  $handler->display->display_options['fields']['field_sex']['table'] = 'field_data_field_sex';
  $handler->display->display_options['fields']['field_sex']['field'] = 'field_sex';
  $handler->display->display_options['fields']['field_sex']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_sex']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_sex']['type'] = 'ds_taxonomy_separator_localized';
  /* Field: Content: Primary Topic category */
  $handler->display->display_options['fields']['field_primary_topic_category']['id'] = 'field_primary_topic_category';
  $handler->display->display_options['fields']['field_primary_topic_category']['table'] = 'field_data_field_primary_topic_category';
  $handler->display->display_options['fields']['field_primary_topic_category']['field'] = 'field_primary_topic_category';
  $handler->display->display_options['fields']['field_primary_topic_category']['label'] = 'Primary topic';
  $handler->display->display_options['fields']['field_primary_topic_category']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_primary_topic_category']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_primary_topic_category']['type'] = 'ds_taxonomy_separator_localized';
  /* Field: Content: Other Topic categories */
  $handler->display->display_options['fields']['field_other_topic_categories']['id'] = 'field_other_topic_categories';
  $handler->display->display_options['fields']['field_other_topic_categories']['table'] = 'field_data_field_other_topic_categories';
  $handler->display->display_options['fields']['field_other_topic_categories']['field'] = 'field_other_topic_categories';
  $handler->display->display_options['fields']['field_other_topic_categories']['label'] = 'Other topics';
  $handler->display->display_options['fields']['field_other_topic_categories']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_other_topic_categories']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_other_topic_categories']['type'] = 'ds_taxonomy_separator_localized';
  $handler->display->display_options['fields']['field_other_topic_categories']['delta_offset'] = '0';
  /* Field: Content: Key actors */
  $handler->display->display_options['fields']['field_key_actors']['id'] = 'field_key_actors';
  $handler->display->display_options['fields']['field_key_actors']['table'] = 'field_data_field_key_actors';
  $handler->display->display_options['fields']['field_key_actors']['field'] = 'field_key_actors';
  $handler->display->display_options['fields']['field_key_actors']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_key_actors']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_key_actors']['type'] = 'text_plain';
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_year']['id'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['table'] = 'field_data_field_year';
  $handler->display->display_options['fields']['field_year']['field'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_year']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_year']['settings'] = array(
    'format_type' => 'eige_year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_year']['delta_offset'] = '0';
  /* Field: Content: Other topics */
  $handler->display->display_options['fields']['field_other_topics']['id'] = 'field_other_topics';
  $handler->display->display_options['fields']['field_other_topics']['table'] = 'field_data_field_other_topics';
  $handler->display->display_options['fields']['field_other_topics']['field'] = 'field_other_topics';
  $handler->display->display_options['fields']['field_other_topics']['label'] = 'Tags';
  $handler->display->display_options['fields']['field_other_topics']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_other_topics']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_other_topics']['type'] = 'ds_taxonomy_separator_localized';
  $handler->display->display_options['fields']['field_other_topics']['delta_offset'] = '0';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Story';
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = TRUE;
  /* Field: Content: Native Language */
  $handler->display->display_options['fields']['field_native_language']['id'] = 'field_native_language';
  $handler->display->display_options['fields']['field_native_language']['table'] = 'field_data_field_native_language';
  $handler->display->display_options['fields']['field_native_language']['field'] = 'field_native_language';
  $handler->display->display_options['fields']['field_native_language']['label'] = 'Native language';
  $handler->display->display_options['fields']['field_native_language']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_native_language']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_native_language']['type'] = 'ds_taxonomy_separator_localized';
  /* Field: Content: Body in native language */
  $handler->display->display_options['fields']['field_body_in_native_language']['id'] = 'field_body_in_native_language';
  $handler->display->display_options['fields']['field_body_in_native_language']['table'] = 'field_data_field_body_in_native_language';
  $handler->display->display_options['fields']['field_body_in_native_language']['field'] = 'field_body_in_native_language';
  $handler->display->display_options['fields']['field_body_in_native_language']['label'] = 'Story in native language';
  $handler->display->display_options['fields']['field_body_in_native_language']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_body_in_native_language']['alter']['nl2br'] = TRUE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  $handler->display->display_options['path'] = 'more-areas/gender-stereotypes/search-for-gender-stories/csv';
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
    'field_body_in_native_language' => 'field_body_in_native_language',
  );
  $handler->display->display_options['style_options']['cdata_wrapper'] = array(
    'field_key_actors' => 'field_key_actors',
    'field_other_topics' => 'field_other_topics',
    'body' => 'body',
    'field_body_in_native_language' => 'field_body_in_native_language',
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Country */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_country']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_country']['type'] = 'country_default_i18n';
  /* Field: Content: Age */
  $handler->display->display_options['fields']['field_age']['id'] = 'field_age';
  $handler->display->display_options['fields']['field_age']['table'] = 'field_data_field_age';
  $handler->display->display_options['fields']['field_age']['field'] = 'field_age';
  $handler->display->display_options['fields']['field_age']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_age']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_age']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Sex */
  $handler->display->display_options['fields']['field_sex']['id'] = 'field_sex';
  $handler->display->display_options['fields']['field_sex']['table'] = 'field_data_field_sex';
  $handler->display->display_options['fields']['field_sex']['field'] = 'field_sex';
  $handler->display->display_options['fields']['field_sex']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_sex']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_sex']['type'] = 'ds_taxonomy_separator_localized';
  /* Field: Content: Primary Topic category */
  $handler->display->display_options['fields']['field_primary_topic_category']['id'] = 'field_primary_topic_category';
  $handler->display->display_options['fields']['field_primary_topic_category']['table'] = 'field_data_field_primary_topic_category';
  $handler->display->display_options['fields']['field_primary_topic_category']['field'] = 'field_primary_topic_category';
  $handler->display->display_options['fields']['field_primary_topic_category']['label'] = 'Primary topic';
  $handler->display->display_options['fields']['field_primary_topic_category']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_primary_topic_category']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_primary_topic_category']['type'] = 'ds_taxonomy_separator_localized';
  /* Field: Content: Other Topic categories */
  $handler->display->display_options['fields']['field_other_topic_categories']['id'] = 'field_other_topic_categories';
  $handler->display->display_options['fields']['field_other_topic_categories']['table'] = 'field_data_field_other_topic_categories';
  $handler->display->display_options['fields']['field_other_topic_categories']['field'] = 'field_other_topic_categories';
  $handler->display->display_options['fields']['field_other_topic_categories']['label'] = 'Other topics';
  $handler->display->display_options['fields']['field_other_topic_categories']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_other_topic_categories']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_other_topic_categories']['type'] = 'ds_taxonomy_separator_localized';
  $handler->display->display_options['fields']['field_other_topic_categories']['delta_offset'] = '0';
  /* Field: Content: Key actors */
  $handler->display->display_options['fields']['field_key_actors']['id'] = 'field_key_actors';
  $handler->display->display_options['fields']['field_key_actors']['table'] = 'field_data_field_key_actors';
  $handler->display->display_options['fields']['field_key_actors']['field'] = 'field_key_actors';
  $handler->display->display_options['fields']['field_key_actors']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_key_actors']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_key_actors']['type'] = 'text_plain';
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_year']['id'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['table'] = 'field_data_field_year';
  $handler->display->display_options['fields']['field_year']['field'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_year']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_year']['settings'] = array(
    'format_type' => 'eige_year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_year']['delta_offset'] = '0';
  /* Field: Content: Other topics */
  $handler->display->display_options['fields']['field_other_topics']['id'] = 'field_other_topics';
  $handler->display->display_options['fields']['field_other_topics']['table'] = 'field_data_field_other_topics';
  $handler->display->display_options['fields']['field_other_topics']['field'] = 'field_other_topics';
  $handler->display->display_options['fields']['field_other_topics']['label'] = 'Tags';
  $handler->display->display_options['fields']['field_other_topics']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_other_topics']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_other_topics']['type'] = 'ds_taxonomy_separator_localized';
  $handler->display->display_options['fields']['field_other_topics']['delta_offset'] = '0';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Story';
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = TRUE;
  /* Field: Content: Native Language */
  $handler->display->display_options['fields']['field_native_language']['id'] = 'field_native_language';
  $handler->display->display_options['fields']['field_native_language']['table'] = 'field_data_field_native_language';
  $handler->display->display_options['fields']['field_native_language']['field'] = 'field_native_language';
  $handler->display->display_options['fields']['field_native_language']['label'] = 'Native language';
  $handler->display->display_options['fields']['field_native_language']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_native_language']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_native_language']['type'] = 'ds_taxonomy_separator_localized';
  /* Field: Content: Body in native language */
  $handler->display->display_options['fields']['field_body_in_native_language']['id'] = 'field_body_in_native_language';
  $handler->display->display_options['fields']['field_body_in_native_language']['table'] = 'field_data_field_body_in_native_language';
  $handler->display->display_options['fields']['field_body_in_native_language']['field'] = 'field_body_in_native_language';
  $handler->display->display_options['fields']['field_body_in_native_language']['label'] = 'Story in native language';
  $handler->display->display_options['fields']['field_body_in_native_language']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_body_in_native_language']['alter']['nl2br'] = TRUE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  $handler->display->display_options['path'] = 'more-areas/gender-stereotypes/search-for-gender-stories/xml';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $export['search_for_gender_stories'] = $view;

  return $export;
}

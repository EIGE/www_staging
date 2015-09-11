<?php
/**
 * @file
 * eige_administrative_data.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function eige_administrative_data_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'administrative_data_sources';
  $view->description = 'Advanced search for administrative data sources';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Administrative data sources';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Administrative data sources on GBV in the EU';
  $handler->display->display_options['css_class'] = 'view-with-enhanced-collapsible-filters';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Clear All';
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
    'type' => array(
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
    'field_ad_sector_tid_i18n' => array(
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
    'title' => array(
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
  $handler->display->display_options['pager']['options']['more_button_text'] = 'Load more administrative data sources';
  $handler->display->display_options['pager']['options']['advance']['content_class'] = '.view-content:eq(0)';
  $handler->display->display_options['pager']['options']['effects']['type'] = 'fade';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'fast';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['wrapper_class'] = 'grouped-items-list';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<div class="view-results-count"><strong>@total</strong> Administrative data sources found</div>';
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
  /* Field: Content: Country */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_country']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_country']['type'] = 'country_default_i18n';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Types of GBV */
  $handler->display->display_options['fields']['field_violence_types']['id'] = 'field_violence_types';
  $handler->display->display_options['fields']['field_violence_types']['table'] = 'field_data_field_violence_types';
  $handler->display->display_options['fields']['field_violence_types']['field'] = 'field_violence_types';
  $handler->display->display_options['fields']['field_violence_types']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_violence_types']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_violence_types']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_violence_types']['multi_type'] = 'ul';
  /* Field: Content: Sector */
  $handler->display->display_options['fields']['field_ad_sector']['id'] = 'field_ad_sector';
  $handler->display->display_options['fields']['field_ad_sector']['table'] = 'field_data_field_ad_sector';
  $handler->display->display_options['fields']['field_ad_sector']['field'] = 'field_ad_sector';
  $handler->display->display_options['fields']['field_ad_sector']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ad_sector']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_ad_sector']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ad_sector']['multi_type'] = 'ul';
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
    'administrative_data_source' => 'administrative_data_source',
    'statistical_product' => 'statistical_product',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['type']['group_info']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['group_info']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['type']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
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
  $handler->display->display_options['filters']['field_violence_types_tid_i18n']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_violence_types_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_violence_types_tid_i18n']['vocabulary'] = 'gender_based_violence_types';
  /* Filter criterion: Content: Sector (field_ad_sector) (translated) */
  $handler->display->display_options['filters']['field_ad_sector_tid_i18n']['id'] = 'field_ad_sector_tid_i18n';
  $handler->display->display_options['filters']['field_ad_sector_tid_i18n']['table'] = 'field_data_field_ad_sector';
  $handler->display->display_options['filters']['field_ad_sector_tid_i18n']['field'] = 'field_ad_sector_tid_i18n';
  $handler->display->display_options['filters']['field_ad_sector_tid_i18n']['group'] = 1;
  $handler->display->display_options['filters']['field_ad_sector_tid_i18n']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ad_sector_tid_i18n']['expose']['operator_id'] = 'field_ad_sector_tid_i18n_op';
  $handler->display->display_options['filters']['field_ad_sector_tid_i18n']['expose']['label'] = 'Sector';
  $handler->display->display_options['filters']['field_ad_sector_tid_i18n']['expose']['operator'] = 'field_ad_sector_tid_i18n_op';
  $handler->display->display_options['filters']['field_ad_sector_tid_i18n']['expose']['identifier'] = 'st';
  $handler->display->display_options['filters']['field_ad_sector_tid_i18n']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_ad_sector_tid_i18n']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_ad_sector_tid_i18n']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_ad_sector_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_ad_sector_tid_i18n']['vocabulary'] = 'administrative_data_sectors';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'allwords';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Search Administrative data sources';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 't';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Clear All';
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
    'type' => array(
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
    'field_ad_sector_tid_i18n' => array(
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
    'title' => array(
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
      'bef_format' => 'bef_single',
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
    'populate_1' => array(
      'bef_format' => 'bef_single',
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
    'populate_2' => array(
      'bef_format' => 'bef_single',
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
    'populate_3' => array(
      'bef_format' => 'bef_single',
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
    'populate_4' => array(
      'bef_format' => 'bef_single',
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
    'populate_5' => array(
      'bef_format' => 'bef_single',
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
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'grouped-items-list';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title (title_field) */
  $handler->display->display_options['sorts']['title_field_value']['id'] = 'title_field_value';
  $handler->display->display_options['sorts']['title_field_value']['table'] = 'field_data_title_field';
  $handler->display->display_options['sorts']['title_field_value']['field'] = 'title_field_value';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
    3 => 'OR',
    4 => 'OR',
    6 => 'OR',
    5 => 'OR',
    7 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'administrative_data_source' => 'administrative_data_source',
    'statistical_product' => 'statistical_product',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['type']['group_info']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['group_info']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['type']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
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
  $handler->display->display_options['filters']['field_violence_types_tid_i18n']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_violence_types_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_violence_types_tid_i18n']['vocabulary'] = 'gender_based_violence_types';
  /* Filter criterion: Content: Sector (field_ad_sector) (translated) */
  $handler->display->display_options['filters']['field_ad_sector_tid_i18n']['id'] = 'field_ad_sector_tid_i18n';
  $handler->display->display_options['filters']['field_ad_sector_tid_i18n']['table'] = 'field_data_field_ad_sector';
  $handler->display->display_options['filters']['field_ad_sector_tid_i18n']['field'] = 'field_ad_sector_tid_i18n';
  $handler->display->display_options['filters']['field_ad_sector_tid_i18n']['group'] = 1;
  $handler->display->display_options['filters']['field_ad_sector_tid_i18n']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ad_sector_tid_i18n']['expose']['operator_id'] = 'field_ad_sector_tid_i18n_op';
  $handler->display->display_options['filters']['field_ad_sector_tid_i18n']['expose']['label'] = 'Sector';
  $handler->display->display_options['filters']['field_ad_sector_tid_i18n']['expose']['operator'] = 'field_ad_sector_tid_i18n_op';
  $handler->display->display_options['filters']['field_ad_sector_tid_i18n']['expose']['identifier'] = 'st';
  $handler->display->display_options['filters']['field_ad_sector_tid_i18n']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_ad_sector_tid_i18n']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_ad_sector_tid_i18n']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_ad_sector_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_ad_sector_tid_i18n']['vocabulary'] = 'administrative_data_sectors';
  /* Filter criterion: Data available on victim */
  $handler->display->display_options['filters']['populate']['id'] = 'populate';
  $handler->display->display_options['filters']['populate']['table'] = 'views_filters_populate_conditionally';
  $handler->display->display_options['filters']['populate']['field'] = 'populate';
  $handler->display->display_options['filters']['populate']['ui_name'] = 'Data available on victim';
  $handler->display->display_options['filters']['populate']['value'] = '0';
  $handler->display->display_options['filters']['populate']['group'] = 1;
  $handler->display->display_options['filters']['populate']['exposed'] = TRUE;
  $handler->display->display_options['filters']['populate']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['populate']['expose']['label'] = 'Data available on victim';
  $handler->display->display_options['filters']['populate']['expose']['operator'] = 'populate_op';
  $handler->display->display_options['filters']['populate']['expose']['identifier'] = 'dv';
  $handler->display->display_options['filters']['populate']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['populate']['filters'] = array(
    'field_victim_info_value' => 'field_victim_info_value',
    'field_victim_info_other_value' => 'field_victim_info_other_value',
    'field_victim_relationship_value' => 'field_victim_relationship_value',
    'field_victim_repetition_value' => 'field_victim_repetition_value',
    'name_list' => 0,
    'status' => 0,
    'type' => 0,
    'field_violence_types_tid_i18n' => 0,
    'field_ad_sector_tid_i18n' => 0,
    'title' => 0,
  );
  /* Filter criterion: Data available on perpetrator */
  $handler->display->display_options['filters']['populate_1']['id'] = 'populate_1';
  $handler->display->display_options['filters']['populate_1']['table'] = 'views_filters_populate_conditionally';
  $handler->display->display_options['filters']['populate_1']['field'] = 'populate';
  $handler->display->display_options['filters']['populate_1']['ui_name'] = 'Data available on perpetrator';
  $handler->display->display_options['filters']['populate_1']['group'] = 1;
  $handler->display->display_options['filters']['populate_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['populate_1']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['populate_1']['expose']['label'] = 'Data available on perpetrator';
  $handler->display->display_options['filters']['populate_1']['expose']['operator'] = 'populate_1_op';
  $handler->display->display_options['filters']['populate_1']['expose']['identifier'] = 'dp';
  $handler->display->display_options['filters']['populate_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['populate_1']['filters'] = array(
    'field_perpetrator_info_value' => 'field_perpetrator_info_value',
    'field_perpetrator_info_other_value' => 'field_perpetrator_info_other_value',
    'field_perpetrator_reoffending_value' => 'field_perpetrator_reoffending_value',
    'field_perpetrator_relationship_value' => 'field_perpetrator_relationship_value',
    'name_list' => 0,
    'status' => 0,
    'type' => 0,
    'field_violence_types_tid_i18n' => 0,
    'field_ad_sector_tid_i18n' => 0,
    'title' => 0,
    'populate' => 0,
    'field_victim_info_value' => 0,
    'field_victim_info_other_value' => 0,
    'field_victim_relationship_value' => 0,
    'field_victim_repetition_value' => 0,
  );
  /* Filter criterion: Data available on witness */
  $handler->display->display_options['filters']['populate_2']['id'] = 'populate_2';
  $handler->display->display_options['filters']['populate_2']['table'] = 'views_filters_populate_conditionally';
  $handler->display->display_options['filters']['populate_2']['field'] = 'populate';
  $handler->display->display_options['filters']['populate_2']['ui_name'] = 'Data available on witness';
  $handler->display->display_options['filters']['populate_2']['group'] = 1;
  $handler->display->display_options['filters']['populate_2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['populate_2']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['populate_2']['expose']['label'] = 'Data available on witness';
  $handler->display->display_options['filters']['populate_2']['expose']['operator'] = 'populate_2_op';
  $handler->display->display_options['filters']['populate_2']['expose']['identifier'] = 'dw';
  $handler->display->display_options['filters']['populate_2']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['populate_2']['filters'] = array(
    'field_witness_info_value' => 'field_witness_info_value',
    'field_witness_info_other_value' => 'field_witness_info_other_value',
    'field_witness_relationship_value' => 'field_witness_relationship_value',
    'field_witness_description_value' => 'field_witness_description_value',
    'field_witness_children_value' => 'field_witness_children_value',
    'name_list' => 0,
    'status' => 0,
    'type' => 0,
    'field_violence_types_tid_i18n' => 0,
    'field_ad_sector_tid_i18n' => 0,
    'title' => 0,
    'populate' => 0,
    'populate_1' => 0,
    'field_victim_info_value' => 0,
    'field_victim_info_other_value' => 0,
    'field_victim_relationship_value' => 0,
    'field_victim_repetition_value' => 0,
    'field_perpetrator_info_value' => 0,
    'field_perpetrator_info_other_value' => 0,
    'field_perpetrator_relationship_value' => 0,
    'field_perpetrator_reoffending_value' => 0,
  );
  /* Filter criterion: Data available on incident */
  $handler->display->display_options['filters']['populate_3']['id'] = 'populate_3';
  $handler->display->display_options['filters']['populate_3']['table'] = 'views_filters_populate_conditionally';
  $handler->display->display_options['filters']['populate_3']['field'] = 'populate';
  $handler->display->display_options['filters']['populate_3']['ui_name'] = 'Data available on incident';
  $handler->display->display_options['filters']['populate_3']['group'] = 1;
  $handler->display->display_options['filters']['populate_3']['exposed'] = TRUE;
  $handler->display->display_options['filters']['populate_3']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['populate_3']['expose']['label'] = 'Data available on incident';
  $handler->display->display_options['filters']['populate_3']['expose']['operator'] = 'populate_3_op';
  $handler->display->display_options['filters']['populate_3']['expose']['identifier'] = 'di';
  $handler->display->display_options['filters']['populate_3']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['populate_3']['filters'] = array(
    'field_incident_value' => 'field_incident_value',
    'field_incident_other_value' => 'field_incident_other_value',
    'field_incident_code_system_value' => 'field_incident_code_system_value',
    'field_incident_description_value' => 'field_incident_description_value',
    'field_incident_description_other_value' => 'field_incident_description_other_value',
    'field_incident_protection_value' => 'field_incident_protection_value',
    'field_incident_justice_data_value' => 'field_incident_justice_data_value',
    'field_incident_resources_value' => 'field_incident_resources_value',
    'field_incident_other_resources_value' => 'field_incident_other_resources_value',
    'name_list' => 0,
    'status' => 0,
    'type' => 0,
    'field_violence_types_tid_i18n' => 0,
    'field_ad_sector_tid_i18n' => 0,
    'title' => 0,
    'populate' => 0,
    'populate_1' => 0,
    'populate_2' => 0,
    'field_victim_info_value' => 0,
    'field_victim_info_other_value' => 0,
    'field_victim_relationship_value' => 0,
    'field_victim_repetition_value' => 0,
    'field_perpetrator_info_value' => 0,
    'field_perpetrator_info_other_value' => 0,
    'field_perpetrator_relationship_value' => 0,
    'field_perpetrator_reoffending_value' => 0,
    'field_witness_info_value' => 0,
    'field_witness_info_other_value' => 0,
    'field_witness_relationship_value' => 0,
    'field_witness_description_value' => 0,
    'field_witness_children_value' => 0,
  );
  /* Filter criterion: Data available on prosecution process */
  $handler->display->display_options['filters']['populate_4']['id'] = 'populate_4';
  $handler->display->display_options['filters']['populate_4']['table'] = 'views_filters_populate_conditionally';
  $handler->display->display_options['filters']['populate_4']['field'] = 'populate';
  $handler->display->display_options['filters']['populate_4']['ui_name'] = 'Data available on prosecution process';
  $handler->display->display_options['filters']['populate_4']['group'] = 1;
  $handler->display->display_options['filters']['populate_4']['exposed'] = TRUE;
  $handler->display->display_options['filters']['populate_4']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['populate_4']['expose']['label'] = 'Data available on prosecution process';
  $handler->display->display_options['filters']['populate_4']['expose']['operator'] = 'populate_4_op';
  $handler->display->display_options['filters']['populate_4']['expose']['identifier'] = 'dpp';
  $handler->display->display_options['filters']['populate_4']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['populate_4']['filters'] = array(
    'field_prosecution_stages_value' => 'field_prosecution_stages_value',
    'field_prosec_stages_other_value' => 'field_prosec_stages_other_value',
    'field_prosecution_defendant_value' => 'field_prosecution_defendant_value',
    'field_prosec_defendant_other_value' => 'field_prosec_defendant_other_value',
    'field_prosecution_avg_time_value' => 'field_prosecution_avg_time_value',
    'name_list' => 0,
    'status' => 0,
    'type' => 0,
    'field_violence_types_tid_i18n' => 0,
    'field_ad_sector_tid_i18n' => 0,
    'title' => 0,
    'populate' => 0,
    'populate_1' => 0,
    'populate_2' => 0,
    'populate_3' => 0,
    'field_victim_info_value' => 0,
    'field_victim_info_other_value' => 0,
    'field_victim_relationship_value' => 0,
    'field_victim_repetition_value' => 0,
    'field_perpetrator_info_value' => 0,
    'field_perpetrator_info_other_value' => 0,
    'field_perpetrator_relationship_value' => 0,
    'field_perpetrator_reoffending_value' => 0,
    'field_witness_info_value' => 0,
    'field_witness_info_other_value' => 0,
    'field_witness_relationship_value' => 0,
    'field_witness_description_value' => 0,
    'field_witness_children_value' => 0,
    'field_incident_value' => 0,
    'field_incident_other_value' => 0,
    'field_incident_code_system_value' => 0,
    'field_incident_description_value' => 0,
    'field_incident_description_other_value' => 0,
    'field_incident_protection_value' => 0,
    'field_incident_justice_data_value' => 0,
    'field_incident_resources_value' => 0,
    'field_incident_other_resources_value' => 0,
  );
  /* Filter criterion: Data available on outcomes */
  $handler->display->display_options['filters']['populate_5']['id'] = 'populate_5';
  $handler->display->display_options['filters']['populate_5']['table'] = 'views_filters_populate_conditionally';
  $handler->display->display_options['filters']['populate_5']['field'] = 'populate';
  $handler->display->display_options['filters']['populate_5']['ui_name'] = 'Data available on outcomes';
  $handler->display->display_options['filters']['populate_5']['group'] = 1;
  $handler->display->display_options['filters']['populate_5']['exposed'] = TRUE;
  $handler->display->display_options['filters']['populate_5']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['populate_5']['expose']['label'] = 'Data available on outcomes';
  $handler->display->display_options['filters']['populate_5']['expose']['operator'] = 'populate_5_op';
  $handler->display->display_options['filters']['populate_5']['expose']['identifier'] = 'do';
  $handler->display->display_options['filters']['populate_5']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['populate_5']['filters'] = array(
    'field_outcomes_arrest_cases_value' => 'field_outcomes_arrest_cases_value',
    'field_outcomes_many_offenses_value' => 'field_outcomes_many_offenses_value',
    'field_outcomes_list_offenses_value' => 'field_outcomes_list_offenses_value',
    'field_outcomes_probation_value' => 'field_outcomes_probation_value',
    'field_outcomes_bail_remand_value' => 'field_outcomes_bail_remand_value',
    'field_outcomes_prisons_value' => 'field_outcomes_prisons_value',
    'field_outcomes_perp_other_value' => 'field_outcomes_perp_other_value',
    'field_outcomes_death_value' => 'field_outcomes_death_value',
    'name_list' => 0,
    'status' => 0,
    'type' => 0,
    'field_violence_types_tid_i18n' => 0,
    'field_ad_sector_tid_i18n' => 0,
    'title' => 0,
    'populate' => 0,
    'populate_1' => 0,
    'populate_2' => 0,
    'populate_3' => 0,
    'populate_4' => 0,
    'field_victim_info_value' => 0,
    'field_victim_info_other_value' => 0,
    'field_victim_relationship_value' => 0,
    'field_victim_repetition_value' => 0,
    'field_perpetrator_info_value' => 0,
    'field_perpetrator_info_other_value' => 0,
    'field_perpetrator_relationship_value' => 0,
    'field_perpetrator_reoffending_value' => 0,
    'field_witness_info_value' => 0,
    'field_witness_info_other_value' => 0,
    'field_witness_relationship_value' => 0,
    'field_witness_description_value' => 0,
    'field_witness_children_value' => 0,
    'field_prosecution_stages_value' => 0,
    'field_prosec_stages_other_value' => 0,
    'field_prosecution_defendant_value' => 0,
    'field_prosec_defendant_other_value' => 0,
    'field_prosecution_avg_time_value' => 0,
    'field_incident_value' => 0,
    'field_incident_other_value' => 0,
    'field_incident_code_system_value' => 0,
    'field_incident_description_value' => 0,
    'field_incident_description_other_value' => 0,
    'field_incident_protection_value' => 0,
    'field_incident_justice_data_value' => 0,
    'field_incident_resources_value' => 0,
    'field_incident_other_resources_value' => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'allwords';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Search Administrative data sources';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 't';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Background information (field_victim_info) */
  $handler->display->display_options['filters']['field_victim_info_value']['id'] = 'field_victim_info_value';
  $handler->display->display_options['filters']['field_victim_info_value']['table'] = 'field_data_field_victim_info';
  $handler->display->display_options['filters']['field_victim_info_value']['field'] = 'field_victim_info_value';
  $handler->display->display_options['filters']['field_victim_info_value']['value'] = array(
    'Age' => 'Age',
    'Sex' => 'Sex',
    'Nationality' => 'Nationality',
    'ID' => 'ID',
    'Name' => 'Name',
    'Ethnicity' => 'Ethnicity',
    'Marital status' => 'Marital status',
    'Dependants' => 'Dependants',
  );
  $handler->display->display_options['filters']['field_victim_info_value']['group'] = 2;
  $handler->display->display_options['filters']['field_victim_info_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Other (field_victim_info_other) */
  $handler->display->display_options['filters']['field_victim_info_other_value']['id'] = 'field_victim_info_other_value';
  $handler->display->display_options['filters']['field_victim_info_other_value']['table'] = 'field_data_field_victim_info_other';
  $handler->display->display_options['filters']['field_victim_info_other_value']['field'] = 'field_victim_info_other_value';
  $handler->display->display_options['filters']['field_victim_info_other_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_victim_info_other_value']['group'] = 2;
  /* Filter criterion: Content: Relationship with perpetrator (field_victim_relationship) */
  $handler->display->display_options['filters']['field_victim_relationship_value']['id'] = 'field_victim_relationship_value';
  $handler->display->display_options['filters']['field_victim_relationship_value']['table'] = 'field_data_field_victim_relationship';
  $handler->display->display_options['filters']['field_victim_relationship_value']['field'] = 'field_victim_relationship_value';
  $handler->display->display_options['filters']['field_victim_relationship_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_victim_relationship_value']['group'] = 2;
  $handler->display->display_options['filters']['field_victim_relationship_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Repeatedly suffering from GBV (field_victim_repetition) */
  $handler->display->display_options['filters']['field_victim_repetition_value']['id'] = 'field_victim_repetition_value';
  $handler->display->display_options['filters']['field_victim_repetition_value']['table'] = 'field_data_field_victim_repetition';
  $handler->display->display_options['filters']['field_victim_repetition_value']['field'] = 'field_victim_repetition_value';
  $handler->display->display_options['filters']['field_victim_repetition_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_victim_repetition_value']['group'] = 2;
  $handler->display->display_options['filters']['field_victim_repetition_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Background information (field_perpetrator_info) */
  $handler->display->display_options['filters']['field_perpetrator_info_value']['id'] = 'field_perpetrator_info_value';
  $handler->display->display_options['filters']['field_perpetrator_info_value']['table'] = 'field_data_field_perpetrator_info';
  $handler->display->display_options['filters']['field_perpetrator_info_value']['field'] = 'field_perpetrator_info_value';
  $handler->display->display_options['filters']['field_perpetrator_info_value']['value'] = array(
    'Age' => 'Age',
    'Sex' => 'Sex',
    'Nationality' => 'Nationality',
    'ID' => 'ID',
    'Name' => 'Name',
    'Ethnicity' => 'Ethnicity',
    'Marital status' => 'Marital status',
    'Dependants' => 'Dependants',
  );
  $handler->display->display_options['filters']['field_perpetrator_info_value']['group'] = 3;
  $handler->display->display_options['filters']['field_perpetrator_info_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Other (field_perpetrator_info_other) */
  $handler->display->display_options['filters']['field_perpetrator_info_other_value']['id'] = 'field_perpetrator_info_other_value';
  $handler->display->display_options['filters']['field_perpetrator_info_other_value']['table'] = 'field_data_field_perpetrator_info_other';
  $handler->display->display_options['filters']['field_perpetrator_info_other_value']['field'] = 'field_perpetrator_info_other_value';
  $handler->display->display_options['filters']['field_perpetrator_info_other_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_perpetrator_info_other_value']['group'] = 3;
  /* Filter criterion: Content: Relationship with victim (field_perpetrator_relationship) */
  $handler->display->display_options['filters']['field_perpetrator_relationship_value']['id'] = 'field_perpetrator_relationship_value';
  $handler->display->display_options['filters']['field_perpetrator_relationship_value']['table'] = 'field_data_field_perpetrator_relationship';
  $handler->display->display_options['filters']['field_perpetrator_relationship_value']['field'] = 'field_perpetrator_relationship_value';
  $handler->display->display_options['filters']['field_perpetrator_relationship_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_perpetrator_relationship_value']['group'] = 3;
  $handler->display->display_options['filters']['field_perpetrator_relationship_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Re-offending (field_perpetrator_reoffending) */
  $handler->display->display_options['filters']['field_perpetrator_reoffending_value']['id'] = 'field_perpetrator_reoffending_value';
  $handler->display->display_options['filters']['field_perpetrator_reoffending_value']['table'] = 'field_data_field_perpetrator_reoffending';
  $handler->display->display_options['filters']['field_perpetrator_reoffending_value']['field'] = 'field_perpetrator_reoffending_value';
  $handler->display->display_options['filters']['field_perpetrator_reoffending_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_perpetrator_reoffending_value']['group'] = 3;
  $handler->display->display_options['filters']['field_perpetrator_reoffending_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Background information (field_witness_info) */
  $handler->display->display_options['filters']['field_witness_info_value']['id'] = 'field_witness_info_value';
  $handler->display->display_options['filters']['field_witness_info_value']['table'] = 'field_data_field_witness_info';
  $handler->display->display_options['filters']['field_witness_info_value']['field'] = 'field_witness_info_value';
  $handler->display->display_options['filters']['field_witness_info_value']['value'] = array(
    'Age' => 'Age',
    'Sex' => 'Sex',
    'Nationality' => 'Nationality',
    'ID' => 'ID',
    'Name' => 'Name',
    'Ethnicity' => 'Ethnicity',
    'Marital status' => 'Marital status',
    'Dependants' => 'Dependants',
  );
  $handler->display->display_options['filters']['field_witness_info_value']['group'] = 4;
  $handler->display->display_options['filters']['field_witness_info_value']['expose']['operator_id'] = 'field_witness_info_value_op';
  $handler->display->display_options['filters']['field_witness_info_value']['expose']['label'] = 'Background information (field_witness_info)';
  $handler->display->display_options['filters']['field_witness_info_value']['expose']['operator'] = 'field_witness_info_value_op';
  $handler->display->display_options['filters']['field_witness_info_value']['expose']['identifier'] = 'field_witness_info_value';
  $handler->display->display_options['filters']['field_witness_info_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Other (field_witness_info_other) */
  $handler->display->display_options['filters']['field_witness_info_other_value']['id'] = 'field_witness_info_other_value';
  $handler->display->display_options['filters']['field_witness_info_other_value']['table'] = 'field_data_field_witness_info_other';
  $handler->display->display_options['filters']['field_witness_info_other_value']['field'] = 'field_witness_info_other_value';
  $handler->display->display_options['filters']['field_witness_info_other_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_witness_info_other_value']['group'] = 4;
  /* Filter criterion: Content: Relationship with victim/perpetrator (field_witness_relationship) */
  $handler->display->display_options['filters']['field_witness_relationship_value']['id'] = 'field_witness_relationship_value';
  $handler->display->display_options['filters']['field_witness_relationship_value']['table'] = 'field_data_field_witness_relationship';
  $handler->display->display_options['filters']['field_witness_relationship_value']['field'] = 'field_witness_relationship_value';
  $handler->display->display_options['filters']['field_witness_relationship_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_witness_relationship_value']['group'] = 4;
  $handler->display->display_options['filters']['field_witness_relationship_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Incident description by witness (field_witness_description) */
  $handler->display->display_options['filters']['field_witness_description_value']['id'] = 'field_witness_description_value';
  $handler->display->display_options['filters']['field_witness_description_value']['table'] = 'field_data_field_witness_description';
  $handler->display->display_options['filters']['field_witness_description_value']['field'] = 'field_witness_description_value';
  $handler->display->display_options['filters']['field_witness_description_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_witness_description_value']['group'] = 4;
  $handler->display->display_options['filters']['field_witness_description_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Children witnessing IPV incident (field_witness_children) */
  $handler->display->display_options['filters']['field_witness_children_value']['id'] = 'field_witness_children_value';
  $handler->display->display_options['filters']['field_witness_children_value']['table'] = 'field_data_field_witness_children';
  $handler->display->display_options['filters']['field_witness_children_value']['field'] = 'field_witness_children_value';
  $handler->display->display_options['filters']['field_witness_children_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_witness_children_value']['group'] = 4;
  $handler->display->display_options['filters']['field_witness_children_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Stages of prosecution process (field_prosecution_stages) */
  $handler->display->display_options['filters']['field_prosecution_stages_value']['id'] = 'field_prosecution_stages_value';
  $handler->display->display_options['filters']['field_prosecution_stages_value']['table'] = 'field_data_field_prosecution_stages';
  $handler->display->display_options['filters']['field_prosecution_stages_value']['field'] = 'field_prosecution_stages_value';
  $handler->display->display_options['filters']['field_prosecution_stages_value']['value'] = array(
    'Withdrawals of complaints' => 'Withdrawals of complaints',
    'Withdrawals of prosecution support' => 'Withdrawals of prosecution support',
    'N. of cases reported for each incident' => 'N. of cases reported for each incident',
    'N. of cases initiated for each type of incident' => 'N. of cases initiated for each type of incident',
    'N. of cases referred to court' => 'N. of cases referred to court',
    'Types of offense(s)' => 'Types of offense(s)',
  );
  $handler->display->display_options['filters']['field_prosecution_stages_value']['group'] = 6;
  $handler->display->display_options['filters']['field_prosecution_stages_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Other (field_prosec_stages_other) */
  $handler->display->display_options['filters']['field_prosec_stages_other_value']['id'] = 'field_prosec_stages_other_value';
  $handler->display->display_options['filters']['field_prosec_stages_other_value']['table'] = 'field_data_field_prosec_stages_other';
  $handler->display->display_options['filters']['field_prosec_stages_other_value']['field'] = 'field_prosec_stages_other_value';
  $handler->display->display_options['filters']['field_prosec_stages_other_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_prosec_stages_other_value']['group'] = 6;
  /* Filter criterion: Content: Defendant pleas/verdicts (field_prosecution_defendant) */
  $handler->display->display_options['filters']['field_prosecution_defendant_value']['id'] = 'field_prosecution_defendant_value';
  $handler->display->display_options['filters']['field_prosecution_defendant_value']['table'] = 'field_data_field_prosecution_defendant';
  $handler->display->display_options['filters']['field_prosecution_defendant_value']['field'] = 'field_prosecution_defendant_value';
  $handler->display->display_options['filters']['field_prosecution_defendant_value']['value'] = array(
    'Guilty pleas' => 'Guilty pleas',
    'Guilty verdicts' => 'Guilty verdicts',
  );
  $handler->display->display_options['filters']['field_prosecution_defendant_value']['group'] = 6;
  $handler->display->display_options['filters']['field_prosecution_defendant_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Other (field_prosec_defendant_other) */
  $handler->display->display_options['filters']['field_prosec_defendant_other_value']['id'] = 'field_prosec_defendant_other_value';
  $handler->display->display_options['filters']['field_prosec_defendant_other_value']['table'] = 'field_data_field_prosec_defendant_other';
  $handler->display->display_options['filters']['field_prosec_defendant_other_value']['field'] = 'field_prosec_defendant_other_value';
  $handler->display->display_options['filters']['field_prosec_defendant_other_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_prosec_defendant_other_value']['group'] = 6;
  /* Filter criterion: Content: Average time case through criminal justice system (field_prosecution_avg_time) */
  $handler->display->display_options['filters']['field_prosecution_avg_time_value']['id'] = 'field_prosecution_avg_time_value';
  $handler->display->display_options['filters']['field_prosecution_avg_time_value']['table'] = 'field_data_field_prosecution_avg_time';
  $handler->display->display_options['filters']['field_prosecution_avg_time_value']['field'] = 'field_prosecution_avg_time_value';
  $handler->display->display_options['filters']['field_prosecution_avg_time_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_prosecution_avg_time_value']['group'] = 6;
  $handler->display->display_options['filters']['field_prosecution_avg_time_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Incident (field_incident) */
  $handler->display->display_options['filters']['field_incident_value']['id'] = 'field_incident_value';
  $handler->display->display_options['filters']['field_incident_value']['table'] = 'field_data_field_incident';
  $handler->display->display_options['filters']['field_incident_value']['field'] = 'field_incident_value';
  $handler->display->display_options['filters']['field_incident_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_incident_value']['group'] = 5;
  $handler->display->display_options['filters']['field_incident_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Other content (field_incident_other) */
  $handler->display->display_options['filters']['field_incident_other_value']['id'] = 'field_incident_other_value';
  $handler->display->display_options['filters']['field_incident_other_value']['table'] = 'field_data_field_incident_other';
  $handler->display->display_options['filters']['field_incident_other_value']['field'] = 'field_incident_other_value';
  $handler->display->display_options['filters']['field_incident_other_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_incident_other_value']['group'] = 5;
  /* Filter criterion: Content: Code system used (field_incident_code_system) */
  $handler->display->display_options['filters']['field_incident_code_system_value']['id'] = 'field_incident_code_system_value';
  $handler->display->display_options['filters']['field_incident_code_system_value']['table'] = 'field_data_field_incident_code_system';
  $handler->display->display_options['filters']['field_incident_code_system_value']['field'] = 'field_incident_code_system_value';
  $handler->display->display_options['filters']['field_incident_code_system_value']['value'] = array(
    'Criminal justice' => 'Criminal justice',
    'Civil law' => 'Civil law',
    'Health' => 'Health',
    'Police' => 'Police',
    'Specific to organisation' => 'Specific to organisation',
    'No codes used' => 'No codes used',
  );
  $handler->display->display_options['filters']['field_incident_code_system_value']['group'] = 5;
  $handler->display->display_options['filters']['field_incident_code_system_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Description of incident (field_incident_description) */
  $handler->display->display_options['filters']['field_incident_description_value']['id'] = 'field_incident_description_value';
  $handler->display->display_options['filters']['field_incident_description_value']['table'] = 'field_data_field_incident_description';
  $handler->display->display_options['filters']['field_incident_description_value']['field'] = 'field_incident_description_value';
  $handler->display->display_options['filters']['field_incident_description_value']['value'] = array(
    'Date/time' => 'Date/time',
    'Harm/injuries' => 'Harm/injuries',
    'Location' => 'Location',
    'Type of violence' => 'Type of violence',
  );
  $handler->display->display_options['filters']['field_incident_description_value']['group'] = 5;
  $handler->display->display_options['filters']['field_incident_description_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Other (field_incident_description_other) */
  $handler->display->display_options['filters']['field_incident_description_other_value']['id'] = 'field_incident_description_other_value';
  $handler->display->display_options['filters']['field_incident_description_other_value']['table'] = 'field_data_field_incident_description_other';
  $handler->display->display_options['filters']['field_incident_description_other_value']['field'] = 'field_incident_description_other_value';
  $handler->display->display_options['filters']['field_incident_description_other_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_incident_description_other_value']['group'] = 5;
  /* Filter criterion: Content: Protection order (field_incident_protection) */
  $handler->display->display_options['filters']['field_incident_protection_value']['id'] = 'field_incident_protection_value';
  $handler->display->display_options['filters']['field_incident_protection_value']['table'] = 'field_data_field_incident_protection';
  $handler->display->display_options['filters']['field_incident_protection_value']['field'] = 'field_incident_protection_value';
  $handler->display->display_options['filters']['field_incident_protection_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_incident_protection_value']['group'] = 5;
  $handler->display->display_options['filters']['field_incident_protection_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Civil justice data (field_incident_justice_data) */
  $handler->display->display_options['filters']['field_incident_justice_data_value']['id'] = 'field_incident_justice_data_value';
  $handler->display->display_options['filters']['field_incident_justice_data_value']['table'] = 'field_data_field_incident_justice_data';
  $handler->display->display_options['filters']['field_incident_justice_data_value']['field'] = 'field_incident_justice_data_value';
  $handler->display->display_options['filters']['field_incident_justice_data_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_incident_justice_data_value']['group'] = 5;
  $handler->display->display_options['filters']['field_incident_justice_data_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Incident respond resources (field_incident_resources) */
  $handler->display->display_options['filters']['field_incident_resources_value']['id'] = 'field_incident_resources_value';
  $handler->display->display_options['filters']['field_incident_resources_value']['table'] = 'field_data_field_incident_resources';
  $handler->display->display_options['filters']['field_incident_resources_value']['field'] = 'field_incident_resources_value';
  $handler->display->display_options['filters']['field_incident_resources_value']['value'] = array(
    'Human resources' => 'Human resources',
    'Financial resources' => 'Financial resources',
    'Other resources' => 'Other resources',
  );
  $handler->display->display_options['filters']['field_incident_resources_value']['group'] = 5;
  $handler->display->display_options['filters']['field_incident_resources_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Other resources (field_incident_other_resources) */
  $handler->display->display_options['filters']['field_incident_other_resources_value']['id'] = 'field_incident_other_resources_value';
  $handler->display->display_options['filters']['field_incident_other_resources_value']['table'] = 'field_data_field_incident_other_resources';
  $handler->display->display_options['filters']['field_incident_other_resources_value']['field'] = 'field_incident_other_resources_value';
  $handler->display->display_options['filters']['field_incident_other_resources_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_incident_other_resources_value']['group'] = 5;
  /* Filter criterion: Content: N. of cases resulting in arrest (field_outcomes_arrest_cases) */
  $handler->display->display_options['filters']['field_outcomes_arrest_cases_value']['id'] = 'field_outcomes_arrest_cases_value';
  $handler->display->display_options['filters']['field_outcomes_arrest_cases_value']['table'] = 'field_data_field_outcomes_arrest_cases';
  $handler->display->display_options['filters']['field_outcomes_arrest_cases_value']['field'] = 'field_outcomes_arrest_cases_value';
  $handler->display->display_options['filters']['field_outcomes_arrest_cases_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_outcomes_arrest_cases_value']['group'] = 7;
  $handler->display->display_options['filters']['field_outcomes_arrest_cases_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content:  Charged with more than one offense (field_outcomes_many_offenses) */
  $handler->display->display_options['filters']['field_outcomes_many_offenses_value']['id'] = 'field_outcomes_many_offenses_value';
  $handler->display->display_options['filters']['field_outcomes_many_offenses_value']['table'] = 'field_data_field_outcomes_many_offenses';
  $handler->display->display_options['filters']['field_outcomes_many_offenses_value']['field'] = 'field_outcomes_many_offenses_value';
  $handler->display->display_options['filters']['field_outcomes_many_offenses_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_outcomes_many_offenses_value']['group'] = 7;
  $handler->display->display_options['filters']['field_outcomes_many_offenses_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: List of offenses (field_outcomes_list_offenses) */
  $handler->display->display_options['filters']['field_outcomes_list_offenses_value']['id'] = 'field_outcomes_list_offenses_value';
  $handler->display->display_options['filters']['field_outcomes_list_offenses_value']['table'] = 'field_data_field_outcomes_list_offenses';
  $handler->display->display_options['filters']['field_outcomes_list_offenses_value']['field'] = 'field_outcomes_list_offenses_value';
  $handler->display->display_options['filters']['field_outcomes_list_offenses_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_outcomes_list_offenses_value']['group'] = 7;
  $handler->display->display_options['filters']['field_outcomes_list_offenses_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Probation (field_outcomes_probation) */
  $handler->display->display_options['filters']['field_outcomes_probation_value']['id'] = 'field_outcomes_probation_value';
  $handler->display->display_options['filters']['field_outcomes_probation_value']['table'] = 'field_data_field_outcomes_probation';
  $handler->display->display_options['filters']['field_outcomes_probation_value']['field'] = 'field_outcomes_probation_value';
  $handler->display->display_options['filters']['field_outcomes_probation_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_outcomes_probation_value']['group'] = 7;
  $handler->display->display_options['filters']['field_outcomes_probation_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Bail/remand (field_outcomes_bail_remand) */
  $handler->display->display_options['filters']['field_outcomes_bail_remand_value']['id'] = 'field_outcomes_bail_remand_value';
  $handler->display->display_options['filters']['field_outcomes_bail_remand_value']['table'] = 'field_data_field_outcomes_bail_remand';
  $handler->display->display_options['filters']['field_outcomes_bail_remand_value']['field'] = 'field_outcomes_bail_remand_value';
  $handler->display->display_options['filters']['field_outcomes_bail_remand_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_outcomes_bail_remand_value']['group'] = 7;
  $handler->display->display_options['filters']['field_outcomes_bail_remand_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Prisons (field_outcomes_prisons) */
  $handler->display->display_options['filters']['field_outcomes_prisons_value']['id'] = 'field_outcomes_prisons_value';
  $handler->display->display_options['filters']['field_outcomes_prisons_value']['table'] = 'field_data_field_outcomes_prisons';
  $handler->display->display_options['filters']['field_outcomes_prisons_value']['field'] = 'field_outcomes_prisons_value';
  $handler->display->display_options['filters']['field_outcomes_prisons_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_outcomes_prisons_value']['group'] = 7;
  $handler->display->display_options['filters']['field_outcomes_prisons_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Other (field_outcomes_perp_other) */
  $handler->display->display_options['filters']['field_outcomes_perp_other_value']['id'] = 'field_outcomes_perp_other_value';
  $handler->display->display_options['filters']['field_outcomes_perp_other_value']['table'] = 'field_data_field_outcomes_perp_other';
  $handler->display->display_options['filters']['field_outcomes_perp_other_value']['field'] = 'field_outcomes_perp_other_value';
  $handler->display->display_options['filters']['field_outcomes_perp_other_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_outcomes_perp_other_value']['group'] = 7;
  /* Filter criterion: Content: Death as result of incident (field_outcomes_death) */
  $handler->display->display_options['filters']['field_outcomes_death_value']['id'] = 'field_outcomes_death_value';
  $handler->display->display_options['filters']['field_outcomes_death_value']['table'] = 'field_data_field_outcomes_death';
  $handler->display->display_options['filters']['field_outcomes_death_value']['field'] = 'field_outcomes_death_value';
  $handler->display->display_options['filters']['field_outcomes_death_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_outcomes_death_value']['group'] = 7;
  $handler->display->display_options['filters']['field_outcomes_death_value']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['path'] = 'gender-based-violence/administrative-data-sources/search';

  /* Display: Administrative data sources content pane */
  $handler = $view->new_display('panel_pane', 'Administrative data sources content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Administrative data sources';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['display_description'] = 'Displays max 3 administrative data sources for the specified country';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'View all';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = 'gender-based-violence/administrative-data-sources/search?c[]=%1&type[]=administrative_data_source';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'items-list large-centered large-block-grid-3 medium-block-grid-3 small-block-grid-2 columns';
  $handler->display->display_options['style_options']['wrapper_class'] = 'items-list-wrapper';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'related_content';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<div class="view-results-count"><strong>@total</strong> entries</div>';
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
    'administrative_data_source' => 'administrative_data_source',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['type']['group_info']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['group_info']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['type']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
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
      'context' => 'entity:country.name',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Countries: ISO2',
    ),
  );

  /* Display: Statistical products content pane */
  $handler = $view->new_display('panel_pane', 'Statistical products content pane', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Statistical products';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['display_description'] = 'Displays max 3 statistical products for the specified country';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'View all';
  $handler->display->display_options['link_url'] = 'gender-based-violence/administrative-data-sources/search?c[]=%1&type[]=statistical_product';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'items-list large-centered large-block-grid-3 medium-block-grid-3 small-block-grid-2 columns';
  $handler->display->display_options['style_options']['wrapper_class'] = 'items-list-wrapper';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'related_content';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<div class="view-results-count"><strong>@total</strong> entries</div>';
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
    'statistical_product' => 'statistical_product',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['type']['group_info']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['group_info']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['type']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
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
  /* Field: Content: Original title */
  $handler->display->display_options['fields']['field_original_title']['id'] = 'field_original_title';
  $handler->display->display_options['fields']['field_original_title']['table'] = 'field_data_field_original_title';
  $handler->display->display_options['fields']['field_original_title']['field'] = 'field_original_title';
  $handler->display->display_options['fields']['field_original_title']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_original_title']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_original_title']['type'] = 'text_plain';
  /* Field: Content: Country */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_country']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_country']['type'] = 'country_default_i18n';
  /* Field: Content: Types of GBV */
  $handler->display->display_options['fields']['field_violence_types']['id'] = 'field_violence_types';
  $handler->display->display_options['fields']['field_violence_types']['table'] = 'field_data_field_violence_types';
  $handler->display->display_options['fields']['field_violence_types']['field'] = 'field_violence_types';
  $handler->display->display_options['fields']['field_violence_types']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_violence_types']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_violence_types']['type'] = 'ds_taxonomy_separator_localized';
  $handler->display->display_options['fields']['field_violence_types']['delta_offset'] = '0';
  /* Field: Content: Remarks */
  $handler->display->display_options['fields']['field_violence_remarks']['id'] = 'field_violence_remarks';
  $handler->display->display_options['fields']['field_violence_remarks']['table'] = 'field_data_field_violence_remarks';
  $handler->display->display_options['fields']['field_violence_remarks']['field'] = 'field_violence_remarks';
  $handler->display->display_options['fields']['field_violence_remarks']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_violence_remarks']['alter']['nl2br'] = TRUE;
  /* Field: Content: Purpose of data collection */
  $handler->display->display_options['fields']['field_purpose_of_data_collection']['id'] = 'field_purpose_of_data_collection';
  $handler->display->display_options['fields']['field_purpose_of_data_collection']['table'] = 'field_data_field_purpose_of_data_collection';
  $handler->display->display_options['fields']['field_purpose_of_data_collection']['field'] = 'field_purpose_of_data_collection';
  $handler->display->display_options['fields']['field_purpose_of_data_collection']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_purpose_of_data_collection']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_purpose_of_data_collection']['delta_offset'] = '0';
  /* Field: Content: Other purpose */
  $handler->display->display_options['fields']['field_other_purpose']['id'] = 'field_other_purpose';
  $handler->display->display_options['fields']['field_other_purpose']['table'] = 'field_data_field_other_purpose';
  $handler->display->display_options['fields']['field_other_purpose']['field'] = 'field_other_purpose';
  $handler->display->display_options['fields']['field_other_purpose']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_other_purpose']['alter']['nl2br'] = TRUE;
  /* Field: Content: Issues in terms of retrieving raw data */
  $handler->display->display_options['fields']['field_raw_data_issues']['id'] = 'field_raw_data_issues';
  $handler->display->display_options['fields']['field_raw_data_issues']['table'] = 'field_data_field_raw_data_issues';
  $handler->display->display_options['fields']['field_raw_data_issues']['field'] = 'field_raw_data_issues';
  $handler->display->display_options['fields']['field_raw_data_issues']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_raw_data_issues']['alter']['strip_tags'] = TRUE;
  /* Field: Content: Additional information */
  $handler->display->display_options['fields']['field_raw_data_issues_info']['id'] = 'field_raw_data_issues_info';
  $handler->display->display_options['fields']['field_raw_data_issues_info']['table'] = 'field_data_field_raw_data_issues_info';
  $handler->display->display_options['fields']['field_raw_data_issues_info']['field'] = 'field_raw_data_issues_info';
  $handler->display->display_options['fields']['field_raw_data_issues_info']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_raw_data_issues_info']['alter']['nl2br'] = TRUE;
  /* Field: Content: Draw also on survey data */
  $handler->display->display_options['fields']['field_survey_data']['id'] = 'field_survey_data';
  $handler->display->display_options['fields']['field_survey_data']['table'] = 'field_data_field_survey_data';
  $handler->display->display_options['fields']['field_survey_data']['field'] = 'field_survey_data';
  $handler->display->display_options['fields']['field_survey_data']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_survey_data']['alter']['strip_tags'] = TRUE;
  /* Field: Content: Used as indicator */
  $handler->display->display_options['fields']['field_indicator_usage']['id'] = 'field_indicator_usage';
  $handler->display->display_options['fields']['field_indicator_usage']['table'] = 'field_data_field_indicator_usage';
  $handler->display->display_options['fields']['field_indicator_usage']['field'] = 'field_indicator_usage';
  $handler->display->display_options['fields']['field_indicator_usage']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_indicator_usage']['alter']['strip_tags'] = TRUE;
  /* Field: Content: Indicator */
  $handler->display->display_options['fields']['field_indicator']['id'] = 'field_indicator';
  $handler->display->display_options['fields']['field_indicator']['table'] = 'field_data_field_indicator';
  $handler->display->display_options['fields']['field_indicator']['field'] = 'field_indicator';
  $handler->display->display_options['fields']['field_indicator']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_indicator']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_indicator']['delta_offset'] = '0';
  /* Field: Content: Other */
  $handler->display->display_options['fields']['field_indicator_other']['id'] = 'field_indicator_other';
  $handler->display->display_options['fields']['field_indicator_other']['table'] = 'field_data_field_indicator_other';
  $handler->display->display_options['fields']['field_indicator_other']['field'] = 'field_indicator_other';
  $handler->display->display_options['fields']['field_indicator_other']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_indicator_other']['alter']['nl2br'] = TRUE;
  /* Field: Content: Remarks */
  $handler->display->display_options['fields']['field_remarks']['id'] = 'field_remarks';
  $handler->display->display_options['fields']['field_remarks']['table'] = 'field_data_field_remarks';
  $handler->display->display_options['fields']['field_remarks']['field'] = 'field_remarks';
  $handler->display->display_options['fields']['field_remarks']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_remarks']['alter']['nl2br'] = TRUE;
  /* Field: Content: Organisation */
  $handler->display->display_options['fields']['field_organisation']['id'] = 'field_organisation';
  $handler->display->display_options['fields']['field_organisation']['table'] = 'field_data_field_organisation';
  $handler->display->display_options['fields']['field_organisation']['field'] = 'field_organisation';
  $handler->display->display_options['fields']['field_organisation']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_organisation']['alter']['strip_tags'] = TRUE;
  /* Field: Content: Type of organisation */
  $handler->display->display_options['fields']['field_organisation_type']['id'] = 'field_organisation_type';
  $handler->display->display_options['fields']['field_organisation_type']['table'] = 'field_data_field_organisation_type';
  $handler->display->display_options['fields']['field_organisation_type']['field'] = 'field_organisation_type';
  $handler->display->display_options['fields']['field_organisation_type']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_organisation_type']['alter']['strip_tags'] = TRUE;
  /* Field: Content: Sector */
  $handler->display->display_options['fields']['field_ad_sector']['id'] = 'field_ad_sector';
  $handler->display->display_options['fields']['field_ad_sector']['table'] = 'field_data_field_ad_sector';
  $handler->display->display_options['fields']['field_ad_sector']['field'] = 'field_ad_sector';
  $handler->display->display_options['fields']['field_ad_sector']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_ad_sector']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_ad_sector']['type'] = 'ds_taxonomy_separator_localized';
  $handler->display->display_options['fields']['field_ad_sector']['delta_offset'] = '0';
  /* Field: Content: Other sector */
  $handler->display->display_options['fields']['field_other_sector']['id'] = 'field_other_sector';
  $handler->display->display_options['fields']['field_other_sector']['table'] = 'field_data_field_other_sector';
  $handler->display->display_options['fields']['field_other_sector']['field'] = 'field_other_sector';
  $handler->display->display_options['fields']['field_other_sector']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_other_sector']['alter']['nl2br'] = TRUE;
  /* Field: Content: Geographical area */
  $handler->display->display_options['fields']['field_geographical_area']['id'] = 'field_geographical_area';
  $handler->display->display_options['fields']['field_geographical_area']['table'] = 'field_data_field_geographical_area';
  $handler->display->display_options['fields']['field_geographical_area']['field'] = 'field_geographical_area';
  $handler->display->display_options['fields']['field_geographical_area']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_geographical_area']['alter']['strip_tags'] = TRUE;
  /* Field: Content: Geographical area remarks */
  $handler->display->display_options['fields']['field_geographical_area_remarks']['id'] = 'field_geographical_area_remarks';
  $handler->display->display_options['fields']['field_geographical_area_remarks']['table'] = 'field_data_field_geographical_area_remarks';
  $handler->display->display_options['fields']['field_geographical_area_remarks']['field'] = 'field_geographical_area_remarks';
  $handler->display->display_options['fields']['field_geographical_area_remarks']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_geographical_area_remarks']['alter']['nl2br'] = TRUE;
  /* Field: Content: Latest update */
  $handler->display->display_options['fields']['field_latest_update']['id'] = 'field_latest_update';
  $handler->display->display_options['fields']['field_latest_update']['table'] = 'field_data_field_latest_update';
  $handler->display->display_options['fields']['field_latest_update']['field'] = 'field_latest_update';
  $handler->display->display_options['fields']['field_latest_update']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_latest_update']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_latest_update']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_website']['id'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['table'] = 'field_data_field_website';
  $handler->display->display_options['fields']['field_website']['field'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_website']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_website']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_website']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_website']['delta_offset'] = '0';
  /* Field: Content: Background information */
  $handler->display->display_options['fields']['field_victim_info']['id'] = 'field_victim_info';
  $handler->display->display_options['fields']['field_victim_info']['table'] = 'field_data_field_victim_info';
  $handler->display->display_options['fields']['field_victim_info']['field'] = 'field_victim_info';
  $handler->display->display_options['fields']['field_victim_info']['label'] = 'Victim background information';
  $handler->display->display_options['fields']['field_victim_info']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_victim_info']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_victim_info']['delta_offset'] = '0';
  /* Field: Content: Other */
  $handler->display->display_options['fields']['field_victim_info_other']['id'] = 'field_victim_info_other';
  $handler->display->display_options['fields']['field_victim_info_other']['table'] = 'field_data_field_victim_info_other';
  $handler->display->display_options['fields']['field_victim_info_other']['field'] = 'field_victim_info_other';
  $handler->display->display_options['fields']['field_victim_info_other']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_victim_info_other']['alter']['nl2br'] = TRUE;
  /* Field: Content: Relationship with perpetrator */
  $handler->display->display_options['fields']['field_victim_relationship']['id'] = 'field_victim_relationship';
  $handler->display->display_options['fields']['field_victim_relationship']['table'] = 'field_data_field_victim_relationship';
  $handler->display->display_options['fields']['field_victim_relationship']['field'] = 'field_victim_relationship';
  $handler->display->display_options['fields']['field_victim_relationship']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_victim_relationship']['alter']['strip_tags'] = TRUE;
  /* Field: Content: Type of relationship */
  $handler->display->display_options['fields']['field_victim_relation_type']['id'] = 'field_victim_relation_type';
  $handler->display->display_options['fields']['field_victim_relation_type']['table'] = 'field_data_field_victim_relation_type';
  $handler->display->display_options['fields']['field_victim_relation_type']['field'] = 'field_victim_relation_type';
  $handler->display->display_options['fields']['field_victim_relation_type']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_victim_relation_type']['alter']['nl2br'] = TRUE;
  /* Field: Content: Repeatedly suffering from GBV */
  $handler->display->display_options['fields']['field_victim_repetition']['id'] = 'field_victim_repetition';
  $handler->display->display_options['fields']['field_victim_repetition']['table'] = 'field_data_field_victim_repetition';
  $handler->display->display_options['fields']['field_victim_repetition']['field'] = 'field_victim_repetition';
  $handler->display->display_options['fields']['field_victim_repetition']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_victim_repetition']['alter']['strip_tags'] = TRUE;
  /* Field: Content: Remarks */
  $handler->display->display_options['fields']['field_victim_remarks']['id'] = 'field_victim_remarks';
  $handler->display->display_options['fields']['field_victim_remarks']['table'] = 'field_data_field_victim_remarks';
  $handler->display->display_options['fields']['field_victim_remarks']['field'] = 'field_victim_remarks';
  $handler->display->display_options['fields']['field_victim_remarks']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_victim_remarks']['alter']['nl2br'] = TRUE;
  /* Field: Content: Background information */
  $handler->display->display_options['fields']['field_perpetrator_info']['id'] = 'field_perpetrator_info';
  $handler->display->display_options['fields']['field_perpetrator_info']['table'] = 'field_data_field_perpetrator_info';
  $handler->display->display_options['fields']['field_perpetrator_info']['field'] = 'field_perpetrator_info';
  $handler->display->display_options['fields']['field_perpetrator_info']['label'] = 'Perpetrator background information';
  $handler->display->display_options['fields']['field_perpetrator_info']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_perpetrator_info']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_perpetrator_info']['delta_offset'] = '0';
  /* Field: Content: Other */
  $handler->display->display_options['fields']['field_perpetrator_info_other']['id'] = 'field_perpetrator_info_other';
  $handler->display->display_options['fields']['field_perpetrator_info_other']['table'] = 'field_data_field_perpetrator_info_other';
  $handler->display->display_options['fields']['field_perpetrator_info_other']['field'] = 'field_perpetrator_info_other';
  $handler->display->display_options['fields']['field_perpetrator_info_other']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_perpetrator_info_other']['alter']['nl2br'] = TRUE;
  /* Field: Content: Relationship with victim */
  $handler->display->display_options['fields']['field_perpetrator_relationship']['id'] = 'field_perpetrator_relationship';
  $handler->display->display_options['fields']['field_perpetrator_relationship']['table'] = 'field_data_field_perpetrator_relationship';
  $handler->display->display_options['fields']['field_perpetrator_relationship']['field'] = 'field_perpetrator_relationship';
  $handler->display->display_options['fields']['field_perpetrator_relationship']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_perpetrator_relationship']['alter']['strip_tags'] = TRUE;
  /* Field: Content: Additional information */
  $handler->display->display_options['fields']['field_perpetrator_rel_info']['id'] = 'field_perpetrator_rel_info';
  $handler->display->display_options['fields']['field_perpetrator_rel_info']['table'] = 'field_data_field_perpetrator_rel_info';
  $handler->display->display_options['fields']['field_perpetrator_rel_info']['field'] = 'field_perpetrator_rel_info';
  $handler->display->display_options['fields']['field_perpetrator_rel_info']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_perpetrator_rel_info']['alter']['nl2br'] = TRUE;
  /* Field: Content: Re-offending */
  $handler->display->display_options['fields']['field_perpetrator_reoffending']['id'] = 'field_perpetrator_reoffending';
  $handler->display->display_options['fields']['field_perpetrator_reoffending']['table'] = 'field_data_field_perpetrator_reoffending';
  $handler->display->display_options['fields']['field_perpetrator_reoffending']['field'] = 'field_perpetrator_reoffending';
  $handler->display->display_options['fields']['field_perpetrator_reoffending']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_perpetrator_reoffending']['alter']['strip_tags'] = TRUE;
  /* Field: Content: Remarks */
  $handler->display->display_options['fields']['field_perpetrator_remarks']['id'] = 'field_perpetrator_remarks';
  $handler->display->display_options['fields']['field_perpetrator_remarks']['table'] = 'field_data_field_perpetrator_remarks';
  $handler->display->display_options['fields']['field_perpetrator_remarks']['field'] = 'field_perpetrator_remarks';
  $handler->display->display_options['fields']['field_perpetrator_remarks']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_perpetrator_remarks']['alter']['nl2br'] = TRUE;
  /* Field: Content: Background information */
  $handler->display->display_options['fields']['field_witness_info']['id'] = 'field_witness_info';
  $handler->display->display_options['fields']['field_witness_info']['table'] = 'field_data_field_witness_info';
  $handler->display->display_options['fields']['field_witness_info']['field'] = 'field_witness_info';
  $handler->display->display_options['fields']['field_witness_info']['label'] = 'Witness background information';
  $handler->display->display_options['fields']['field_witness_info']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_witness_info']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_witness_info']['delta_offset'] = '0';
  /* Field: Content: Other */
  $handler->display->display_options['fields']['field_witness_info_other']['id'] = 'field_witness_info_other';
  $handler->display->display_options['fields']['field_witness_info_other']['table'] = 'field_data_field_witness_info_other';
  $handler->display->display_options['fields']['field_witness_info_other']['field'] = 'field_witness_info_other';
  $handler->display->display_options['fields']['field_witness_info_other']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_witness_info_other']['alter']['nl2br'] = TRUE;
  /* Field: Content: Relationship with victim/perpetrator */
  $handler->display->display_options['fields']['field_witness_relationship']['id'] = 'field_witness_relationship';
  $handler->display->display_options['fields']['field_witness_relationship']['table'] = 'field_data_field_witness_relationship';
  $handler->display->display_options['fields']['field_witness_relationship']['field'] = 'field_witness_relationship';
  $handler->display->display_options['fields']['field_witness_relationship']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_witness_relationship']['alter']['strip_tags'] = TRUE;
  /* Field: Content: Incident description by witness */
  $handler->display->display_options['fields']['field_witness_description']['id'] = 'field_witness_description';
  $handler->display->display_options['fields']['field_witness_description']['table'] = 'field_data_field_witness_description';
  $handler->display->display_options['fields']['field_witness_description']['field'] = 'field_witness_description';
  $handler->display->display_options['fields']['field_witness_description']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_witness_description']['alter']['strip_tags'] = TRUE;
  /* Field: Content: Children witnessing IPV incident */
  $handler->display->display_options['fields']['field_witness_children']['id'] = 'field_witness_children';
  $handler->display->display_options['fields']['field_witness_children']['table'] = 'field_data_field_witness_children';
  $handler->display->display_options['fields']['field_witness_children']['field'] = 'field_witness_children';
  $handler->display->display_options['fields']['field_witness_children']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_witness_children']['alter']['strip_tags'] = TRUE;
  /* Field: Content: Remarks */
  $handler->display->display_options['fields']['field_witness_remarks']['id'] = 'field_witness_remarks';
  $handler->display->display_options['fields']['field_witness_remarks']['table'] = 'field_data_field_witness_remarks';
  $handler->display->display_options['fields']['field_witness_remarks']['field'] = 'field_witness_remarks';
  $handler->display->display_options['fields']['field_witness_remarks']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_witness_remarks']['alter']['nl2br'] = TRUE;
  /* Field: Content: Incident */
  $handler->display->display_options['fields']['field_incident']['id'] = 'field_incident';
  $handler->display->display_options['fields']['field_incident']['table'] = 'field_data_field_incident';
  $handler->display->display_options['fields']['field_incident']['field'] = 'field_incident';
  $handler->display->display_options['fields']['field_incident']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_incident']['alter']['strip_tags'] = TRUE;
  /* Field: Content: Other content */
  $handler->display->display_options['fields']['field_incident_other']['id'] = 'field_incident_other';
  $handler->display->display_options['fields']['field_incident_other']['table'] = 'field_data_field_incident_other';
  $handler->display->display_options['fields']['field_incident_other']['field'] = 'field_incident_other';
  $handler->display->display_options['fields']['field_incident_other']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_incident_other']['alter']['nl2br'] = TRUE;
  /* Field: Content: Code system used */
  $handler->display->display_options['fields']['field_incident_code_system']['id'] = 'field_incident_code_system';
  $handler->display->display_options['fields']['field_incident_code_system']['table'] = 'field_data_field_incident_code_system';
  $handler->display->display_options['fields']['field_incident_code_system']['field'] = 'field_incident_code_system';
  $handler->display->display_options['fields']['field_incident_code_system']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_incident_code_system']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_incident_code_system']['delta_offset'] = '0';
  /* Field: Content: Remarks */
  $handler->display->display_options['fields']['field_incident_code_remarks']['id'] = 'field_incident_code_remarks';
  $handler->display->display_options['fields']['field_incident_code_remarks']['table'] = 'field_data_field_incident_code_remarks';
  $handler->display->display_options['fields']['field_incident_code_remarks']['field'] = 'field_incident_code_remarks';
  $handler->display->display_options['fields']['field_incident_code_remarks']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_incident_code_remarks']['alter']['nl2br'] = TRUE;
  /* Field: Content: Description of incident */
  $handler->display->display_options['fields']['field_incident_description']['id'] = 'field_incident_description';
  $handler->display->display_options['fields']['field_incident_description']['table'] = 'field_data_field_incident_description';
  $handler->display->display_options['fields']['field_incident_description']['field'] = 'field_incident_description';
  $handler->display->display_options['fields']['field_incident_description']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_incident_description']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_incident_description']['delta_offset'] = '0';
  /* Field: Content: Other */
  $handler->display->display_options['fields']['field_incident_description_other']['id'] = 'field_incident_description_other';
  $handler->display->display_options['fields']['field_incident_description_other']['table'] = 'field_data_field_incident_description_other';
  $handler->display->display_options['fields']['field_incident_description_other']['field'] = 'field_incident_description_other';
  $handler->display->display_options['fields']['field_incident_description_other']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_incident_description_other']['alter']['nl2br'] = TRUE;
  /* Field: Content: Protection order */
  $handler->display->display_options['fields']['field_incident_protection']['id'] = 'field_incident_protection';
  $handler->display->display_options['fields']['field_incident_protection']['table'] = 'field_data_field_incident_protection';
  $handler->display->display_options['fields']['field_incident_protection']['field'] = 'field_incident_protection';
  $handler->display->display_options['fields']['field_incident_protection']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_incident_protection']['alter']['strip_tags'] = TRUE;
  /* Field: Content: Protection orders */
  $handler->display->display_options['fields']['field_incident_orders']['id'] = 'field_incident_orders';
  $handler->display->display_options['fields']['field_incident_orders']['table'] = 'field_data_field_incident_orders';
  $handler->display->display_options['fields']['field_incident_orders']['field'] = 'field_incident_orders';
  $handler->display->display_options['fields']['field_incident_orders']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_incident_orders']['alter']['nl2br'] = TRUE;
  /* Field: Content: Civil justice data */
  $handler->display->display_options['fields']['field_incident_justice_data']['id'] = 'field_incident_justice_data';
  $handler->display->display_options['fields']['field_incident_justice_data']['table'] = 'field_data_field_incident_justice_data';
  $handler->display->display_options['fields']['field_incident_justice_data']['field'] = 'field_incident_justice_data';
  $handler->display->display_options['fields']['field_incident_justice_data']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_incident_justice_data']['alter']['strip_tags'] = TRUE;
  /* Field: Content: Additional information */
  $handler->display->display_options['fields']['field_incident_justice_info']['id'] = 'field_incident_justice_info';
  $handler->display->display_options['fields']['field_incident_justice_info']['table'] = 'field_data_field_incident_justice_info';
  $handler->display->display_options['fields']['field_incident_justice_info']['field'] = 'field_incident_justice_info';
  $handler->display->display_options['fields']['field_incident_justice_info']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_incident_justice_info']['alter']['nl2br'] = TRUE;
  /* Field: Content: Incident respond resources */
  $handler->display->display_options['fields']['field_incident_resources']['id'] = 'field_incident_resources';
  $handler->display->display_options['fields']['field_incident_resources']['table'] = 'field_data_field_incident_resources';
  $handler->display->display_options['fields']['field_incident_resources']['field'] = 'field_incident_resources';
  $handler->display->display_options['fields']['field_incident_resources']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_incident_resources']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_incident_resources']['delta_offset'] = '0';
  /* Field: Content: Other resources */
  $handler->display->display_options['fields']['field_incident_other_resources']['id'] = 'field_incident_other_resources';
  $handler->display->display_options['fields']['field_incident_other_resources']['table'] = 'field_data_field_incident_other_resources';
  $handler->display->display_options['fields']['field_incident_other_resources']['field'] = 'field_incident_other_resources';
  $handler->display->display_options['fields']['field_incident_other_resources']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_incident_other_resources']['alter']['nl2br'] = TRUE;
  /* Field: Content: Remarks */
  $handler->display->display_options['fields']['field_incident_remarks']['id'] = 'field_incident_remarks';
  $handler->display->display_options['fields']['field_incident_remarks']['table'] = 'field_data_field_incident_remarks';
  $handler->display->display_options['fields']['field_incident_remarks']['field'] = 'field_incident_remarks';
  $handler->display->display_options['fields']['field_incident_remarks']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_incident_remarks']['alter']['nl2br'] = TRUE;
  /* Field: Content: Stages of prosecution process */
  $handler->display->display_options['fields']['field_prosecution_stages']['id'] = 'field_prosecution_stages';
  $handler->display->display_options['fields']['field_prosecution_stages']['table'] = 'field_data_field_prosecution_stages';
  $handler->display->display_options['fields']['field_prosecution_stages']['field'] = 'field_prosecution_stages';
  $handler->display->display_options['fields']['field_prosecution_stages']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_prosecution_stages']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_prosecution_stages']['delta_offset'] = '0';
  /* Field: Content: Other */
  $handler->display->display_options['fields']['field_prosec_stages_other']['id'] = 'field_prosec_stages_other';
  $handler->display->display_options['fields']['field_prosec_stages_other']['table'] = 'field_data_field_prosec_stages_other';
  $handler->display->display_options['fields']['field_prosec_stages_other']['field'] = 'field_prosec_stages_other';
  $handler->display->display_options['fields']['field_prosec_stages_other']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_prosec_stages_other']['alter']['nl2br'] = TRUE;
  /* Field: Content: Defendant pleas/verdicts */
  $handler->display->display_options['fields']['field_prosecution_defendant']['id'] = 'field_prosecution_defendant';
  $handler->display->display_options['fields']['field_prosecution_defendant']['table'] = 'field_data_field_prosecution_defendant';
  $handler->display->display_options['fields']['field_prosecution_defendant']['field'] = 'field_prosecution_defendant';
  $handler->display->display_options['fields']['field_prosecution_defendant']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_prosecution_defendant']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_prosecution_defendant']['delta_offset'] = '0';
  /* Field: Content: Other */
  $handler->display->display_options['fields']['field_prosec_defendant_other']['id'] = 'field_prosec_defendant_other';
  $handler->display->display_options['fields']['field_prosec_defendant_other']['table'] = 'field_data_field_prosec_defendant_other';
  $handler->display->display_options['fields']['field_prosec_defendant_other']['field'] = 'field_prosec_defendant_other';
  $handler->display->display_options['fields']['field_prosec_defendant_other']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_prosec_defendant_other']['alter']['nl2br'] = TRUE;
  /* Field: Content: Average time case through criminal justice system */
  $handler->display->display_options['fields']['field_prosecution_avg_time']['id'] = 'field_prosecution_avg_time';
  $handler->display->display_options['fields']['field_prosecution_avg_time']['table'] = 'field_data_field_prosecution_avg_time';
  $handler->display->display_options['fields']['field_prosecution_avg_time']['field'] = 'field_prosecution_avg_time';
  $handler->display->display_options['fields']['field_prosecution_avg_time']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_prosecution_avg_time']['alter']['strip_tags'] = TRUE;
  /* Field: Content: Remarks */
  $handler->display->display_options['fields']['field_prosecution_remarks']['id'] = 'field_prosecution_remarks';
  $handler->display->display_options['fields']['field_prosecution_remarks']['table'] = 'field_data_field_prosecution_remarks';
  $handler->display->display_options['fields']['field_prosecution_remarks']['field'] = 'field_prosecution_remarks';
  $handler->display->display_options['fields']['field_prosecution_remarks']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_prosecution_remarks']['alter']['nl2br'] = TRUE;
  /* Field: Content: Criminal statistical data included */
  $handler->display->display_options['fields']['field_criminal_statistics_data']['id'] = 'field_criminal_statistics_data';
  $handler->display->display_options['fields']['field_criminal_statistics_data']['table'] = 'field_data_field_criminal_statistics_data';
  $handler->display->display_options['fields']['field_criminal_statistics_data']['field'] = 'field_criminal_statistics_data';
  $handler->display->display_options['fields']['field_criminal_statistics_data']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_criminal_statistics_data']['alter']['strip_tags'] = TRUE;
  /* Field: Content: Additional information */
  $handler->display->display_options['fields']['field_criminal_data_info']['id'] = 'field_criminal_data_info';
  $handler->display->display_options['fields']['field_criminal_data_info']['table'] = 'field_data_field_criminal_data_info';
  $handler->display->display_options['fields']['field_criminal_data_info']['field'] = 'field_criminal_data_info';
  $handler->display->display_options['fields']['field_criminal_data_info']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_criminal_data_info']['alter']['nl2br'] = TRUE;
  /* Field: Content: N. of cases resulting in arrest */
  $handler->display->display_options['fields']['field_outcomes_arrest_cases']['id'] = 'field_outcomes_arrest_cases';
  $handler->display->display_options['fields']['field_outcomes_arrest_cases']['table'] = 'field_data_field_outcomes_arrest_cases';
  $handler->display->display_options['fields']['field_outcomes_arrest_cases']['field'] = 'field_outcomes_arrest_cases';
  $handler->display->display_options['fields']['field_outcomes_arrest_cases']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_outcomes_arrest_cases']['alter']['strip_tags'] = TRUE;
  /* Field: Content:  Charged with more than one offense */
  $handler->display->display_options['fields']['field_outcomes_many_offenses']['id'] = 'field_outcomes_many_offenses';
  $handler->display->display_options['fields']['field_outcomes_many_offenses']['table'] = 'field_data_field_outcomes_many_offenses';
  $handler->display->display_options['fields']['field_outcomes_many_offenses']['field'] = 'field_outcomes_many_offenses';
  $handler->display->display_options['fields']['field_outcomes_many_offenses']['label'] = 'Charged with more than one offense';
  $handler->display->display_options['fields']['field_outcomes_many_offenses']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_outcomes_many_offenses']['alter']['strip_tags'] = TRUE;
  /* Field: Content: List of offenses */
  $handler->display->display_options['fields']['field_outcomes_list_offenses']['id'] = 'field_outcomes_list_offenses';
  $handler->display->display_options['fields']['field_outcomes_list_offenses']['table'] = 'field_data_field_outcomes_list_offenses';
  $handler->display->display_options['fields']['field_outcomes_list_offenses']['field'] = 'field_outcomes_list_offenses';
  $handler->display->display_options['fields']['field_outcomes_list_offenses']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_outcomes_list_offenses']['alter']['strip_tags'] = TRUE;
  /* Field: Content: Remarks */
  $handler->display->display_options['fields']['field_outcomes_offenses_remarks']['id'] = 'field_outcomes_offenses_remarks';
  $handler->display->display_options['fields']['field_outcomes_offenses_remarks']['table'] = 'field_data_field_outcomes_offenses_remarks';
  $handler->display->display_options['fields']['field_outcomes_offenses_remarks']['field'] = 'field_outcomes_offenses_remarks';
  $handler->display->display_options['fields']['field_outcomes_offenses_remarks']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_outcomes_offenses_remarks']['alter']['nl2br'] = TRUE;
  /* Field: Content: Probation */
  $handler->display->display_options['fields']['field_outcomes_probation']['id'] = 'field_outcomes_probation';
  $handler->display->display_options['fields']['field_outcomes_probation']['table'] = 'field_data_field_outcomes_probation';
  $handler->display->display_options['fields']['field_outcomes_probation']['field'] = 'field_outcomes_probation';
  $handler->display->display_options['fields']['field_outcomes_probation']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_outcomes_probation']['alter']['strip_tags'] = TRUE;
  /* Field: Content: Bail/remand */
  $handler->display->display_options['fields']['field_outcomes_bail_remand']['id'] = 'field_outcomes_bail_remand';
  $handler->display->display_options['fields']['field_outcomes_bail_remand']['table'] = 'field_data_field_outcomes_bail_remand';
  $handler->display->display_options['fields']['field_outcomes_bail_remand']['field'] = 'field_outcomes_bail_remand';
  $handler->display->display_options['fields']['field_outcomes_bail_remand']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_outcomes_bail_remand']['alter']['strip_tags'] = TRUE;
  /* Field: Content: Remarks */
  $handler->display->display_options['fields']['field_outcomes_bail_remarks']['id'] = 'field_outcomes_bail_remarks';
  $handler->display->display_options['fields']['field_outcomes_bail_remarks']['table'] = 'field_data_field_outcomes_bail_remarks';
  $handler->display->display_options['fields']['field_outcomes_bail_remarks']['field'] = 'field_outcomes_bail_remarks';
  $handler->display->display_options['fields']['field_outcomes_bail_remarks']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_outcomes_bail_remarks']['alter']['nl2br'] = TRUE;
  /* Field: Content: Prisons */
  $handler->display->display_options['fields']['field_outcomes_prisons']['id'] = 'field_outcomes_prisons';
  $handler->display->display_options['fields']['field_outcomes_prisons']['table'] = 'field_data_field_outcomes_prisons';
  $handler->display->display_options['fields']['field_outcomes_prisons']['field'] = 'field_outcomes_prisons';
  $handler->display->display_options['fields']['field_outcomes_prisons']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_outcomes_prisons']['alter']['strip_tags'] = TRUE;
  /* Field: Content: Remarks */
  $handler->display->display_options['fields']['field_outcomes_prisons_remarks']['id'] = 'field_outcomes_prisons_remarks';
  $handler->display->display_options['fields']['field_outcomes_prisons_remarks']['table'] = 'field_data_field_outcomes_prisons_remarks';
  $handler->display->display_options['fields']['field_outcomes_prisons_remarks']['field'] = 'field_outcomes_prisons_remarks';
  $handler->display->display_options['fields']['field_outcomes_prisons_remarks']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_outcomes_prisons_remarks']['alter']['nl2br'] = TRUE;
  /* Field: Content: Other */
  $handler->display->display_options['fields']['field_outcomes_perp_other']['id'] = 'field_outcomes_perp_other';
  $handler->display->display_options['fields']['field_outcomes_perp_other']['table'] = 'field_data_field_outcomes_perp_other';
  $handler->display->display_options['fields']['field_outcomes_perp_other']['field'] = 'field_outcomes_perp_other';
  $handler->display->display_options['fields']['field_outcomes_perp_other']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_outcomes_perp_other']['alter']['nl2br'] = TRUE;
  /* Field: Content: Death as result of incident */
  $handler->display->display_options['fields']['field_outcomes_death']['id'] = 'field_outcomes_death';
  $handler->display->display_options['fields']['field_outcomes_death']['table'] = 'field_data_field_outcomes_death';
  $handler->display->display_options['fields']['field_outcomes_death']['field'] = 'field_outcomes_death';
  $handler->display->display_options['fields']['field_outcomes_death']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_outcomes_death']['alter']['strip_tags'] = TRUE;
  /* Field: Content: Remarks */
  $handler->display->display_options['fields']['field_outcomes_remarks']['id'] = 'field_outcomes_remarks';
  $handler->display->display_options['fields']['field_outcomes_remarks']['table'] = 'field_data_field_outcomes_remarks';
  $handler->display->display_options['fields']['field_outcomes_remarks']['field'] = 'field_outcomes_remarks';
  $handler->display->display_options['fields']['field_outcomes_remarks']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_outcomes_remarks']['alter']['nl2br'] = TRUE;
  /* Field: Content: Reference period */
  $handler->display->display_options['fields']['field_chars_reference_period']['id'] = 'field_chars_reference_period';
  $handler->display->display_options['fields']['field_chars_reference_period']['table'] = 'field_data_field_chars_reference_period';
  $handler->display->display_options['fields']['field_chars_reference_period']['field'] = 'field_chars_reference_period';
  $handler->display->display_options['fields']['field_chars_reference_period']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_chars_reference_period']['alter']['strip_tags'] = TRUE;
  /* Field: Content: Additional information */
  $handler->display->display_options['fields']['field_chars_ref_period_info']['id'] = 'field_chars_ref_period_info';
  $handler->display->display_options['fields']['field_chars_ref_period_info']['table'] = 'field_data_field_chars_ref_period_info';
  $handler->display->display_options['fields']['field_chars_ref_period_info']['field'] = 'field_chars_ref_period_info';
  $handler->display->display_options['fields']['field_chars_ref_period_info']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_chars_ref_period_info']['alter']['nl2br'] = TRUE;
  /* Field: Content: Storage System */
  $handler->display->display_options['fields']['field_chars_storage_system']['id'] = 'field_chars_storage_system';
  $handler->display->display_options['fields']['field_chars_storage_system']['table'] = 'field_data_field_chars_storage_system';
  $handler->display->display_options['fields']['field_chars_storage_system']['field'] = 'field_chars_storage_system';
  $handler->display->display_options['fields']['field_chars_storage_system']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_chars_storage_system']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_chars_storage_system']['delta_offset'] = '0';
  /* Field: Content: Other */
  $handler->display->display_options['fields']['field_chars_storage_other']['id'] = 'field_chars_storage_other';
  $handler->display->display_options['fields']['field_chars_storage_other']['table'] = 'field_data_field_chars_storage_other';
  $handler->display->display_options['fields']['field_chars_storage_other']['field'] = 'field_chars_storage_other';
  $handler->display->display_options['fields']['field_chars_storage_other']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_chars_storage_other']['alter']['nl2br'] = TRUE;
  /* Field: Content: Frequency of updating */
  $handler->display->display_options['fields']['field_chars_frequency']['id'] = 'field_chars_frequency';
  $handler->display->display_options['fields']['field_chars_frequency']['table'] = 'field_data_field_chars_frequency';
  $handler->display->display_options['fields']['field_chars_frequency']['field'] = 'field_chars_frequency';
  $handler->display->display_options['fields']['field_chars_frequency']['label'] = 'Frequency';
  $handler->display->display_options['fields']['field_chars_frequency']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_chars_frequency']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_chars_frequency']['delta_offset'] = '0';
  /* Field: Content: Frequency of updating */
  $handler->display->display_options['fields']['field_chars_frequency_text']['id'] = 'field_chars_frequency_text';
  $handler->display->display_options['fields']['field_chars_frequency_text']['table'] = 'field_data_field_chars_frequency_text';
  $handler->display->display_options['fields']['field_chars_frequency_text']['field'] = 'field_chars_frequency_text';
  $handler->display->display_options['fields']['field_chars_frequency_text']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_chars_frequency_text']['alter']['strip_tags'] = TRUE;
  /* Field: Content: Additional information */
  $handler->display->display_options['fields']['field_chars_frequency_remarks']['id'] = 'field_chars_frequency_remarks';
  $handler->display->display_options['fields']['field_chars_frequency_remarks']['table'] = 'field_data_field_chars_frequency_remarks';
  $handler->display->display_options['fields']['field_chars_frequency_remarks']['field'] = 'field_chars_frequency_remarks';
  $handler->display->display_options['fields']['field_chars_frequency_remarks']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_chars_frequency_remarks']['alter']['nl2br'] = TRUE;
  /* Field: Content: Validation */
  $handler->display->display_options['fields']['field_chars_validation']['id'] = 'field_chars_validation';
  $handler->display->display_options['fields']['field_chars_validation']['table'] = 'field_data_field_chars_validation';
  $handler->display->display_options['fields']['field_chars_validation']['field'] = 'field_chars_validation';
  $handler->display->display_options['fields']['field_chars_validation']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_chars_validation']['alter']['strip_tags'] = TRUE;
  /* Field: Content: Additional information */
  $handler->display->display_options['fields']['field_chars_validation_info']['id'] = 'field_chars_validation_info';
  $handler->display->display_options['fields']['field_chars_validation_info']['table'] = 'field_data_field_chars_validation_info';
  $handler->display->display_options['fields']['field_chars_validation_info']['field'] = 'field_chars_validation_info';
  $handler->display->display_options['fields']['field_chars_validation_info']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_chars_validation_info']['alter']['nl2br'] = TRUE;
  /* Field: Content: Compilation */
  $handler->display->display_options['fields']['field_chars_compilation']['id'] = 'field_chars_compilation';
  $handler->display->display_options['fields']['field_chars_compilation']['table'] = 'field_data_field_chars_compilation';
  $handler->display->display_options['fields']['field_chars_compilation']['field'] = 'field_chars_compilation';
  $handler->display->display_options['fields']['field_chars_compilation']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_chars_compilation']['alter']['nl2br'] = TRUE;
  /* Field: Content: Quality assurance process */
  $handler->display->display_options['fields']['field_chars_quality_exists']['id'] = 'field_chars_quality_exists';
  $handler->display->display_options['fields']['field_chars_quality_exists']['table'] = 'field_data_field_chars_quality_exists';
  $handler->display->display_options['fields']['field_chars_quality_exists']['field'] = 'field_chars_quality_exists';
  $handler->display->display_options['fields']['field_chars_quality_exists']['label'] = 'Quality assurance';
  $handler->display->display_options['fields']['field_chars_quality_exists']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_chars_quality_exists']['alter']['strip_tags'] = TRUE;
  /* Field: Content: Brief description */
  $handler->display->display_options['fields']['field_chars_quality_info']['id'] = 'field_chars_quality_info';
  $handler->display->display_options['fields']['field_chars_quality_info']['table'] = 'field_data_field_chars_quality_info';
  $handler->display->display_options['fields']['field_chars_quality_info']['field'] = 'field_chars_quality_info';
  $handler->display->display_options['fields']['field_chars_quality_info']['label'] = 'Quality assurance brief description';
  $handler->display->display_options['fields']['field_chars_quality_info']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_chars_quality_info']['alter']['nl2br'] = TRUE;
  /* Field: Content: Quality assurance process */
  $handler->display->display_options['fields']['field_chars_quality_assurance']['id'] = 'field_chars_quality_assurance';
  $handler->display->display_options['fields']['field_chars_quality_assurance']['table'] = 'field_data_field_chars_quality_assurance';
  $handler->display->display_options['fields']['field_chars_quality_assurance']['field'] = 'field_chars_quality_assurance';
  $handler->display->display_options['fields']['field_chars_quality_assurance']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_chars_quality_assurance']['alter']['nl2br'] = TRUE;
  /* Field: Content: Accuracy */
  $handler->display->display_options['fields']['field_chars_accuracy']['id'] = 'field_chars_accuracy';
  $handler->display->display_options['fields']['field_chars_accuracy']['table'] = 'field_data_field_chars_accuracy';
  $handler->display->display_options['fields']['field_chars_accuracy']['field'] = 'field_chars_accuracy';
  $handler->display->display_options['fields']['field_chars_accuracy']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_chars_accuracy']['alter']['nl2br'] = TRUE;
  /* Field: Content: Reliability */
  $handler->display->display_options['fields']['field_chars_reliability']['id'] = 'field_chars_reliability';
  $handler->display->display_options['fields']['field_chars_reliability']['table'] = 'field_data_field_chars_reliability';
  $handler->display->display_options['fields']['field_chars_reliability']['field'] = 'field_chars_reliability';
  $handler->display->display_options['fields']['field_chars_reliability']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_chars_reliability']['alter']['nl2br'] = TRUE;
  /* Field: Content: Timeliness */
  $handler->display->display_options['fields']['field_chars_timeliness']['id'] = 'field_chars_timeliness';
  $handler->display->display_options['fields']['field_chars_timeliness']['table'] = 'field_data_field_chars_timeliness';
  $handler->display->display_options['fields']['field_chars_timeliness']['field'] = 'field_chars_timeliness';
  $handler->display->display_options['fields']['field_chars_timeliness']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_chars_timeliness']['alter']['nl2br'] = TRUE;
  /* Field: Content: Additional information */
  $handler->display->display_options['fields']['field_chars_timeliness_info']['id'] = 'field_chars_timeliness_info';
  $handler->display->display_options['fields']['field_chars_timeliness_info']['table'] = 'field_data_field_chars_timeliness_info';
  $handler->display->display_options['fields']['field_chars_timeliness_info']['field'] = 'field_chars_timeliness_info';
  $handler->display->display_options['fields']['field_chars_timeliness_info']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_chars_timeliness_info']['alter']['nl2br'] = TRUE;
  /* Field: Content: Comparability */
  $handler->display->display_options['fields']['field_chars_comparability']['id'] = 'field_chars_comparability';
  $handler->display->display_options['fields']['field_chars_comparability']['table'] = 'field_data_field_chars_comparability';
  $handler->display->display_options['fields']['field_chars_comparability']['field'] = 'field_chars_comparability';
  $handler->display->display_options['fields']['field_chars_comparability']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_chars_comparability']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_chars_comparability']['delta_offset'] = '0';
  /* Field: Content: Other remarks */
  $handler->display->display_options['fields']['field_chars_compare_remarks']['id'] = 'field_chars_compare_remarks';
  $handler->display->display_options['fields']['field_chars_compare_remarks']['table'] = 'field_data_field_chars_compare_remarks';
  $handler->display->display_options['fields']['field_chars_compare_remarks']['field'] = 'field_chars_compare_remarks';
  $handler->display->display_options['fields']['field_chars_compare_remarks']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_chars_compare_remarks']['alter']['nl2br'] = TRUE;
  /* Field: Content: Current developments */
  $handler->display->display_options['fields']['field_chars_developments']['id'] = 'field_chars_developments';
  $handler->display->display_options['fields']['field_chars_developments']['table'] = 'field_data_field_chars_developments';
  $handler->display->display_options['fields']['field_chars_developments']['field'] = 'field_chars_developments';
  $handler->display->display_options['fields']['field_chars_developments']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_chars_developments']['alter']['nl2br'] = TRUE;
  /* Field: Content: Reported to third parties */
  $handler->display->display_options['fields']['field_chars_reported']['id'] = 'field_chars_reported';
  $handler->display->display_options['fields']['field_chars_reported']['table'] = 'field_data_field_chars_reported';
  $handler->display->display_options['fields']['field_chars_reported']['field'] = 'field_chars_reported';
  $handler->display->display_options['fields']['field_chars_reported']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_chars_reported']['alter']['strip_tags'] = TRUE;
  /* Field: Content: Name of organisation */
  $handler->display->display_options['fields']['field_chars_organisation']['id'] = 'field_chars_organisation';
  $handler->display->display_options['fields']['field_chars_organisation']['table'] = 'field_data_field_chars_organisation';
  $handler->display->display_options['fields']['field_chars_organisation']['field'] = 'field_chars_organisation';
  $handler->display->display_options['fields']['field_chars_organisation']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_chars_organisation']['alter']['strip_tags'] = TRUE;
  /* Field: Content: Used by third parties */
  $handler->display->display_options['fields']['field_chars_usage']['id'] = 'field_chars_usage';
  $handler->display->display_options['fields']['field_chars_usage']['table'] = 'field_data_field_chars_usage';
  $handler->display->display_options['fields']['field_chars_usage']['field'] = 'field_chars_usage';
  $handler->display->display_options['fields']['field_chars_usage']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_chars_usage']['alter']['strip_tags'] = TRUE;
  /* Field: Content: Additional information */
  $handler->display->display_options['fields']['field_chars_usage_info']['id'] = 'field_chars_usage_info';
  $handler->display->display_options['fields']['field_chars_usage_info']['table'] = 'field_data_field_chars_usage_info';
  $handler->display->display_options['fields']['field_chars_usage_info']['field'] = 'field_chars_usage_info';
  $handler->display->display_options['fields']['field_chars_usage_info']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_chars_usage_info']['alter']['nl2br'] = TRUE;
  /* Field: Content: Reporter */
  $handler->display->display_options['fields']['field_chars_reporter']['id'] = 'field_chars_reporter';
  $handler->display->display_options['fields']['field_chars_reporter']['table'] = 'field_data_field_chars_reporter';
  $handler->display->display_options['fields']['field_chars_reporter']['field'] = 'field_chars_reporter';
  $handler->display->display_options['fields']['field_chars_reporter']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_chars_reporter']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_chars_reporter']['delta_offset'] = '0';
  /* Field: Content: Other */
  $handler->display->display_options['fields']['field_chars_reporter_other']['id'] = 'field_chars_reporter_other';
  $handler->display->display_options['fields']['field_chars_reporter_other']['table'] = 'field_data_field_chars_reporter_other';
  $handler->display->display_options['fields']['field_chars_reporter_other']['field'] = 'field_chars_reporter_other';
  $handler->display->display_options['fields']['field_chars_reporter_other']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_chars_reporter_other']['alter']['nl2br'] = TRUE;
  /* Field: Content: External link */
  $handler->display->display_options['fields']['field_chars_external_link']['id'] = 'field_chars_external_link';
  $handler->display->display_options['fields']['field_chars_external_link']['table'] = 'field_data_field_chars_external_link';
  $handler->display->display_options['fields']['field_chars_external_link']['field'] = 'field_chars_external_link';
  $handler->display->display_options['fields']['field_chars_external_link']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_chars_external_link']['alter']['strip_tags'] = TRUE;
  /* Field: Content: Links */
  $handler->display->display_options['fields']['field_chars_external_link_info']['id'] = 'field_chars_external_link_info';
  $handler->display->display_options['fields']['field_chars_external_link_info']['table'] = 'field_data_field_chars_external_link_info';
  $handler->display->display_options['fields']['field_chars_external_link_info']['field'] = 'field_chars_external_link_info';
  $handler->display->display_options['fields']['field_chars_external_link_info']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_chars_external_link_info']['alter']['nl2br'] = TRUE;
  /* Field: Content: Remarks */
  $handler->display->display_options['fields']['field_chars_remarks']['id'] = 'field_chars_remarks';
  $handler->display->display_options['fields']['field_chars_remarks']['table'] = 'field_data_field_chars_remarks';
  $handler->display->display_options['fields']['field_chars_remarks']['field'] = 'field_chars_remarks';
  $handler->display->display_options['fields']['field_chars_remarks']['label'] = 'Remarks on characteristics';
  $handler->display->display_options['fields']['field_chars_remarks']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_chars_remarks']['alter']['nl2br'] = TRUE;
  /* Field: Content: Remarks */
  $handler->display->display_options['fields']['field_general_remarks']['id'] = 'field_general_remarks';
  $handler->display->display_options['fields']['field_general_remarks']['table'] = 'field_data_field_general_remarks';
  $handler->display->display_options['fields']['field_general_remarks']['field'] = 'field_general_remarks';
  $handler->display->display_options['fields']['field_general_remarks']['label'] = 'General remarks';
  $handler->display->display_options['fields']['field_general_remarks']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_general_remarks']['alter']['nl2br'] = TRUE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title (title_field) */
  $handler->display->display_options['sorts']['title_field_value']['id'] = 'title_field_value';
  $handler->display->display_options['sorts']['title_field_value']['table'] = 'field_data_title_field';
  $handler->display->display_options['sorts']['title_field_value']['field'] = 'title_field_value';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
    3 => 'OR',
    4 => 'OR',
    6 => 'OR',
    5 => 'OR',
    7 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'administrative_data_source' => 'administrative_data_source',
    'statistical_product' => 'statistical_product',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['type']['group_info']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['group_info']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['type']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
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
  $handler->display->display_options['filters']['field_violence_types_tid_i18n']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_violence_types_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_violence_types_tid_i18n']['vocabulary'] = 'gender_based_violence_types';
  /* Filter criterion: Content: Sector (field_ad_sector) (translated) */
  $handler->display->display_options['filters']['field_ad_sector_tid_i18n']['id'] = 'field_ad_sector_tid_i18n';
  $handler->display->display_options['filters']['field_ad_sector_tid_i18n']['table'] = 'field_data_field_ad_sector';
  $handler->display->display_options['filters']['field_ad_sector_tid_i18n']['field'] = 'field_ad_sector_tid_i18n';
  $handler->display->display_options['filters']['field_ad_sector_tid_i18n']['group'] = 1;
  $handler->display->display_options['filters']['field_ad_sector_tid_i18n']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ad_sector_tid_i18n']['expose']['operator_id'] = 'field_ad_sector_tid_i18n_op';
  $handler->display->display_options['filters']['field_ad_sector_tid_i18n']['expose']['label'] = 'Sector';
  $handler->display->display_options['filters']['field_ad_sector_tid_i18n']['expose']['operator'] = 'field_ad_sector_tid_i18n_op';
  $handler->display->display_options['filters']['field_ad_sector_tid_i18n']['expose']['identifier'] = 'st';
  $handler->display->display_options['filters']['field_ad_sector_tid_i18n']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_ad_sector_tid_i18n']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_ad_sector_tid_i18n']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_ad_sector_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_ad_sector_tid_i18n']['vocabulary'] = 'administrative_data_sectors';
  /* Filter criterion: Data available on victim */
  $handler->display->display_options['filters']['populate']['id'] = 'populate';
  $handler->display->display_options['filters']['populate']['table'] = 'views_filters_populate_conditionally';
  $handler->display->display_options['filters']['populate']['field'] = 'populate';
  $handler->display->display_options['filters']['populate']['ui_name'] = 'Data available on victim';
  $handler->display->display_options['filters']['populate']['value'] = '0';
  $handler->display->display_options['filters']['populate']['group'] = 1;
  $handler->display->display_options['filters']['populate']['exposed'] = TRUE;
  $handler->display->display_options['filters']['populate']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['populate']['expose']['label'] = 'Data available on victim';
  $handler->display->display_options['filters']['populate']['expose']['operator'] = 'populate_op';
  $handler->display->display_options['filters']['populate']['expose']['identifier'] = 'dv';
  $handler->display->display_options['filters']['populate']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['populate']['filters'] = array(
    'field_victim_info_value' => 'field_victim_info_value',
    'field_victim_info_other_value' => 'field_victim_info_other_value',
    'field_victim_relationship_value' => 'field_victim_relationship_value',
    'field_victim_repetition_value' => 'field_victim_repetition_value',
    'name_list' => 0,
    'status' => 0,
    'type' => 0,
    'field_violence_types_tid_i18n' => 0,
    'field_ad_sector_tid_i18n' => 0,
    'title' => 0,
  );
  /* Filter criterion: Data available on perpetrator */
  $handler->display->display_options['filters']['populate_1']['id'] = 'populate_1';
  $handler->display->display_options['filters']['populate_1']['table'] = 'views_filters_populate_conditionally';
  $handler->display->display_options['filters']['populate_1']['field'] = 'populate';
  $handler->display->display_options['filters']['populate_1']['ui_name'] = 'Data available on perpetrator';
  $handler->display->display_options['filters']['populate_1']['group'] = 1;
  $handler->display->display_options['filters']['populate_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['populate_1']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['populate_1']['expose']['label'] = 'Data available on perpetrator';
  $handler->display->display_options['filters']['populate_1']['expose']['operator'] = 'populate_1_op';
  $handler->display->display_options['filters']['populate_1']['expose']['identifier'] = 'dp';
  $handler->display->display_options['filters']['populate_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['populate_1']['filters'] = array(
    'field_perpetrator_info_value' => 'field_perpetrator_info_value',
    'field_perpetrator_info_other_value' => 'field_perpetrator_info_other_value',
    'field_perpetrator_reoffending_value' => 'field_perpetrator_reoffending_value',
    'field_perpetrator_relationship_value' => 'field_perpetrator_relationship_value',
    'name_list' => 0,
    'status' => 0,
    'type' => 0,
    'field_violence_types_tid_i18n' => 0,
    'field_ad_sector_tid_i18n' => 0,
    'title' => 0,
    'populate' => 0,
    'field_victim_info_value' => 0,
    'field_victim_info_other_value' => 0,
    'field_victim_relationship_value' => 0,
    'field_victim_repetition_value' => 0,
  );
  /* Filter criterion: Data available on witness */
  $handler->display->display_options['filters']['populate_2']['id'] = 'populate_2';
  $handler->display->display_options['filters']['populate_2']['table'] = 'views_filters_populate_conditionally';
  $handler->display->display_options['filters']['populate_2']['field'] = 'populate';
  $handler->display->display_options['filters']['populate_2']['ui_name'] = 'Data available on witness';
  $handler->display->display_options['filters']['populate_2']['group'] = 1;
  $handler->display->display_options['filters']['populate_2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['populate_2']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['populate_2']['expose']['label'] = 'Data available on witness';
  $handler->display->display_options['filters']['populate_2']['expose']['operator'] = 'populate_2_op';
  $handler->display->display_options['filters']['populate_2']['expose']['identifier'] = 'dw';
  $handler->display->display_options['filters']['populate_2']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['populate_2']['filters'] = array(
    'field_witness_info_value' => 'field_witness_info_value',
    'field_witness_info_other_value' => 'field_witness_info_other_value',
    'field_witness_relationship_value' => 'field_witness_relationship_value',
    'field_witness_description_value' => 'field_witness_description_value',
    'field_witness_children_value' => 'field_witness_children_value',
    'name_list' => 0,
    'status' => 0,
    'type' => 0,
    'field_violence_types_tid_i18n' => 0,
    'field_ad_sector_tid_i18n' => 0,
    'title' => 0,
    'populate' => 0,
    'populate_1' => 0,
    'field_victim_info_value' => 0,
    'field_victim_info_other_value' => 0,
    'field_victim_relationship_value' => 0,
    'field_victim_repetition_value' => 0,
    'field_perpetrator_info_value' => 0,
    'field_perpetrator_info_other_value' => 0,
    'field_perpetrator_relationship_value' => 0,
    'field_perpetrator_reoffending_value' => 0,
  );
  /* Filter criterion: Data available on incident */
  $handler->display->display_options['filters']['populate_3']['id'] = 'populate_3';
  $handler->display->display_options['filters']['populate_3']['table'] = 'views_filters_populate_conditionally';
  $handler->display->display_options['filters']['populate_3']['field'] = 'populate';
  $handler->display->display_options['filters']['populate_3']['ui_name'] = 'Data available on incident';
  $handler->display->display_options['filters']['populate_3']['group'] = 1;
  $handler->display->display_options['filters']['populate_3']['exposed'] = TRUE;
  $handler->display->display_options['filters']['populate_3']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['populate_3']['expose']['label'] = 'Data available on incident';
  $handler->display->display_options['filters']['populate_3']['expose']['operator'] = 'populate_3_op';
  $handler->display->display_options['filters']['populate_3']['expose']['identifier'] = 'di';
  $handler->display->display_options['filters']['populate_3']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['populate_3']['filters'] = array(
    'field_incident_value' => 'field_incident_value',
    'field_incident_other_value' => 'field_incident_other_value',
    'field_incident_code_system_value' => 'field_incident_code_system_value',
    'field_incident_description_value' => 'field_incident_description_value',
    'field_incident_description_other_value' => 'field_incident_description_other_value',
    'field_incident_protection_value' => 'field_incident_protection_value',
    'field_incident_justice_data_value' => 'field_incident_justice_data_value',
    'field_incident_resources_value' => 'field_incident_resources_value',
    'field_incident_other_resources_value' => 'field_incident_other_resources_value',
    'name_list' => 0,
    'status' => 0,
    'type' => 0,
    'field_violence_types_tid_i18n' => 0,
    'field_ad_sector_tid_i18n' => 0,
    'title' => 0,
    'populate' => 0,
    'populate_1' => 0,
    'populate_2' => 0,
    'field_victim_info_value' => 0,
    'field_victim_info_other_value' => 0,
    'field_victim_relationship_value' => 0,
    'field_victim_repetition_value' => 0,
    'field_perpetrator_info_value' => 0,
    'field_perpetrator_info_other_value' => 0,
    'field_perpetrator_relationship_value' => 0,
    'field_perpetrator_reoffending_value' => 0,
    'field_witness_info_value' => 0,
    'field_witness_info_other_value' => 0,
    'field_witness_relationship_value' => 0,
    'field_witness_description_value' => 0,
    'field_witness_children_value' => 0,
  );
  /* Filter criterion: Data available on prosecution process */
  $handler->display->display_options['filters']['populate_4']['id'] = 'populate_4';
  $handler->display->display_options['filters']['populate_4']['table'] = 'views_filters_populate_conditionally';
  $handler->display->display_options['filters']['populate_4']['field'] = 'populate';
  $handler->display->display_options['filters']['populate_4']['ui_name'] = 'Data available on prosecution process';
  $handler->display->display_options['filters']['populate_4']['group'] = 1;
  $handler->display->display_options['filters']['populate_4']['exposed'] = TRUE;
  $handler->display->display_options['filters']['populate_4']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['populate_4']['expose']['label'] = 'Data available on prosecution process';
  $handler->display->display_options['filters']['populate_4']['expose']['operator'] = 'populate_4_op';
  $handler->display->display_options['filters']['populate_4']['expose']['identifier'] = 'dpp';
  $handler->display->display_options['filters']['populate_4']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['populate_4']['filters'] = array(
    'field_prosecution_stages_value' => 'field_prosecution_stages_value',
    'field_prosec_stages_other_value' => 'field_prosec_stages_other_value',
    'field_prosecution_defendant_value' => 'field_prosecution_defendant_value',
    'field_prosec_defendant_other_value' => 'field_prosec_defendant_other_value',
    'field_prosecution_avg_time_value' => 'field_prosecution_avg_time_value',
    'name_list' => 0,
    'status' => 0,
    'type' => 0,
    'field_violence_types_tid_i18n' => 0,
    'field_ad_sector_tid_i18n' => 0,
    'title' => 0,
    'populate' => 0,
    'populate_1' => 0,
    'populate_2' => 0,
    'populate_3' => 0,
    'field_victim_info_value' => 0,
    'field_victim_info_other_value' => 0,
    'field_victim_relationship_value' => 0,
    'field_victim_repetition_value' => 0,
    'field_perpetrator_info_value' => 0,
    'field_perpetrator_info_other_value' => 0,
    'field_perpetrator_relationship_value' => 0,
    'field_perpetrator_reoffending_value' => 0,
    'field_witness_info_value' => 0,
    'field_witness_info_other_value' => 0,
    'field_witness_relationship_value' => 0,
    'field_witness_description_value' => 0,
    'field_witness_children_value' => 0,
    'field_incident_value' => 0,
    'field_incident_other_value' => 0,
    'field_incident_code_system_value' => 0,
    'field_incident_description_value' => 0,
    'field_incident_description_other_value' => 0,
    'field_incident_protection_value' => 0,
    'field_incident_justice_data_value' => 0,
    'field_incident_resources_value' => 0,
    'field_incident_other_resources_value' => 0,
  );
  /* Filter criterion: Data available on outcomes */
  $handler->display->display_options['filters']['populate_5']['id'] = 'populate_5';
  $handler->display->display_options['filters']['populate_5']['table'] = 'views_filters_populate_conditionally';
  $handler->display->display_options['filters']['populate_5']['field'] = 'populate';
  $handler->display->display_options['filters']['populate_5']['ui_name'] = 'Data available on outcomes';
  $handler->display->display_options['filters']['populate_5']['group'] = 1;
  $handler->display->display_options['filters']['populate_5']['exposed'] = TRUE;
  $handler->display->display_options['filters']['populate_5']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['populate_5']['expose']['label'] = 'Data available on outcomes';
  $handler->display->display_options['filters']['populate_5']['expose']['operator'] = 'populate_5_op';
  $handler->display->display_options['filters']['populate_5']['expose']['identifier'] = 'do';
  $handler->display->display_options['filters']['populate_5']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['populate_5']['filters'] = array(
    'field_outcomes_arrest_cases_value' => 'field_outcomes_arrest_cases_value',
    'field_outcomes_many_offenses_value' => 'field_outcomes_many_offenses_value',
    'field_outcomes_list_offenses_value' => 'field_outcomes_list_offenses_value',
    'field_outcomes_probation_value' => 'field_outcomes_probation_value',
    'field_outcomes_bail_remand_value' => 'field_outcomes_bail_remand_value',
    'field_outcomes_prisons_value' => 'field_outcomes_prisons_value',
    'field_outcomes_perp_other_value' => 'field_outcomes_perp_other_value',
    'field_outcomes_death_value' => 'field_outcomes_death_value',
    'name_list' => 0,
    'status' => 0,
    'type' => 0,
    'field_violence_types_tid_i18n' => 0,
    'field_ad_sector_tid_i18n' => 0,
    'title' => 0,
    'populate' => 0,
    'populate_1' => 0,
    'populate_2' => 0,
    'populate_3' => 0,
    'populate_4' => 0,
    'field_victim_info_value' => 0,
    'field_victim_info_other_value' => 0,
    'field_victim_relationship_value' => 0,
    'field_victim_repetition_value' => 0,
    'field_perpetrator_info_value' => 0,
    'field_perpetrator_info_other_value' => 0,
    'field_perpetrator_relationship_value' => 0,
    'field_perpetrator_reoffending_value' => 0,
    'field_witness_info_value' => 0,
    'field_witness_info_other_value' => 0,
    'field_witness_relationship_value' => 0,
    'field_witness_description_value' => 0,
    'field_witness_children_value' => 0,
    'field_prosecution_stages_value' => 0,
    'field_prosec_stages_other_value' => 0,
    'field_prosecution_defendant_value' => 0,
    'field_prosec_defendant_other_value' => 0,
    'field_prosecution_avg_time_value' => 0,
    'field_incident_value' => 0,
    'field_incident_other_value' => 0,
    'field_incident_code_system_value' => 0,
    'field_incident_description_value' => 0,
    'field_incident_description_other_value' => 0,
    'field_incident_protection_value' => 0,
    'field_incident_justice_data_value' => 0,
    'field_incident_resources_value' => 0,
    'field_incident_other_resources_value' => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'allwords';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Search Administrative data sources';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 't';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Background information (field_victim_info) */
  $handler->display->display_options['filters']['field_victim_info_value']['id'] = 'field_victim_info_value';
  $handler->display->display_options['filters']['field_victim_info_value']['table'] = 'field_data_field_victim_info';
  $handler->display->display_options['filters']['field_victim_info_value']['field'] = 'field_victim_info_value';
  $handler->display->display_options['filters']['field_victim_info_value']['value'] = array(
    'Age' => 'Age',
    'Sex' => 'Sex',
    'Nationality' => 'Nationality',
    'ID' => 'ID',
    'Name' => 'Name',
    'Ethnicity' => 'Ethnicity',
    'Marital status' => 'Marital status',
    'Dependants' => 'Dependants',
  );
  $handler->display->display_options['filters']['field_victim_info_value']['group'] = 2;
  $handler->display->display_options['filters']['field_victim_info_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Other (field_victim_info_other) */
  $handler->display->display_options['filters']['field_victim_info_other_value']['id'] = 'field_victim_info_other_value';
  $handler->display->display_options['filters']['field_victim_info_other_value']['table'] = 'field_data_field_victim_info_other';
  $handler->display->display_options['filters']['field_victim_info_other_value']['field'] = 'field_victim_info_other_value';
  $handler->display->display_options['filters']['field_victim_info_other_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_victim_info_other_value']['group'] = 2;
  /* Filter criterion: Content: Relationship with perpetrator (field_victim_relationship) */
  $handler->display->display_options['filters']['field_victim_relationship_value']['id'] = 'field_victim_relationship_value';
  $handler->display->display_options['filters']['field_victim_relationship_value']['table'] = 'field_data_field_victim_relationship';
  $handler->display->display_options['filters']['field_victim_relationship_value']['field'] = 'field_victim_relationship_value';
  $handler->display->display_options['filters']['field_victim_relationship_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_victim_relationship_value']['group'] = 2;
  $handler->display->display_options['filters']['field_victim_relationship_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Repeatedly suffering from GBV (field_victim_repetition) */
  $handler->display->display_options['filters']['field_victim_repetition_value']['id'] = 'field_victim_repetition_value';
  $handler->display->display_options['filters']['field_victim_repetition_value']['table'] = 'field_data_field_victim_repetition';
  $handler->display->display_options['filters']['field_victim_repetition_value']['field'] = 'field_victim_repetition_value';
  $handler->display->display_options['filters']['field_victim_repetition_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_victim_repetition_value']['group'] = 2;
  $handler->display->display_options['filters']['field_victim_repetition_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Background information (field_perpetrator_info) */
  $handler->display->display_options['filters']['field_perpetrator_info_value']['id'] = 'field_perpetrator_info_value';
  $handler->display->display_options['filters']['field_perpetrator_info_value']['table'] = 'field_data_field_perpetrator_info';
  $handler->display->display_options['filters']['field_perpetrator_info_value']['field'] = 'field_perpetrator_info_value';
  $handler->display->display_options['filters']['field_perpetrator_info_value']['value'] = array(
    'Age' => 'Age',
    'Sex' => 'Sex',
    'Nationality' => 'Nationality',
    'ID' => 'ID',
    'Name' => 'Name',
    'Ethnicity' => 'Ethnicity',
    'Marital status' => 'Marital status',
    'Dependants' => 'Dependants',
  );
  $handler->display->display_options['filters']['field_perpetrator_info_value']['group'] = 3;
  $handler->display->display_options['filters']['field_perpetrator_info_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Other (field_perpetrator_info_other) */
  $handler->display->display_options['filters']['field_perpetrator_info_other_value']['id'] = 'field_perpetrator_info_other_value';
  $handler->display->display_options['filters']['field_perpetrator_info_other_value']['table'] = 'field_data_field_perpetrator_info_other';
  $handler->display->display_options['filters']['field_perpetrator_info_other_value']['field'] = 'field_perpetrator_info_other_value';
  $handler->display->display_options['filters']['field_perpetrator_info_other_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_perpetrator_info_other_value']['group'] = 3;
  /* Filter criterion: Content: Relationship with victim (field_perpetrator_relationship) */
  $handler->display->display_options['filters']['field_perpetrator_relationship_value']['id'] = 'field_perpetrator_relationship_value';
  $handler->display->display_options['filters']['field_perpetrator_relationship_value']['table'] = 'field_data_field_perpetrator_relationship';
  $handler->display->display_options['filters']['field_perpetrator_relationship_value']['field'] = 'field_perpetrator_relationship_value';
  $handler->display->display_options['filters']['field_perpetrator_relationship_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_perpetrator_relationship_value']['group'] = 3;
  $handler->display->display_options['filters']['field_perpetrator_relationship_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Re-offending (field_perpetrator_reoffending) */
  $handler->display->display_options['filters']['field_perpetrator_reoffending_value']['id'] = 'field_perpetrator_reoffending_value';
  $handler->display->display_options['filters']['field_perpetrator_reoffending_value']['table'] = 'field_data_field_perpetrator_reoffending';
  $handler->display->display_options['filters']['field_perpetrator_reoffending_value']['field'] = 'field_perpetrator_reoffending_value';
  $handler->display->display_options['filters']['field_perpetrator_reoffending_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_perpetrator_reoffending_value']['group'] = 3;
  $handler->display->display_options['filters']['field_perpetrator_reoffending_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Background information (field_witness_info) */
  $handler->display->display_options['filters']['field_witness_info_value']['id'] = 'field_witness_info_value';
  $handler->display->display_options['filters']['field_witness_info_value']['table'] = 'field_data_field_witness_info';
  $handler->display->display_options['filters']['field_witness_info_value']['field'] = 'field_witness_info_value';
  $handler->display->display_options['filters']['field_witness_info_value']['value'] = array(
    'Age' => 'Age',
    'Sex' => 'Sex',
    'Nationality' => 'Nationality',
    'ID' => 'ID',
    'Name' => 'Name',
    'Ethnicity' => 'Ethnicity',
    'Marital status' => 'Marital status',
    'Dependants' => 'Dependants',
  );
  $handler->display->display_options['filters']['field_witness_info_value']['group'] = 4;
  $handler->display->display_options['filters']['field_witness_info_value']['expose']['operator_id'] = 'field_witness_info_value_op';
  $handler->display->display_options['filters']['field_witness_info_value']['expose']['label'] = 'Background information (field_witness_info)';
  $handler->display->display_options['filters']['field_witness_info_value']['expose']['operator'] = 'field_witness_info_value_op';
  $handler->display->display_options['filters']['field_witness_info_value']['expose']['identifier'] = 'field_witness_info_value';
  $handler->display->display_options['filters']['field_witness_info_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Other (field_witness_info_other) */
  $handler->display->display_options['filters']['field_witness_info_other_value']['id'] = 'field_witness_info_other_value';
  $handler->display->display_options['filters']['field_witness_info_other_value']['table'] = 'field_data_field_witness_info_other';
  $handler->display->display_options['filters']['field_witness_info_other_value']['field'] = 'field_witness_info_other_value';
  $handler->display->display_options['filters']['field_witness_info_other_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_witness_info_other_value']['group'] = 4;
  /* Filter criterion: Content: Relationship with victim/perpetrator (field_witness_relationship) */
  $handler->display->display_options['filters']['field_witness_relationship_value']['id'] = 'field_witness_relationship_value';
  $handler->display->display_options['filters']['field_witness_relationship_value']['table'] = 'field_data_field_witness_relationship';
  $handler->display->display_options['filters']['field_witness_relationship_value']['field'] = 'field_witness_relationship_value';
  $handler->display->display_options['filters']['field_witness_relationship_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_witness_relationship_value']['group'] = 4;
  $handler->display->display_options['filters']['field_witness_relationship_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Incident description by witness (field_witness_description) */
  $handler->display->display_options['filters']['field_witness_description_value']['id'] = 'field_witness_description_value';
  $handler->display->display_options['filters']['field_witness_description_value']['table'] = 'field_data_field_witness_description';
  $handler->display->display_options['filters']['field_witness_description_value']['field'] = 'field_witness_description_value';
  $handler->display->display_options['filters']['field_witness_description_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_witness_description_value']['group'] = 4;
  $handler->display->display_options['filters']['field_witness_description_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Children witnessing IPV incident (field_witness_children) */
  $handler->display->display_options['filters']['field_witness_children_value']['id'] = 'field_witness_children_value';
  $handler->display->display_options['filters']['field_witness_children_value']['table'] = 'field_data_field_witness_children';
  $handler->display->display_options['filters']['field_witness_children_value']['field'] = 'field_witness_children_value';
  $handler->display->display_options['filters']['field_witness_children_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_witness_children_value']['group'] = 4;
  $handler->display->display_options['filters']['field_witness_children_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Stages of prosecution process (field_prosecution_stages) */
  $handler->display->display_options['filters']['field_prosecution_stages_value']['id'] = 'field_prosecution_stages_value';
  $handler->display->display_options['filters']['field_prosecution_stages_value']['table'] = 'field_data_field_prosecution_stages';
  $handler->display->display_options['filters']['field_prosecution_stages_value']['field'] = 'field_prosecution_stages_value';
  $handler->display->display_options['filters']['field_prosecution_stages_value']['value'] = array(
    'Withdrawals of complaints' => 'Withdrawals of complaints',
    'Withdrawals of prosecution support' => 'Withdrawals of prosecution support',
    'N. of cases reported for each incident' => 'N. of cases reported for each incident',
    'N. of cases initiated for each type of incident' => 'N. of cases initiated for each type of incident',
    'N. of cases referred to court' => 'N. of cases referred to court',
    'Types of offense(s)' => 'Types of offense(s)',
  );
  $handler->display->display_options['filters']['field_prosecution_stages_value']['group'] = 6;
  $handler->display->display_options['filters']['field_prosecution_stages_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Other (field_prosec_stages_other) */
  $handler->display->display_options['filters']['field_prosec_stages_other_value']['id'] = 'field_prosec_stages_other_value';
  $handler->display->display_options['filters']['field_prosec_stages_other_value']['table'] = 'field_data_field_prosec_stages_other';
  $handler->display->display_options['filters']['field_prosec_stages_other_value']['field'] = 'field_prosec_stages_other_value';
  $handler->display->display_options['filters']['field_prosec_stages_other_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_prosec_stages_other_value']['group'] = 6;
  /* Filter criterion: Content: Defendant pleas/verdicts (field_prosecution_defendant) */
  $handler->display->display_options['filters']['field_prosecution_defendant_value']['id'] = 'field_prosecution_defendant_value';
  $handler->display->display_options['filters']['field_prosecution_defendant_value']['table'] = 'field_data_field_prosecution_defendant';
  $handler->display->display_options['filters']['field_prosecution_defendant_value']['field'] = 'field_prosecution_defendant_value';
  $handler->display->display_options['filters']['field_prosecution_defendant_value']['value'] = array(
    'Guilty pleas' => 'Guilty pleas',
    'Guilty verdicts' => 'Guilty verdicts',
  );
  $handler->display->display_options['filters']['field_prosecution_defendant_value']['group'] = 6;
  $handler->display->display_options['filters']['field_prosecution_defendant_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Other (field_prosec_defendant_other) */
  $handler->display->display_options['filters']['field_prosec_defendant_other_value']['id'] = 'field_prosec_defendant_other_value';
  $handler->display->display_options['filters']['field_prosec_defendant_other_value']['table'] = 'field_data_field_prosec_defendant_other';
  $handler->display->display_options['filters']['field_prosec_defendant_other_value']['field'] = 'field_prosec_defendant_other_value';
  $handler->display->display_options['filters']['field_prosec_defendant_other_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_prosec_defendant_other_value']['group'] = 6;
  /* Filter criterion: Content: Average time case through criminal justice system (field_prosecution_avg_time) */
  $handler->display->display_options['filters']['field_prosecution_avg_time_value']['id'] = 'field_prosecution_avg_time_value';
  $handler->display->display_options['filters']['field_prosecution_avg_time_value']['table'] = 'field_data_field_prosecution_avg_time';
  $handler->display->display_options['filters']['field_prosecution_avg_time_value']['field'] = 'field_prosecution_avg_time_value';
  $handler->display->display_options['filters']['field_prosecution_avg_time_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_prosecution_avg_time_value']['group'] = 6;
  $handler->display->display_options['filters']['field_prosecution_avg_time_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Incident (field_incident) */
  $handler->display->display_options['filters']['field_incident_value']['id'] = 'field_incident_value';
  $handler->display->display_options['filters']['field_incident_value']['table'] = 'field_data_field_incident';
  $handler->display->display_options['filters']['field_incident_value']['field'] = 'field_incident_value';
  $handler->display->display_options['filters']['field_incident_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_incident_value']['group'] = 5;
  $handler->display->display_options['filters']['field_incident_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Other content (field_incident_other) */
  $handler->display->display_options['filters']['field_incident_other_value']['id'] = 'field_incident_other_value';
  $handler->display->display_options['filters']['field_incident_other_value']['table'] = 'field_data_field_incident_other';
  $handler->display->display_options['filters']['field_incident_other_value']['field'] = 'field_incident_other_value';
  $handler->display->display_options['filters']['field_incident_other_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_incident_other_value']['group'] = 5;
  /* Filter criterion: Content: Code system used (field_incident_code_system) */
  $handler->display->display_options['filters']['field_incident_code_system_value']['id'] = 'field_incident_code_system_value';
  $handler->display->display_options['filters']['field_incident_code_system_value']['table'] = 'field_data_field_incident_code_system';
  $handler->display->display_options['filters']['field_incident_code_system_value']['field'] = 'field_incident_code_system_value';
  $handler->display->display_options['filters']['field_incident_code_system_value']['value'] = array(
    'Criminal justice' => 'Criminal justice',
    'Civil law' => 'Civil law',
    'Health' => 'Health',
    'Police' => 'Police',
    'Specific to organisation' => 'Specific to organisation',
    'No codes used' => 'No codes used',
  );
  $handler->display->display_options['filters']['field_incident_code_system_value']['group'] = 5;
  $handler->display->display_options['filters']['field_incident_code_system_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Description of incident (field_incident_description) */
  $handler->display->display_options['filters']['field_incident_description_value']['id'] = 'field_incident_description_value';
  $handler->display->display_options['filters']['field_incident_description_value']['table'] = 'field_data_field_incident_description';
  $handler->display->display_options['filters']['field_incident_description_value']['field'] = 'field_incident_description_value';
  $handler->display->display_options['filters']['field_incident_description_value']['value'] = array(
    'Date/time' => 'Date/time',
    'Harm/injuries' => 'Harm/injuries',
    'Location' => 'Location',
    'Type of violence' => 'Type of violence',
  );
  $handler->display->display_options['filters']['field_incident_description_value']['group'] = 5;
  $handler->display->display_options['filters']['field_incident_description_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Other (field_incident_description_other) */
  $handler->display->display_options['filters']['field_incident_description_other_value']['id'] = 'field_incident_description_other_value';
  $handler->display->display_options['filters']['field_incident_description_other_value']['table'] = 'field_data_field_incident_description_other';
  $handler->display->display_options['filters']['field_incident_description_other_value']['field'] = 'field_incident_description_other_value';
  $handler->display->display_options['filters']['field_incident_description_other_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_incident_description_other_value']['group'] = 5;
  /* Filter criterion: Content: Protection order (field_incident_protection) */
  $handler->display->display_options['filters']['field_incident_protection_value']['id'] = 'field_incident_protection_value';
  $handler->display->display_options['filters']['field_incident_protection_value']['table'] = 'field_data_field_incident_protection';
  $handler->display->display_options['filters']['field_incident_protection_value']['field'] = 'field_incident_protection_value';
  $handler->display->display_options['filters']['field_incident_protection_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_incident_protection_value']['group'] = 5;
  $handler->display->display_options['filters']['field_incident_protection_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Civil justice data (field_incident_justice_data) */
  $handler->display->display_options['filters']['field_incident_justice_data_value']['id'] = 'field_incident_justice_data_value';
  $handler->display->display_options['filters']['field_incident_justice_data_value']['table'] = 'field_data_field_incident_justice_data';
  $handler->display->display_options['filters']['field_incident_justice_data_value']['field'] = 'field_incident_justice_data_value';
  $handler->display->display_options['filters']['field_incident_justice_data_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_incident_justice_data_value']['group'] = 5;
  $handler->display->display_options['filters']['field_incident_justice_data_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Incident respond resources (field_incident_resources) */
  $handler->display->display_options['filters']['field_incident_resources_value']['id'] = 'field_incident_resources_value';
  $handler->display->display_options['filters']['field_incident_resources_value']['table'] = 'field_data_field_incident_resources';
  $handler->display->display_options['filters']['field_incident_resources_value']['field'] = 'field_incident_resources_value';
  $handler->display->display_options['filters']['field_incident_resources_value']['value'] = array(
    'Human resources' => 'Human resources',
    'Financial resources' => 'Financial resources',
    'Other resources' => 'Other resources',
  );
  $handler->display->display_options['filters']['field_incident_resources_value']['group'] = 5;
  $handler->display->display_options['filters']['field_incident_resources_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Other resources (field_incident_other_resources) */
  $handler->display->display_options['filters']['field_incident_other_resources_value']['id'] = 'field_incident_other_resources_value';
  $handler->display->display_options['filters']['field_incident_other_resources_value']['table'] = 'field_data_field_incident_other_resources';
  $handler->display->display_options['filters']['field_incident_other_resources_value']['field'] = 'field_incident_other_resources_value';
  $handler->display->display_options['filters']['field_incident_other_resources_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_incident_other_resources_value']['group'] = 5;
  /* Filter criterion: Content: N. of cases resulting in arrest (field_outcomes_arrest_cases) */
  $handler->display->display_options['filters']['field_outcomes_arrest_cases_value']['id'] = 'field_outcomes_arrest_cases_value';
  $handler->display->display_options['filters']['field_outcomes_arrest_cases_value']['table'] = 'field_data_field_outcomes_arrest_cases';
  $handler->display->display_options['filters']['field_outcomes_arrest_cases_value']['field'] = 'field_outcomes_arrest_cases_value';
  $handler->display->display_options['filters']['field_outcomes_arrest_cases_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_outcomes_arrest_cases_value']['group'] = 7;
  $handler->display->display_options['filters']['field_outcomes_arrest_cases_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content:  Charged with more than one offense (field_outcomes_many_offenses) */
  $handler->display->display_options['filters']['field_outcomes_many_offenses_value']['id'] = 'field_outcomes_many_offenses_value';
  $handler->display->display_options['filters']['field_outcomes_many_offenses_value']['table'] = 'field_data_field_outcomes_many_offenses';
  $handler->display->display_options['filters']['field_outcomes_many_offenses_value']['field'] = 'field_outcomes_many_offenses_value';
  $handler->display->display_options['filters']['field_outcomes_many_offenses_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_outcomes_many_offenses_value']['group'] = 7;
  $handler->display->display_options['filters']['field_outcomes_many_offenses_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: List of offenses (field_outcomes_list_offenses) */
  $handler->display->display_options['filters']['field_outcomes_list_offenses_value']['id'] = 'field_outcomes_list_offenses_value';
  $handler->display->display_options['filters']['field_outcomes_list_offenses_value']['table'] = 'field_data_field_outcomes_list_offenses';
  $handler->display->display_options['filters']['field_outcomes_list_offenses_value']['field'] = 'field_outcomes_list_offenses_value';
  $handler->display->display_options['filters']['field_outcomes_list_offenses_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_outcomes_list_offenses_value']['group'] = 7;
  $handler->display->display_options['filters']['field_outcomes_list_offenses_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Probation (field_outcomes_probation) */
  $handler->display->display_options['filters']['field_outcomes_probation_value']['id'] = 'field_outcomes_probation_value';
  $handler->display->display_options['filters']['field_outcomes_probation_value']['table'] = 'field_data_field_outcomes_probation';
  $handler->display->display_options['filters']['field_outcomes_probation_value']['field'] = 'field_outcomes_probation_value';
  $handler->display->display_options['filters']['field_outcomes_probation_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_outcomes_probation_value']['group'] = 7;
  $handler->display->display_options['filters']['field_outcomes_probation_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Bail/remand (field_outcomes_bail_remand) */
  $handler->display->display_options['filters']['field_outcomes_bail_remand_value']['id'] = 'field_outcomes_bail_remand_value';
  $handler->display->display_options['filters']['field_outcomes_bail_remand_value']['table'] = 'field_data_field_outcomes_bail_remand';
  $handler->display->display_options['filters']['field_outcomes_bail_remand_value']['field'] = 'field_outcomes_bail_remand_value';
  $handler->display->display_options['filters']['field_outcomes_bail_remand_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_outcomes_bail_remand_value']['group'] = 7;
  $handler->display->display_options['filters']['field_outcomes_bail_remand_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Prisons (field_outcomes_prisons) */
  $handler->display->display_options['filters']['field_outcomes_prisons_value']['id'] = 'field_outcomes_prisons_value';
  $handler->display->display_options['filters']['field_outcomes_prisons_value']['table'] = 'field_data_field_outcomes_prisons';
  $handler->display->display_options['filters']['field_outcomes_prisons_value']['field'] = 'field_outcomes_prisons_value';
  $handler->display->display_options['filters']['field_outcomes_prisons_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_outcomes_prisons_value']['group'] = 7;
  $handler->display->display_options['filters']['field_outcomes_prisons_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Other (field_outcomes_perp_other) */
  $handler->display->display_options['filters']['field_outcomes_perp_other_value']['id'] = 'field_outcomes_perp_other_value';
  $handler->display->display_options['filters']['field_outcomes_perp_other_value']['table'] = 'field_data_field_outcomes_perp_other';
  $handler->display->display_options['filters']['field_outcomes_perp_other_value']['field'] = 'field_outcomes_perp_other_value';
  $handler->display->display_options['filters']['field_outcomes_perp_other_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_outcomes_perp_other_value']['group'] = 7;
  /* Filter criterion: Content: Death as result of incident (field_outcomes_death) */
  $handler->display->display_options['filters']['field_outcomes_death_value']['id'] = 'field_outcomes_death_value';
  $handler->display->display_options['filters']['field_outcomes_death_value']['table'] = 'field_data_field_outcomes_death';
  $handler->display->display_options['filters']['field_outcomes_death_value']['field'] = 'field_outcomes_death_value';
  $handler->display->display_options['filters']['field_outcomes_death_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_outcomes_death_value']['group'] = 7;
  $handler->display->display_options['filters']['field_outcomes_death_value']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['path'] = 'gender-based-violence/administrative-data-sources/search/csv';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
    'panel_pane_1' => 0,
    'panel_pane_2' => 0,
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
    'field_violence_remarks' => 'field_violence_remarks',
    'field_purpose_of_data_collection' => 'field_purpose_of_data_collection',
    'field_other_purpose' => 'field_other_purpose',
    'field_raw_data_issues' => 'field_raw_data_issues',
    'field_raw_data_issues_info' => 'field_raw_data_issues_info',
    'field_survey_data' => 'field_survey_data',
    'field_indicator_usage' => 'field_indicator_usage',
    'field_indicator' => 'field_indicator',
    'field_indicator_other' => 'field_indicator_other',
    'field_remarks' => 'field_remarks',
    'field_organisation' => 'field_organisation',
    'field_organisation_type' => 'field_organisation_type',
    'field_ad_sector' => 'field_ad_sector',
    'field_other_sector' => 'field_other_sector',
    'field_geographical_area' => 'field_geographical_area',
    'field_geographical_area_remarks' => 'field_geographical_area_remarks',
    'field_latest_update' => 'field_latest_update',
    'field_website' => 'field_website',
    'field_victim_info' => 'field_victim_info',
    'field_victim_info_other' => 'field_victim_info_other',
    'field_victim_relationship' => 'field_victim_relationship',
    'field_victim_relation_type' => 'field_victim_relation_type',
    'field_victim_repetition' => 'field_victim_repetition',
    'field_victim_remarks' => 'field_victim_remarks',
    'field_perpetrator_info' => 'field_perpetrator_info',
    'field_perpetrator_info_other' => 'field_perpetrator_info_other',
    'field_perpetrator_relationship' => 'field_perpetrator_relationship',
    'field_perpetrator_rel_info' => 'field_perpetrator_rel_info',
    'field_perpetrator_reoffending' => 'field_perpetrator_reoffending',
    'field_perpetrator_remarks' => 'field_perpetrator_remarks',
    'field_witness_info' => 'field_witness_info',
    'field_witness_info_other' => 'field_witness_info_other',
    'field_witness_relationship' => 'field_witness_relationship',
    'field_witness_description' => 'field_witness_description',
    'field_witness_children' => 'field_witness_children',
    'field_witness_remarks' => 'field_witness_remarks',
    'field_incident_other' => 'field_incident_other',
    'field_incident_code_system' => 'field_incident_code_system',
    'field_incident_code_remarks' => 'field_incident_code_remarks',
    'field_incident_description' => 'field_incident_description',
    'field_incident_description_other' => 'field_incident_description_other',
    'field_incident_protection' => 'field_incident_protection',
    'field_incident_orders' => 'field_incident_orders',
    'field_incident_justice_data' => 'field_incident_justice_data',
    'field_incident_justice_info' => 'field_incident_justice_info',
    'field_incident_resources' => 'field_incident_resources',
    'field_incident_other_resources' => 'field_incident_other_resources',
    'field_incident_remarks' => 'field_incident_remarks',
    'field_prosecution_stages' => 'field_prosecution_stages',
    'field_prosec_stages_other' => 'field_prosec_stages_other',
    'field_prosecution_defendant' => 'field_prosecution_defendant',
    'field_prosec_defendant_other' => 'field_prosec_defendant_other',
    'field_prosecution_avg_time' => 'field_prosecution_avg_time',
    'field_prosecution_remarks' => 'field_prosecution_remarks',
    'field_criminal_statistics_data' => 'field_criminal_statistics_data',
    'field_criminal_data_info' => 'field_criminal_data_info',
    'field_outcomes_arrest_cases' => 'field_outcomes_arrest_cases',
    'field_outcomes_many_offenses' => 'field_outcomes_many_offenses',
    'field_outcomes_list_offenses' => 'field_outcomes_list_offenses',
    'field_outcomes_offenses_remarks' => 'field_outcomes_offenses_remarks',
    'field_outcomes_probation' => 'field_outcomes_probation',
    'field_outcomes_bail_remand' => 'field_outcomes_bail_remand',
    'field_outcomes_bail_remarks' => 'field_outcomes_bail_remarks',
    'field_outcomes_prisons' => 'field_outcomes_prisons',
    'field_outcomes_prisons_remarks' => 'field_outcomes_prisons_remarks',
    'field_outcomes_perp_other' => 'field_outcomes_perp_other',
    'field_outcomes_death' => 'field_outcomes_death',
    'field_outcomes_remarks' => 'field_outcomes_remarks',
    'field_chars_reference_period' => 'field_chars_reference_period',
    'field_chars_ref_period_info' => 'field_chars_ref_period_info',
    'field_chars_storage_system' => 'field_chars_storage_system',
    'field_chars_storage_other' => 'field_chars_storage_other',
    'field_chars_frequency' => 'field_chars_frequency',
    'field_chars_frequency_text' => 'field_chars_frequency_text',
    'field_chars_frequency_remarks' => 'field_chars_frequency_remarks',
    'field_chars_validation' => 'field_chars_validation',
    'field_chars_validation_info' => 'field_chars_validation_info',
    'field_chars_compilation' => 'field_chars_compilation',
    'field_chars_quality_exists' => 'field_chars_quality_exists',
    'field_chars_quality_info' => 'field_chars_quality_info',
    'field_chars_quality_assurance' => 'field_chars_quality_assurance',
    'field_chars_accuracy' => 'field_chars_accuracy',
    'field_chars_reliability' => 'field_chars_reliability',
    'field_chars_timeliness' => 'field_chars_timeliness',
    'field_chars_timeliness_info' => 'field_chars_timeliness_info',
    'field_chars_comparability' => 'field_chars_comparability',
    'field_chars_compare_remarks' => 'field_chars_compare_remarks',
    'field_chars_developments' => 'field_chars_developments',
    'field_chars_reported' => 'field_chars_reported',
    'field_chars_organisation' => 'field_chars_organisation',
    'field_chars_usage' => 'field_chars_usage',
    'field_chars_usage_info' => 'field_chars_usage_info',
    'field_chars_reporter' => 'field_chars_reporter',
    'field_chars_reporter_other' => 'field_chars_reporter_other',
    'field_chars_external_link' => 'field_chars_external_link',
    'field_chars_external_link_info' => 'field_chars_external_link_info',
    'field_chars_remarks' => 'field_chars_remarks',
    'field_general_remarks' => 'field_general_remarks',
  );
  $handler->display->display_options['style_options']['cdata_wrapper'] = array(
    'title_field' => 'title_field',
    'field_original_title' => 'field_original_title',
    'field_violence_remarks' => 'field_violence_remarks',
    'field_purpose_of_data_collection' => 'field_purpose_of_data_collection',
    'field_other_purpose' => 'field_other_purpose',
    'field_raw_data_issues' => 'field_raw_data_issues',
    'field_raw_data_issues_info' => 'field_raw_data_issues_info',
    'field_survey_data' => 'field_survey_data',
    'field_indicator_usage' => 'field_indicator_usage',
    'field_indicator' => 'field_indicator',
    'field_indicator_other' => 'field_indicator_other',
    'field_remarks' => 'field_remarks',
    'field_organisation' => 'field_organisation',
    'field_organisation_type' => 'field_organisation_type',
    'field_other_sector' => 'field_other_sector',
    'field_geographical_area' => 'field_geographical_area',
    'field_geographical_area_remarks' => 'field_geographical_area_remarks',
    'field_latest_update' => 'field_latest_update',
    'field_website' => 'field_website',
    'field_victim_info' => 'field_victim_info',
    'field_victim_info_other' => 'field_victim_info_other',
    'field_victim_relationship' => 'field_victim_relationship',
    'field_victim_relation_type' => 'field_victim_relation_type',
    'field_victim_repetition' => 'field_victim_repetition',
    'field_victim_remarks' => 'field_victim_remarks',
    'field_perpetrator_info' => 'field_perpetrator_info',
    'field_perpetrator_info_other' => 'field_perpetrator_info_other',
    'field_perpetrator_relationship' => 'field_perpetrator_relationship',
    'field_perpetrator_rel_info' => 'field_perpetrator_rel_info',
    'field_perpetrator_reoffending' => 'field_perpetrator_reoffending',
    'field_perpetrator_remarks' => 'field_perpetrator_remarks',
    'field_witness_info' => 'field_witness_info',
    'field_witness_info_other' => 'field_witness_info_other',
    'field_witness_relationship' => 'field_witness_relationship',
    'field_witness_description' => 'field_witness_description',
    'field_witness_children' => 'field_witness_children',
    'field_witness_remarks' => 'field_witness_remarks',
    'field_incident' => 'field_incident',
    'field_incident_other' => 'field_incident_other',
    'field_incident_code_system' => 'field_incident_code_system',
    'field_incident_code_remarks' => 'field_incident_code_remarks',
    'field_incident_description' => 'field_incident_description',
    'field_incident_description_other' => 'field_incident_description_other',
    'field_incident_protection' => 'field_incident_protection',
    'field_incident_orders' => 'field_incident_orders',
    'field_incident_justice_data' => 'field_incident_justice_data',
    'field_incident_justice_info' => 'field_incident_justice_info',
    'field_incident_resources' => 'field_incident_resources',
    'field_incident_other_resources' => 'field_incident_other_resources',
    'field_incident_remarks' => 'field_incident_remarks',
    'field_prosecution_stages' => 'field_prosecution_stages',
    'field_prosec_stages_other' => 'field_prosec_stages_other',
    'field_prosecution_defendant' => 'field_prosecution_defendant',
    'field_prosec_defendant_other' => 'field_prosec_defendant_other',
    'field_prosecution_avg_time' => 'field_prosecution_avg_time',
    'field_prosecution_remarks' => 'field_prosecution_remarks',
    'field_criminal_statistics_data' => 'field_criminal_statistics_data',
    'field_criminal_data_info' => 'field_criminal_data_info',
    'field_outcomes_arrest_cases' => 'field_outcomes_arrest_cases',
    'field_outcomes_many_offenses' => 'field_outcomes_many_offenses',
    'field_outcomes_list_offenses' => 'field_outcomes_list_offenses',
    'field_outcomes_offenses_remarks' => 'field_outcomes_offenses_remarks',
    'field_outcomes_probation' => 'field_outcomes_probation',
    'field_outcomes_bail_remand' => 'field_outcomes_bail_remand',
    'field_outcomes_bail_remarks' => 'field_outcomes_bail_remarks',
    'field_outcomes_prisons' => 'field_outcomes_prisons',
    'field_outcomes_prisons_remarks' => 'field_outcomes_prisons_remarks',
    'field_outcomes_perp_other' => 'field_outcomes_perp_other',
    'field_outcomes_death' => 'field_outcomes_death',
    'field_outcomes_remarks' => 'field_outcomes_remarks',
    'field_chars_reference_period' => 'field_chars_reference_period',
    'field_chars_ref_period_info' => 'field_chars_ref_period_info',
    'field_chars_storage_system' => 'field_chars_storage_system',
    'field_chars_storage_other' => 'field_chars_storage_other',
    'field_chars_frequency' => 'field_chars_frequency',
    'field_chars_frequency_text' => 'field_chars_frequency_text',
    'field_chars_frequency_remarks' => 'field_chars_frequency_remarks',
    'field_chars_validation' => 'field_chars_validation',
    'field_chars_validation_info' => 'field_chars_validation_info',
    'field_chars_compilation' => 'field_chars_compilation',
    'field_chars_quality_exists' => 'field_chars_quality_exists',
    'field_chars_quality_info' => 'field_chars_quality_info',
    'field_chars_quality_assurance' => 'field_chars_quality_assurance',
    'field_chars_accuracy' => 'field_chars_accuracy',
    'field_chars_reliability' => 'field_chars_reliability',
    'field_chars_timeliness' => 'field_chars_timeliness',
    'field_chars_timeliness_info' => 'field_chars_timeliness_info',
    'field_chars_comparability' => 'field_chars_comparability',
    'field_chars_compare_remarks' => 'field_chars_compare_remarks',
    'field_chars_developments' => 'field_chars_developments',
    'field_chars_reported' => 'field_chars_reported',
    'field_chars_organisation' => 'field_chars_organisation',
    'field_chars_usage' => 'field_chars_usage',
    'field_chars_usage_info' => 'field_chars_usage_info',
    'field_chars_reporter' => 'field_chars_reporter',
    'field_chars_reporter_other' => 'field_chars_reporter_other',
    'field_chars_external_link' => 'field_chars_external_link',
    'field_chars_external_link_info' => 'field_chars_external_link_info',
    'field_chars_remarks' => 'field_chars_remarks',
    'field_general_remarks' => 'field_general_remarks',
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
  /* Field: Content: Original title */
  $handler->display->display_options['fields']['field_original_title']['id'] = 'field_original_title';
  $handler->display->display_options['fields']['field_original_title']['table'] = 'field_data_field_original_title';
  $handler->display->display_options['fields']['field_original_title']['field'] = 'field_original_title';
  $handler->display->display_options['fields']['field_original_title']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_original_title']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_original_title']['type'] = 'text_plain';
  /* Field: Content: Country */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_country']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_country']['type'] = 'country_default_i18n';
  /* Field: Content: Types of GBV */
  $handler->display->display_options['fields']['field_violence_types']['id'] = 'field_violence_types';
  $handler->display->display_options['fields']['field_violence_types']['table'] = 'field_data_field_violence_types';
  $handler->display->display_options['fields']['field_violence_types']['field'] = 'field_violence_types';
  $handler->display->display_options['fields']['field_violence_types']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_violence_types']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_violence_types']['type'] = 'ds_taxonomy_separator_localized';
  $handler->display->display_options['fields']['field_violence_types']['delta_offset'] = '0';
  /* Field: Content: Remarks */
  $handler->display->display_options['fields']['field_violence_remarks']['id'] = 'field_violence_remarks';
  $handler->display->display_options['fields']['field_violence_remarks']['table'] = 'field_data_field_violence_remarks';
  $handler->display->display_options['fields']['field_violence_remarks']['field'] = 'field_violence_remarks';
  $handler->display->display_options['fields']['field_violence_remarks']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_violence_remarks']['alter']['nl2br'] = TRUE;
  /* Field: Content: Purpose of data collection */
  $handler->display->display_options['fields']['field_purpose_of_data_collection']['id'] = 'field_purpose_of_data_collection';
  $handler->display->display_options['fields']['field_purpose_of_data_collection']['table'] = 'field_data_field_purpose_of_data_collection';
  $handler->display->display_options['fields']['field_purpose_of_data_collection']['field'] = 'field_purpose_of_data_collection';
  $handler->display->display_options['fields']['field_purpose_of_data_collection']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_purpose_of_data_collection']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_purpose_of_data_collection']['delta_offset'] = '0';
  /* Field: Content: Other purpose */
  $handler->display->display_options['fields']['field_other_purpose']['id'] = 'field_other_purpose';
  $handler->display->display_options['fields']['field_other_purpose']['table'] = 'field_data_field_other_purpose';
  $handler->display->display_options['fields']['field_other_purpose']['field'] = 'field_other_purpose';
  $handler->display->display_options['fields']['field_other_purpose']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_other_purpose']['alter']['nl2br'] = TRUE;
  /* Field: Content: Issues in terms of retrieving raw data */
  $handler->display->display_options['fields']['field_raw_data_issues']['id'] = 'field_raw_data_issues';
  $handler->display->display_options['fields']['field_raw_data_issues']['table'] = 'field_data_field_raw_data_issues';
  $handler->display->display_options['fields']['field_raw_data_issues']['field'] = 'field_raw_data_issues';
  $handler->display->display_options['fields']['field_raw_data_issues']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_raw_data_issues']['alter']['strip_tags'] = TRUE;
  /* Field: Content: Additional information */
  $handler->display->display_options['fields']['field_raw_data_issues_info']['id'] = 'field_raw_data_issues_info';
  $handler->display->display_options['fields']['field_raw_data_issues_info']['table'] = 'field_data_field_raw_data_issues_info';
  $handler->display->display_options['fields']['field_raw_data_issues_info']['field'] = 'field_raw_data_issues_info';
  $handler->display->display_options['fields']['field_raw_data_issues_info']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_raw_data_issues_info']['alter']['nl2br'] = TRUE;
  /* Field: Content: Draw also on survey data */
  $handler->display->display_options['fields']['field_survey_data']['id'] = 'field_survey_data';
  $handler->display->display_options['fields']['field_survey_data']['table'] = 'field_data_field_survey_data';
  $handler->display->display_options['fields']['field_survey_data']['field'] = 'field_survey_data';
  $handler->display->display_options['fields']['field_survey_data']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_survey_data']['alter']['strip_tags'] = TRUE;
  /* Field: Content: Used as indicator */
  $handler->display->display_options['fields']['field_indicator_usage']['id'] = 'field_indicator_usage';
  $handler->display->display_options['fields']['field_indicator_usage']['table'] = 'field_data_field_indicator_usage';
  $handler->display->display_options['fields']['field_indicator_usage']['field'] = 'field_indicator_usage';
  $handler->display->display_options['fields']['field_indicator_usage']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_indicator_usage']['alter']['strip_tags'] = TRUE;
  /* Field: Content: Indicator */
  $handler->display->display_options['fields']['field_indicator']['id'] = 'field_indicator';
  $handler->display->display_options['fields']['field_indicator']['table'] = 'field_data_field_indicator';
  $handler->display->display_options['fields']['field_indicator']['field'] = 'field_indicator';
  $handler->display->display_options['fields']['field_indicator']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_indicator']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_indicator']['delta_offset'] = '0';
  /* Field: Content: Other */
  $handler->display->display_options['fields']['field_indicator_other']['id'] = 'field_indicator_other';
  $handler->display->display_options['fields']['field_indicator_other']['table'] = 'field_data_field_indicator_other';
  $handler->display->display_options['fields']['field_indicator_other']['field'] = 'field_indicator_other';
  $handler->display->display_options['fields']['field_indicator_other']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_indicator_other']['alter']['nl2br'] = TRUE;
  /* Field: Content: Remarks */
  $handler->display->display_options['fields']['field_remarks']['id'] = 'field_remarks';
  $handler->display->display_options['fields']['field_remarks']['table'] = 'field_data_field_remarks';
  $handler->display->display_options['fields']['field_remarks']['field'] = 'field_remarks';
  $handler->display->display_options['fields']['field_remarks']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_remarks']['alter']['nl2br'] = TRUE;
  /* Field: Content: Organisation */
  $handler->display->display_options['fields']['field_organisation']['id'] = 'field_organisation';
  $handler->display->display_options['fields']['field_organisation']['table'] = 'field_data_field_organisation';
  $handler->display->display_options['fields']['field_organisation']['field'] = 'field_organisation';
  $handler->display->display_options['fields']['field_organisation']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_organisation']['alter']['strip_tags'] = TRUE;
  /* Field: Content: Type of organisation */
  $handler->display->display_options['fields']['field_organisation_type']['id'] = 'field_organisation_type';
  $handler->display->display_options['fields']['field_organisation_type']['table'] = 'field_data_field_organisation_type';
  $handler->display->display_options['fields']['field_organisation_type']['field'] = 'field_organisation_type';
  $handler->display->display_options['fields']['field_organisation_type']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_organisation_type']['alter']['strip_tags'] = TRUE;
  /* Field: Content: Sector */
  $handler->display->display_options['fields']['field_ad_sector']['id'] = 'field_ad_sector';
  $handler->display->display_options['fields']['field_ad_sector']['table'] = 'field_data_field_ad_sector';
  $handler->display->display_options['fields']['field_ad_sector']['field'] = 'field_ad_sector';
  $handler->display->display_options['fields']['field_ad_sector']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_ad_sector']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_ad_sector']['type'] = 'ds_taxonomy_separator_localized';
  $handler->display->display_options['fields']['field_ad_sector']['delta_offset'] = '0';
  /* Field: Content: Other sector */
  $handler->display->display_options['fields']['field_other_sector']['id'] = 'field_other_sector';
  $handler->display->display_options['fields']['field_other_sector']['table'] = 'field_data_field_other_sector';
  $handler->display->display_options['fields']['field_other_sector']['field'] = 'field_other_sector';
  $handler->display->display_options['fields']['field_other_sector']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_other_sector']['alter']['nl2br'] = TRUE;
  /* Field: Content: Geographical area */
  $handler->display->display_options['fields']['field_geographical_area']['id'] = 'field_geographical_area';
  $handler->display->display_options['fields']['field_geographical_area']['table'] = 'field_data_field_geographical_area';
  $handler->display->display_options['fields']['field_geographical_area']['field'] = 'field_geographical_area';
  $handler->display->display_options['fields']['field_geographical_area']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_geographical_area']['alter']['strip_tags'] = TRUE;
  /* Field: Content: Geographical area remarks */
  $handler->display->display_options['fields']['field_geographical_area_remarks']['id'] = 'field_geographical_area_remarks';
  $handler->display->display_options['fields']['field_geographical_area_remarks']['table'] = 'field_data_field_geographical_area_remarks';
  $handler->display->display_options['fields']['field_geographical_area_remarks']['field'] = 'field_geographical_area_remarks';
  $handler->display->display_options['fields']['field_geographical_area_remarks']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_geographical_area_remarks']['alter']['nl2br'] = TRUE;
  /* Field: Content: Latest update */
  $handler->display->display_options['fields']['field_latest_update']['id'] = 'field_latest_update';
  $handler->display->display_options['fields']['field_latest_update']['table'] = 'field_data_field_latest_update';
  $handler->display->display_options['fields']['field_latest_update']['field'] = 'field_latest_update';
  $handler->display->display_options['fields']['field_latest_update']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_latest_update']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_latest_update']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_website']['id'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['table'] = 'field_data_field_website';
  $handler->display->display_options['fields']['field_website']['field'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_website']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_website']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_website']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_website']['delta_offset'] = '0';
  /* Field: Content: Background information */
  $handler->display->display_options['fields']['field_victim_info']['id'] = 'field_victim_info';
  $handler->display->display_options['fields']['field_victim_info']['table'] = 'field_data_field_victim_info';
  $handler->display->display_options['fields']['field_victim_info']['field'] = 'field_victim_info';
  $handler->display->display_options['fields']['field_victim_info']['label'] = 'Victim background information';
  $handler->display->display_options['fields']['field_victim_info']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_victim_info']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_victim_info']['delta_offset'] = '0';
  /* Field: Content: Other */
  $handler->display->display_options['fields']['field_victim_info_other']['id'] = 'field_victim_info_other';
  $handler->display->display_options['fields']['field_victim_info_other']['table'] = 'field_data_field_victim_info_other';
  $handler->display->display_options['fields']['field_victim_info_other']['field'] = 'field_victim_info_other';
  $handler->display->display_options['fields']['field_victim_info_other']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_victim_info_other']['alter']['nl2br'] = TRUE;
  /* Field: Content: Relationship with perpetrator */
  $handler->display->display_options['fields']['field_victim_relationship']['id'] = 'field_victim_relationship';
  $handler->display->display_options['fields']['field_victim_relationship']['table'] = 'field_data_field_victim_relationship';
  $handler->display->display_options['fields']['field_victim_relationship']['field'] = 'field_victim_relationship';
  $handler->display->display_options['fields']['field_victim_relationship']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_victim_relationship']['alter']['strip_tags'] = TRUE;
  /* Field: Content: Type of relationship */
  $handler->display->display_options['fields']['field_victim_relation_type']['id'] = 'field_victim_relation_type';
  $handler->display->display_options['fields']['field_victim_relation_type']['table'] = 'field_data_field_victim_relation_type';
  $handler->display->display_options['fields']['field_victim_relation_type']['field'] = 'field_victim_relation_type';
  $handler->display->display_options['fields']['field_victim_relation_type']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_victim_relation_type']['alter']['nl2br'] = TRUE;
  /* Field: Content: Repeatedly suffering from GBV */
  $handler->display->display_options['fields']['field_victim_repetition']['id'] = 'field_victim_repetition';
  $handler->display->display_options['fields']['field_victim_repetition']['table'] = 'field_data_field_victim_repetition';
  $handler->display->display_options['fields']['field_victim_repetition']['field'] = 'field_victim_repetition';
  $handler->display->display_options['fields']['field_victim_repetition']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_victim_repetition']['alter']['strip_tags'] = TRUE;
  /* Field: Content: Remarks */
  $handler->display->display_options['fields']['field_victim_remarks']['id'] = 'field_victim_remarks';
  $handler->display->display_options['fields']['field_victim_remarks']['table'] = 'field_data_field_victim_remarks';
  $handler->display->display_options['fields']['field_victim_remarks']['field'] = 'field_victim_remarks';
  $handler->display->display_options['fields']['field_victim_remarks']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_victim_remarks']['alter']['nl2br'] = TRUE;
  /* Field: Content: Background information */
  $handler->display->display_options['fields']['field_perpetrator_info']['id'] = 'field_perpetrator_info';
  $handler->display->display_options['fields']['field_perpetrator_info']['table'] = 'field_data_field_perpetrator_info';
  $handler->display->display_options['fields']['field_perpetrator_info']['field'] = 'field_perpetrator_info';
  $handler->display->display_options['fields']['field_perpetrator_info']['label'] = 'Perpetrator background information';
  $handler->display->display_options['fields']['field_perpetrator_info']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_perpetrator_info']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_perpetrator_info']['delta_offset'] = '0';
  /* Field: Content: Other */
  $handler->display->display_options['fields']['field_perpetrator_info_other']['id'] = 'field_perpetrator_info_other';
  $handler->display->display_options['fields']['field_perpetrator_info_other']['table'] = 'field_data_field_perpetrator_info_other';
  $handler->display->display_options['fields']['field_perpetrator_info_other']['field'] = 'field_perpetrator_info_other';
  $handler->display->display_options['fields']['field_perpetrator_info_other']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_perpetrator_info_other']['alter']['nl2br'] = TRUE;
  /* Field: Content: Relationship with victim */
  $handler->display->display_options['fields']['field_perpetrator_relationship']['id'] = 'field_perpetrator_relationship';
  $handler->display->display_options['fields']['field_perpetrator_relationship']['table'] = 'field_data_field_perpetrator_relationship';
  $handler->display->display_options['fields']['field_perpetrator_relationship']['field'] = 'field_perpetrator_relationship';
  $handler->display->display_options['fields']['field_perpetrator_relationship']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_perpetrator_relationship']['alter']['strip_tags'] = TRUE;
  /* Field: Content: Additional information */
  $handler->display->display_options['fields']['field_perpetrator_rel_info']['id'] = 'field_perpetrator_rel_info';
  $handler->display->display_options['fields']['field_perpetrator_rel_info']['table'] = 'field_data_field_perpetrator_rel_info';
  $handler->display->display_options['fields']['field_perpetrator_rel_info']['field'] = 'field_perpetrator_rel_info';
  $handler->display->display_options['fields']['field_perpetrator_rel_info']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_perpetrator_rel_info']['alter']['nl2br'] = TRUE;
  /* Field: Content: Re-offending */
  $handler->display->display_options['fields']['field_perpetrator_reoffending']['id'] = 'field_perpetrator_reoffending';
  $handler->display->display_options['fields']['field_perpetrator_reoffending']['table'] = 'field_data_field_perpetrator_reoffending';
  $handler->display->display_options['fields']['field_perpetrator_reoffending']['field'] = 'field_perpetrator_reoffending';
  $handler->display->display_options['fields']['field_perpetrator_reoffending']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_perpetrator_reoffending']['alter']['strip_tags'] = TRUE;
  /* Field: Content: Remarks */
  $handler->display->display_options['fields']['field_perpetrator_remarks']['id'] = 'field_perpetrator_remarks';
  $handler->display->display_options['fields']['field_perpetrator_remarks']['table'] = 'field_data_field_perpetrator_remarks';
  $handler->display->display_options['fields']['field_perpetrator_remarks']['field'] = 'field_perpetrator_remarks';
  $handler->display->display_options['fields']['field_perpetrator_remarks']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_perpetrator_remarks']['alter']['nl2br'] = TRUE;
  /* Field: Content: Background information */
  $handler->display->display_options['fields']['field_witness_info']['id'] = 'field_witness_info';
  $handler->display->display_options['fields']['field_witness_info']['table'] = 'field_data_field_witness_info';
  $handler->display->display_options['fields']['field_witness_info']['field'] = 'field_witness_info';
  $handler->display->display_options['fields']['field_witness_info']['label'] = 'Witness background information';
  $handler->display->display_options['fields']['field_witness_info']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_witness_info']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_witness_info']['delta_offset'] = '0';
  /* Field: Content: Other */
  $handler->display->display_options['fields']['field_witness_info_other']['id'] = 'field_witness_info_other';
  $handler->display->display_options['fields']['field_witness_info_other']['table'] = 'field_data_field_witness_info_other';
  $handler->display->display_options['fields']['field_witness_info_other']['field'] = 'field_witness_info_other';
  $handler->display->display_options['fields']['field_witness_info_other']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_witness_info_other']['alter']['nl2br'] = TRUE;
  /* Field: Content: Relationship with victim/perpetrator */
  $handler->display->display_options['fields']['field_witness_relationship']['id'] = 'field_witness_relationship';
  $handler->display->display_options['fields']['field_witness_relationship']['table'] = 'field_data_field_witness_relationship';
  $handler->display->display_options['fields']['field_witness_relationship']['field'] = 'field_witness_relationship';
  $handler->display->display_options['fields']['field_witness_relationship']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_witness_relationship']['alter']['strip_tags'] = TRUE;
  /* Field: Content: Incident description by witness */
  $handler->display->display_options['fields']['field_witness_description']['id'] = 'field_witness_description';
  $handler->display->display_options['fields']['field_witness_description']['table'] = 'field_data_field_witness_description';
  $handler->display->display_options['fields']['field_witness_description']['field'] = 'field_witness_description';
  $handler->display->display_options['fields']['field_witness_description']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_witness_description']['alter']['strip_tags'] = TRUE;
  /* Field: Content: Children witnessing IPV incident */
  $handler->display->display_options['fields']['field_witness_children']['id'] = 'field_witness_children';
  $handler->display->display_options['fields']['field_witness_children']['table'] = 'field_data_field_witness_children';
  $handler->display->display_options['fields']['field_witness_children']['field'] = 'field_witness_children';
  $handler->display->display_options['fields']['field_witness_children']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_witness_children']['alter']['strip_tags'] = TRUE;
  /* Field: Content: Remarks */
  $handler->display->display_options['fields']['field_witness_remarks']['id'] = 'field_witness_remarks';
  $handler->display->display_options['fields']['field_witness_remarks']['table'] = 'field_data_field_witness_remarks';
  $handler->display->display_options['fields']['field_witness_remarks']['field'] = 'field_witness_remarks';
  $handler->display->display_options['fields']['field_witness_remarks']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_witness_remarks']['alter']['nl2br'] = TRUE;
  /* Field: Content: Incident */
  $handler->display->display_options['fields']['field_incident']['id'] = 'field_incident';
  $handler->display->display_options['fields']['field_incident']['table'] = 'field_data_field_incident';
  $handler->display->display_options['fields']['field_incident']['field'] = 'field_incident';
  $handler->display->display_options['fields']['field_incident']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_incident']['alter']['strip_tags'] = TRUE;
  /* Field: Content: Other content */
  $handler->display->display_options['fields']['field_incident_other']['id'] = 'field_incident_other';
  $handler->display->display_options['fields']['field_incident_other']['table'] = 'field_data_field_incident_other';
  $handler->display->display_options['fields']['field_incident_other']['field'] = 'field_incident_other';
  $handler->display->display_options['fields']['field_incident_other']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_incident_other']['alter']['nl2br'] = TRUE;
  /* Field: Content: Code system used */
  $handler->display->display_options['fields']['field_incident_code_system']['id'] = 'field_incident_code_system';
  $handler->display->display_options['fields']['field_incident_code_system']['table'] = 'field_data_field_incident_code_system';
  $handler->display->display_options['fields']['field_incident_code_system']['field'] = 'field_incident_code_system';
  $handler->display->display_options['fields']['field_incident_code_system']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_incident_code_system']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_incident_code_system']['delta_offset'] = '0';
  /* Field: Content: Remarks */
  $handler->display->display_options['fields']['field_incident_code_remarks']['id'] = 'field_incident_code_remarks';
  $handler->display->display_options['fields']['field_incident_code_remarks']['table'] = 'field_data_field_incident_code_remarks';
  $handler->display->display_options['fields']['field_incident_code_remarks']['field'] = 'field_incident_code_remarks';
  $handler->display->display_options['fields']['field_incident_code_remarks']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_incident_code_remarks']['alter']['nl2br'] = TRUE;
  /* Field: Content: Description of incident */
  $handler->display->display_options['fields']['field_incident_description']['id'] = 'field_incident_description';
  $handler->display->display_options['fields']['field_incident_description']['table'] = 'field_data_field_incident_description';
  $handler->display->display_options['fields']['field_incident_description']['field'] = 'field_incident_description';
  $handler->display->display_options['fields']['field_incident_description']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_incident_description']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_incident_description']['delta_offset'] = '0';
  /* Field: Content: Other */
  $handler->display->display_options['fields']['field_incident_description_other']['id'] = 'field_incident_description_other';
  $handler->display->display_options['fields']['field_incident_description_other']['table'] = 'field_data_field_incident_description_other';
  $handler->display->display_options['fields']['field_incident_description_other']['field'] = 'field_incident_description_other';
  $handler->display->display_options['fields']['field_incident_description_other']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_incident_description_other']['alter']['nl2br'] = TRUE;
  /* Field: Content: Protection order */
  $handler->display->display_options['fields']['field_incident_protection']['id'] = 'field_incident_protection';
  $handler->display->display_options['fields']['field_incident_protection']['table'] = 'field_data_field_incident_protection';
  $handler->display->display_options['fields']['field_incident_protection']['field'] = 'field_incident_protection';
  $handler->display->display_options['fields']['field_incident_protection']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_incident_protection']['alter']['strip_tags'] = TRUE;
  /* Field: Content: Protection orders */
  $handler->display->display_options['fields']['field_incident_orders']['id'] = 'field_incident_orders';
  $handler->display->display_options['fields']['field_incident_orders']['table'] = 'field_data_field_incident_orders';
  $handler->display->display_options['fields']['field_incident_orders']['field'] = 'field_incident_orders';
  $handler->display->display_options['fields']['field_incident_orders']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_incident_orders']['alter']['nl2br'] = TRUE;
  /* Field: Content: Civil justice data */
  $handler->display->display_options['fields']['field_incident_justice_data']['id'] = 'field_incident_justice_data';
  $handler->display->display_options['fields']['field_incident_justice_data']['table'] = 'field_data_field_incident_justice_data';
  $handler->display->display_options['fields']['field_incident_justice_data']['field'] = 'field_incident_justice_data';
  $handler->display->display_options['fields']['field_incident_justice_data']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_incident_justice_data']['alter']['strip_tags'] = TRUE;
  /* Field: Content: Additional information */
  $handler->display->display_options['fields']['field_incident_justice_info']['id'] = 'field_incident_justice_info';
  $handler->display->display_options['fields']['field_incident_justice_info']['table'] = 'field_data_field_incident_justice_info';
  $handler->display->display_options['fields']['field_incident_justice_info']['field'] = 'field_incident_justice_info';
  $handler->display->display_options['fields']['field_incident_justice_info']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_incident_justice_info']['alter']['nl2br'] = TRUE;
  /* Field: Content: Incident respond resources */
  $handler->display->display_options['fields']['field_incident_resources']['id'] = 'field_incident_resources';
  $handler->display->display_options['fields']['field_incident_resources']['table'] = 'field_data_field_incident_resources';
  $handler->display->display_options['fields']['field_incident_resources']['field'] = 'field_incident_resources';
  $handler->display->display_options['fields']['field_incident_resources']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_incident_resources']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_incident_resources']['delta_offset'] = '0';
  /* Field: Content: Other resources */
  $handler->display->display_options['fields']['field_incident_other_resources']['id'] = 'field_incident_other_resources';
  $handler->display->display_options['fields']['field_incident_other_resources']['table'] = 'field_data_field_incident_other_resources';
  $handler->display->display_options['fields']['field_incident_other_resources']['field'] = 'field_incident_other_resources';
  $handler->display->display_options['fields']['field_incident_other_resources']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_incident_other_resources']['alter']['nl2br'] = TRUE;
  /* Field: Content: Remarks */
  $handler->display->display_options['fields']['field_incident_remarks']['id'] = 'field_incident_remarks';
  $handler->display->display_options['fields']['field_incident_remarks']['table'] = 'field_data_field_incident_remarks';
  $handler->display->display_options['fields']['field_incident_remarks']['field'] = 'field_incident_remarks';
  $handler->display->display_options['fields']['field_incident_remarks']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_incident_remarks']['alter']['nl2br'] = TRUE;
  /* Field: Content: Stages of prosecution process */
  $handler->display->display_options['fields']['field_prosecution_stages']['id'] = 'field_prosecution_stages';
  $handler->display->display_options['fields']['field_prosecution_stages']['table'] = 'field_data_field_prosecution_stages';
  $handler->display->display_options['fields']['field_prosecution_stages']['field'] = 'field_prosecution_stages';
  $handler->display->display_options['fields']['field_prosecution_stages']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_prosecution_stages']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_prosecution_stages']['delta_offset'] = '0';
  /* Field: Content: Other */
  $handler->display->display_options['fields']['field_prosec_stages_other']['id'] = 'field_prosec_stages_other';
  $handler->display->display_options['fields']['field_prosec_stages_other']['table'] = 'field_data_field_prosec_stages_other';
  $handler->display->display_options['fields']['field_prosec_stages_other']['field'] = 'field_prosec_stages_other';
  $handler->display->display_options['fields']['field_prosec_stages_other']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_prosec_stages_other']['alter']['nl2br'] = TRUE;
  /* Field: Content: Defendant pleas/verdicts */
  $handler->display->display_options['fields']['field_prosecution_defendant']['id'] = 'field_prosecution_defendant';
  $handler->display->display_options['fields']['field_prosecution_defendant']['table'] = 'field_data_field_prosecution_defendant';
  $handler->display->display_options['fields']['field_prosecution_defendant']['field'] = 'field_prosecution_defendant';
  $handler->display->display_options['fields']['field_prosecution_defendant']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_prosecution_defendant']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_prosecution_defendant']['delta_offset'] = '0';
  /* Field: Content: Other */
  $handler->display->display_options['fields']['field_prosec_defendant_other']['id'] = 'field_prosec_defendant_other';
  $handler->display->display_options['fields']['field_prosec_defendant_other']['table'] = 'field_data_field_prosec_defendant_other';
  $handler->display->display_options['fields']['field_prosec_defendant_other']['field'] = 'field_prosec_defendant_other';
  $handler->display->display_options['fields']['field_prosec_defendant_other']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_prosec_defendant_other']['alter']['nl2br'] = TRUE;
  /* Field: Content: Average time case through criminal justice system */
  $handler->display->display_options['fields']['field_prosecution_avg_time']['id'] = 'field_prosecution_avg_time';
  $handler->display->display_options['fields']['field_prosecution_avg_time']['table'] = 'field_data_field_prosecution_avg_time';
  $handler->display->display_options['fields']['field_prosecution_avg_time']['field'] = 'field_prosecution_avg_time';
  $handler->display->display_options['fields']['field_prosecution_avg_time']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_prosecution_avg_time']['alter']['strip_tags'] = TRUE;
  /* Field: Content: Remarks */
  $handler->display->display_options['fields']['field_prosecution_remarks']['id'] = 'field_prosecution_remarks';
  $handler->display->display_options['fields']['field_prosecution_remarks']['table'] = 'field_data_field_prosecution_remarks';
  $handler->display->display_options['fields']['field_prosecution_remarks']['field'] = 'field_prosecution_remarks';
  $handler->display->display_options['fields']['field_prosecution_remarks']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_prosecution_remarks']['alter']['nl2br'] = TRUE;
  /* Field: Content: Criminal statistical data included */
  $handler->display->display_options['fields']['field_criminal_statistics_data']['id'] = 'field_criminal_statistics_data';
  $handler->display->display_options['fields']['field_criminal_statistics_data']['table'] = 'field_data_field_criminal_statistics_data';
  $handler->display->display_options['fields']['field_criminal_statistics_data']['field'] = 'field_criminal_statistics_data';
  $handler->display->display_options['fields']['field_criminal_statistics_data']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_criminal_statistics_data']['alter']['strip_tags'] = TRUE;
  /* Field: Content: Additional information */
  $handler->display->display_options['fields']['field_criminal_data_info']['id'] = 'field_criminal_data_info';
  $handler->display->display_options['fields']['field_criminal_data_info']['table'] = 'field_data_field_criminal_data_info';
  $handler->display->display_options['fields']['field_criminal_data_info']['field'] = 'field_criminal_data_info';
  $handler->display->display_options['fields']['field_criminal_data_info']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_criminal_data_info']['alter']['nl2br'] = TRUE;
  /* Field: Content: N. of cases resulting in arrest */
  $handler->display->display_options['fields']['field_outcomes_arrest_cases']['id'] = 'field_outcomes_arrest_cases';
  $handler->display->display_options['fields']['field_outcomes_arrest_cases']['table'] = 'field_data_field_outcomes_arrest_cases';
  $handler->display->display_options['fields']['field_outcomes_arrest_cases']['field'] = 'field_outcomes_arrest_cases';
  $handler->display->display_options['fields']['field_outcomes_arrest_cases']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_outcomes_arrest_cases']['alter']['strip_tags'] = TRUE;
  /* Field: Content:  Charged with more than one offense */
  $handler->display->display_options['fields']['field_outcomes_many_offenses']['id'] = 'field_outcomes_many_offenses';
  $handler->display->display_options['fields']['field_outcomes_many_offenses']['table'] = 'field_data_field_outcomes_many_offenses';
  $handler->display->display_options['fields']['field_outcomes_many_offenses']['field'] = 'field_outcomes_many_offenses';
  $handler->display->display_options['fields']['field_outcomes_many_offenses']['label'] = 'Charged with more than one offense';
  $handler->display->display_options['fields']['field_outcomes_many_offenses']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_outcomes_many_offenses']['alter']['strip_tags'] = TRUE;
  /* Field: Content: List of offenses */
  $handler->display->display_options['fields']['field_outcomes_list_offenses']['id'] = 'field_outcomes_list_offenses';
  $handler->display->display_options['fields']['field_outcomes_list_offenses']['table'] = 'field_data_field_outcomes_list_offenses';
  $handler->display->display_options['fields']['field_outcomes_list_offenses']['field'] = 'field_outcomes_list_offenses';
  $handler->display->display_options['fields']['field_outcomes_list_offenses']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_outcomes_list_offenses']['alter']['strip_tags'] = TRUE;
  /* Field: Content: Remarks */
  $handler->display->display_options['fields']['field_outcomes_offenses_remarks']['id'] = 'field_outcomes_offenses_remarks';
  $handler->display->display_options['fields']['field_outcomes_offenses_remarks']['table'] = 'field_data_field_outcomes_offenses_remarks';
  $handler->display->display_options['fields']['field_outcomes_offenses_remarks']['field'] = 'field_outcomes_offenses_remarks';
  $handler->display->display_options['fields']['field_outcomes_offenses_remarks']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_outcomes_offenses_remarks']['alter']['nl2br'] = TRUE;
  /* Field: Content: Probation */
  $handler->display->display_options['fields']['field_outcomes_probation']['id'] = 'field_outcomes_probation';
  $handler->display->display_options['fields']['field_outcomes_probation']['table'] = 'field_data_field_outcomes_probation';
  $handler->display->display_options['fields']['field_outcomes_probation']['field'] = 'field_outcomes_probation';
  $handler->display->display_options['fields']['field_outcomes_probation']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_outcomes_probation']['alter']['strip_tags'] = TRUE;
  /* Field: Content: Bail/remand */
  $handler->display->display_options['fields']['field_outcomes_bail_remand']['id'] = 'field_outcomes_bail_remand';
  $handler->display->display_options['fields']['field_outcomes_bail_remand']['table'] = 'field_data_field_outcomes_bail_remand';
  $handler->display->display_options['fields']['field_outcomes_bail_remand']['field'] = 'field_outcomes_bail_remand';
  $handler->display->display_options['fields']['field_outcomes_bail_remand']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_outcomes_bail_remand']['alter']['strip_tags'] = TRUE;
  /* Field: Content: Remarks */
  $handler->display->display_options['fields']['field_outcomes_bail_remarks']['id'] = 'field_outcomes_bail_remarks';
  $handler->display->display_options['fields']['field_outcomes_bail_remarks']['table'] = 'field_data_field_outcomes_bail_remarks';
  $handler->display->display_options['fields']['field_outcomes_bail_remarks']['field'] = 'field_outcomes_bail_remarks';
  $handler->display->display_options['fields']['field_outcomes_bail_remarks']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_outcomes_bail_remarks']['alter']['nl2br'] = TRUE;
  /* Field: Content: Prisons */
  $handler->display->display_options['fields']['field_outcomes_prisons']['id'] = 'field_outcomes_prisons';
  $handler->display->display_options['fields']['field_outcomes_prisons']['table'] = 'field_data_field_outcomes_prisons';
  $handler->display->display_options['fields']['field_outcomes_prisons']['field'] = 'field_outcomes_prisons';
  $handler->display->display_options['fields']['field_outcomes_prisons']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_outcomes_prisons']['alter']['strip_tags'] = TRUE;
  /* Field: Content: Remarks */
  $handler->display->display_options['fields']['field_outcomes_prisons_remarks']['id'] = 'field_outcomes_prisons_remarks';
  $handler->display->display_options['fields']['field_outcomes_prisons_remarks']['table'] = 'field_data_field_outcomes_prisons_remarks';
  $handler->display->display_options['fields']['field_outcomes_prisons_remarks']['field'] = 'field_outcomes_prisons_remarks';
  $handler->display->display_options['fields']['field_outcomes_prisons_remarks']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_outcomes_prisons_remarks']['alter']['nl2br'] = TRUE;
  /* Field: Content: Other */
  $handler->display->display_options['fields']['field_outcomes_perp_other']['id'] = 'field_outcomes_perp_other';
  $handler->display->display_options['fields']['field_outcomes_perp_other']['table'] = 'field_data_field_outcomes_perp_other';
  $handler->display->display_options['fields']['field_outcomes_perp_other']['field'] = 'field_outcomes_perp_other';
  $handler->display->display_options['fields']['field_outcomes_perp_other']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_outcomes_perp_other']['alter']['nl2br'] = TRUE;
  /* Field: Content: Death as result of incident */
  $handler->display->display_options['fields']['field_outcomes_death']['id'] = 'field_outcomes_death';
  $handler->display->display_options['fields']['field_outcomes_death']['table'] = 'field_data_field_outcomes_death';
  $handler->display->display_options['fields']['field_outcomes_death']['field'] = 'field_outcomes_death';
  $handler->display->display_options['fields']['field_outcomes_death']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_outcomes_death']['alter']['strip_tags'] = TRUE;
  /* Field: Content: Remarks */
  $handler->display->display_options['fields']['field_outcomes_remarks']['id'] = 'field_outcomes_remarks';
  $handler->display->display_options['fields']['field_outcomes_remarks']['table'] = 'field_data_field_outcomes_remarks';
  $handler->display->display_options['fields']['field_outcomes_remarks']['field'] = 'field_outcomes_remarks';
  $handler->display->display_options['fields']['field_outcomes_remarks']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_outcomes_remarks']['alter']['nl2br'] = TRUE;
  /* Field: Content: Reference period */
  $handler->display->display_options['fields']['field_chars_reference_period']['id'] = 'field_chars_reference_period';
  $handler->display->display_options['fields']['field_chars_reference_period']['table'] = 'field_data_field_chars_reference_period';
  $handler->display->display_options['fields']['field_chars_reference_period']['field'] = 'field_chars_reference_period';
  $handler->display->display_options['fields']['field_chars_reference_period']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_chars_reference_period']['alter']['strip_tags'] = TRUE;
  /* Field: Content: Additional information */
  $handler->display->display_options['fields']['field_chars_ref_period_info']['id'] = 'field_chars_ref_period_info';
  $handler->display->display_options['fields']['field_chars_ref_period_info']['table'] = 'field_data_field_chars_ref_period_info';
  $handler->display->display_options['fields']['field_chars_ref_period_info']['field'] = 'field_chars_ref_period_info';
  $handler->display->display_options['fields']['field_chars_ref_period_info']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_chars_ref_period_info']['alter']['nl2br'] = TRUE;
  /* Field: Content: Storage System */
  $handler->display->display_options['fields']['field_chars_storage_system']['id'] = 'field_chars_storage_system';
  $handler->display->display_options['fields']['field_chars_storage_system']['table'] = 'field_data_field_chars_storage_system';
  $handler->display->display_options['fields']['field_chars_storage_system']['field'] = 'field_chars_storage_system';
  $handler->display->display_options['fields']['field_chars_storage_system']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_chars_storage_system']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_chars_storage_system']['delta_offset'] = '0';
  /* Field: Content: Other */
  $handler->display->display_options['fields']['field_chars_storage_other']['id'] = 'field_chars_storage_other';
  $handler->display->display_options['fields']['field_chars_storage_other']['table'] = 'field_data_field_chars_storage_other';
  $handler->display->display_options['fields']['field_chars_storage_other']['field'] = 'field_chars_storage_other';
  $handler->display->display_options['fields']['field_chars_storage_other']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_chars_storage_other']['alter']['nl2br'] = TRUE;
  /* Field: Content: Frequency of updating */
  $handler->display->display_options['fields']['field_chars_frequency']['id'] = 'field_chars_frequency';
  $handler->display->display_options['fields']['field_chars_frequency']['table'] = 'field_data_field_chars_frequency';
  $handler->display->display_options['fields']['field_chars_frequency']['field'] = 'field_chars_frequency';
  $handler->display->display_options['fields']['field_chars_frequency']['label'] = 'Frequency';
  $handler->display->display_options['fields']['field_chars_frequency']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_chars_frequency']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_chars_frequency']['delta_offset'] = '0';
  /* Field: Content: Frequency of updating */
  $handler->display->display_options['fields']['field_chars_frequency_text']['id'] = 'field_chars_frequency_text';
  $handler->display->display_options['fields']['field_chars_frequency_text']['table'] = 'field_data_field_chars_frequency_text';
  $handler->display->display_options['fields']['field_chars_frequency_text']['field'] = 'field_chars_frequency_text';
  $handler->display->display_options['fields']['field_chars_frequency_text']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_chars_frequency_text']['alter']['strip_tags'] = TRUE;
  /* Field: Content: Additional information */
  $handler->display->display_options['fields']['field_chars_frequency_remarks']['id'] = 'field_chars_frequency_remarks';
  $handler->display->display_options['fields']['field_chars_frequency_remarks']['table'] = 'field_data_field_chars_frequency_remarks';
  $handler->display->display_options['fields']['field_chars_frequency_remarks']['field'] = 'field_chars_frequency_remarks';
  $handler->display->display_options['fields']['field_chars_frequency_remarks']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_chars_frequency_remarks']['alter']['nl2br'] = TRUE;
  /* Field: Content: Validation */
  $handler->display->display_options['fields']['field_chars_validation']['id'] = 'field_chars_validation';
  $handler->display->display_options['fields']['field_chars_validation']['table'] = 'field_data_field_chars_validation';
  $handler->display->display_options['fields']['field_chars_validation']['field'] = 'field_chars_validation';
  $handler->display->display_options['fields']['field_chars_validation']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_chars_validation']['alter']['strip_tags'] = TRUE;
  /* Field: Content: Additional information */
  $handler->display->display_options['fields']['field_chars_validation_info']['id'] = 'field_chars_validation_info';
  $handler->display->display_options['fields']['field_chars_validation_info']['table'] = 'field_data_field_chars_validation_info';
  $handler->display->display_options['fields']['field_chars_validation_info']['field'] = 'field_chars_validation_info';
  $handler->display->display_options['fields']['field_chars_validation_info']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_chars_validation_info']['alter']['nl2br'] = TRUE;
  /* Field: Content: Compilation */
  $handler->display->display_options['fields']['field_chars_compilation']['id'] = 'field_chars_compilation';
  $handler->display->display_options['fields']['field_chars_compilation']['table'] = 'field_data_field_chars_compilation';
  $handler->display->display_options['fields']['field_chars_compilation']['field'] = 'field_chars_compilation';
  $handler->display->display_options['fields']['field_chars_compilation']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_chars_compilation']['alter']['nl2br'] = TRUE;
  /* Field: Content: Quality assurance process */
  $handler->display->display_options['fields']['field_chars_quality_exists']['id'] = 'field_chars_quality_exists';
  $handler->display->display_options['fields']['field_chars_quality_exists']['table'] = 'field_data_field_chars_quality_exists';
  $handler->display->display_options['fields']['field_chars_quality_exists']['field'] = 'field_chars_quality_exists';
  $handler->display->display_options['fields']['field_chars_quality_exists']['label'] = 'Quality assurance';
  $handler->display->display_options['fields']['field_chars_quality_exists']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_chars_quality_exists']['alter']['strip_tags'] = TRUE;
  /* Field: Content: Brief description */
  $handler->display->display_options['fields']['field_chars_quality_info']['id'] = 'field_chars_quality_info';
  $handler->display->display_options['fields']['field_chars_quality_info']['table'] = 'field_data_field_chars_quality_info';
  $handler->display->display_options['fields']['field_chars_quality_info']['field'] = 'field_chars_quality_info';
  $handler->display->display_options['fields']['field_chars_quality_info']['label'] = 'Quality assurance brief description';
  $handler->display->display_options['fields']['field_chars_quality_info']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_chars_quality_info']['alter']['nl2br'] = TRUE;
  /* Field: Content: Quality assurance process */
  $handler->display->display_options['fields']['field_chars_quality_assurance']['id'] = 'field_chars_quality_assurance';
  $handler->display->display_options['fields']['field_chars_quality_assurance']['table'] = 'field_data_field_chars_quality_assurance';
  $handler->display->display_options['fields']['field_chars_quality_assurance']['field'] = 'field_chars_quality_assurance';
  $handler->display->display_options['fields']['field_chars_quality_assurance']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_chars_quality_assurance']['alter']['nl2br'] = TRUE;
  /* Field: Content: Accuracy */
  $handler->display->display_options['fields']['field_chars_accuracy']['id'] = 'field_chars_accuracy';
  $handler->display->display_options['fields']['field_chars_accuracy']['table'] = 'field_data_field_chars_accuracy';
  $handler->display->display_options['fields']['field_chars_accuracy']['field'] = 'field_chars_accuracy';
  $handler->display->display_options['fields']['field_chars_accuracy']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_chars_accuracy']['alter']['nl2br'] = TRUE;
  /* Field: Content: Reliability */
  $handler->display->display_options['fields']['field_chars_reliability']['id'] = 'field_chars_reliability';
  $handler->display->display_options['fields']['field_chars_reliability']['table'] = 'field_data_field_chars_reliability';
  $handler->display->display_options['fields']['field_chars_reliability']['field'] = 'field_chars_reliability';
  $handler->display->display_options['fields']['field_chars_reliability']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_chars_reliability']['alter']['nl2br'] = TRUE;
  /* Field: Content: Timeliness */
  $handler->display->display_options['fields']['field_chars_timeliness']['id'] = 'field_chars_timeliness';
  $handler->display->display_options['fields']['field_chars_timeliness']['table'] = 'field_data_field_chars_timeliness';
  $handler->display->display_options['fields']['field_chars_timeliness']['field'] = 'field_chars_timeliness';
  $handler->display->display_options['fields']['field_chars_timeliness']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_chars_timeliness']['alter']['nl2br'] = TRUE;
  /* Field: Content: Additional information */
  $handler->display->display_options['fields']['field_chars_timeliness_info']['id'] = 'field_chars_timeliness_info';
  $handler->display->display_options['fields']['field_chars_timeliness_info']['table'] = 'field_data_field_chars_timeliness_info';
  $handler->display->display_options['fields']['field_chars_timeliness_info']['field'] = 'field_chars_timeliness_info';
  $handler->display->display_options['fields']['field_chars_timeliness_info']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_chars_timeliness_info']['alter']['nl2br'] = TRUE;
  /* Field: Content: Comparability */
  $handler->display->display_options['fields']['field_chars_comparability']['id'] = 'field_chars_comparability';
  $handler->display->display_options['fields']['field_chars_comparability']['table'] = 'field_data_field_chars_comparability';
  $handler->display->display_options['fields']['field_chars_comparability']['field'] = 'field_chars_comparability';
  $handler->display->display_options['fields']['field_chars_comparability']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_chars_comparability']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_chars_comparability']['delta_offset'] = '0';
  /* Field: Content: Other remarks */
  $handler->display->display_options['fields']['field_chars_compare_remarks']['id'] = 'field_chars_compare_remarks';
  $handler->display->display_options['fields']['field_chars_compare_remarks']['table'] = 'field_data_field_chars_compare_remarks';
  $handler->display->display_options['fields']['field_chars_compare_remarks']['field'] = 'field_chars_compare_remarks';
  $handler->display->display_options['fields']['field_chars_compare_remarks']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_chars_compare_remarks']['alter']['nl2br'] = TRUE;
  /* Field: Content: Current developments */
  $handler->display->display_options['fields']['field_chars_developments']['id'] = 'field_chars_developments';
  $handler->display->display_options['fields']['field_chars_developments']['table'] = 'field_data_field_chars_developments';
  $handler->display->display_options['fields']['field_chars_developments']['field'] = 'field_chars_developments';
  $handler->display->display_options['fields']['field_chars_developments']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_chars_developments']['alter']['nl2br'] = TRUE;
  /* Field: Content: Reported to third parties */
  $handler->display->display_options['fields']['field_chars_reported']['id'] = 'field_chars_reported';
  $handler->display->display_options['fields']['field_chars_reported']['table'] = 'field_data_field_chars_reported';
  $handler->display->display_options['fields']['field_chars_reported']['field'] = 'field_chars_reported';
  $handler->display->display_options['fields']['field_chars_reported']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_chars_reported']['alter']['strip_tags'] = TRUE;
  /* Field: Content: Name of organisation */
  $handler->display->display_options['fields']['field_chars_organisation']['id'] = 'field_chars_organisation';
  $handler->display->display_options['fields']['field_chars_organisation']['table'] = 'field_data_field_chars_organisation';
  $handler->display->display_options['fields']['field_chars_organisation']['field'] = 'field_chars_organisation';
  $handler->display->display_options['fields']['field_chars_organisation']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_chars_organisation']['alter']['strip_tags'] = TRUE;
  /* Field: Content: Used by third parties */
  $handler->display->display_options['fields']['field_chars_usage']['id'] = 'field_chars_usage';
  $handler->display->display_options['fields']['field_chars_usage']['table'] = 'field_data_field_chars_usage';
  $handler->display->display_options['fields']['field_chars_usage']['field'] = 'field_chars_usage';
  $handler->display->display_options['fields']['field_chars_usage']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_chars_usage']['alter']['strip_tags'] = TRUE;
  /* Field: Content: Additional information */
  $handler->display->display_options['fields']['field_chars_usage_info']['id'] = 'field_chars_usage_info';
  $handler->display->display_options['fields']['field_chars_usage_info']['table'] = 'field_data_field_chars_usage_info';
  $handler->display->display_options['fields']['field_chars_usage_info']['field'] = 'field_chars_usage_info';
  $handler->display->display_options['fields']['field_chars_usage_info']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_chars_usage_info']['alter']['nl2br'] = TRUE;
  /* Field: Content: Reporter */
  $handler->display->display_options['fields']['field_chars_reporter']['id'] = 'field_chars_reporter';
  $handler->display->display_options['fields']['field_chars_reporter']['table'] = 'field_data_field_chars_reporter';
  $handler->display->display_options['fields']['field_chars_reporter']['field'] = 'field_chars_reporter';
  $handler->display->display_options['fields']['field_chars_reporter']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_chars_reporter']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_chars_reporter']['delta_offset'] = '0';
  /* Field: Content: Other */
  $handler->display->display_options['fields']['field_chars_reporter_other']['id'] = 'field_chars_reporter_other';
  $handler->display->display_options['fields']['field_chars_reporter_other']['table'] = 'field_data_field_chars_reporter_other';
  $handler->display->display_options['fields']['field_chars_reporter_other']['field'] = 'field_chars_reporter_other';
  $handler->display->display_options['fields']['field_chars_reporter_other']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_chars_reporter_other']['alter']['nl2br'] = TRUE;
  /* Field: Content: External link */
  $handler->display->display_options['fields']['field_chars_external_link']['id'] = 'field_chars_external_link';
  $handler->display->display_options['fields']['field_chars_external_link']['table'] = 'field_data_field_chars_external_link';
  $handler->display->display_options['fields']['field_chars_external_link']['field'] = 'field_chars_external_link';
  $handler->display->display_options['fields']['field_chars_external_link']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_chars_external_link']['alter']['strip_tags'] = TRUE;
  /* Field: Content: Links */
  $handler->display->display_options['fields']['field_chars_external_link_info']['id'] = 'field_chars_external_link_info';
  $handler->display->display_options['fields']['field_chars_external_link_info']['table'] = 'field_data_field_chars_external_link_info';
  $handler->display->display_options['fields']['field_chars_external_link_info']['field'] = 'field_chars_external_link_info';
  $handler->display->display_options['fields']['field_chars_external_link_info']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_chars_external_link_info']['alter']['nl2br'] = TRUE;
  /* Field: Content: Remarks */
  $handler->display->display_options['fields']['field_chars_remarks']['id'] = 'field_chars_remarks';
  $handler->display->display_options['fields']['field_chars_remarks']['table'] = 'field_data_field_chars_remarks';
  $handler->display->display_options['fields']['field_chars_remarks']['field'] = 'field_chars_remarks';
  $handler->display->display_options['fields']['field_chars_remarks']['label'] = 'Remarks on characteristics';
  $handler->display->display_options['fields']['field_chars_remarks']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_chars_remarks']['alter']['nl2br'] = TRUE;
  /* Field: Content: Remarks */
  $handler->display->display_options['fields']['field_general_remarks']['id'] = 'field_general_remarks';
  $handler->display->display_options['fields']['field_general_remarks']['table'] = 'field_data_field_general_remarks';
  $handler->display->display_options['fields']['field_general_remarks']['field'] = 'field_general_remarks';
  $handler->display->display_options['fields']['field_general_remarks']['label'] = 'General remarks';
  $handler->display->display_options['fields']['field_general_remarks']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_general_remarks']['alter']['nl2br'] = TRUE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title (title_field) */
  $handler->display->display_options['sorts']['title_field_value']['id'] = 'title_field_value';
  $handler->display->display_options['sorts']['title_field_value']['table'] = 'field_data_title_field';
  $handler->display->display_options['sorts']['title_field_value']['field'] = 'title_field_value';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
    3 => 'OR',
    4 => 'OR',
    6 => 'OR',
    5 => 'OR',
    7 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'administrative_data_source' => 'administrative_data_source',
    'statistical_product' => 'statistical_product',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['type']['group_info']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['group_info']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['type']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
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
  $handler->display->display_options['filters']['field_violence_types_tid_i18n']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_violence_types_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_violence_types_tid_i18n']['vocabulary'] = 'gender_based_violence_types';
  /* Filter criterion: Content: Sector (field_ad_sector) (translated) */
  $handler->display->display_options['filters']['field_ad_sector_tid_i18n']['id'] = 'field_ad_sector_tid_i18n';
  $handler->display->display_options['filters']['field_ad_sector_tid_i18n']['table'] = 'field_data_field_ad_sector';
  $handler->display->display_options['filters']['field_ad_sector_tid_i18n']['field'] = 'field_ad_sector_tid_i18n';
  $handler->display->display_options['filters']['field_ad_sector_tid_i18n']['group'] = 1;
  $handler->display->display_options['filters']['field_ad_sector_tid_i18n']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ad_sector_tid_i18n']['expose']['operator_id'] = 'field_ad_sector_tid_i18n_op';
  $handler->display->display_options['filters']['field_ad_sector_tid_i18n']['expose']['label'] = 'Sector';
  $handler->display->display_options['filters']['field_ad_sector_tid_i18n']['expose']['operator'] = 'field_ad_sector_tid_i18n_op';
  $handler->display->display_options['filters']['field_ad_sector_tid_i18n']['expose']['identifier'] = 'st';
  $handler->display->display_options['filters']['field_ad_sector_tid_i18n']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_ad_sector_tid_i18n']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_ad_sector_tid_i18n']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_ad_sector_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_ad_sector_tid_i18n']['vocabulary'] = 'administrative_data_sectors';
  /* Filter criterion: Data available on victim */
  $handler->display->display_options['filters']['populate']['id'] = 'populate';
  $handler->display->display_options['filters']['populate']['table'] = 'views_filters_populate_conditionally';
  $handler->display->display_options['filters']['populate']['field'] = 'populate';
  $handler->display->display_options['filters']['populate']['ui_name'] = 'Data available on victim';
  $handler->display->display_options['filters']['populate']['value'] = '0';
  $handler->display->display_options['filters']['populate']['group'] = 1;
  $handler->display->display_options['filters']['populate']['exposed'] = TRUE;
  $handler->display->display_options['filters']['populate']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['populate']['expose']['label'] = 'Data available on victim';
  $handler->display->display_options['filters']['populate']['expose']['operator'] = 'populate_op';
  $handler->display->display_options['filters']['populate']['expose']['identifier'] = 'dv';
  $handler->display->display_options['filters']['populate']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['populate']['filters'] = array(
    'field_victim_info_value' => 'field_victim_info_value',
    'field_victim_info_other_value' => 'field_victim_info_other_value',
    'field_victim_relationship_value' => 'field_victim_relationship_value',
    'field_victim_repetition_value' => 'field_victim_repetition_value',
    'name_list' => 0,
    'status' => 0,
    'type' => 0,
    'field_violence_types_tid_i18n' => 0,
    'field_ad_sector_tid_i18n' => 0,
    'title' => 0,
  );
  /* Filter criterion: Data available on perpetrator */
  $handler->display->display_options['filters']['populate_1']['id'] = 'populate_1';
  $handler->display->display_options['filters']['populate_1']['table'] = 'views_filters_populate_conditionally';
  $handler->display->display_options['filters']['populate_1']['field'] = 'populate';
  $handler->display->display_options['filters']['populate_1']['ui_name'] = 'Data available on perpetrator';
  $handler->display->display_options['filters']['populate_1']['group'] = 1;
  $handler->display->display_options['filters']['populate_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['populate_1']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['populate_1']['expose']['label'] = 'Data available on perpetrator';
  $handler->display->display_options['filters']['populate_1']['expose']['operator'] = 'populate_1_op';
  $handler->display->display_options['filters']['populate_1']['expose']['identifier'] = 'dp';
  $handler->display->display_options['filters']['populate_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['populate_1']['filters'] = array(
    'field_perpetrator_info_value' => 'field_perpetrator_info_value',
    'field_perpetrator_info_other_value' => 'field_perpetrator_info_other_value',
    'field_perpetrator_reoffending_value' => 'field_perpetrator_reoffending_value',
    'field_perpetrator_relationship_value' => 'field_perpetrator_relationship_value',
    'name_list' => 0,
    'status' => 0,
    'type' => 0,
    'field_violence_types_tid_i18n' => 0,
    'field_ad_sector_tid_i18n' => 0,
    'title' => 0,
    'populate' => 0,
    'field_victim_info_value' => 0,
    'field_victim_info_other_value' => 0,
    'field_victim_relationship_value' => 0,
    'field_victim_repetition_value' => 0,
  );
  /* Filter criterion: Data available on witness */
  $handler->display->display_options['filters']['populate_2']['id'] = 'populate_2';
  $handler->display->display_options['filters']['populate_2']['table'] = 'views_filters_populate_conditionally';
  $handler->display->display_options['filters']['populate_2']['field'] = 'populate';
  $handler->display->display_options['filters']['populate_2']['ui_name'] = 'Data available on witness';
  $handler->display->display_options['filters']['populate_2']['group'] = 1;
  $handler->display->display_options['filters']['populate_2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['populate_2']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['populate_2']['expose']['label'] = 'Data available on witness';
  $handler->display->display_options['filters']['populate_2']['expose']['operator'] = 'populate_2_op';
  $handler->display->display_options['filters']['populate_2']['expose']['identifier'] = 'dw';
  $handler->display->display_options['filters']['populate_2']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['populate_2']['filters'] = array(
    'field_witness_info_value' => 'field_witness_info_value',
    'field_witness_info_other_value' => 'field_witness_info_other_value',
    'field_witness_relationship_value' => 'field_witness_relationship_value',
    'field_witness_description_value' => 'field_witness_description_value',
    'field_witness_children_value' => 'field_witness_children_value',
    'name_list' => 0,
    'status' => 0,
    'type' => 0,
    'field_violence_types_tid_i18n' => 0,
    'field_ad_sector_tid_i18n' => 0,
    'title' => 0,
    'populate' => 0,
    'populate_1' => 0,
    'field_victim_info_value' => 0,
    'field_victim_info_other_value' => 0,
    'field_victim_relationship_value' => 0,
    'field_victim_repetition_value' => 0,
    'field_perpetrator_info_value' => 0,
    'field_perpetrator_info_other_value' => 0,
    'field_perpetrator_relationship_value' => 0,
    'field_perpetrator_reoffending_value' => 0,
  );
  /* Filter criterion: Data available on incident */
  $handler->display->display_options['filters']['populate_3']['id'] = 'populate_3';
  $handler->display->display_options['filters']['populate_3']['table'] = 'views_filters_populate_conditionally';
  $handler->display->display_options['filters']['populate_3']['field'] = 'populate';
  $handler->display->display_options['filters']['populate_3']['ui_name'] = 'Data available on incident';
  $handler->display->display_options['filters']['populate_3']['group'] = 1;
  $handler->display->display_options['filters']['populate_3']['exposed'] = TRUE;
  $handler->display->display_options['filters']['populate_3']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['populate_3']['expose']['label'] = 'Data available on incident';
  $handler->display->display_options['filters']['populate_3']['expose']['operator'] = 'populate_3_op';
  $handler->display->display_options['filters']['populate_3']['expose']['identifier'] = 'di';
  $handler->display->display_options['filters']['populate_3']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['populate_3']['filters'] = array(
    'field_incident_value' => 'field_incident_value',
    'field_incident_other_value' => 'field_incident_other_value',
    'field_incident_code_system_value' => 'field_incident_code_system_value',
    'field_incident_description_value' => 'field_incident_description_value',
    'field_incident_description_other_value' => 'field_incident_description_other_value',
    'field_incident_protection_value' => 'field_incident_protection_value',
    'field_incident_justice_data_value' => 'field_incident_justice_data_value',
    'field_incident_resources_value' => 'field_incident_resources_value',
    'field_incident_other_resources_value' => 'field_incident_other_resources_value',
    'name_list' => 0,
    'status' => 0,
    'type' => 0,
    'field_violence_types_tid_i18n' => 0,
    'field_ad_sector_tid_i18n' => 0,
    'title' => 0,
    'populate' => 0,
    'populate_1' => 0,
    'populate_2' => 0,
    'field_victim_info_value' => 0,
    'field_victim_info_other_value' => 0,
    'field_victim_relationship_value' => 0,
    'field_victim_repetition_value' => 0,
    'field_perpetrator_info_value' => 0,
    'field_perpetrator_info_other_value' => 0,
    'field_perpetrator_relationship_value' => 0,
    'field_perpetrator_reoffending_value' => 0,
    'field_witness_info_value' => 0,
    'field_witness_info_other_value' => 0,
    'field_witness_relationship_value' => 0,
    'field_witness_description_value' => 0,
    'field_witness_children_value' => 0,
  );
  /* Filter criterion: Data available on prosecution process */
  $handler->display->display_options['filters']['populate_4']['id'] = 'populate_4';
  $handler->display->display_options['filters']['populate_4']['table'] = 'views_filters_populate_conditionally';
  $handler->display->display_options['filters']['populate_4']['field'] = 'populate';
  $handler->display->display_options['filters']['populate_4']['ui_name'] = 'Data available on prosecution process';
  $handler->display->display_options['filters']['populate_4']['group'] = 1;
  $handler->display->display_options['filters']['populate_4']['exposed'] = TRUE;
  $handler->display->display_options['filters']['populate_4']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['populate_4']['expose']['label'] = 'Data available on prosecution process';
  $handler->display->display_options['filters']['populate_4']['expose']['operator'] = 'populate_4_op';
  $handler->display->display_options['filters']['populate_4']['expose']['identifier'] = 'dpp';
  $handler->display->display_options['filters']['populate_4']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['populate_4']['filters'] = array(
    'field_prosecution_stages_value' => 'field_prosecution_stages_value',
    'field_prosec_stages_other_value' => 'field_prosec_stages_other_value',
    'field_prosecution_defendant_value' => 'field_prosecution_defendant_value',
    'field_prosec_defendant_other_value' => 'field_prosec_defendant_other_value',
    'field_prosecution_avg_time_value' => 'field_prosecution_avg_time_value',
    'name_list' => 0,
    'status' => 0,
    'type' => 0,
    'field_violence_types_tid_i18n' => 0,
    'field_ad_sector_tid_i18n' => 0,
    'title' => 0,
    'populate' => 0,
    'populate_1' => 0,
    'populate_2' => 0,
    'populate_3' => 0,
    'field_victim_info_value' => 0,
    'field_victim_info_other_value' => 0,
    'field_victim_relationship_value' => 0,
    'field_victim_repetition_value' => 0,
    'field_perpetrator_info_value' => 0,
    'field_perpetrator_info_other_value' => 0,
    'field_perpetrator_relationship_value' => 0,
    'field_perpetrator_reoffending_value' => 0,
    'field_witness_info_value' => 0,
    'field_witness_info_other_value' => 0,
    'field_witness_relationship_value' => 0,
    'field_witness_description_value' => 0,
    'field_witness_children_value' => 0,
    'field_incident_value' => 0,
    'field_incident_other_value' => 0,
    'field_incident_code_system_value' => 0,
    'field_incident_description_value' => 0,
    'field_incident_description_other_value' => 0,
    'field_incident_protection_value' => 0,
    'field_incident_justice_data_value' => 0,
    'field_incident_resources_value' => 0,
    'field_incident_other_resources_value' => 0,
  );
  /* Filter criterion: Data available on outcomes */
  $handler->display->display_options['filters']['populate_5']['id'] = 'populate_5';
  $handler->display->display_options['filters']['populate_5']['table'] = 'views_filters_populate_conditionally';
  $handler->display->display_options['filters']['populate_5']['field'] = 'populate';
  $handler->display->display_options['filters']['populate_5']['ui_name'] = 'Data available on outcomes';
  $handler->display->display_options['filters']['populate_5']['group'] = 1;
  $handler->display->display_options['filters']['populate_5']['exposed'] = TRUE;
  $handler->display->display_options['filters']['populate_5']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['populate_5']['expose']['label'] = 'Data available on outcomes';
  $handler->display->display_options['filters']['populate_5']['expose']['operator'] = 'populate_5_op';
  $handler->display->display_options['filters']['populate_5']['expose']['identifier'] = 'do';
  $handler->display->display_options['filters']['populate_5']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['populate_5']['filters'] = array(
    'field_outcomes_arrest_cases_value' => 'field_outcomes_arrest_cases_value',
    'field_outcomes_many_offenses_value' => 'field_outcomes_many_offenses_value',
    'field_outcomes_list_offenses_value' => 'field_outcomes_list_offenses_value',
    'field_outcomes_probation_value' => 'field_outcomes_probation_value',
    'field_outcomes_bail_remand_value' => 'field_outcomes_bail_remand_value',
    'field_outcomes_prisons_value' => 'field_outcomes_prisons_value',
    'field_outcomes_perp_other_value' => 'field_outcomes_perp_other_value',
    'field_outcomes_death_value' => 'field_outcomes_death_value',
    'name_list' => 0,
    'status' => 0,
    'type' => 0,
    'field_violence_types_tid_i18n' => 0,
    'field_ad_sector_tid_i18n' => 0,
    'title' => 0,
    'populate' => 0,
    'populate_1' => 0,
    'populate_2' => 0,
    'populate_3' => 0,
    'populate_4' => 0,
    'field_victim_info_value' => 0,
    'field_victim_info_other_value' => 0,
    'field_victim_relationship_value' => 0,
    'field_victim_repetition_value' => 0,
    'field_perpetrator_info_value' => 0,
    'field_perpetrator_info_other_value' => 0,
    'field_perpetrator_relationship_value' => 0,
    'field_perpetrator_reoffending_value' => 0,
    'field_witness_info_value' => 0,
    'field_witness_info_other_value' => 0,
    'field_witness_relationship_value' => 0,
    'field_witness_description_value' => 0,
    'field_witness_children_value' => 0,
    'field_prosecution_stages_value' => 0,
    'field_prosec_stages_other_value' => 0,
    'field_prosecution_defendant_value' => 0,
    'field_prosec_defendant_other_value' => 0,
    'field_prosecution_avg_time_value' => 0,
    'field_incident_value' => 0,
    'field_incident_other_value' => 0,
    'field_incident_code_system_value' => 0,
    'field_incident_description_value' => 0,
    'field_incident_description_other_value' => 0,
    'field_incident_protection_value' => 0,
    'field_incident_justice_data_value' => 0,
    'field_incident_resources_value' => 0,
    'field_incident_other_resources_value' => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'allwords';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Search Administrative data sources';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 't';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Background information (field_victim_info) */
  $handler->display->display_options['filters']['field_victim_info_value']['id'] = 'field_victim_info_value';
  $handler->display->display_options['filters']['field_victim_info_value']['table'] = 'field_data_field_victim_info';
  $handler->display->display_options['filters']['field_victim_info_value']['field'] = 'field_victim_info_value';
  $handler->display->display_options['filters']['field_victim_info_value']['value'] = array(
    'Age' => 'Age',
    'Sex' => 'Sex',
    'Nationality' => 'Nationality',
    'ID' => 'ID',
    'Name' => 'Name',
    'Ethnicity' => 'Ethnicity',
    'Marital status' => 'Marital status',
    'Dependants' => 'Dependants',
  );
  $handler->display->display_options['filters']['field_victim_info_value']['group'] = 2;
  $handler->display->display_options['filters']['field_victim_info_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Other (field_victim_info_other) */
  $handler->display->display_options['filters']['field_victim_info_other_value']['id'] = 'field_victim_info_other_value';
  $handler->display->display_options['filters']['field_victim_info_other_value']['table'] = 'field_data_field_victim_info_other';
  $handler->display->display_options['filters']['field_victim_info_other_value']['field'] = 'field_victim_info_other_value';
  $handler->display->display_options['filters']['field_victim_info_other_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_victim_info_other_value']['group'] = 2;
  /* Filter criterion: Content: Relationship with perpetrator (field_victim_relationship) */
  $handler->display->display_options['filters']['field_victim_relationship_value']['id'] = 'field_victim_relationship_value';
  $handler->display->display_options['filters']['field_victim_relationship_value']['table'] = 'field_data_field_victim_relationship';
  $handler->display->display_options['filters']['field_victim_relationship_value']['field'] = 'field_victim_relationship_value';
  $handler->display->display_options['filters']['field_victim_relationship_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_victim_relationship_value']['group'] = 2;
  $handler->display->display_options['filters']['field_victim_relationship_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Repeatedly suffering from GBV (field_victim_repetition) */
  $handler->display->display_options['filters']['field_victim_repetition_value']['id'] = 'field_victim_repetition_value';
  $handler->display->display_options['filters']['field_victim_repetition_value']['table'] = 'field_data_field_victim_repetition';
  $handler->display->display_options['filters']['field_victim_repetition_value']['field'] = 'field_victim_repetition_value';
  $handler->display->display_options['filters']['field_victim_repetition_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_victim_repetition_value']['group'] = 2;
  $handler->display->display_options['filters']['field_victim_repetition_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Background information (field_perpetrator_info) */
  $handler->display->display_options['filters']['field_perpetrator_info_value']['id'] = 'field_perpetrator_info_value';
  $handler->display->display_options['filters']['field_perpetrator_info_value']['table'] = 'field_data_field_perpetrator_info';
  $handler->display->display_options['filters']['field_perpetrator_info_value']['field'] = 'field_perpetrator_info_value';
  $handler->display->display_options['filters']['field_perpetrator_info_value']['value'] = array(
    'Age' => 'Age',
    'Sex' => 'Sex',
    'Nationality' => 'Nationality',
    'ID' => 'ID',
    'Name' => 'Name',
    'Ethnicity' => 'Ethnicity',
    'Marital status' => 'Marital status',
    'Dependants' => 'Dependants',
  );
  $handler->display->display_options['filters']['field_perpetrator_info_value']['group'] = 3;
  $handler->display->display_options['filters']['field_perpetrator_info_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Other (field_perpetrator_info_other) */
  $handler->display->display_options['filters']['field_perpetrator_info_other_value']['id'] = 'field_perpetrator_info_other_value';
  $handler->display->display_options['filters']['field_perpetrator_info_other_value']['table'] = 'field_data_field_perpetrator_info_other';
  $handler->display->display_options['filters']['field_perpetrator_info_other_value']['field'] = 'field_perpetrator_info_other_value';
  $handler->display->display_options['filters']['field_perpetrator_info_other_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_perpetrator_info_other_value']['group'] = 3;
  /* Filter criterion: Content: Relationship with victim (field_perpetrator_relationship) */
  $handler->display->display_options['filters']['field_perpetrator_relationship_value']['id'] = 'field_perpetrator_relationship_value';
  $handler->display->display_options['filters']['field_perpetrator_relationship_value']['table'] = 'field_data_field_perpetrator_relationship';
  $handler->display->display_options['filters']['field_perpetrator_relationship_value']['field'] = 'field_perpetrator_relationship_value';
  $handler->display->display_options['filters']['field_perpetrator_relationship_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_perpetrator_relationship_value']['group'] = 3;
  $handler->display->display_options['filters']['field_perpetrator_relationship_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Re-offending (field_perpetrator_reoffending) */
  $handler->display->display_options['filters']['field_perpetrator_reoffending_value']['id'] = 'field_perpetrator_reoffending_value';
  $handler->display->display_options['filters']['field_perpetrator_reoffending_value']['table'] = 'field_data_field_perpetrator_reoffending';
  $handler->display->display_options['filters']['field_perpetrator_reoffending_value']['field'] = 'field_perpetrator_reoffending_value';
  $handler->display->display_options['filters']['field_perpetrator_reoffending_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_perpetrator_reoffending_value']['group'] = 3;
  $handler->display->display_options['filters']['field_perpetrator_reoffending_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Background information (field_witness_info) */
  $handler->display->display_options['filters']['field_witness_info_value']['id'] = 'field_witness_info_value';
  $handler->display->display_options['filters']['field_witness_info_value']['table'] = 'field_data_field_witness_info';
  $handler->display->display_options['filters']['field_witness_info_value']['field'] = 'field_witness_info_value';
  $handler->display->display_options['filters']['field_witness_info_value']['value'] = array(
    'Age' => 'Age',
    'Sex' => 'Sex',
    'Nationality' => 'Nationality',
    'ID' => 'ID',
    'Name' => 'Name',
    'Ethnicity' => 'Ethnicity',
    'Marital status' => 'Marital status',
    'Dependants' => 'Dependants',
  );
  $handler->display->display_options['filters']['field_witness_info_value']['group'] = 4;
  $handler->display->display_options['filters']['field_witness_info_value']['expose']['operator_id'] = 'field_witness_info_value_op';
  $handler->display->display_options['filters']['field_witness_info_value']['expose']['label'] = 'Background information (field_witness_info)';
  $handler->display->display_options['filters']['field_witness_info_value']['expose']['operator'] = 'field_witness_info_value_op';
  $handler->display->display_options['filters']['field_witness_info_value']['expose']['identifier'] = 'field_witness_info_value';
  $handler->display->display_options['filters']['field_witness_info_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Other (field_witness_info_other) */
  $handler->display->display_options['filters']['field_witness_info_other_value']['id'] = 'field_witness_info_other_value';
  $handler->display->display_options['filters']['field_witness_info_other_value']['table'] = 'field_data_field_witness_info_other';
  $handler->display->display_options['filters']['field_witness_info_other_value']['field'] = 'field_witness_info_other_value';
  $handler->display->display_options['filters']['field_witness_info_other_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_witness_info_other_value']['group'] = 4;
  /* Filter criterion: Content: Relationship with victim/perpetrator (field_witness_relationship) */
  $handler->display->display_options['filters']['field_witness_relationship_value']['id'] = 'field_witness_relationship_value';
  $handler->display->display_options['filters']['field_witness_relationship_value']['table'] = 'field_data_field_witness_relationship';
  $handler->display->display_options['filters']['field_witness_relationship_value']['field'] = 'field_witness_relationship_value';
  $handler->display->display_options['filters']['field_witness_relationship_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_witness_relationship_value']['group'] = 4;
  $handler->display->display_options['filters']['field_witness_relationship_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Incident description by witness (field_witness_description) */
  $handler->display->display_options['filters']['field_witness_description_value']['id'] = 'field_witness_description_value';
  $handler->display->display_options['filters']['field_witness_description_value']['table'] = 'field_data_field_witness_description';
  $handler->display->display_options['filters']['field_witness_description_value']['field'] = 'field_witness_description_value';
  $handler->display->display_options['filters']['field_witness_description_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_witness_description_value']['group'] = 4;
  $handler->display->display_options['filters']['field_witness_description_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Children witnessing IPV incident (field_witness_children) */
  $handler->display->display_options['filters']['field_witness_children_value']['id'] = 'field_witness_children_value';
  $handler->display->display_options['filters']['field_witness_children_value']['table'] = 'field_data_field_witness_children';
  $handler->display->display_options['filters']['field_witness_children_value']['field'] = 'field_witness_children_value';
  $handler->display->display_options['filters']['field_witness_children_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_witness_children_value']['group'] = 4;
  $handler->display->display_options['filters']['field_witness_children_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Stages of prosecution process (field_prosecution_stages) */
  $handler->display->display_options['filters']['field_prosecution_stages_value']['id'] = 'field_prosecution_stages_value';
  $handler->display->display_options['filters']['field_prosecution_stages_value']['table'] = 'field_data_field_prosecution_stages';
  $handler->display->display_options['filters']['field_prosecution_stages_value']['field'] = 'field_prosecution_stages_value';
  $handler->display->display_options['filters']['field_prosecution_stages_value']['value'] = array(
    'Withdrawals of complaints' => 'Withdrawals of complaints',
    'Withdrawals of prosecution support' => 'Withdrawals of prosecution support',
    'N. of cases reported for each incident' => 'N. of cases reported for each incident',
    'N. of cases initiated for each type of incident' => 'N. of cases initiated for each type of incident',
    'N. of cases referred to court' => 'N. of cases referred to court',
    'Types of offense(s)' => 'Types of offense(s)',
  );
  $handler->display->display_options['filters']['field_prosecution_stages_value']['group'] = 6;
  $handler->display->display_options['filters']['field_prosecution_stages_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Other (field_prosec_stages_other) */
  $handler->display->display_options['filters']['field_prosec_stages_other_value']['id'] = 'field_prosec_stages_other_value';
  $handler->display->display_options['filters']['field_prosec_stages_other_value']['table'] = 'field_data_field_prosec_stages_other';
  $handler->display->display_options['filters']['field_prosec_stages_other_value']['field'] = 'field_prosec_stages_other_value';
  $handler->display->display_options['filters']['field_prosec_stages_other_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_prosec_stages_other_value']['group'] = 6;
  /* Filter criterion: Content: Defendant pleas/verdicts (field_prosecution_defendant) */
  $handler->display->display_options['filters']['field_prosecution_defendant_value']['id'] = 'field_prosecution_defendant_value';
  $handler->display->display_options['filters']['field_prosecution_defendant_value']['table'] = 'field_data_field_prosecution_defendant';
  $handler->display->display_options['filters']['field_prosecution_defendant_value']['field'] = 'field_prosecution_defendant_value';
  $handler->display->display_options['filters']['field_prosecution_defendant_value']['value'] = array(
    'Guilty pleas' => 'Guilty pleas',
    'Guilty verdicts' => 'Guilty verdicts',
  );
  $handler->display->display_options['filters']['field_prosecution_defendant_value']['group'] = 6;
  $handler->display->display_options['filters']['field_prosecution_defendant_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Other (field_prosec_defendant_other) */
  $handler->display->display_options['filters']['field_prosec_defendant_other_value']['id'] = 'field_prosec_defendant_other_value';
  $handler->display->display_options['filters']['field_prosec_defendant_other_value']['table'] = 'field_data_field_prosec_defendant_other';
  $handler->display->display_options['filters']['field_prosec_defendant_other_value']['field'] = 'field_prosec_defendant_other_value';
  $handler->display->display_options['filters']['field_prosec_defendant_other_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_prosec_defendant_other_value']['group'] = 6;
  /* Filter criterion: Content: Average time case through criminal justice system (field_prosecution_avg_time) */
  $handler->display->display_options['filters']['field_prosecution_avg_time_value']['id'] = 'field_prosecution_avg_time_value';
  $handler->display->display_options['filters']['field_prosecution_avg_time_value']['table'] = 'field_data_field_prosecution_avg_time';
  $handler->display->display_options['filters']['field_prosecution_avg_time_value']['field'] = 'field_prosecution_avg_time_value';
  $handler->display->display_options['filters']['field_prosecution_avg_time_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_prosecution_avg_time_value']['group'] = 6;
  $handler->display->display_options['filters']['field_prosecution_avg_time_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Incident (field_incident) */
  $handler->display->display_options['filters']['field_incident_value']['id'] = 'field_incident_value';
  $handler->display->display_options['filters']['field_incident_value']['table'] = 'field_data_field_incident';
  $handler->display->display_options['filters']['field_incident_value']['field'] = 'field_incident_value';
  $handler->display->display_options['filters']['field_incident_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_incident_value']['group'] = 5;
  $handler->display->display_options['filters']['field_incident_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Other content (field_incident_other) */
  $handler->display->display_options['filters']['field_incident_other_value']['id'] = 'field_incident_other_value';
  $handler->display->display_options['filters']['field_incident_other_value']['table'] = 'field_data_field_incident_other';
  $handler->display->display_options['filters']['field_incident_other_value']['field'] = 'field_incident_other_value';
  $handler->display->display_options['filters']['field_incident_other_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_incident_other_value']['group'] = 5;
  /* Filter criterion: Content: Code system used (field_incident_code_system) */
  $handler->display->display_options['filters']['field_incident_code_system_value']['id'] = 'field_incident_code_system_value';
  $handler->display->display_options['filters']['field_incident_code_system_value']['table'] = 'field_data_field_incident_code_system';
  $handler->display->display_options['filters']['field_incident_code_system_value']['field'] = 'field_incident_code_system_value';
  $handler->display->display_options['filters']['field_incident_code_system_value']['value'] = array(
    'Criminal justice' => 'Criminal justice',
    'Civil law' => 'Civil law',
    'Health' => 'Health',
    'Police' => 'Police',
    'Specific to organisation' => 'Specific to organisation',
    'No codes used' => 'No codes used',
  );
  $handler->display->display_options['filters']['field_incident_code_system_value']['group'] = 5;
  $handler->display->display_options['filters']['field_incident_code_system_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Description of incident (field_incident_description) */
  $handler->display->display_options['filters']['field_incident_description_value']['id'] = 'field_incident_description_value';
  $handler->display->display_options['filters']['field_incident_description_value']['table'] = 'field_data_field_incident_description';
  $handler->display->display_options['filters']['field_incident_description_value']['field'] = 'field_incident_description_value';
  $handler->display->display_options['filters']['field_incident_description_value']['value'] = array(
    'Date/time' => 'Date/time',
    'Harm/injuries' => 'Harm/injuries',
    'Location' => 'Location',
    'Type of violence' => 'Type of violence',
  );
  $handler->display->display_options['filters']['field_incident_description_value']['group'] = 5;
  $handler->display->display_options['filters']['field_incident_description_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Other (field_incident_description_other) */
  $handler->display->display_options['filters']['field_incident_description_other_value']['id'] = 'field_incident_description_other_value';
  $handler->display->display_options['filters']['field_incident_description_other_value']['table'] = 'field_data_field_incident_description_other';
  $handler->display->display_options['filters']['field_incident_description_other_value']['field'] = 'field_incident_description_other_value';
  $handler->display->display_options['filters']['field_incident_description_other_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_incident_description_other_value']['group'] = 5;
  /* Filter criterion: Content: Protection order (field_incident_protection) */
  $handler->display->display_options['filters']['field_incident_protection_value']['id'] = 'field_incident_protection_value';
  $handler->display->display_options['filters']['field_incident_protection_value']['table'] = 'field_data_field_incident_protection';
  $handler->display->display_options['filters']['field_incident_protection_value']['field'] = 'field_incident_protection_value';
  $handler->display->display_options['filters']['field_incident_protection_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_incident_protection_value']['group'] = 5;
  $handler->display->display_options['filters']['field_incident_protection_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Civil justice data (field_incident_justice_data) */
  $handler->display->display_options['filters']['field_incident_justice_data_value']['id'] = 'field_incident_justice_data_value';
  $handler->display->display_options['filters']['field_incident_justice_data_value']['table'] = 'field_data_field_incident_justice_data';
  $handler->display->display_options['filters']['field_incident_justice_data_value']['field'] = 'field_incident_justice_data_value';
  $handler->display->display_options['filters']['field_incident_justice_data_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_incident_justice_data_value']['group'] = 5;
  $handler->display->display_options['filters']['field_incident_justice_data_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Incident respond resources (field_incident_resources) */
  $handler->display->display_options['filters']['field_incident_resources_value']['id'] = 'field_incident_resources_value';
  $handler->display->display_options['filters']['field_incident_resources_value']['table'] = 'field_data_field_incident_resources';
  $handler->display->display_options['filters']['field_incident_resources_value']['field'] = 'field_incident_resources_value';
  $handler->display->display_options['filters']['field_incident_resources_value']['value'] = array(
    'Human resources' => 'Human resources',
    'Financial resources' => 'Financial resources',
    'Other resources' => 'Other resources',
  );
  $handler->display->display_options['filters']['field_incident_resources_value']['group'] = 5;
  $handler->display->display_options['filters']['field_incident_resources_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Other resources (field_incident_other_resources) */
  $handler->display->display_options['filters']['field_incident_other_resources_value']['id'] = 'field_incident_other_resources_value';
  $handler->display->display_options['filters']['field_incident_other_resources_value']['table'] = 'field_data_field_incident_other_resources';
  $handler->display->display_options['filters']['field_incident_other_resources_value']['field'] = 'field_incident_other_resources_value';
  $handler->display->display_options['filters']['field_incident_other_resources_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_incident_other_resources_value']['group'] = 5;
  /* Filter criterion: Content: N. of cases resulting in arrest (field_outcomes_arrest_cases) */
  $handler->display->display_options['filters']['field_outcomes_arrest_cases_value']['id'] = 'field_outcomes_arrest_cases_value';
  $handler->display->display_options['filters']['field_outcomes_arrest_cases_value']['table'] = 'field_data_field_outcomes_arrest_cases';
  $handler->display->display_options['filters']['field_outcomes_arrest_cases_value']['field'] = 'field_outcomes_arrest_cases_value';
  $handler->display->display_options['filters']['field_outcomes_arrest_cases_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_outcomes_arrest_cases_value']['group'] = 7;
  $handler->display->display_options['filters']['field_outcomes_arrest_cases_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content:  Charged with more than one offense (field_outcomes_many_offenses) */
  $handler->display->display_options['filters']['field_outcomes_many_offenses_value']['id'] = 'field_outcomes_many_offenses_value';
  $handler->display->display_options['filters']['field_outcomes_many_offenses_value']['table'] = 'field_data_field_outcomes_many_offenses';
  $handler->display->display_options['filters']['field_outcomes_many_offenses_value']['field'] = 'field_outcomes_many_offenses_value';
  $handler->display->display_options['filters']['field_outcomes_many_offenses_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_outcomes_many_offenses_value']['group'] = 7;
  $handler->display->display_options['filters']['field_outcomes_many_offenses_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: List of offenses (field_outcomes_list_offenses) */
  $handler->display->display_options['filters']['field_outcomes_list_offenses_value']['id'] = 'field_outcomes_list_offenses_value';
  $handler->display->display_options['filters']['field_outcomes_list_offenses_value']['table'] = 'field_data_field_outcomes_list_offenses';
  $handler->display->display_options['filters']['field_outcomes_list_offenses_value']['field'] = 'field_outcomes_list_offenses_value';
  $handler->display->display_options['filters']['field_outcomes_list_offenses_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_outcomes_list_offenses_value']['group'] = 7;
  $handler->display->display_options['filters']['field_outcomes_list_offenses_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Probation (field_outcomes_probation) */
  $handler->display->display_options['filters']['field_outcomes_probation_value']['id'] = 'field_outcomes_probation_value';
  $handler->display->display_options['filters']['field_outcomes_probation_value']['table'] = 'field_data_field_outcomes_probation';
  $handler->display->display_options['filters']['field_outcomes_probation_value']['field'] = 'field_outcomes_probation_value';
  $handler->display->display_options['filters']['field_outcomes_probation_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_outcomes_probation_value']['group'] = 7;
  $handler->display->display_options['filters']['field_outcomes_probation_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Bail/remand (field_outcomes_bail_remand) */
  $handler->display->display_options['filters']['field_outcomes_bail_remand_value']['id'] = 'field_outcomes_bail_remand_value';
  $handler->display->display_options['filters']['field_outcomes_bail_remand_value']['table'] = 'field_data_field_outcomes_bail_remand';
  $handler->display->display_options['filters']['field_outcomes_bail_remand_value']['field'] = 'field_outcomes_bail_remand_value';
  $handler->display->display_options['filters']['field_outcomes_bail_remand_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_outcomes_bail_remand_value']['group'] = 7;
  $handler->display->display_options['filters']['field_outcomes_bail_remand_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Prisons (field_outcomes_prisons) */
  $handler->display->display_options['filters']['field_outcomes_prisons_value']['id'] = 'field_outcomes_prisons_value';
  $handler->display->display_options['filters']['field_outcomes_prisons_value']['table'] = 'field_data_field_outcomes_prisons';
  $handler->display->display_options['filters']['field_outcomes_prisons_value']['field'] = 'field_outcomes_prisons_value';
  $handler->display->display_options['filters']['field_outcomes_prisons_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_outcomes_prisons_value']['group'] = 7;
  $handler->display->display_options['filters']['field_outcomes_prisons_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Other (field_outcomes_perp_other) */
  $handler->display->display_options['filters']['field_outcomes_perp_other_value']['id'] = 'field_outcomes_perp_other_value';
  $handler->display->display_options['filters']['field_outcomes_perp_other_value']['table'] = 'field_data_field_outcomes_perp_other';
  $handler->display->display_options['filters']['field_outcomes_perp_other_value']['field'] = 'field_outcomes_perp_other_value';
  $handler->display->display_options['filters']['field_outcomes_perp_other_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_outcomes_perp_other_value']['group'] = 7;
  /* Filter criterion: Content: Death as result of incident (field_outcomes_death) */
  $handler->display->display_options['filters']['field_outcomes_death_value']['id'] = 'field_outcomes_death_value';
  $handler->display->display_options['filters']['field_outcomes_death_value']['table'] = 'field_data_field_outcomes_death';
  $handler->display->display_options['filters']['field_outcomes_death_value']['field'] = 'field_outcomes_death_value';
  $handler->display->display_options['filters']['field_outcomes_death_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_outcomes_death_value']['group'] = 7;
  $handler->display->display_options['filters']['field_outcomes_death_value']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['path'] = 'gender-based-violence/administrative-data-sources/search/xml';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
    'panel_pane_1' => 0,
    'panel_pane_2' => 0,
  );
  $export['administrative_data_sources'] = $view;

  $view = new view();
  $view->name = 'administrative_data_sources_map';
  $view->description = 'EU Map display for administrative data sources';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Administrative data sources map';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Administrative data sources on GBV in the EU';
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
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'type' => array(
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
    'field_ad_sector_tid_i18n' => array(
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
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p><em>There are no results that match the selected criteria</em></p>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['machine_name'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Country */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['label'] = '';
  $handler->display->display_options['fields']['field_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_country']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_country']['type'] = 'country_alpha_2';
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
    'administrative_data_source' => 'administrative_data_source',
    'statistical_product' => 'statistical_product',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['type']['group_info']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['group_info']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['type']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
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
  $handler->display->display_options['filters']['field_violence_types_tid_i18n']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_violence_types_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_violence_types_tid_i18n']['vocabulary'] = 'gender_based_violence_types';
  /* Filter criterion: Content: Sector (field_ad_sector) (translated) */
  $handler->display->display_options['filters']['field_ad_sector_tid_i18n']['id'] = 'field_ad_sector_tid_i18n';
  $handler->display->display_options['filters']['field_ad_sector_tid_i18n']['table'] = 'field_data_field_ad_sector';
  $handler->display->display_options['filters']['field_ad_sector_tid_i18n']['field'] = 'field_ad_sector_tid_i18n';
  $handler->display->display_options['filters']['field_ad_sector_tid_i18n']['group'] = 1;
  $handler->display->display_options['filters']['field_ad_sector_tid_i18n']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ad_sector_tid_i18n']['expose']['operator_id'] = 'field_ad_sector_tid_i18n_op';
  $handler->display->display_options['filters']['field_ad_sector_tid_i18n']['expose']['label'] = 'Sector';
  $handler->display->display_options['filters']['field_ad_sector_tid_i18n']['expose']['operator'] = 'field_ad_sector_tid_i18n_op';
  $handler->display->display_options['filters']['field_ad_sector_tid_i18n']['expose']['identifier'] = 'st';
  $handler->display->display_options['filters']['field_ad_sector_tid_i18n']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_ad_sector_tid_i18n']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_ad_sector_tid_i18n']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_ad_sector_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_ad_sector_tid_i18n']['vocabulary'] = 'administrative_data_sectors';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'gender-based-violence/administrative-data-sources';
  $export['administrative_data_sources_map'] = $view;

  $view = new view();
  $view->name = 'gender_based_violence_countries';
  $view->description = 'Lists all countries that are EU member states as links towards their GBV country profiles';
  $view->tag = 'default';
  $view->base_table = 'countries_country';
  $view->human_name = 'Gender-Based violence countries';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Gender-based violence countries';
  $handler->display->display_options['css_class'] = 'view-countries-list';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'items-list large-centered large-block-grid-4 medium-block-grid-3 small-block-grid-2 columns';
  $handler->display->display_options['style_options']['wrapper_class'] = 'items-list-wrapper';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Countries: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'countries_country';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Country name sanitized for URL */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'Country name sanitized for URL';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = 'return trim(strtolower(str_replace(" ", "-", $row->name)));';
  $handler->display->display_options['fields']['php']['php_output'] = '<?php echo $value; ?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Country name as css class */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['ui_name'] = 'Country name as css class';
  $handler->display->display_options['fields']['php_1']['label'] = '';
  $handler->display->display_options['fields']['php_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_value'] = 'return trim(strtolower(str_replace(" ", "_", $row->name)));';
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php echo $value; ?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a class="group-link-wrapper field-group-link" href="/gender-based-violence/countries/[php]">
<div class="field field-name-content-type field-type-ds field-label-hidden field-wrapper"><p>Country</p></div>
<div class="group-title-quote-wrapper field-group-div">
<h2>[name]</h2>
<div class="group-summary-wrapper field-group-div"><div class="body text-secondary"><div class="[php_1]"></div></div></div></div>
</a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Country: Native name (field_native_name) */
  $handler->display->display_options['sorts']['field_native_name_value']['id'] = 'field_native_name_value';
  $handler->display->display_options['sorts']['field_native_name_value']['table'] = 'field_data_field_native_name';
  $handler->display->display_options['sorts']['field_native_name_value']['field'] = 'field_native_name_value';
  /* Filter criterion: Country: EU code/abbreviation (field_eu_country_code) */
  $handler->display->display_options['filters']['field_eu_country_code_value']['id'] = 'field_eu_country_code_value';
  $handler->display->display_options['filters']['field_eu_country_code_value']['table'] = 'field_data_field_eu_country_code';
  $handler->display->display_options['filters']['field_eu_country_code_value']['field'] = 'field_eu_country_code_value';
  $handler->display->display_options['filters']['field_eu_country_code_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_eu_country_code_value']['group'] = 1;
  /* Filter criterion: Country: Native name (field_native_name) */
  $handler->display->display_options['filters']['field_native_name_value']['id'] = 'field_native_name_value';
  $handler->display->display_options['filters']['field_native_name_value']['table'] = 'field_data_field_native_name';
  $handler->display->display_options['filters']['field_native_name_value']['field'] = 'field_native_name_value';
  $handler->display->display_options['filters']['field_native_name_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_native_name_value']['group'] = 1;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['gender_based_violence_countries'] = $view;

  return $export;
}

<?php
/**
 * @file
 * eige_gender_mainstreaming.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function eige_gender_mainstreaming_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'countries_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Countries List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Country Specific Information';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'items-list large-centered large-block-grid-4 medium-block-grid-3 small-block-grid-2 columns';
  $handler->display->display_options['style_options']['wrapper_class'] = 'items-list-wrapper';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Relationship: Content: Country (field_country) */
  $handler->display->display_options['relationships']['field_country_iso2']['id'] = 'field_country_iso2';
  $handler->display->display_options['relationships']['field_country_iso2']['table'] = 'field_data_field_country';
  $handler->display->display_options['relationships']['field_country_iso2']['field'] = 'field_country_iso2';
  $handler->display->display_options['relationships']['field_country_iso2']['required'] = TRUE;
  /* Field: Countries: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'countries_country';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_country_iso2';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'gender-mainstreaming/countries/[name]';
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Sort criterion: Country: Native name (field_native_name) */
  $handler->display->display_options['sorts']['field_native_name_value']['id'] = 'field_native_name_value';
  $handler->display->display_options['sorts']['field_native_name_value']['table'] = 'field_data_field_native_name';
  $handler->display->display_options['sorts']['field_native_name_value']['field'] = 'field_native_name_value';
  $handler->display->display_options['sorts']['field_native_name_value']['relationship'] = 'field_country_iso2';
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
    'country_overview' => 'country_overview',
  );

  /* Display: Countries List */
  $handler = $view->new_display('page', 'Countries List', 'page');
  $handler->display->display_options['path'] = 'gender-mainstreaming/countries';
  $export['countries_list'] = $view;

  $view = new view();
  $view->name = 'country_profile';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Country Profile';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'full_html';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Country (field_country) */
  $handler->display->display_options['relationships']['field_country_iso2']['id'] = 'field_country_iso2';
  $handler->display->display_options['relationships']['field_country_iso2']['table'] = 'field_data_field_country';
  $handler->display->display_options['relationships']['field_country_iso2']['field'] = 'field_country_iso2';
  $handler->display->display_options['relationships']['field_country_iso2']['required'] = TRUE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Countries: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'countries_country';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_country_iso2';
  $handler->display->display_options['arguments']['name']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['arguments']['name']['case'] = 'lower';
  $handler->display->display_options['arguments']['name']['path_case'] = 'lower';
  $handler->display->display_options['arguments']['name']['transform_dash'] = TRUE;
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
    'country_overview' => 'country_overview',
  );

  /* Display: About */
  $handler = $view->new_display('panel_pane', 'About', 'panel_pane_about');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'About';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'views_access_callback';
  $handler->display->display_options['access']['views_access_callback'] = 'eige_gender_mainstreaming_environment_access';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a class="read-more" href="/gender-mainstreaming/countries/!1/about">Read More</a>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
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
    'country_overview' => 'country_overview',
  );
  /* Filter criterion: Content: Body (body) */
  $handler->display->display_options['filters']['body_value']['id'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['table'] = 'field_data_body';
  $handler->display->display_options['filters']['body_value']['field'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['operator'] = 'not empty';
  $handler->display->display_options['argument_input'] = array(
    'name' => array(
      'type' => 'panel',
      'context' => 'entity:cer.cer_bidirectional',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Countries: Name',
    ),
  );

  /* Display: About Image */
  $handler = $view->new_display('panel_pane', 'About Image', 'panel_pane_about_image');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'views_access_callback';
  $handler->display->display_options['access']['views_access_callback'] = 'eige_gender_mainstreaming_environment_access';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: About image */
  $handler->display->display_options['fields']['field_about_image']['id'] = 'field_about_image';
  $handler->display->display_options['fields']['field_about_image']['table'] = 'field_data_field_about_image';
  $handler->display->display_options['fields']['field_about_image']['field'] = 'field_about_image';
  $handler->display->display_options['fields']['field_about_image']['label'] = '';
  $handler->display->display_options['fields']['field_about_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_about_image']['element_wrapper_class'] = 'right-image';
  $handler->display->display_options['fields']['field_about_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_about_image']['settings'] = array(
    'image_style' => 'eige_medium',
    'image_link' => '',
  );
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
    'country_overview' => 'country_overview',
  );
  /* Filter criterion: Content: About image (field_about_image:fid) */
  $handler->display->display_options['filters']['field_about_image_fid']['id'] = 'field_about_image_fid';
  $handler->display->display_options['filters']['field_about_image_fid']['table'] = 'field_data_field_about_image';
  $handler->display->display_options['filters']['field_about_image_fid']['field'] = 'field_about_image_fid';
  $handler->display->display_options['filters']['field_about_image_fid']['operator'] = 'not empty';
  $handler->display->display_options['argument_input'] = array(
    'name' => array(
      'type' => 'panel',
      'context' => 'entity:cer.cer_bidirectional',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Countries: Name',
    ),
  );

  /* Display: Structures */
  $handler = $view->new_display('panel_pane', 'Structures', 'panel_pane_structures');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Stuctures';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a class="read-more" href="/gender-mainstreaming/countries/!1/structures">Browse all Structures</a>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Structures */
  $handler->display->display_options['fields']['field_structures']['id'] = 'field_structures';
  $handler->display->display_options['fields']['field_structures']['table'] = 'field_data_field_structures';
  $handler->display->display_options['fields']['field_structures']['field'] = 'field_structures';
  $handler->display->display_options['fields']['field_structures']['label'] = '';
  $handler->display->display_options['fields']['field_structures']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_structures']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['field_structures']['settings'] = array(
    'trim_length' => '600',
  );
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
    'country_overview' => 'country_overview',
  );
  /* Filter criterion: Content: Structures (field_structures) */
  $handler->display->display_options['filters']['field_structures_value']['id'] = 'field_structures_value';
  $handler->display->display_options['filters']['field_structures_value']['table'] = 'field_data_field_structures';
  $handler->display->display_options['filters']['field_structures_value']['field'] = 'field_structures_value';
  $handler->display->display_options['filters']['field_structures_value']['operator'] = 'not empty';
  $handler->display->display_options['argument_input'] = array(
    'name' => array(
      'type' => 'panel',
      'context' => 'entity:cer.cer_bidirectional',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Countries: Name',
    ),
  );

  /* Display: Structures Image */
  $handler = $view->new_display('panel_pane', 'Structures Image', 'panel_pane_structures_image');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Structures image */
  $handler->display->display_options['fields']['field_structures_image']['id'] = 'field_structures_image';
  $handler->display->display_options['fields']['field_structures_image']['table'] = 'field_data_field_structures_image';
  $handler->display->display_options['fields']['field_structures_image']['field'] = 'field_structures_image';
  $handler->display->display_options['fields']['field_structures_image']['label'] = '';
  $handler->display->display_options['fields']['field_structures_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_structures_image']['element_wrapper_class'] = 'right-image';
  $handler->display->display_options['fields']['field_structures_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_structures_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_structures_image']['settings'] = array(
    'image_style' => 'eige_medium',
    'image_link' => '',
  );
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
    'country_overview' => 'country_overview',
  );
  /* Filter criterion: Content: Structures image (field_structures_image:fid) */
  $handler->display->display_options['filters']['field_structures_image_fid']['id'] = 'field_structures_image_fid';
  $handler->display->display_options['filters']['field_structures_image_fid']['table'] = 'field_data_field_structures_image';
  $handler->display->display_options['filters']['field_structures_image_fid']['field'] = 'field_structures_image_fid';
  $handler->display->display_options['filters']['field_structures_image_fid']['operator'] = 'not empty';
  $handler->display->display_options['argument_input'] = array(
    'name' => array(
      'type' => 'panel',
      'context' => 'entity:cer.cer_bidirectional',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Countries: Name',
    ),
  );

  /* Display: Laws and Policies */
  $handler = $view->new_display('panel_pane', 'Laws and Policies', 'panel_pane_laws_policies');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Laws and Policies';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a class="read-more" href="/gender-mainstreaming/countries/!1/laws-and-policies">Browse all Laws and Policies</a>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Laws & Policies */
  $handler->display->display_options['fields']['field_laws_policies']['id'] = 'field_laws_policies';
  $handler->display->display_options['fields']['field_laws_policies']['table'] = 'field_data_field_laws_policies';
  $handler->display->display_options['fields']['field_laws_policies']['field'] = 'field_laws_policies';
  $handler->display->display_options['fields']['field_laws_policies']['label'] = '';
  $handler->display->display_options['fields']['field_laws_policies']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_laws_policies']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['field_laws_policies']['settings'] = array(
    'trim_length' => '600',
  );
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
    'country_overview' => 'country_overview',
  );
  /* Filter criterion: Content: Laws &amp; Policies (field_laws_policies) */
  $handler->display->display_options['filters']['field_laws_policies_value']['id'] = 'field_laws_policies_value';
  $handler->display->display_options['filters']['field_laws_policies_value']['table'] = 'field_data_field_laws_policies';
  $handler->display->display_options['filters']['field_laws_policies_value']['field'] = 'field_laws_policies_value';
  $handler->display->display_options['filters']['field_laws_policies_value']['operator'] = 'not empty';
  $handler->display->display_options['argument_input'] = array(
    'name' => array(
      'type' => 'panel',
      'context' => 'entity:cer.cer_bidirectional',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Countries: Name',
    ),
  );

  /* Display: Laws and Policies Right Pane */
  $handler = $view->new_display('panel_pane', 'Laws and Policies Right Pane', 'panel_pane_laws_policies_right_pane');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h3>Latest Laws & Policies</h3>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Country (field_country) */
  $handler->display->display_options['relationships']['field_country_iso2']['id'] = 'field_country_iso2';
  $handler->display->display_options['relationships']['field_country_iso2']['table'] = 'field_data_field_country';
  $handler->display->display_options['relationships']['field_country_iso2']['field'] = 'field_country_iso2';
  $handler->display->display_options['relationships']['field_country_iso2']['required'] = TRUE;
  /* Relationship: Topic */
  $handler->display->display_options['relationships']['field_topic_tid']['id'] = 'field_topic_tid';
  $handler->display->display_options['relationships']['field_topic_tid']['table'] = 'field_data_field_topic';
  $handler->display->display_options['relationships']['field_topic_tid']['field'] = 'field_topic_tid';
  $handler->display->display_options['relationships']['field_topic_tid']['ui_name'] = 'Topic';
  $handler->display->display_options['relationships']['field_topic_tid']['required'] = TRUE;
  /* Relationship: Content: Type (field_type) */
  $handler->display->display_options['relationships']['field_type_tid']['id'] = 'field_type_tid';
  $handler->display->display_options['relationships']['field_type_tid']['table'] = 'field_data_field_type';
  $handler->display->display_options['relationships']['field_type_tid']['field'] = 'field_type_tid';
  $handler->display->display_options['relationships']['field_type_tid']['label'] = 'Type';
  $handler->display->display_options['relationships']['field_type_tid']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
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
    'method_tool' => 'method_tool',
    'resource' => 'resource',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Topic (field_topic) */
  $handler->display->display_options['filters']['field_topic_tid']['id'] = 'field_topic_tid';
  $handler->display->display_options['filters']['field_topic_tid']['table'] = 'field_data_field_topic';
  $handler->display->display_options['filters']['field_topic_tid']['field'] = 'field_topic_tid';
  $handler->display->display_options['filters']['field_topic_tid']['value'] = array(
    624 => '624',
  );
  $handler->display->display_options['filters']['field_topic_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_topic_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_topic_tid']['vocabulary'] = 'topics';
  /* Filter criterion: Content: Type (field_type) */
  $handler->display->display_options['filters']['field_type_tid']['id'] = 'field_type_tid';
  $handler->display->display_options['filters']['field_type_tid']['table'] = 'field_data_field_type';
  $handler->display->display_options['filters']['field_type_tid']['field'] = 'field_type_tid';
  $handler->display->display_options['filters']['field_type_tid']['value'] = array(
    96 => '96',
  );
  $handler->display->display_options['filters']['field_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_type_tid']['expose']['operator_id'] = 'field_type_tid_op';
  $handler->display->display_options['filters']['field_type_tid']['expose']['label'] = 'Type (field_type)';
  $handler->display->display_options['filters']['field_type_tid']['expose']['operator'] = 'field_type_tid_op';
  $handler->display->display_options['filters']['field_type_tid']['expose']['identifier'] = 'field_type_tid';
  $handler->display->display_options['filters']['field_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_type_tid']['vocabulary'] = 'types';
  $handler->display->display_options['argument_input'] = array(
    'name' => array(
      'type' => 'panel',
      'context' => 'entity:cer.cer_bidirectional',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Countries: Name',
    ),
  );

  /* Display: Methods & Tools */
  $handler = $view->new_display('panel_pane', 'Methods & Tools', 'panel_pane_methods_tools');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Methods & Tools';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Methods and tools */
  $handler->display->display_options['fields']['field_methods_tools']['id'] = 'field_methods_tools';
  $handler->display->display_options['fields']['field_methods_tools']['table'] = 'field_data_field_methods_tools';
  $handler->display->display_options['fields']['field_methods_tools']['field'] = 'field_methods_tools';
  $handler->display->display_options['fields']['field_methods_tools']['label'] = '';
  $handler->display->display_options['fields']['field_methods_tools']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_methods_tools']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['field_methods_tools']['settings'] = array(
    'trim_length' => '600',
  );
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
    'country_overview' => 'country_overview',
  );
  /* Filter criterion: Content: Methods and tools (field_methods_tools) */
  $handler->display->display_options['filters']['field_methods_tools_value']['id'] = 'field_methods_tools_value';
  $handler->display->display_options['filters']['field_methods_tools_value']['table'] = 'field_data_field_methods_tools';
  $handler->display->display_options['filters']['field_methods_tools_value']['field'] = 'field_methods_tools_value';
  $handler->display->display_options['filters']['field_methods_tools_value']['operator'] = 'not empty';
  $handler->display->display_options['argument_input'] = array(
    'name' => array(
      'type' => 'panel',
      'context' => 'entity:cer.cer_bidirectional',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Countries: Name',
    ),
  );

  /* Display: Methods & Tools image */
  $handler = $view->new_display('panel_pane', 'Methods & Tools image', 'panel_pane_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Methods and tools image */
  $handler->display->display_options['fields']['field_methods_tools_image']['id'] = 'field_methods_tools_image';
  $handler->display->display_options['fields']['field_methods_tools_image']['table'] = 'field_data_field_methods_tools_image';
  $handler->display->display_options['fields']['field_methods_tools_image']['field'] = 'field_methods_tools_image';
  $handler->display->display_options['fields']['field_methods_tools_image']['label'] = '';
  $handler->display->display_options['fields']['field_methods_tools_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_methods_tools_image']['element_wrapper_class'] = 'right-image';
  $handler->display->display_options['fields']['field_methods_tools_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_methods_tools_image']['settings'] = array(
    'image_style' => 'eige_medium',
    'image_link' => '',
  );
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
    'country_overview' => 'country_overview',
  );
  /* Filter criterion: Content: Methods and tools image (field_methods_tools_image:fid) */
  $handler->display->display_options['filters']['field_methods_tools_image_fid']['id'] = 'field_methods_tools_image_fid';
  $handler->display->display_options['filters']['field_methods_tools_image_fid']['table'] = 'field_data_field_methods_tools_image';
  $handler->display->display_options['filters']['field_methods_tools_image_fid']['field'] = 'field_methods_tools_image_fid';
  $handler->display->display_options['filters']['field_methods_tools_image_fid']['operator'] = 'not empty';
  $handler->display->display_options['argument_input'] = array(
    'name' => array(
      'type' => 'panel',
      'context' => 'entity:cer.cer_bidirectional',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Countries: Name',
    ),
  );

  /* Display: Methods And Tools List */
  $handler = $view->new_display('panel_pane', 'Methods And Tools List', 'panel_pane_country_methods_tools');
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
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['load_comments'] = 0;
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|created';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'teaser';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = TRUE;
  $handler->display->display_options['footer']['area']['content'] = '<a class="read-more" href="/gender-mainstreaming/countries/!1/methods-and-tools">Browse all Methods and Tools</a>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Country (field_country) */
  $handler->display->display_options['relationships']['field_country_iso2']['id'] = 'field_country_iso2';
  $handler->display->display_options['relationships']['field_country_iso2']['table'] = 'field_data_field_country';
  $handler->display->display_options['relationships']['field_country_iso2']['field'] = 'field_country_iso2';
  $handler->display->display_options['relationships']['field_country_iso2']['required'] = TRUE;
  /* Relationship: Topic */
  $handler->display->display_options['relationships']['field_topic_tid']['id'] = 'field_topic_tid';
  $handler->display->display_options['relationships']['field_topic_tid']['table'] = 'field_data_field_topic';
  $handler->display->display_options['relationships']['field_topic_tid']['field'] = 'field_topic_tid';
  $handler->display->display_options['relationships']['field_topic_tid']['ui_name'] = 'Topic';
  $handler->display->display_options['relationships']['field_topic_tid']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
    'method_tool' => 'method_tool',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Topic (field_topic) */
  $handler->display->display_options['filters']['field_topic_tid']['id'] = 'field_topic_tid';
  $handler->display->display_options['filters']['field_topic_tid']['table'] = 'field_data_field_topic';
  $handler->display->display_options['filters']['field_topic_tid']['field'] = 'field_topic_tid';
  $handler->display->display_options['filters']['field_topic_tid']['value'] = array(
    624 => '624',
  );
  $handler->display->display_options['filters']['field_topic_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_topic_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_topic_tid']['vocabulary'] = 'topics';
  /* Filter criterion: Content: Type (field_type) */
  $handler->display->display_options['filters']['field_type_tid']['id'] = 'field_type_tid';
  $handler->display->display_options['filters']['field_type_tid']['table'] = 'field_data_field_type';
  $handler->display->display_options['filters']['field_type_tid']['field'] = 'field_type_tid';
  $handler->display->display_options['filters']['field_type_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['field_type_tid']['value'] = array(
    96 => '96',
  );
  $handler->display->display_options['filters']['field_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_type_tid']['vocabulary'] = 'types';
  $handler->display->display_options['argument_input'] = array(
    'name' => array(
      'type' => 'panel',
      'context' => 'entity:cer.cer_bidirectional',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Countries: Name',
    ),
  );

  /* Display: Good Practices List */
  $handler = $view->new_display('panel_pane', 'Good Practices List', 'panel_pane_country_good_practices');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Good Practices';
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
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['load_comments'] = 0;
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|created';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'teaser';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a class="read-more" href="/gender-mainstreaming/countries/!1/good-practices">Browse all Good Practices</a>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Country (field_country) */
  $handler->display->display_options['relationships']['field_country_iso2']['id'] = 'field_country_iso2';
  $handler->display->display_options['relationships']['field_country_iso2']['table'] = 'field_data_field_country';
  $handler->display->display_options['relationships']['field_country_iso2']['field'] = 'field_country_iso2';
  $handler->display->display_options['relationships']['field_country_iso2']['required'] = TRUE;
  /* Relationship: Content: Topic (field_topic) */
  $handler->display->display_options['relationships']['field_topic_tid']['id'] = 'field_topic_tid';
  $handler->display->display_options['relationships']['field_topic_tid']['table'] = 'field_data_field_topic';
  $handler->display->display_options['relationships']['field_topic_tid']['field'] = 'field_topic_tid';
  $handler->display->display_options['relationships']['field_topic_tid']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
    'good_practice' => 'good_practice',
  );
  /* Filter criterion: Taxonomy term: Topic category (field_topic_category) */
  $handler->display->display_options['filters']['field_topic_category_tid']['id'] = 'field_topic_category_tid';
  $handler->display->display_options['filters']['field_topic_category_tid']['table'] = 'field_data_field_topic_category';
  $handler->display->display_options['filters']['field_topic_category_tid']['field'] = 'field_topic_category_tid';
  $handler->display->display_options['filters']['field_topic_category_tid']['relationship'] = 'field_topic_tid';
  $handler->display->display_options['filters']['field_topic_category_tid']['value'] = array(
    3 => '3',
  );
  $handler->display->display_options['filters']['field_topic_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_topic_category_tid']['vocabulary'] = 'topic_categories';
  $handler->display->display_options['argument_input'] = array(
    'name' => array(
      'type' => 'panel',
      'context' => 'entity:cer.cer_bidirectional',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Countries: Name',
    ),
  );

  /* Display: Resources List */
  $handler = $view->new_display('panel_pane', 'Resources List', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Other resources';
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
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['load_comments'] = 0;
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|created';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'teaser';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a class="read-more" href="/gender-mainstreaming/countries/!1/resources">Browse all Resources</a>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Country (field_country) */
  $handler->display->display_options['relationships']['field_country_iso2']['id'] = 'field_country_iso2';
  $handler->display->display_options['relationships']['field_country_iso2']['table'] = 'field_data_field_country';
  $handler->display->display_options['relationships']['field_country_iso2']['field'] = 'field_country_iso2';
  $handler->display->display_options['relationships']['field_country_iso2']['required'] = TRUE;
  /* Relationship: Content: Topic (field_topic) */
  $handler->display->display_options['relationships']['field_topic_tid']['id'] = 'field_topic_tid';
  $handler->display->display_options['relationships']['field_topic_tid']['table'] = 'field_data_field_topic';
  $handler->display->display_options['relationships']['field_topic_tid']['field'] = 'field_topic_tid';
  $handler->display->display_options['relationships']['field_topic_tid']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Filter criterion: Content: Topic (field_topic) */
  $handler->display->display_options['filters']['field_topic_tid']['id'] = 'field_topic_tid';
  $handler->display->display_options['filters']['field_topic_tid']['table'] = 'field_data_field_topic';
  $handler->display->display_options['filters']['field_topic_tid']['field'] = 'field_topic_tid';
  $handler->display->display_options['filters']['field_topic_tid']['value'] = array(
    624 => '624',
  );
  $handler->display->display_options['filters']['field_topic_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_topic_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_topic_tid']['vocabulary'] = 'topics';
  /* Filter criterion: Content: Type (field_type) */
  $handler->display->display_options['filters']['field_type_tid']['id'] = 'field_type_tid';
  $handler->display->display_options['filters']['field_type_tid']['table'] = 'field_data_field_type';
  $handler->display->display_options['filters']['field_type_tid']['field'] = 'field_type_tid';
  $handler->display->display_options['filters']['field_type_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['field_type_tid']['value'] = array(
    96 => '96',
  );
  $handler->display->display_options['filters']['field_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_type_tid']['vocabulary'] = 'types';
  $handler->display->display_options['argument_input'] = array(
    'name' => array(
      'type' => 'panel',
      'context' => 'entity:cer.cer_bidirectional',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Countries: Name',
    ),
  );

  /* Display: Other Information */
  $handler = $view->new_display('panel_pane', 'Other Information', 'panel_pane_country_additional_information');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Other information on %1';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Other information */
  $handler->display->display_options['fields']['field_other_information']['id'] = 'field_other_information';
  $handler->display->display_options['fields']['field_other_information']['table'] = 'field_data_field_other_information';
  $handler->display->display_options['fields']['field_other_information']['field'] = 'field_other_information';
  $handler->display->display_options['fields']['field_other_information']['label'] = '';
  $handler->display->display_options['fields']['field_other_information']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_other_information']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_other_information']['settings'] = array(
    'edit' => '',
    'delete' => '',
    'add' => '',
    'description' => 0,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_other_information']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_other_information']['multi_type'] = 'ul';
  $handler->display->display_options['fields']['field_other_information']['separator'] = '';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Countries: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'countries_country';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_country_iso2';
  $handler->display->display_options['arguments']['name']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['arguments']['name']['case'] = 'lower';
  $handler->display->display_options['arguments']['name']['path_case'] = 'lower';
  $handler->display->display_options['arguments']['name']['transform_dash'] = TRUE;
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
    'country_overview' => 'country_overview',
  );
  /* Filter criterion: Content: Other information (field_other_information) */
  $handler->display->display_options['filters']['field_other_information_value']['id'] = 'field_other_information_value';
  $handler->display->display_options['filters']['field_other_information_value']['table'] = 'field_data_field_other_information';
  $handler->display->display_options['filters']['field_other_information_value']['field'] = 'field_other_information_value';
  $handler->display->display_options['filters']['field_other_information_value']['operator'] = 'not empty';
  $handler->display->display_options['argument_input'] = array(
    'name' => array(
      'type' => 'panel',
      'context' => 'entity:cer.cer_bidirectional',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Countries: Name',
    ),
  );

  /* Display: About Tab */
  $handler = $view->new_display('panel_pane', 'About Tab', 'panel_pane_3');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'views_access_callback';
  $handler->display->display_options['access']['views_access_callback'] = 'eige_gender_mainstreaming_environment_access';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['argument_input'] = array(
    'name' => array(
      'type' => 'panel',
      'context' => 'entity:cer.cer_bidirectional',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Countries: Name',
    ),
  );

  /* Display: Methods and Tools Tab */
  $handler = $view->new_display('panel_pane', 'Methods and Tools Tab', 'panel_pane_4');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Methods and tools */
  $handler->display->display_options['fields']['field_methods_tools']['id'] = 'field_methods_tools';
  $handler->display->display_options['fields']['field_methods_tools']['table'] = 'field_data_field_methods_tools';
  $handler->display->display_options['fields']['field_methods_tools']['field'] = 'field_methods_tools';
  $handler->display->display_options['fields']['field_methods_tools']['label'] = '';
  $handler->display->display_options['fields']['field_methods_tools']['element_label_colon'] = FALSE;
  $handler->display->display_options['argument_input'] = array(
    'name' => array(
      'type' => 'panel',
      'context' => 'entity:cer.cer_bidirectional',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Countries: Name',
    ),
  );

  /* Display: Structures Tab */
  $handler = $view->new_display('panel_pane', 'Structures Tab', 'panel_pane_5');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Structures */
  $handler->display->display_options['fields']['field_structures']['id'] = 'field_structures';
  $handler->display->display_options['fields']['field_structures']['table'] = 'field_data_field_structures';
  $handler->display->display_options['fields']['field_structures']['field'] = 'field_structures';
  $handler->display->display_options['fields']['field_structures']['label'] = '';
  $handler->display->display_options['fields']['field_structures']['element_label_colon'] = FALSE;
  $handler->display->display_options['argument_input'] = array(
    'name' => array(
      'type' => 'panel',
      'context' => 'entity:cer.cer_bidirectional',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Countries: Name',
    ),
  );

  /* Display: Laws and Policies Tab */
  $handler = $view->new_display('panel_pane', 'Laws and Policies Tab', 'panel_pane_8');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Laws & Policies */
  $handler->display->display_options['fields']['field_laws_policies']['id'] = 'field_laws_policies';
  $handler->display->display_options['fields']['field_laws_policies']['table'] = 'field_data_field_laws_policies';
  $handler->display->display_options['fields']['field_laws_policies']['field'] = 'field_laws_policies';
  $handler->display->display_options['fields']['field_laws_policies']['label'] = '';
  $handler->display->display_options['fields']['field_laws_policies']['element_label_colon'] = FALSE;
  $handler->display->display_options['argument_input'] = array(
    'name' => array(
      'type' => 'panel',
      'context' => 'entity:cer.cer_bidirectional',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Countries: Name',
    ),
  );
  $export['country_profile'] = $view;

  $view = new view();
  $view->name = 'gender_mainstreaming_good_practices';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Gender Mainstreaming Good Practices';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
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
  /* Contextual filter: Countries: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'countries_country';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_country_iso2';
  $handler->display->display_options['arguments']['name']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['arguments']['name']['case'] = 'lower';
  $handler->display->display_options['arguments']['name']['path_case'] = 'lower';
  $handler->display->display_options['arguments']['name']['transform_dash'] = TRUE;
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
    3 => '3',
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
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Good Practices';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
    'good_practice' => 'good_practice',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Taxonomy term: Topic category (field_topic_category) */
  $handler->display->display_options['filters']['field_topic_category_tid']['id'] = 'field_topic_category_tid';
  $handler->display->display_options['filters']['field_topic_category_tid']['table'] = 'field_data_field_topic_category';
  $handler->display->display_options['filters']['field_topic_category_tid']['field'] = 'field_topic_category_tid';
  $handler->display->display_options['filters']['field_topic_category_tid']['relationship'] = 'field_topic_tid';
  $handler->display->display_options['filters']['field_topic_category_tid']['value'] = array(
    3 => '3',
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
  /* Filter criterion: Country */
  $handler->display->display_options['filters']['name_list']['id'] = 'name_list';
  $handler->display->display_options['filters']['name_list']['table'] = 'countries_country';
  $handler->display->display_options['filters']['name_list']['field'] = 'name_list';
  $handler->display->display_options['filters']['name_list']['relationship'] = 'field_country_iso2';
  $handler->display->display_options['filters']['name_list']['ui_name'] = 'Country';
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
  $handler->display->display_options['path'] = 'gender-mainstreaming/good-practices';

  /* Display: Good Practices Pane */
  $handler = $view->new_display('panel_pane', 'Good Practices Pane', 'panel_pane_gm_good_practices');
  $handler->display->display_options['argument_input'] = array(
    'name' => array(
      'type' => 'panel',
      'context' => 'entity:cer.cer_bidirectional',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Countries: Name',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';

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
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
    'good_practice' => 'good_practice',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Taxonomy term: Topic category (field_topic_category) */
  $handler->display->display_options['filters']['field_topic_category_tid']['id'] = 'field_topic_category_tid';
  $handler->display->display_options['filters']['field_topic_category_tid']['table'] = 'field_data_field_topic_category';
  $handler->display->display_options['filters']['field_topic_category_tid']['field'] = 'field_topic_category_tid';
  $handler->display->display_options['filters']['field_topic_category_tid']['relationship'] = 'field_topic_tid';
  $handler->display->display_options['filters']['field_topic_category_tid']['value'] = array(
    3 => '3',
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
  $handler->display->display_options['path'] = 'gender-mainstreaming/good-practices/csv';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
    'panel_pane_gm_good_practices' => 0,
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
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
    'good_practice' => 'good_practice',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Taxonomy term: Topic category (field_topic_category) */
  $handler->display->display_options['filters']['field_topic_category_tid']['id'] = 'field_topic_category_tid';
  $handler->display->display_options['filters']['field_topic_category_tid']['table'] = 'field_data_field_topic_category';
  $handler->display->display_options['filters']['field_topic_category_tid']['field'] = 'field_topic_category_tid';
  $handler->display->display_options['filters']['field_topic_category_tid']['relationship'] = 'field_topic_tid';
  $handler->display->display_options['filters']['field_topic_category_tid']['value'] = array(
    3 => '3',
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
  $handler->display->display_options['filters']['name_list']['expose']['label'] = 'Name - list';
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
  $handler->display->display_options['path'] = 'gender-mainstreaming/good-practices/xml';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
    'panel_pane_gm_good_practices' => 0,
  );

  /* Display: CSV data export (pane) */
  $handler = $view->new_display('views_data_export', 'CSV data export (pane)', 'views_data_export_3');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['attach_text'] = 'Export results as CSV';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%timestamp-yyyy-%timestamp-mm-%timestamp-dd-%view-%1-value.csv';
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
  $handler->display->display_options['path'] = 'gender-mainstreaming/countries/%/good-practices/csv';
  $handler->display->display_options['displays'] = array(
    'page' => 0,
    'default' => 0,
    'panel_pane_gm_good_practices' => 'panel_pane_gm_good_practices',
  );

  /* Display: XML data export (pane) */
  $handler = $view->new_display('views_data_export', 'XML data export (pane)', 'views_data_export_4');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  $handler->display->display_options['style_options']['attach_text'] = 'Export results as XML';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%timestamp-yyyy-%timestamp-mm-%timestamp-dd-%view-%1-value.xml';
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
  $handler->display->display_options['path'] = 'gender-mainstreaming/countries/%/good-practices/xml';
  $handler->display->display_options['displays'] = array(
    'page' => 0,
    'default' => 0,
    'panel_pane_gm_good_practices' => 'panel_pane_gm_good_practices',
  );
  $export['gender_mainstreaming_good_practices'] = $view;

  $view = new view();
  $view->name = 'gender_mainstreaming_laws_and_policies';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Gender Mainstreaming Laws and Policies';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'view-with-enhanced-collapsible-filters ';
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
    'field_type_tid' => array(
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
  $handler->display->display_options['pager']['options']['more_button_text'] = 'Load more laws and policies';
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
  $handler->display->display_options['header']['result']['content'] = '<div class="view-results-count"><strong>@total</strong> Laws and Policies found</div>';
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
  /* Contextual filter: Countries: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'countries_country';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_country_iso2';
  $handler->display->display_options['arguments']['name']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['arguments']['name']['case'] = 'lower';
  $handler->display->display_options['arguments']['name']['path_case'] = 'lower';
  $handler->display->display_options['arguments']['name']['transform_dash'] = TRUE;
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
    'resource' => 'resource',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Taxonomy term: Topic category (field_topic_category) */
  $handler->display->display_options['filters']['field_topic_category_tid']['id'] = 'field_topic_category_tid';
  $handler->display->display_options['filters']['field_topic_category_tid']['table'] = 'field_data_field_topic_category';
  $handler->display->display_options['filters']['field_topic_category_tid']['field'] = 'field_topic_category_tid';
  $handler->display->display_options['filters']['field_topic_category_tid']['relationship'] = 'field_topic_tid';
  $handler->display->display_options['filters']['field_topic_category_tid']['value'] = array(
    3 => '3',
  );
  $handler->display->display_options['filters']['field_topic_category_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_topic_category_tid']['vocabulary'] = 'topic_categories';
  /* Filter criterion: Content: Type (field_type) */
  $handler->display->display_options['filters']['field_type_tid']['id'] = 'field_type_tid';
  $handler->display->display_options['filters']['field_type_tid']['table'] = 'field_data_field_type';
  $handler->display->display_options['filters']['field_type_tid']['field'] = 'field_type_tid';
  $handler->display->display_options['filters']['field_type_tid']['value'] = array(
    96 => '96',
  );
  $handler->display->display_options['filters']['field_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_type_tid']['expose']['operator_id'] = 'field_type_tid_op';
  $handler->display->display_options['filters']['field_type_tid']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_type_tid']['expose']['operator'] = 'field_type_tid_op';
  $handler->display->display_options['filters']['field_type_tid']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['field_type_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_type_tid']['vocabulary'] = 'types';
  $handler->display->display_options['filters']['field_type_tid']['error_message'] = FALSE;
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
  /* Filter criterion: Content: Topic (field_topic) */
  $handler->display->display_options['filters']['field_topic_tid']['id'] = 'field_topic_tid';
  $handler->display->display_options['filters']['field_topic_tid']['table'] = 'field_data_field_topic';
  $handler->display->display_options['filters']['field_topic_tid']['field'] = 'field_topic_tid';
  $handler->display->display_options['filters']['field_topic_tid']['value'] = array(
    624 => '624',
  );
  $handler->display->display_options['filters']['field_topic_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_topic_tid']['vocabulary'] = 'topics';

  /* Display: Laws and Policies */
  $handler = $view->new_display('panel_pane', 'Laws and Policies', 'pane_laws_policies');
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
    'method_tool' => 'method_tool',
    'resource' => 'resource',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Type (field_type) */
  $handler->display->display_options['filters']['field_type_tid']['id'] = 'field_type_tid';
  $handler->display->display_options['filters']['field_type_tid']['table'] = 'field_data_field_type';
  $handler->display->display_options['filters']['field_type_tid']['field'] = 'field_type_tid';
  $handler->display->display_options['filters']['field_type_tid']['value'] = array(
    96 => '96',
  );
  $handler->display->display_options['filters']['field_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_type_tid']['expose']['operator_id'] = 'field_type_tid_op';
  $handler->display->display_options['filters']['field_type_tid']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_type_tid']['expose']['operator'] = 'field_type_tid_op';
  $handler->display->display_options['filters']['field_type_tid']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['field_type_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_type_tid']['vocabulary'] = 'types';
  $handler->display->display_options['filters']['field_type_tid']['error_message'] = FALSE;
  /* Filter criterion: Content: Topic (field_topic) */
  $handler->display->display_options['filters']['field_topic_tid']['id'] = 'field_topic_tid';
  $handler->display->display_options['filters']['field_topic_tid']['table'] = 'field_data_field_topic';
  $handler->display->display_options['filters']['field_topic_tid']['field'] = 'field_topic_tid';
  $handler->display->display_options['filters']['field_topic_tid']['value'] = array(
    624 => '624',
  );
  $handler->display->display_options['filters']['field_topic_tid']['group'] = 1;
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
  /* Filter criterion: Global: Populate filters */
  $handler->display->display_options['filters']['populate']['id'] = 'populate';
  $handler->display->display_options['filters']['populate']['table'] = 'views_filters_populate';
  $handler->display->display_options['filters']['populate']['field'] = 'populate';
  $handler->display->display_options['filters']['populate']['group'] = 1;
  $handler->display->display_options['filters']['populate']['exposed'] = TRUE;
  $handler->display->display_options['filters']['populate']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['populate']['expose']['label'] = 'Search Laws and Policies';
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
    'field_type_tid' => 0,
    'field_topic_tid' => 0,
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
  $handler->display->display_options['argument_input'] = array(
    'name' => array(
      'type' => 'panel',
      'context' => 'entity:cer.cer_bidirectional',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Countries: Name',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: CSV data export */
  $handler = $view->new_display('views_data_export', 'CSV data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['attach_text'] = 'Export results as CSV';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%timestamp-yyyy-%timestamp-mm-%timestamp-dd-%view-%1-value.csv';
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
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
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
    'method_tool' => 'method_tool',
    'resource' => 'resource',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Type (field_type) */
  $handler->display->display_options['filters']['field_type_tid']['id'] = 'field_type_tid';
  $handler->display->display_options['filters']['field_type_tid']['table'] = 'field_data_field_type';
  $handler->display->display_options['filters']['field_type_tid']['field'] = 'field_type_tid';
  $handler->display->display_options['filters']['field_type_tid']['value'] = array(
    96 => '96',
  );
  $handler->display->display_options['filters']['field_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_type_tid']['expose']['operator_id'] = 'field_type_tid_op';
  $handler->display->display_options['filters']['field_type_tid']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_type_tid']['expose']['operator'] = 'field_type_tid_op';
  $handler->display->display_options['filters']['field_type_tid']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['field_type_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_type_tid']['vocabulary'] = 'types';
  $handler->display->display_options['filters']['field_type_tid']['error_message'] = FALSE;
  /* Filter criterion: Content: Topic (field_topic) */
  $handler->display->display_options['filters']['field_topic_tid']['id'] = 'field_topic_tid';
  $handler->display->display_options['filters']['field_topic_tid']['table'] = 'field_data_field_topic';
  $handler->display->display_options['filters']['field_topic_tid']['field'] = 'field_topic_tid';
  $handler->display->display_options['filters']['field_topic_tid']['value'] = array(
    624 => '624',
  );
  $handler->display->display_options['filters']['field_topic_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_topic_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_topic_tid']['vocabulary'] = 'topics';
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
  $handler->display->display_options['path'] = 'gender-mainstreaming/countries/%/laws-and-policies/csv';
  $handler->display->display_options['displays'] = array(
    'pane_laws_policies' => 'pane_laws_policies',
    'default' => 0,
  );

  /* Display: XML data export */
  $handler = $view->new_display('views_data_export', 'XML data export', 'views_data_export_2');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  $handler->display->display_options['style_options']['attach_text'] = 'Export results as XML';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%timestamp-yyyy-%timestamp-mm-%timestamp-dd-%view-%1-value.xml';
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
    'field_rsc_source' => 'field_rsc_source',
  );
  $handler->display->display_options['style_options']['cdata_wrapper'] = array(
    'title_field' => 'title_field',
    'field_english_title' => 'field_english_title',
    'field_unofficial_english_title' => 'field_unofficial_english_title',
    'field_rsc_creator_author' => 'field_rsc_creator_author',
    'field_rsc_publisher' => 'field_rsc_publisher',
    'field_rsc_contributor' => 'field_rsc_contributor',
    'field_rsc_reviewer' => 'field_rsc_reviewer',
    'field_rsc_identifier' => 'field_rsc_identifier',
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
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
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
    'method_tool' => 'method_tool',
    'resource' => 'resource',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Type (field_type) */
  $handler->display->display_options['filters']['field_type_tid']['id'] = 'field_type_tid';
  $handler->display->display_options['filters']['field_type_tid']['table'] = 'field_data_field_type';
  $handler->display->display_options['filters']['field_type_tid']['field'] = 'field_type_tid';
  $handler->display->display_options['filters']['field_type_tid']['value'] = array(
    96 => '96',
  );
  $handler->display->display_options['filters']['field_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_type_tid']['expose']['operator_id'] = 'field_type_tid_op';
  $handler->display->display_options['filters']['field_type_tid']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_type_tid']['expose']['operator'] = 'field_type_tid_op';
  $handler->display->display_options['filters']['field_type_tid']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['field_type_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_type_tid']['vocabulary'] = 'types';
  $handler->display->display_options['filters']['field_type_tid']['error_message'] = FALSE;
  /* Filter criterion: Content: Topic (field_topic) */
  $handler->display->display_options['filters']['field_topic_tid']['id'] = 'field_topic_tid';
  $handler->display->display_options['filters']['field_topic_tid']['table'] = 'field_data_field_topic';
  $handler->display->display_options['filters']['field_topic_tid']['field'] = 'field_topic_tid';
  $handler->display->display_options['filters']['field_topic_tid']['value'] = array(
    624 => '624',
  );
  $handler->display->display_options['filters']['field_topic_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_topic_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_topic_tid']['vocabulary'] = 'topics';
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
  $handler->display->display_options['path'] = 'gender-mainstreaming/countries/%/laws-and-policies/xml';
  $handler->display->display_options['displays'] = array(
    'pane_laws_policies' => 'pane_laws_policies',
    'default' => 0,
  );
  $export['gender_mainstreaming_laws_and_policies'] = $view;

  $view = new view();
  $view->name = 'gender_mainstreaming_methods_tools';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Gender Mainstreaming Methods/Tools';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Examples of Methods and tools';
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
  /* Contextual filter: Countries: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'countries_country';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_country_iso2';
  $handler->display->display_options['arguments']['name']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['arguments']['name']['case'] = 'lower';
  $handler->display->display_options['arguments']['name']['path_case'] = 'lower';
  $handler->display->display_options['arguments']['name']['transform_dash'] = TRUE;
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
  /* Filter criterion: Content: Type (field_type) */
  $handler->display->display_options['filters']['field_type_tid']['id'] = 'field_type_tid';
  $handler->display->display_options['filters']['field_type_tid']['table'] = 'field_data_field_type';
  $handler->display->display_options['filters']['field_type_tid']['field'] = 'field_type_tid';
  $handler->display->display_options['filters']['field_type_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['field_type_tid']['value'] = array(
    96 => '96',
  );
  $handler->display->display_options['filters']['field_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_type_tid']['vocabulary'] = 'types';
  /* Filter criterion: Content: Topic (field_topic) */
  $handler->display->display_options['filters']['field_topic_tid']['id'] = 'field_topic_tid';
  $handler->display->display_options['filters']['field_topic_tid']['table'] = 'field_data_field_topic';
  $handler->display->display_options['filters']['field_topic_tid']['field'] = 'field_topic_tid';
  $handler->display->display_options['filters']['field_topic_tid']['value'] = array(
    624 => '624',
  );
  $handler->display->display_options['filters']['field_topic_tid']['group'] = 1;
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
  /* Filter criterion: Content: Sector (field_sector) (reference filter) */
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['id'] = 'field_sector_target_id_entityreference_filter';
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['table'] = 'field_data_field_sector';
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['field'] = 'field_sector_target_id_entityreference_filter';
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['group'] = 1;
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['expose']['operator_id'] = 'field_sector_target_id_entityreference_filter_op';
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['expose']['label'] = 'Sector';
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['expose']['operator'] = 'field_sector_target_id_entityreference_filter_op';
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['expose']['identifier'] = 'st';
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['reference_display'] = 'sectoral_areas:entityreference_1';
  /* Filter criterion: Content: Tool Category (field_category) (reference filter) */
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['id'] = 'field_category_target_id_entityreference_filter';
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['table'] = 'field_data_field_category';
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['field'] = 'field_category_target_id_entityreference_filter';
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['group'] = 1;
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['expose']['operator_id'] = 'field_category_target_id_entityreference_filter_op';
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['expose']['operator'] = 'field_category_target_id_entityreference_filter_op';
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['expose']['identifier'] = 'ct';
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['reference_display'] = 'tool_method_categories:entityreference_1';
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

  /* Display: Country Methods And Tools Pane */
  $handler = $view->new_display('panel_pane', 'Country Methods And Tools Pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['argument_input'] = array(
    'name' => array(
      'type' => 'panel',
      'context' => 'entity:cer.cer_bidirectional',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Countries: Name',
    ),
  );

  /* Display: GM Methods and Tools Page */
  $handler = $view->new_display('page', 'GM Methods and Tools Page', 'page_1');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
    'method_tool' => 'method_tool',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Taxonomy term: Topic category (field_topic_category) */
  $handler->display->display_options['filters']['field_topic_category_tid']['id'] = 'field_topic_category_tid';
  $handler->display->display_options['filters']['field_topic_category_tid']['table'] = 'field_data_field_topic_category';
  $handler->display->display_options['filters']['field_topic_category_tid']['field'] = 'field_topic_category_tid';
  $handler->display->display_options['filters']['field_topic_category_tid']['relationship'] = 'field_topic_tid';
  $handler->display->display_options['filters']['field_topic_category_tid']['value'] = array(
    3 => '3',
  );
  $handler->display->display_options['filters']['field_topic_category_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_topic_category_tid']['expose']['operator_id'] = 'field_topic_category_tid_op';
  $handler->display->display_options['filters']['field_topic_category_tid']['expose']['label'] = 'Topic category (field_topic_category)';
  $handler->display->display_options['filters']['field_topic_category_tid']['expose']['operator'] = 'field_topic_category_tid_op';
  $handler->display->display_options['filters']['field_topic_category_tid']['expose']['identifier'] = 'field_topic_category_tid';
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
  /* Filter criterion: Content: Sector (field_sector) (reference filter) */
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['id'] = 'field_sector_target_id_entityreference_filter';
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['table'] = 'field_data_field_sector';
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['field'] = 'field_sector_target_id_entityreference_filter';
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['group'] = 1;
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['expose']['operator_id'] = 'field_sector_target_id_entityreference_filter_op';
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['expose']['label'] = 'Sector';
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['expose']['operator'] = 'field_sector_target_id_entityreference_filter_op';
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['expose']['identifier'] = 'st';
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['reference_display'] = 'sectoral_areas:entityreference_1';
  /* Filter criterion: Content: Tool Category (field_category) (reference filter) */
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['id'] = 'field_category_target_id_entityreference_filter';
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['table'] = 'field_data_field_category';
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['field'] = 'field_category_target_id_entityreference_filter';
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['group'] = 1;
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['expose']['operator_id'] = 'field_category_target_id_entityreference_filter_op';
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['expose']['operator'] = 'field_category_target_id_entityreference_filter_op';
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['expose']['identifier'] = 'ct';
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['reference_display'] = 'tool_method_categories:entityreference_1';
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
  $handler->display->display_options['path'] = 'gender-mainstreaming/tools-and-methods/examples-of-methods-and-tools';

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
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
    'method_tool' => 'method_tool',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Taxonomy term: Topic category (field_topic_category) */
  $handler->display->display_options['filters']['field_topic_category_tid']['id'] = 'field_topic_category_tid';
  $handler->display->display_options['filters']['field_topic_category_tid']['table'] = 'field_data_field_topic_category';
  $handler->display->display_options['filters']['field_topic_category_tid']['field'] = 'field_topic_category_tid';
  $handler->display->display_options['filters']['field_topic_category_tid']['relationship'] = 'field_topic_tid';
  $handler->display->display_options['filters']['field_topic_category_tid']['value'] = array(
    3 => '3',
  );
  $handler->display->display_options['filters']['field_topic_category_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_topic_category_tid']['expose']['operator_id'] = 'field_topic_category_tid_op';
  $handler->display->display_options['filters']['field_topic_category_tid']['expose']['label'] = 'Topic category (field_topic_category)';
  $handler->display->display_options['filters']['field_topic_category_tid']['expose']['operator'] = 'field_topic_category_tid_op';
  $handler->display->display_options['filters']['field_topic_category_tid']['expose']['identifier'] = 'field_topic_category_tid';
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
  /* Filter criterion: Content: Sector (field_sector) (reference filter) */
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['id'] = 'field_sector_target_id_entityreference_filter';
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['table'] = 'field_data_field_sector';
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['field'] = 'field_sector_target_id_entityreference_filter';
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['group'] = 1;
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['expose']['operator_id'] = 'field_sector_target_id_entityreference_filter_op';
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['expose']['label'] = 'Sector';
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['expose']['operator'] = 'field_sector_target_id_entityreference_filter_op';
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['expose']['identifier'] = 'st';
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['reference_display'] = 'sectoral_areas:entityreference_1';
  /* Filter criterion: Content: Tool Category (field_category) (reference filter) */
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['id'] = 'field_category_target_id_entityreference_filter';
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['table'] = 'field_data_field_category';
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['field'] = 'field_category_target_id_entityreference_filter';
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['group'] = 1;
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['expose']['operator_id'] = 'field_category_target_id_entityreference_filter_op';
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['expose']['operator'] = 'field_category_target_id_entityreference_filter_op';
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['expose']['identifier'] = 'ct';
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['reference_display'] = 'tool_method_categories:entityreference_1';
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
  $handler->display->display_options['path'] = 'gender-mainstreaming/tools-and-methods/examples-of-methods-and-tools/csv';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
    'panel_pane_1' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;

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
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
    'method_tool' => 'method_tool',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Taxonomy term: Topic category (field_topic_category) */
  $handler->display->display_options['filters']['field_topic_category_tid']['id'] = 'field_topic_category_tid';
  $handler->display->display_options['filters']['field_topic_category_tid']['table'] = 'field_data_field_topic_category';
  $handler->display->display_options['filters']['field_topic_category_tid']['field'] = 'field_topic_category_tid';
  $handler->display->display_options['filters']['field_topic_category_tid']['relationship'] = 'field_topic_tid';
  $handler->display->display_options['filters']['field_topic_category_tid']['value'] = array(
    3 => '3',
  );
  $handler->display->display_options['filters']['field_topic_category_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_topic_category_tid']['expose']['operator_id'] = 'field_topic_category_tid_op';
  $handler->display->display_options['filters']['field_topic_category_tid']['expose']['label'] = 'Topic category (field_topic_category)';
  $handler->display->display_options['filters']['field_topic_category_tid']['expose']['operator'] = 'field_topic_category_tid_op';
  $handler->display->display_options['filters']['field_topic_category_tid']['expose']['identifier'] = 'field_topic_category_tid';
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
  /* Filter criterion: Content: Sector (field_sector) (reference filter) */
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['id'] = 'field_sector_target_id_entityreference_filter';
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['table'] = 'field_data_field_sector';
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['field'] = 'field_sector_target_id_entityreference_filter';
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['group'] = 1;
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['expose']['operator_id'] = 'field_sector_target_id_entityreference_filter_op';
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['expose']['label'] = 'Sector';
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['expose']['operator'] = 'field_sector_target_id_entityreference_filter_op';
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['expose']['identifier'] = 'st';
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['reference_display'] = 'sectoral_areas:entityreference_1';
  /* Filter criterion: Content: Tool Category (field_category) (reference filter) */
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['id'] = 'field_category_target_id_entityreference_filter';
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['table'] = 'field_data_field_category';
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['field'] = 'field_category_target_id_entityreference_filter';
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['group'] = 1;
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['expose']['operator_id'] = 'field_category_target_id_entityreference_filter_op';
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['expose']['operator'] = 'field_category_target_id_entityreference_filter_op';
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['expose']['identifier'] = 'ct';
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['reference_display'] = 'tool_method_categories:entityreference_1';
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
  $handler->display->display_options['path'] = 'gender-mainstreaming/tools-and-methods/examples-of-methods-and-tools/xml';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
    'panel_pane_1' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: CSV data export (pane) */
  $handler = $view->new_display('views_data_export', 'CSV data export (pane)', 'views_data_export_3');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['attach_text'] = 'Export results as CSV';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%timestamp-yyyy-%timestamp-mm-%timestamp-dd-%view-%1-value.csv';
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
  $handler->display->display_options['path'] = 'gender-mainstreaming/countries/%/methods-and-tools/csv';
  $handler->display->display_options['displays'] = array(
    'panel_pane_1' => 'panel_pane_1',
    'default' => 0,
    'page_1' => 0,
  );

  /* Display: XML data export (pane) */
  $handler = $view->new_display('views_data_export', 'XML data export (pane)', 'views_data_export_4');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  $handler->display->display_options['style_options']['attach_text'] = 'Export results as XML';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%timestamp-yyyy-%timestamp-mm-%timestamp-dd-%view-%1-value.xml';
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
  $handler->display->display_options['path'] = 'gender-mainstreaming/countries/%/methods-and-tools/xml';
  $handler->display->display_options['displays'] = array(
    'panel_pane_1' => 'panel_pane_1',
    'default' => 0,
    'page_1' => 0,
  );
  $export['gender_mainstreaming_methods_tools'] = $view;

  $view = new view();
  $view->name = 'gender_mainstreaming_resources';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Gender Mainstreaming Resources';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'view-with-enhanced-collapsible-filters ';
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
    'field_type_tid' => array(
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
  /* Contextual filter: Countries: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'countries_country';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_country_iso2';
  $handler->display->display_options['arguments']['name']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['arguments']['name']['case'] = 'lower';
  $handler->display->display_options['arguments']['name']['path_case'] = 'lower';
  $handler->display->display_options['arguments']['name']['transform_dash'] = TRUE;
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
  /* Filter criterion: Content: Type (field_type) */
  $handler->display->display_options['filters']['field_type_tid_1']['id'] = 'field_type_tid_1';
  $handler->display->display_options['filters']['field_type_tid_1']['table'] = 'field_data_field_type';
  $handler->display->display_options['filters']['field_type_tid_1']['field'] = 'field_type_tid';
  $handler->display->display_options['filters']['field_type_tid_1']['operator'] = 'not';
  $handler->display->display_options['filters']['field_type_tid_1']['value'] = array(
    96 => '96',
  );
  $handler->display->display_options['filters']['field_type_tid_1']['group'] = 1;
  $handler->display->display_options['filters']['field_type_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['field_type_tid_1']['vocabulary'] = 'types';
  /* Filter criterion: Content: Topic (field_topic) */
  $handler->display->display_options['filters']['field_topic_tid']['id'] = 'field_topic_tid';
  $handler->display->display_options['filters']['field_topic_tid']['table'] = 'field_data_field_topic';
  $handler->display->display_options['filters']['field_topic_tid']['field'] = 'field_topic_tid';
  $handler->display->display_options['filters']['field_topic_tid']['value'] = array(
    624 => '624',
  );
  $handler->display->display_options['filters']['field_topic_tid']['group'] = 1;
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
  /* Filter criterion: Content: Type (field_type) */
  $handler->display->display_options['filters']['field_type_tid']['id'] = 'field_type_tid';
  $handler->display->display_options['filters']['field_type_tid']['table'] = 'field_data_field_type';
  $handler->display->display_options['filters']['field_type_tid']['field'] = 'field_type_tid';
  $handler->display->display_options['filters']['field_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_type_tid']['expose']['operator_id'] = 'field_type_tid_op';
  $handler->display->display_options['filters']['field_type_tid']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_type_tid']['expose']['operator'] = 'field_type_tid_op';
  $handler->display->display_options['filters']['field_type_tid']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['field_type_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_type_tid']['vocabulary'] = 'types';
  $handler->display->display_options['filters']['field_type_tid']['error_message'] = FALSE;
  /* Filter criterion: Content: Sector (field_sector) (reference filter) */
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['id'] = 'field_sector_target_id_entityreference_filter';
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['table'] = 'field_data_field_sector';
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['field'] = 'field_sector_target_id_entityreference_filter';
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['group'] = 1;
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['expose']['operator_id'] = 'field_sector_target_id_entityreference_filter_op';
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['expose']['label'] = 'Sector';
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['expose']['operator'] = 'field_sector_target_id_entityreference_filter_op';
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['expose']['identifier'] = 'sector';
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['reference_display'] = 'sectoral_areas:entityreference_1';
  /* Filter criterion: Content: Tool Category (field_category) (reference filter) */
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['id'] = 'field_category_target_id_entityreference_filter';
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['table'] = 'field_data_field_category';
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['field'] = 'field_category_target_id_entityreference_filter';
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['group'] = 1;
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['expose']['operator_id'] = 'field_category_target_id_entityreference_filter_op';
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['expose']['operator'] = 'field_category_target_id_entityreference_filter_op';
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['expose']['identifier'] = 'category';
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['reference_display'] = 'tool_method_categories:entityreference_1';
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

  /* Display: Country Resources Pane */
  $handler = $view->new_display('panel_pane', 'Country Resources Pane', 'panel_pane_gm_resources');
  $handler->display->display_options['argument_input'] = array(
    'name' => array(
      'type' => 'panel',
      'context' => 'entity:cer.cer_bidirectional',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Countries: Name',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: GM Resources Page */
  $handler = $view->new_display('page', 'GM Resources Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Resources';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
    'resource' => 'resource',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Taxonomy term: Topic category (field_topic_category) */
  $handler->display->display_options['filters']['field_topic_category_tid']['id'] = 'field_topic_category_tid';
  $handler->display->display_options['filters']['field_topic_category_tid']['table'] = 'field_data_field_topic_category';
  $handler->display->display_options['filters']['field_topic_category_tid']['field'] = 'field_topic_category_tid';
  $handler->display->display_options['filters']['field_topic_category_tid']['relationship'] = 'field_topic_tid';
  $handler->display->display_options['filters']['field_topic_category_tid']['value'] = array(
    3 => '3',
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
  /* Filter criterion: Content: Type (field_type) */
  $handler->display->display_options['filters']['field_type_tid']['id'] = 'field_type_tid';
  $handler->display->display_options['filters']['field_type_tid']['table'] = 'field_data_field_type';
  $handler->display->display_options['filters']['field_type_tid']['field'] = 'field_type_tid';
  $handler->display->display_options['filters']['field_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_type_tid']['expose']['operator_id'] = 'field_type_tid_op';
  $handler->display->display_options['filters']['field_type_tid']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_type_tid']['expose']['operator'] = 'field_type_tid_op';
  $handler->display->display_options['filters']['field_type_tid']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['field_type_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_type_tid']['vocabulary'] = 'types';
  $handler->display->display_options['filters']['field_type_tid']['error_message'] = FALSE;
  /* Filter criterion: Content: Sector (field_sector) (reference filter) */
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['id'] = 'field_sector_target_id_entityreference_filter';
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['table'] = 'field_data_field_sector';
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['field'] = 'field_sector_target_id_entityreference_filter';
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['group'] = 1;
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['expose']['operator_id'] = 'field_sector_target_id_entityreference_filter_op';
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['expose']['label'] = 'Sector';
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['expose']['operator'] = 'field_sector_target_id_entityreference_filter_op';
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['expose']['identifier'] = 'sector';
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['reference_display'] = 'sectoral_areas:entityreference_1';
  /* Filter criterion: Content: Tool Category (field_category) (reference filter) */
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['id'] = 'field_category_target_id_entityreference_filter';
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['table'] = 'field_data_field_category';
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['field'] = 'field_category_target_id_entityreference_filter';
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['group'] = 1;
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['expose']['operator_id'] = 'field_category_target_id_entityreference_filter_op';
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['expose']['operator'] = 'field_category_target_id_entityreference_filter_op';
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['expose']['identifier'] = 'category';
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['reference_display'] = 'tool_method_categories:entityreference_1';
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
  $handler->display->display_options['path'] = 'gender-mainstreaming/tools-and-methods/resources';

  /* Display: CSV data export */
  $handler = $view->new_display('views_data_export', 'CSV data export', 'views_data_export_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Resources';
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
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
    'resource' => 'resource',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Taxonomy term: Topic category (field_topic_category) */
  $handler->display->display_options['filters']['field_topic_category_tid']['id'] = 'field_topic_category_tid';
  $handler->display->display_options['filters']['field_topic_category_tid']['table'] = 'field_data_field_topic_category';
  $handler->display->display_options['filters']['field_topic_category_tid']['field'] = 'field_topic_category_tid';
  $handler->display->display_options['filters']['field_topic_category_tid']['relationship'] = 'field_topic_tid';
  $handler->display->display_options['filters']['field_topic_category_tid']['value'] = array(
    3 => '3',
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
  /* Filter criterion: Content: Type (field_type) */
  $handler->display->display_options['filters']['field_type_tid']['id'] = 'field_type_tid';
  $handler->display->display_options['filters']['field_type_tid']['table'] = 'field_data_field_type';
  $handler->display->display_options['filters']['field_type_tid']['field'] = 'field_type_tid';
  $handler->display->display_options['filters']['field_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_type_tid']['expose']['operator_id'] = 'field_type_tid_op';
  $handler->display->display_options['filters']['field_type_tid']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_type_tid']['expose']['operator'] = 'field_type_tid_op';
  $handler->display->display_options['filters']['field_type_tid']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['field_type_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_type_tid']['vocabulary'] = 'types';
  $handler->display->display_options['filters']['field_type_tid']['error_message'] = FALSE;
  /* Filter criterion: Content: Sector (field_sector) (reference filter) */
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['id'] = 'field_sector_target_id_entityreference_filter';
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['table'] = 'field_data_field_sector';
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['field'] = 'field_sector_target_id_entityreference_filter';
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['group'] = 1;
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['expose']['operator_id'] = 'field_sector_target_id_entityreference_filter_op';
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['expose']['label'] = 'Sector';
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['expose']['operator'] = 'field_sector_target_id_entityreference_filter_op';
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['expose']['identifier'] = 'sector';
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['reference_display'] = 'sectoral_areas:entityreference_1';
  /* Filter criterion: Content: Tool Category (field_category) (reference filter) */
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['id'] = 'field_category_target_id_entityreference_filter';
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['table'] = 'field_data_field_category';
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['field'] = 'field_category_target_id_entityreference_filter';
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['group'] = 1;
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['expose']['operator_id'] = 'field_category_target_id_entityreference_filter_op';
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['expose']['operator'] = 'field_category_target_id_entityreference_filter_op';
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['expose']['identifier'] = 'category';
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['reference_display'] = 'tool_method_categories:entityreference_1';
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
  $handler->display->display_options['path'] = 'gender-mainstreaming/tools-and-methods/resources/csv';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
    'panel_pane_gm_resources' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: XML data export */
  $handler = $view->new_display('views_data_export', 'XML data export', 'views_data_export_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Resources';
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
    'field_keywords' => 'field_keywords',
    'body' => 'body',
    'field_additional_information' => 'field_additional_information',
    'field_rsc_source' => 'field_rsc_source',
  );
  $handler->display->display_options['style_options']['cdata_wrapper'] = array(
    'title_field' => 'title_field',
    'field_english_title' => 'field_english_title',
    'field_unofficial_english_title' => 'field_unofficial_english_title',
    'field_rsc_creator_author' => 'field_rsc_creator_author',
    'field_rsc_publisher' => 'field_rsc_publisher',
    'field_rsc_contributor' => 'field_rsc_contributor',
    'field_rsc_reviewer' => 'field_rsc_reviewer',
    'field_rsc_identifier' => 'field_rsc_identifier',
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
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
    'resource' => 'resource',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Taxonomy term: Topic category (field_topic_category) */
  $handler->display->display_options['filters']['field_topic_category_tid']['id'] = 'field_topic_category_tid';
  $handler->display->display_options['filters']['field_topic_category_tid']['table'] = 'field_data_field_topic_category';
  $handler->display->display_options['filters']['field_topic_category_tid']['field'] = 'field_topic_category_tid';
  $handler->display->display_options['filters']['field_topic_category_tid']['relationship'] = 'field_topic_tid';
  $handler->display->display_options['filters']['field_topic_category_tid']['value'] = array(
    3 => '3',
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
  /* Filter criterion: Content: Type (field_type) */
  $handler->display->display_options['filters']['field_type_tid']['id'] = 'field_type_tid';
  $handler->display->display_options['filters']['field_type_tid']['table'] = 'field_data_field_type';
  $handler->display->display_options['filters']['field_type_tid']['field'] = 'field_type_tid';
  $handler->display->display_options['filters']['field_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_type_tid']['expose']['operator_id'] = 'field_type_tid_op';
  $handler->display->display_options['filters']['field_type_tid']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_type_tid']['expose']['operator'] = 'field_type_tid_op';
  $handler->display->display_options['filters']['field_type_tid']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['field_type_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_type_tid']['vocabulary'] = 'types';
  $handler->display->display_options['filters']['field_type_tid']['error_message'] = FALSE;
  /* Filter criterion: Content: Sector (field_sector) (reference filter) */
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['id'] = 'field_sector_target_id_entityreference_filter';
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['table'] = 'field_data_field_sector';
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['field'] = 'field_sector_target_id_entityreference_filter';
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['group'] = 1;
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['expose']['operator_id'] = 'field_sector_target_id_entityreference_filter_op';
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['expose']['label'] = 'Sector';
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['expose']['operator'] = 'field_sector_target_id_entityreference_filter_op';
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['expose']['identifier'] = 'sector';
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_sector_target_id_entityreference_filter']['reference_display'] = 'sectoral_areas:entityreference_1';
  /* Filter criterion: Content: Tool Category (field_category) (reference filter) */
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['id'] = 'field_category_target_id_entityreference_filter';
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['table'] = 'field_data_field_category';
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['field'] = 'field_category_target_id_entityreference_filter';
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['group'] = 1;
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['expose']['operator_id'] = 'field_category_target_id_entityreference_filter_op';
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['expose']['operator'] = 'field_category_target_id_entityreference_filter_op';
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['expose']['identifier'] = 'category';
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_category_target_id_entityreference_filter']['reference_display'] = 'tool_method_categories:entityreference_1';
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
  $handler->display->display_options['path'] = 'gender-mainstreaming/tools-and-methods/resources/xml';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
    'panel_pane_gm_resources' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: CSV data export (pane) */
  $handler = $view->new_display('views_data_export', 'CSV data export (pane)', 'views_data_export_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Resources';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['attach_text'] = 'Export results as CSV';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%timestamp-yyyy-%timestamp-mm-%timestamp-dd-%view-%1-value.csv';
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
  $handler->display->display_options['path'] = 'gender-mainstreaming/countries/%/resources/csv';
  $handler->display->display_options['displays'] = array(
    'panel_pane_gm_resources' => 'panel_pane_gm_resources',
    'default' => 0,
    'page_1' => 0,
  );

  /* Display: XML data export (pane) */
  $handler = $view->new_display('views_data_export', 'XML data export (pane)', 'views_data_export_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Resources';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  $handler->display->display_options['style_options']['attach_text'] = 'Export results as XML';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%timestamp-yyyy-%timestamp-mm-%timestamp-dd-%view-%1-value.xml';
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
    'title_field' => 'title_field',
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
  $handler->display->display_options['path'] = 'gender-mainstreaming/countries/%/resources/xml';
  $handler->display->display_options['displays'] = array(
    'panel_pane_gm_resources' => 'panel_pane_gm_resources',
    'default' => 0,
    'page_1' => 0,
  );
  $export['gender_mainstreaming_resources'] = $view;

  $view = new view();
  $view->name = 'gender_mainstreaming_structures';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Gender Mainstreaming Structures';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = ' view-with-enhanced-collapsible-filters';
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
  $handler->display->display_options['pager']['options']['more_button_text'] = 'Load more structures';
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
  $handler->display->display_options['header']['result']['content'] = '<div class="view-results-count"><strong>@total</strong> Structures found</div>';
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
  /* Relationship: Content: Topic (field_topic) */
  $handler->display->display_options['relationships']['field_topic_tid']['id'] = 'field_topic_tid';
  $handler->display->display_options['relationships']['field_topic_tid']['table'] = 'field_data_field_topic';
  $handler->display->display_options['relationships']['field_topic_tid']['field'] = 'field_topic_tid';
  $handler->display->display_options['relationships']['field_topic_tid']['label'] = 'Topic';
  $handler->display->display_options['relationships']['field_topic_tid']['required'] = TRUE;
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
  /* Contextual filter: Countries: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'countries_country';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_country_iso2';
  $handler->display->display_options['arguments']['name']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['arguments']['name']['case'] = 'lower';
  $handler->display->display_options['arguments']['name']['path_case'] = 'lower';
  $handler->display->display_options['arguments']['name']['transform_dash'] = TRUE;
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
    'structure' => 'structure',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Topic (field_topic) */
  $handler->display->display_options['filters']['field_topic_tid']['id'] = 'field_topic_tid';
  $handler->display->display_options['filters']['field_topic_tid']['table'] = 'field_data_field_topic';
  $handler->display->display_options['filters']['field_topic_tid']['field'] = 'field_topic_tid';
  $handler->display->display_options['filters']['field_topic_tid']['value'] = array(
    624 => '624',
  );
  $handler->display->display_options['filters']['field_topic_tid']['group'] = 1;
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
  /* Filter criterion: Global: Populate filters */
  $handler->display->display_options['filters']['populate']['id'] = 'populate';
  $handler->display->display_options['filters']['populate']['table'] = 'views_filters_populate';
  $handler->display->display_options['filters']['populate']['field'] = 'populate';
  $handler->display->display_options['filters']['populate']['group'] = 1;
  $handler->display->display_options['filters']['populate']['exposed'] = TRUE;
  $handler->display->display_options['filters']['populate']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['populate']['expose']['label'] = 'Search Structures';
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
    'field_topic_category_tid' => 0,
    'field_topic_tid' => 0,
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

  /* Display: Country Structures Pane */
  $handler = $view->new_display('panel_pane', 'Country Structures Pane', 'panel_pane_gm_structures');
  $handler->display->display_options['argument_input'] = array(
    'name' => array(
      'type' => 'panel',
      'context' => 'entity:cer.cer_bidirectional',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Countries: Name',
    ),
  );

  /* Display: Reconciliation Structures Page */
  $handler = $view->new_display('page', 'Reconciliation Structures Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Structures';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'views_access_callback';
  $handler->display->display_options['access']['views_access_callback'] = 'eige_gender_mainstreaming_environment_access';
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
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
    'structure' => 'structure',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Topic (field_topic) */
  $handler->display->display_options['filters']['field_topic_tid']['id'] = 'field_topic_tid';
  $handler->display->display_options['filters']['field_topic_tid']['table'] = 'field_data_field_topic';
  $handler->display->display_options['filters']['field_topic_tid']['field'] = 'field_topic_tid';
  $handler->display->display_options['filters']['field_topic_tid']['value'] = array(
    629 => '629',
  );
  $handler->display->display_options['filters']['field_topic_tid']['group'] = 1;
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
  /* Filter criterion: Global: Populate filters */
  $handler->display->display_options['filters']['populate']['id'] = 'populate';
  $handler->display->display_options['filters']['populate']['table'] = 'views_filters_populate';
  $handler->display->display_options['filters']['populate']['field'] = 'populate';
  $handler->display->display_options['filters']['populate']['group'] = 1;
  $handler->display->display_options['filters']['populate']['exposed'] = TRUE;
  $handler->display->display_options['filters']['populate']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['populate']['expose']['label'] = 'Search Structures';
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
    'field_topic_category_tid' => 0,
    'field_topic_tid' => 0,
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
  $handler->display->display_options['path'] = 'gender-mainstreaming/sectoral-areas/employment/structures';

  /* Display: CSV data export (Reconciliation) */
  $handler = $view->new_display('views_data_export', 'CSV data export (Reconciliation)', 'views_data_export_1');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'views_access_callback';
  $handler->display->display_options['access']['views_access_callback'] = 'eige_gender_mainstreaming_environment_access';
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
  /* Field: Content: Native title */
  $handler->display->display_options['fields']['field_native_title']['id'] = 'field_native_title';
  $handler->display->display_options['fields']['field_native_title']['table'] = 'field_data_field_native_title';
  $handler->display->display_options['fields']['field_native_title']['field'] = 'field_native_title';
  $handler->display->display_options['fields']['field_native_title']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_native_title']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_native_title']['type'] = 'text_plain';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_structure_type']['id'] = 'field_structure_type';
  $handler->display->display_options['fields']['field_structure_type']['table'] = 'field_data_field_structure_type';
  $handler->display->display_options['fields']['field_structure_type']['field'] = 'field_structure_type';
  $handler->display->display_options['fields']['field_structure_type']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_structure_type']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_structure_type']['type'] = 'ds_taxonomy_separator_localized';
  /* Field: Content: Topic */
  $handler->display->display_options['fields']['field_topic']['id'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic']['table'] = 'field_data_field_topic';
  $handler->display->display_options['fields']['field_topic']['field'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_topic']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_topic']['type'] = 'ds_taxonomy_separator_localized';
  /* Field: Content: Country */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_country']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_country']['type'] = 'country_default_i18n';
  /* Field: Content: Scope */
  $handler->display->display_options['fields']['field_scope']['id'] = 'field_scope';
  $handler->display->display_options['fields']['field_scope']['table'] = 'field_data_field_scope';
  $handler->display->display_options['fields']['field_scope']['field'] = 'field_scope';
  $handler->display->display_options['fields']['field_scope']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_scope']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_scope']['type'] = 'ds_taxonomy_separator_localized';
  /* Field: Content: Areas of Intervention */
  $handler->display->display_options['fields']['field_areas_of_intervention']['id'] = 'field_areas_of_intervention';
  $handler->display->display_options['fields']['field_areas_of_intervention']['table'] = 'field_data_field_areas_of_intervention';
  $handler->display->display_options['fields']['field_areas_of_intervention']['field'] = 'field_areas_of_intervention';
  $handler->display->display_options['fields']['field_areas_of_intervention']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_areas_of_intervention']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_areas_of_intervention']['type'] = 'text_plain';
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
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_structure_address']['id'] = 'field_structure_address';
  $handler->display->display_options['fields']['field_structure_address']['table'] = 'field_data_field_structure_address';
  $handler->display->display_options['fields']['field_structure_address']['field'] = 'field_structure_address';
  $handler->display->display_options['fields']['field_structure_address']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_structure_address']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_structure_address']['type'] = 'text_plain';
  /* Field: Content: Email(s) */
  $handler->display->display_options['fields']['field_structure_email']['id'] = 'field_structure_email';
  $handler->display->display_options['fields']['field_structure_email']['table'] = 'field_data_field_structure_email';
  $handler->display->display_options['fields']['field_structure_email']['field'] = 'field_structure_email';
  $handler->display->display_options['fields']['field_structure_email']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_structure_email']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_structure_email']['type'] = 'email_plain';
  $handler->display->display_options['fields']['field_structure_email']['delta_offset'] = '0';
  /* Field: Content: Phone number */
  $handler->display->display_options['fields']['field_structure_phone']['id'] = 'field_structure_phone';
  $handler->display->display_options['fields']['field_structure_phone']['table'] = 'field_data_field_structure_phone';
  $handler->display->display_options['fields']['field_structure_phone']['field'] = 'field_structure_phone';
  $handler->display->display_options['fields']['field_structure_phone']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_structure_phone']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_structure_phone']['type'] = 'text_plain';
  /* Field: Content: Contact person name */
  $handler->display->display_options['fields']['field_contact_person_name']['id'] = 'field_contact_person_name';
  $handler->display->display_options['fields']['field_contact_person_name']['table'] = 'field_data_field_contact_person_name';
  $handler->display->display_options['fields']['field_contact_person_name']['field'] = 'field_contact_person_name';
  $handler->display->display_options['fields']['field_contact_person_name']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_contact_person_name']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_contact_person_name']['type'] = 'text_plain';
  /* Field: Content: Contact person job title */
  $handler->display->display_options['fields']['field_contact_person_job_title']['id'] = 'field_contact_person_job_title';
  $handler->display->display_options['fields']['field_contact_person_job_title']['table'] = 'field_data_field_contact_person_job_title';
  $handler->display->display_options['fields']['field_contact_person_job_title']['field'] = 'field_contact_person_job_title';
  $handler->display->display_options['fields']['field_contact_person_job_title']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_contact_person_job_title']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_contact_person_job_title']['type'] = 'text_plain';
  /* Field: Content: Contact person description */
  $handler->display->display_options['fields']['field_contact_person_description']['id'] = 'field_contact_person_description';
  $handler->display->display_options['fields']['field_contact_person_description']['table'] = 'field_data_field_contact_person_description';
  $handler->display->display_options['fields']['field_contact_person_description']['field'] = 'field_contact_person_description';
  $handler->display->display_options['fields']['field_contact_person_description']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_contact_person_description']['alter']['nl2br'] = TRUE;
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_structure_website']['id'] = 'field_structure_website';
  $handler->display->display_options['fields']['field_structure_website']['table'] = 'field_data_field_structure_website';
  $handler->display->display_options['fields']['field_structure_website']['field'] = 'field_structure_website';
  $handler->display->display_options['fields']['field_structure_website']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_structure_website']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_structure_website']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_structure_website']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_structure_website']['delta_offset'] = '0';
  /* Field: Content: Facebook */
  $handler->display->display_options['fields']['field_structure_facebook']['id'] = 'field_structure_facebook';
  $handler->display->display_options['fields']['field_structure_facebook']['table'] = 'field_data_field_structure_facebook';
  $handler->display->display_options['fields']['field_structure_facebook']['field'] = 'field_structure_facebook';
  $handler->display->display_options['fields']['field_structure_facebook']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_structure_facebook']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_structure_facebook']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_structure_facebook']['type'] = 'link_plain';
  /* Field: Content: Twitter */
  $handler->display->display_options['fields']['field_structure_twitter']['id'] = 'field_structure_twitter';
  $handler->display->display_options['fields']['field_structure_twitter']['table'] = 'field_data_field_structure_twitter';
  $handler->display->display_options['fields']['field_structure_twitter']['field'] = 'field_structure_twitter';
  $handler->display->display_options['fields']['field_structure_twitter']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_structure_twitter']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_structure_twitter']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_structure_twitter']['type'] = 'link_plain';
  /* Field: Content: Skype */
  $handler->display->display_options['fields']['field_structure_skype']['id'] = 'field_structure_skype';
  $handler->display->display_options['fields']['field_structure_skype']['table'] = 'field_data_field_structure_skype';
  $handler->display->display_options['fields']['field_structure_skype']['field'] = 'field_structure_skype';
  $handler->display->display_options['fields']['field_structure_skype']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_structure_skype']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_structure_skype']['type'] = 'text_plain';
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
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
    'structure' => 'structure',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Topic (field_topic) */
  $handler->display->display_options['filters']['field_topic_tid']['id'] = 'field_topic_tid';
  $handler->display->display_options['filters']['field_topic_tid']['table'] = 'field_data_field_topic';
  $handler->display->display_options['filters']['field_topic_tid']['field'] = 'field_topic_tid';
  $handler->display->display_options['filters']['field_topic_tid']['value'] = array(
    629 => '629',
  );
  $handler->display->display_options['filters']['field_topic_tid']['group'] = 1;
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
  /* Filter criterion: Global: Populate filters */
  $handler->display->display_options['filters']['populate']['id'] = 'populate';
  $handler->display->display_options['filters']['populate']['table'] = 'views_filters_populate';
  $handler->display->display_options['filters']['populate']['field'] = 'populate';
  $handler->display->display_options['filters']['populate']['group'] = 1;
  $handler->display->display_options['filters']['populate']['exposed'] = TRUE;
  $handler->display->display_options['filters']['populate']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['populate']['expose']['label'] = 'Search Structures';
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
    'field_topic_category_tid' => 0,
    'field_topic_tid' => 0,
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
  $handler->display->display_options['path'] = 'gender-mainstreaming/sectoral-areas/employment/structures/csv';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
    'panel_pane_gm_structures' => 0,
  );

  /* Display: XML data export (Reconciliation) */
  $handler = $view->new_display('views_data_export', 'XML data export (Reconciliation)', 'views_data_export_2');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'views_access_callback';
  $handler->display->display_options['access']['views_access_callback'] = 'eige_gender_mainstreaming_environment_access';
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
    'field_contact_person_description' => 'field_contact_person_description',
  );
  $handler->display->display_options['style_options']['cdata_wrapper'] = array(
    'title_field' => 'title_field',
    'field_native_title' => 'field_native_title',
    'field_areas_of_intervention' => 'field_areas_of_intervention',
    'field_keywords' => 'field_keywords',
    'body' => 'body',
    'field_structure_address' => 'field_structure_address',
    'field_structure_email' => 'field_structure_email',
    'field_structure_phone' => 'field_structure_phone',
    'field_contact_person_name' => 'field_contact_person_name',
    'field_contact_person_job_title' => 'field_contact_person_job_title',
    'field_contact_person_description' => 'field_contact_person_description',
    'field_structure_website' => 'field_structure_website',
    'field_structure_facebook' => 'field_structure_facebook',
    'field_structure_twitter' => 'field_structure_twitter',
    'field_structure_skype' => 'field_structure_skype',
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
  /* Field: Content: Native title */
  $handler->display->display_options['fields']['field_native_title']['id'] = 'field_native_title';
  $handler->display->display_options['fields']['field_native_title']['table'] = 'field_data_field_native_title';
  $handler->display->display_options['fields']['field_native_title']['field'] = 'field_native_title';
  $handler->display->display_options['fields']['field_native_title']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_native_title']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_native_title']['type'] = 'text_plain';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_structure_type']['id'] = 'field_structure_type';
  $handler->display->display_options['fields']['field_structure_type']['table'] = 'field_data_field_structure_type';
  $handler->display->display_options['fields']['field_structure_type']['field'] = 'field_structure_type';
  $handler->display->display_options['fields']['field_structure_type']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_structure_type']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_structure_type']['type'] = 'ds_taxonomy_separator_localized';
  /* Field: Content: Topic */
  $handler->display->display_options['fields']['field_topic']['id'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic']['table'] = 'field_data_field_topic';
  $handler->display->display_options['fields']['field_topic']['field'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_topic']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_topic']['type'] = 'ds_taxonomy_separator_localized';
  /* Field: Content: Country */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_country']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_country']['type'] = 'country_default_i18n';
  /* Field: Content: Scope */
  $handler->display->display_options['fields']['field_scope']['id'] = 'field_scope';
  $handler->display->display_options['fields']['field_scope']['table'] = 'field_data_field_scope';
  $handler->display->display_options['fields']['field_scope']['field'] = 'field_scope';
  $handler->display->display_options['fields']['field_scope']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_scope']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_scope']['type'] = 'ds_taxonomy_separator_localized';
  /* Field: Content: Areas of Intervention */
  $handler->display->display_options['fields']['field_areas_of_intervention']['id'] = 'field_areas_of_intervention';
  $handler->display->display_options['fields']['field_areas_of_intervention']['table'] = 'field_data_field_areas_of_intervention';
  $handler->display->display_options['fields']['field_areas_of_intervention']['field'] = 'field_areas_of_intervention';
  $handler->display->display_options['fields']['field_areas_of_intervention']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_areas_of_intervention']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_areas_of_intervention']['type'] = 'text_plain';
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
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_structure_address']['id'] = 'field_structure_address';
  $handler->display->display_options['fields']['field_structure_address']['table'] = 'field_data_field_structure_address';
  $handler->display->display_options['fields']['field_structure_address']['field'] = 'field_structure_address';
  $handler->display->display_options['fields']['field_structure_address']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_structure_address']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_structure_address']['type'] = 'text_plain';
  /* Field: Content: Email(s) */
  $handler->display->display_options['fields']['field_structure_email']['id'] = 'field_structure_email';
  $handler->display->display_options['fields']['field_structure_email']['table'] = 'field_data_field_structure_email';
  $handler->display->display_options['fields']['field_structure_email']['field'] = 'field_structure_email';
  $handler->display->display_options['fields']['field_structure_email']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_structure_email']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_structure_email']['type'] = 'email_plain';
  $handler->display->display_options['fields']['field_structure_email']['delta_offset'] = '0';
  /* Field: Content: Phone number */
  $handler->display->display_options['fields']['field_structure_phone']['id'] = 'field_structure_phone';
  $handler->display->display_options['fields']['field_structure_phone']['table'] = 'field_data_field_structure_phone';
  $handler->display->display_options['fields']['field_structure_phone']['field'] = 'field_structure_phone';
  $handler->display->display_options['fields']['field_structure_phone']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_structure_phone']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_structure_phone']['type'] = 'text_plain';
  /* Field: Content: Contact person name */
  $handler->display->display_options['fields']['field_contact_person_name']['id'] = 'field_contact_person_name';
  $handler->display->display_options['fields']['field_contact_person_name']['table'] = 'field_data_field_contact_person_name';
  $handler->display->display_options['fields']['field_contact_person_name']['field'] = 'field_contact_person_name';
  $handler->display->display_options['fields']['field_contact_person_name']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_contact_person_name']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_contact_person_name']['type'] = 'text_plain';
  /* Field: Content: Contact person job title */
  $handler->display->display_options['fields']['field_contact_person_job_title']['id'] = 'field_contact_person_job_title';
  $handler->display->display_options['fields']['field_contact_person_job_title']['table'] = 'field_data_field_contact_person_job_title';
  $handler->display->display_options['fields']['field_contact_person_job_title']['field'] = 'field_contact_person_job_title';
  $handler->display->display_options['fields']['field_contact_person_job_title']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_contact_person_job_title']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_contact_person_job_title']['type'] = 'text_plain';
  /* Field: Content: Contact person description */
  $handler->display->display_options['fields']['field_contact_person_description']['id'] = 'field_contact_person_description';
  $handler->display->display_options['fields']['field_contact_person_description']['table'] = 'field_data_field_contact_person_description';
  $handler->display->display_options['fields']['field_contact_person_description']['field'] = 'field_contact_person_description';
  $handler->display->display_options['fields']['field_contact_person_description']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_contact_person_description']['alter']['nl2br'] = TRUE;
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_structure_website']['id'] = 'field_structure_website';
  $handler->display->display_options['fields']['field_structure_website']['table'] = 'field_data_field_structure_website';
  $handler->display->display_options['fields']['field_structure_website']['field'] = 'field_structure_website';
  $handler->display->display_options['fields']['field_structure_website']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_structure_website']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_structure_website']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_structure_website']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_structure_website']['delta_offset'] = '0';
  /* Field: Content: Facebook */
  $handler->display->display_options['fields']['field_structure_facebook']['id'] = 'field_structure_facebook';
  $handler->display->display_options['fields']['field_structure_facebook']['table'] = 'field_data_field_structure_facebook';
  $handler->display->display_options['fields']['field_structure_facebook']['field'] = 'field_structure_facebook';
  $handler->display->display_options['fields']['field_structure_facebook']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_structure_facebook']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_structure_facebook']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_structure_facebook']['type'] = 'link_plain';
  /* Field: Content: Twitter */
  $handler->display->display_options['fields']['field_structure_twitter']['id'] = 'field_structure_twitter';
  $handler->display->display_options['fields']['field_structure_twitter']['table'] = 'field_data_field_structure_twitter';
  $handler->display->display_options['fields']['field_structure_twitter']['field'] = 'field_structure_twitter';
  $handler->display->display_options['fields']['field_structure_twitter']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_structure_twitter']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_structure_twitter']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_structure_twitter']['type'] = 'link_plain';
  /* Field: Content: Skype */
  $handler->display->display_options['fields']['field_structure_skype']['id'] = 'field_structure_skype';
  $handler->display->display_options['fields']['field_structure_skype']['table'] = 'field_data_field_structure_skype';
  $handler->display->display_options['fields']['field_structure_skype']['field'] = 'field_structure_skype';
  $handler->display->display_options['fields']['field_structure_skype']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_structure_skype']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_structure_skype']['type'] = 'text_plain';
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
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
    'structure' => 'structure',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Topic (field_topic) */
  $handler->display->display_options['filters']['field_topic_tid']['id'] = 'field_topic_tid';
  $handler->display->display_options['filters']['field_topic_tid']['table'] = 'field_data_field_topic';
  $handler->display->display_options['filters']['field_topic_tid']['field'] = 'field_topic_tid';
  $handler->display->display_options['filters']['field_topic_tid']['value'] = array(
    629 => '629',
  );
  $handler->display->display_options['filters']['field_topic_tid']['group'] = 1;
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
  /* Filter criterion: Global: Populate filters */
  $handler->display->display_options['filters']['populate']['id'] = 'populate';
  $handler->display->display_options['filters']['populate']['table'] = 'views_filters_populate';
  $handler->display->display_options['filters']['populate']['field'] = 'populate';
  $handler->display->display_options['filters']['populate']['group'] = 1;
  $handler->display->display_options['filters']['populate']['exposed'] = TRUE;
  $handler->display->display_options['filters']['populate']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['populate']['expose']['label'] = 'Search Structures';
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
    'field_topic_category_tid' => 0,
    'field_topic_tid' => 0,
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
  $handler->display->display_options['path'] = 'gender-mainstreaming/sectoral-areas/employment/structures/xml';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
    'panel_pane_gm_structures' => 0,
  );
  $export['gender_mainstreaming_structures'] = $view;

  $view = new view();
  $view->name = 'sectoral_areas';
  $view->description = 'Gender Mainstreaming in different policy areas.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Sectoral Areas';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Sectoral Areas';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'categories-list large-block-grid-3 medium-block-grid-3 small-block-grid-2 columns';
  $handler->display->display_options['style_options']['wrapper_class'] = 'categories-list-wrapper';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Display order (field_order) */
  $handler->display->display_options['sorts']['field_order_value']['id'] = 'field_order_value';
  $handler->display->display_options['sorts']['field_order_value']['table'] = 'field_data_field_order';
  $handler->display->display_options['sorts']['field_order_value']['field'] = 'field_order_value';
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
    'sectoral_area' => 'sectoral_area',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'views_access_callback';
  $handler->display->display_options['access']['views_access_callback'] = 'eige_gender_mainstreaming_environment_access';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['path'] = 'gender-mainstreaming/sectoral-areas';

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['sectoral_areas'] = $view;

  $view = new view();
  $view->name = 'tool_method_categories';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Tool/Method Categories';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Tools & Methods';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'categories-list large-block-grid-3 medium-block-grid-3 small-block-grid-2 columns';
  $handler->display->display_options['style_options']['wrapper_class'] = 'categories-list-wrapper';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Display order (field_order) */
  $handler->display->display_options['sorts']['field_order_value']['id'] = 'field_order_value';
  $handler->display->display_options['sorts']['field_order_value']['table'] = 'field_data_field_order';
  $handler->display->display_options['sorts']['field_order_value']['field'] = 'field_order_value';
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
    'tool_method_category' => 'tool_method_category',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'gender-mainstreaming/tools-and-methods';

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['tool_method_categories'] = $view;

  $view = new view();
  $view->name = 'videos';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Videos';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Interviews/Videos';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'views_access_callback';
  $handler->display->display_options['access']['views_access_callback'] = 'eige_gender_mainstreaming_environment_access';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['more_button_text'] = 'Load More Videos';
  $handler->display->display_options['pager']['options']['advance']['content_class'] = '.view-content:eq(0)';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'items-list large-centered large-block-grid-3 medium-block-grid-3 small-block-grid-2 columns';
  $handler->display->display_options['style_options']['wrapper_class'] = 'items-list-wrapper';
  $handler->display->display_options['row_plugin'] = 'node';
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
    'video' => 'video',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'gender-mainstreaming/interviews-videos';
  $export['videos'] = $view;

  return $export;
}

<?php
/**
 * @file
 * eige_administrative_data.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function eige_administrative_data_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'gender_based_violence_country_overview';
  $page->task = 'page';
  $page->admin_title = 'Gender-based violence country overview';
  $page->admin_description = 'Presents a summary of all GBV related entities (Administrative data sources, Legal definitions, Literature and Legislation) for the specified country';
  $page->path = 'gender-based-violence/countries/%name';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array(
    'name' => array(
      'id' => 1,
      'identifier' => 'Country: ISO Code',
      'name' => 'country_code',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_gender_based_violence_country_overview__panel_context_d97b8d4f-3208-40e1-b87f-263ac7a15afb';
  $handler->task = 'page';
  $handler->subtask = 'gender_based_violence_country_overview';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'administrative-data-sources-db',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'panels_page_title_state' => 1,
    'panels_page_title' => '%name:name | Administrative data sources on GBV in the EU | EIGE',
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Gender-based violence
Administrative data sources on GBV in the EU',
    'panels_breadcrumbs_paths' => 'gender-based-violence
gender-based-violence/administrative-data-sources',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'foundation_1col_collapse';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Administrative data sources on GBV in the EU';
  $display->uuid = 'dd9a8e94-8f2b-4433-bb0d-e88adb68e7db';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-5da8a36d-750a-406d-bd2c-b2a3b26c758d';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Country name as general title',
      'title' => '',
      'body' => '<h2 class="pane-title">%name:name</h2>',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5da8a36d-750a-406d-bd2c-b2a3b26c758d';
    $display->content['new-5da8a36d-750a-406d-bd2c-b2a3b26c758d'] = $pane;
    $display->panels['middle'][0] = 'new-5da8a36d-750a-406d-bd2c-b2a3b26c758d';
    $pane = new stdClass();
    $pane->pid = 'new-1774598b-351b-45d6-8774-5add83d7775f';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'administrative_data_sources-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'path' => 'gender-based-violence/administrative-data-sources/search',
      'override_title' => 1,
      'override_title_text' => '%title',
      'override_title_heading' => 'h3',
      'arguments' => array(
        'iso2' => '%name:iso2',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane-administrative-data-sources',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '1774598b-351b-45d6-8774-5add83d7775f';
    $display->content['new-1774598b-351b-45d6-8774-5add83d7775f'] = $pane;
    $display->panels['middle'][1] = 'new-1774598b-351b-45d6-8774-5add83d7775f';
    $pane = new stdClass();
    $pane->pid = 'new-86ccaa54-e337-4f9f-8e8d-944354d7dd3c';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'administrative_data_sources-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'path' => 'gender-based-violence/administrative-data-sources/search',
      'override_title' => 1,
      'override_title_text' => '%title',
      'override_title_heading' => 'h3',
      'arguments' => array(
        'iso2' => '%name:iso2',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane-statistical-products',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '86ccaa54-e337-4f9f-8e8d-944354d7dd3c';
    $display->content['new-86ccaa54-e337-4f9f-8e8d-944354d7dd3c'] = $pane;
    $display->panels['middle'][2] = 'new-86ccaa54-e337-4f9f-8e8d-944354d7dd3c';
    $pane = new stdClass();
    $pane->pid = 'new-75f35fd4-1862-41d2-98f8-063a0c4c4050';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'legal_definitions_in_the_eu-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'path' => 'gender-based-violence/regulatory-and-legal-framework/legal-definitions-in-the-eu',
      'override_title' => 1,
      'override_title_text' => '%title',
      'override_title_heading' => 'h3',
      'arguments' => array(
        'iso2' => '%name:iso2',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane-legal-definitions',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '75f35fd4-1862-41d2-98f8-063a0c4c4050';
    $display->content['new-75f35fd4-1862-41d2-98f8-063a0c4c4050'] = $pane;
    $display->panels['middle'][3] = 'new-75f35fd4-1862-41d2-98f8-063a0c4c4050';
    $pane = new stdClass();
    $pane->pid = 'new-fe75a9f3-56a4-4687-8ad9-a56c1a05afca';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'gender_based_violence_resources-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'path' => 'gender-based-violence/literature-and-legislation',
      'override_title' => 1,
      'override_title_text' => '%title',
      'override_title_heading' => 'h3',
      'arguments' => array(
        'iso2' => '%name:iso2',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane-literature-and-legislation',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'fe75a9f3-56a4-4687-8ad9-a56c1a05afca';
    $display->content['new-fe75a9f3-56a4-4687-8ad9-a56c1a05afca'] = $pane;
    $display->panels['middle'][4] = 'new-fe75a9f3-56a4-4687-8ad9-a56c1a05afca';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-1774598b-351b-45d6-8774-5add83d7775f';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['gender_based_violence_country_overview'] = $page;

  return $pages;

}

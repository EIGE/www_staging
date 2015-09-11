<?php
/**
 * @file
 * eige_search.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function eige_search_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'eige_primo';
  $page->task = 'page';
  $page->admin_title = 'EIGE\'s primo';
  $page->admin_description = '';
  $page->path = 'rdc/search/library';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'E-library',
    'name' => 'navigation',
    'weight' => '2',
    'parent' => array(
      'type' => 'normal',
      'title' => 'Resource & Documentation Centre',
      'name' => 'main-menu',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_eige_primo__panel_context_c60ab59e-4713-41a7-8459-9195767cebf3';
  $handler->task = 'page';
  $handler->subtask = 'eige_primo';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Primo search facet + results',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'rdc-search',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'EIGE\'s primo view context',
        'keyword' => 'eige_primo_context',
        'name' => 'view:eige_primo_search-ctools_context_1',
        'id' => 1,
      ),
      1 => array(
        'identifier' => ' Search term(s) (from query string)',
        'keyword' => 'query_string',
        'name' => 'query_string',
        'key' => 't',
        'fallback_value' => '',
        'id' => 1,
      ),
      2 => array(
        'identifier' => 'EIGE\'s research view context',
        'keyword' => 'eige_research_context',
        'name' => 'view:eige_solr_search_research-ctools_context_1',
        'id' => 1,
      ),
      3 => array(
        'identifier' => 'EIGE\'s website view context',
        'keyword' => 'eige_website_context',
        'name' => 'view:eige_solr_search_website-ctools_context_1',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'query_string_exists',
          'settings' => array(
            'key' => 't',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_page_title_state' => 1,
    'panels_page_title' => 'E-library | Resource & Documentation Centre | EIGE',
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Resource & Documentation Centre',
    'panels_breadcrumbs_paths' => 'rdc',
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
  $display->title = '';
  $display->uuid = 'cdf09346-21aa-471e-a56b-9f550e18116a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-46cc78b7-65a1-4135-9cd5-a897f62ad5b1';
    $pane->panel = 'middle';
    $pane->type = 'views_footer';
    $pane->subtype = 'views_footer';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'context_view:eige_solr_search_research-ctools_context_1_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '46cc78b7-65a1-4135-9cd5-a897f62ad5b1';
    $display->content['new-46cc78b7-65a1-4135-9cd5-a897f62ad5b1'] = $pane;
    $display->panels['middle'][0] = 'new-46cc78b7-65a1-4135-9cd5-a897f62ad5b1';
    $pane = new stdClass();
    $pane->pid = 'new-e5b8799b-9402-4057-827a-dc17dcb3d2ff';
    $pane->panel = 'middle';
    $pane->type = 'views_footer';
    $pane->subtype = 'views_footer';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'context_view:eige_solr_search_website-ctools_context_1_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e5b8799b-9402-4057-827a-dc17dcb3d2ff';
    $display->content['new-e5b8799b-9402-4057-827a-dc17dcb3d2ff'] = $pane;
    $display->panels['middle'][1] = 'new-e5b8799b-9402-4057-827a-dc17dcb3d2ff';
    $pane = new stdClass();
    $pane->pid = 'new-e5dda1e1-3751-42bd-91d7-d753d6ccef29';
    $pane->panel = 'middle';
    $pane->type = 'page_tabs';
    $pane->subtype = 'page_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'primary',
      'id' => 'tabs',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'e5dda1e1-3751-42bd-91d7-d753d6ccef29';
    $display->content['new-e5dda1e1-3751-42bd-91d7-d753d6ccef29'] = $pane;
    $display->panels['middle'][2] = 'new-e5dda1e1-3751-42bd-91d7-d753d6ccef29';
    $pane = new stdClass();
    $pane->pid = 'new-cb7abf45-0e16-47e1-a320-ea0ac07addb3';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-PL0CR2J2DGCoKyAlX40V7IEAVfdJRxhW';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Library',
      'override_title_heading' => 'h3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'cb7abf45-0e16-47e1-a320-ea0ac07addb3';
    $display->content['new-cb7abf45-0e16-47e1-a320-ea0ac07addb3'] = $pane;
    $display->panels['middle'][3] = 'new-cb7abf45-0e16-47e1-a320-ea0ac07addb3';
    $pane = new stdClass();
    $pane->pid = 'new-65a9cda8-84b5-4416-99c7-b77be10c23f8';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-BWap8LfsZvR2d0A1Ww3NmJtKqkqPU1r9';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Availability',
      'override_title_heading' => 'h3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '65a9cda8-84b5-4416-99c7-b77be10c23f8';
    $display->content['new-65a9cda8-84b5-4416-99c7-b77be10c23f8'] = $pane;
    $display->panels['middle'][4] = 'new-65a9cda8-84b5-4416-99c7-b77be10c23f8';
    $pane = new stdClass();
    $pane->pid = 'new-22071cf8-9ba2-47e5-bea7-568de4f78be0';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-D7Kl2ZLvegtecZzDtmTz3eNjoWG0dqs1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Topic',
      'override_title_heading' => 'h3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '22071cf8-9ba2-47e5-bea7-568de4f78be0';
    $display->content['new-22071cf8-9ba2-47e5-bea7-568de4f78be0'] = $pane;
    $display->panels['middle'][5] = 'new-22071cf8-9ba2-47e5-bea7-568de4f78be0';
    $pane = new stdClass();
    $pane->pid = 'new-d2696b27-bf3f-48fb-8a7d-2acc419e305d';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-skIHCcEOdL9eABr3wc90rrzKm6LeHEhq';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Type',
      'override_title_heading' => 'h3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'd2696b27-bf3f-48fb-8a7d-2acc419e305d';
    $display->content['new-d2696b27-bf3f-48fb-8a7d-2acc419e305d'] = $pane;
    $display->panels['middle'][6] = 'new-d2696b27-bf3f-48fb-8a7d-2acc419e305d';
    $pane = new stdClass();
    $pane->pid = 'new-0f4c44db-e8b8-40e4-b908-a7f41578ec5b';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-x6V2usCNCG0A6OOF10byvFNj9tP9F92M';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Language',
      'override_title_heading' => 'h3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '0f4c44db-e8b8-40e4-b908-a7f41578ec5b';
    $display->content['new-0f4c44db-e8b8-40e4-b908-a7f41578ec5b'] = $pane;
    $display->panels['middle'][7] = 'new-0f4c44db-e8b8-40e4-b908-a7f41578ec5b';
    $pane = new stdClass();
    $pane->pid = 'new-8a24befc-179f-42a5-af9b-72bbe2b1ef33';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-1dOXQ1OVwFhRDsH3bvUJj71FCzJ7ReTk';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Creator',
      'override_title_heading' => 'h3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = '8a24befc-179f-42a5-af9b-72bbe2b1ef33';
    $display->content['new-8a24befc-179f-42a5-af9b-72bbe2b1ef33'] = $pane;
    $display->panels['middle'][8] = 'new-8a24befc-179f-42a5-af9b-72bbe2b1ef33';
    $pane = new stdClass();
    $pane->pid = 'new-cfce7a4c-0801-4112-a07e-26cbc813966c';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-h9e1xl2IJZDxkiRMGwRc5np5CQrZvWwj';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Date',
      'override_title_heading' => 'h3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = 'cfce7a4c-0801-4112-a07e-26cbc813966c';
    $display->content['new-cfce7a4c-0801-4112-a07e-26cbc813966c'] = $pane;
    $display->panels['middle'][9] = 'new-cfce7a4c-0801-4112-a07e-26cbc813966c';
    $pane = new stdClass();
    $pane->pid = 'new-0a53cf23-fe71-4cfd-9f4c-6c5e0233dcfa';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Link to clear search and return to search form',
      'title' => '',
      'body' => '<p class="toggler-header"><a href="/rdc">Continue searching..</a></p>',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 10;
    $pane->locks = array();
    $pane->uuid = '0a53cf23-fe71-4cfd-9f4c-6c5e0233dcfa';
    $display->content['new-0a53cf23-fe71-4cfd-9f4c-6c5e0233dcfa'] = $pane;
    $display->panels['middle'][10] = 'new-0a53cf23-fe71-4cfd-9f4c-6c5e0233dcfa';
    $pane = new stdClass();
    $pane->pid = 'new-a2c547df-44b7-4e79-a34b-05a76ece7a7c';
    $pane->panel = 'middle';
    $pane->type = 'views_exposed';
    $pane->subtype = 'views_exposed';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'context_view:eige_primo_search-ctools_context_1_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 11;
    $pane->locks = array();
    $pane->uuid = 'a2c547df-44b7-4e79-a34b-05a76ece7a7c';
    $display->content['new-a2c547df-44b7-4e79-a34b-05a76ece7a7c'] = $pane;
    $display->panels['middle'][11] = 'new-a2c547df-44b7-4e79-a34b-05a76ece7a7c';
    $pane = new stdClass();
    $pane->pid = 'new-1d8817a6-2536-47a3-8d71-0b24bff524e8';
    $pane->panel = 'middle';
    $pane->type = 'views_header';
    $pane->subtype = 'views_header';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'context_view:eige_primo_search-ctools_context_1_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 12;
    $pane->locks = array();
    $pane->uuid = '1d8817a6-2536-47a3-8d71-0b24bff524e8';
    $display->content['new-1d8817a6-2536-47a3-8d71-0b24bff524e8'] = $pane;
    $display->panels['middle'][12] = 'new-1d8817a6-2536-47a3-8d71-0b24bff524e8';
    $pane = new stdClass();
    $pane->pid = 'new-3cf579a6-308d-4482-a9b0-cdc9ebde469c';
    $pane->panel = 'middle';
    $pane->type = 'views_pager';
    $pane->subtype = 'views_pager';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'context_view:eige_primo_search-ctools_context_1_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 13;
    $pane->locks = array();
    $pane->uuid = '3cf579a6-308d-4482-a9b0-cdc9ebde469c';
    $display->content['new-3cf579a6-308d-4482-a9b0-cdc9ebde469c'] = $pane;
    $display->panels['middle'][13] = 'new-3cf579a6-308d-4482-a9b0-cdc9ebde469c';
    $pane = new stdClass();
    $pane->pid = 'new-a8a238e2-30b8-45b3-80c2-2ad4129688df';
    $pane->panel = 'middle';
    $pane->type = 'views_row';
    $pane->subtype = 'views_row';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'rows' => array(),
      'use_fields' => 0,
      'fields' => array(),
      'context' => 'context_view:eige_primo_search-ctools_context_1_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 14;
    $pane->locks = array();
    $pane->uuid = 'a8a238e2-30b8-45b3-80c2-2ad4129688df';
    $display->content['new-a8a238e2-30b8-45b3-80c2-2ad4129688df'] = $pane;
    $display->panels['middle'][14] = 'new-a8a238e2-30b8-45b3-80c2-2ad4129688df';
    $pane = new stdClass();
    $pane->pid = 'new-aa444873-4456-4596-adf6-33fcfff4845f';
    $pane->panel = 'middle';
    $pane->type = 'views_pager';
    $pane->subtype = 'views_pager';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'context_view:eige_primo_search-ctools_context_1_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 15;
    $pane->locks = array();
    $pane->uuid = 'aa444873-4456-4596-adf6-33fcfff4845f';
    $display->content['new-aa444873-4456-4596-adf6-33fcfff4845f'] = $pane;
    $display->panels['middle'][15] = 'new-aa444873-4456-4596-adf6-33fcfff4845f';
    $pane = new stdClass();
    $pane->pid = 'new-282c9730-0fc1-4225-9c75-f365ccf13ad4';
    $pane->panel = 'middle';
    $pane->type = 'views_empty';
    $pane->subtype = 'views_empty';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'context_view:eige_primo_search-ctools_context_1_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 16;
    $pane->locks = array();
    $pane->uuid = '282c9730-0fc1-4225-9c75-f365ccf13ad4';
    $display->content['new-282c9730-0fc1-4225-9c75-f365ccf13ad4'] = $pane;
    $display->panels['middle'][16] = 'new-282c9730-0fc1-4225-9c75-f365ccf13ad4';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page__vp_redirect_to_rdc';
  $handler->task = 'page';
  $handler->subtask = 'eige_primo';
  $handler->handler = 'http_response';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Redirect to RDC',
    'contexts' => array(),
    'relationships' => array(),
    'code' => '301',
    'destination' => 'rdc',
    'name' => 'vp_redirect_to_rdc',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'query_string_exists',
          'settings' => array(
            'key' => 't',
          ),
          'not' => TRUE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['eige_primo'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'eige_research';
  $page->task = 'page';
  $page->admin_title = 'EIGE\'s research (deafult RDC search tab)';
  $page->admin_description = 'Panel for search tab/view EIGE\'s Research';
  $page->path = 'rdc/search/research/';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'EIGE\'s research',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'normal',
      'title' => 'Resource & Documentation Centre',
      'name' => 'main-menu',
      'weight' => '1',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_eige_research__panel_context_5cb2475d-b463-4f79-a016-f506ecc125bd';
  $handler->task = 'page';
  $handler->subtask = 'eige_research';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Research search facet + results',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'rdc-search',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'EIGE\'s research view context',
        'keyword' => 'eige_research_context',
        'name' => 'view:eige_solr_search_research-ctools_context_1',
        'id' => 1,
      ),
      1 => array(
        'identifier' => 'Search term(s) (from query string)',
        'keyword' => 'search_term',
        'name' => 'query_string',
        'key' => 't',
        'fallback_value' => '',
        'id' => 1,
      ),
      2 => array(
        'identifier' => 'EIGE\'s website view context',
        'keyword' => 'eige_website_context',
        'name' => 'view:eige_solr_search_website-ctools_context_1',
        'id' => 1,
      ),
      3 => array(
        'identifier' => 'EIGE\'s primo view context',
        'keyword' => 'eige_primo_context',
        'name' => 'view:eige_primo_search-ctools_context_1',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'panels_page_title_state' => 1,
    'panels_page_title' => 'EIGE\'s research | Resource & Documentation Centre | EIGE',
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Resource & Documentation Centre',
    'panels_breadcrumbs_paths' => 'rdc',
    'panels_breadcrumbs_home' => 1,
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'query_string_exists',
          'settings' => array(
            'key' => 't',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'foundation_1col_collapse';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'left' => NULL,
      'right' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'af53de65-e4ac-4a04-bdc2-9fd8c06a9806';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c3d31bb1-ca6b-481f-85ca-c38b5ec5598e';
    $pane->panel = 'middle';
    $pane->type = 'views_footer';
    $pane->subtype = 'views_footer';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'context_view:eige_solr_search_website-ctools_context_1_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c3d31bb1-ca6b-481f-85ca-c38b5ec5598e';
    $display->content['new-c3d31bb1-ca6b-481f-85ca-c38b5ec5598e'] = $pane;
    $display->panels['middle'][0] = 'new-c3d31bb1-ca6b-481f-85ca-c38b5ec5598e';
    $pane = new stdClass();
    $pane->pid = 'new-0e62a788-88c3-49a9-9c44-967c77692d1e';
    $pane->panel = 'middle';
    $pane->type = 'views_footer';
    $pane->subtype = 'views_footer';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'context_view:eige_primo_search-ctools_context_1_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '0e62a788-88c3-49a9-9c44-967c77692d1e';
    $display->content['new-0e62a788-88c3-49a9-9c44-967c77692d1e'] = $pane;
    $display->panels['middle'][1] = 'new-0e62a788-88c3-49a9-9c44-967c77692d1e';
    $pane = new stdClass();
    $pane->pid = 'new-6b348e1f-c587-4380-9f75-9500c5a13848';
    $pane->panel = 'middle';
    $pane->type = 'page_tabs';
    $pane->subtype = 'page_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'primary',
      'id' => 'tabs',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '6b348e1f-c587-4380-9f75-9500c5a13848';
    $display->content['new-6b348e1f-c587-4380-9f75-9500c5a13848'] = $pane;
    $display->panels['middle'][2] = 'new-6b348e1f-c587-4380-9f75-9500c5a13848';
    $pane = new stdClass();
    $pane->pid = 'new-02d4b6c6-6275-479e-bf5d-bedab6fcc51e';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-Y1Nt6rYMIrYGVUjXrRttxoCC8z3ZtZDg';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Type',
      'override_title_heading' => 'h3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '02d4b6c6-6275-479e-bf5d-bedab6fcc51e';
    $display->content['new-02d4b6c6-6275-479e-bf5d-bedab6fcc51e'] = $pane;
    $display->panels['middle'][3] = 'new-02d4b6c6-6275-479e-bf5d-bedab6fcc51e';
    $pane = new stdClass();
    $pane->pid = 'new-42a996e6-1cec-444b-8926-584990fa4335';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Link to clear search and return to search form',
      'title' => '',
      'body' => '<p class="toggler-header"><a href="/rdc">Continue searching..</a></p>
',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '42a996e6-1cec-444b-8926-584990fa4335';
    $display->content['new-42a996e6-1cec-444b-8926-584990fa4335'] = $pane;
    $display->panels['middle'][4] = 'new-42a996e6-1cec-444b-8926-584990fa4335';
    $pane = new stdClass();
    $pane->pid = 'new-e42a6da3-87e9-41bb-9d4f-ae9c469a6bf3';
    $pane->panel = 'middle';
    $pane->type = 'views_exposed';
    $pane->subtype = 'views_exposed';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'context_view:eige_solr_search_research-ctools_context_1_1',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'e42a6da3-87e9-41bb-9d4f-ae9c469a6bf3';
    $display->content['new-e42a6da3-87e9-41bb-9d4f-ae9c469a6bf3'] = $pane;
    $display->panels['middle'][5] = 'new-e42a6da3-87e9-41bb-9d4f-ae9c469a6bf3';
    $pane = new stdClass();
    $pane->pid = 'new-8b190a25-c531-4e34-97c1-f01111ae343d';
    $pane->panel = 'middle';
    $pane->type = 'views_header';
    $pane->subtype = 'views_header';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'context_view:eige_solr_search_research-ctools_context_1_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '8b190a25-c531-4e34-97c1-f01111ae343d';
    $display->content['new-8b190a25-c531-4e34-97c1-f01111ae343d'] = $pane;
    $display->panels['middle'][6] = 'new-8b190a25-c531-4e34-97c1-f01111ae343d';
    $pane = new stdClass();
    $pane->pid = 'new-b26ccc11-c22b-40c8-86d4-50266cd38ad4';
    $pane->panel = 'middle';
    $pane->type = 'views_pager';
    $pane->subtype = 'views_pager';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'context_view:eige_solr_search_research-ctools_context_1_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = 'b26ccc11-c22b-40c8-86d4-50266cd38ad4';
    $display->content['new-b26ccc11-c22b-40c8-86d4-50266cd38ad4'] = $pane;
    $display->panels['middle'][7] = 'new-b26ccc11-c22b-40c8-86d4-50266cd38ad4';
    $pane = new stdClass();
    $pane->pid = 'new-d0fd6052-0083-4747-bea1-ad392d63bb13';
    $pane->panel = 'middle';
    $pane->type = 'views_row';
    $pane->subtype = 'views_row';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'rows' => array(),
      'use_fields' => 0,
      'fields' => array(),
      'context' => 'context_view:eige_solr_search_research-ctools_context_1_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = 'd0fd6052-0083-4747-bea1-ad392d63bb13';
    $display->content['new-d0fd6052-0083-4747-bea1-ad392d63bb13'] = $pane;
    $display->panels['middle'][8] = 'new-d0fd6052-0083-4747-bea1-ad392d63bb13';
    $pane = new stdClass();
    $pane->pid = 'new-48505626-eee9-41f1-9f9e-e4150536ba7b';
    $pane->panel = 'middle';
    $pane->type = 'views_pager';
    $pane->subtype = 'views_pager';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'context_view:eige_solr_search_research-ctools_context_1_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = '48505626-eee9-41f1-9f9e-e4150536ba7b';
    $display->content['new-48505626-eee9-41f1-9f9e-e4150536ba7b'] = $pane;
    $display->panels['middle'][9] = 'new-48505626-eee9-41f1-9f9e-e4150536ba7b';
    $pane = new stdClass();
    $pane->pid = 'new-1733fea0-21ca-418e-95d2-b996406ecba2';
    $pane->panel = 'middle';
    $pane->type = 'views_empty';
    $pane->subtype = 'views_empty';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'context_view:eige_solr_search_research-ctools_context_1_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 10;
    $pane->locks = array();
    $pane->uuid = '1733fea0-21ca-418e-95d2-b996406ecba2';
    $display->content['new-1733fea0-21ca-418e-95d2-b996406ecba2'] = $pane;
    $display->panels['middle'][10] = 'new-1733fea0-21ca-418e-95d2-b996406ecba2';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page__vr_redirect_to_rdc';
  $handler->task = 'page';
  $handler->subtask = 'eige_research';
  $handler->handler = 'http_response';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Redirect to RDC',
    'contexts' => array(),
    'relationships' => array(),
    'code' => '301',
    'destination' => 'rdc',
    'name' => 'vr_redirect_to_rdc',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'query_string_exists',
          'settings' => array(
            'key' => 't',
          ),
          'not' => TRUE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['eige_research'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'eige_website';
  $page->task = 'page';
  $page->admin_title = 'EIGE\'s website';
  $page->admin_description = '';
  $page->path = 'rdc/search/website';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'EIGE\'s website',
    'name' => 'navigation',
    'weight' => '4',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_eige_website__panel_context_61ca3a01-b64e-4fca-90de-36c727f4d0ab';
  $handler->task = 'page';
  $handler->subtask = 'eige_website';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Website search facet + results',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'rdc-search',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'EIGE\'s website view context',
        'keyword' => 'eige_website_context',
        'name' => 'view:eige_solr_search_website-ctools_context_1',
        'id' => 1,
      ),
      1 => array(
        'identifier' => 'Search term(s) (from query string)',
        'keyword' => 'search_term',
        'name' => 'query_string',
        'key' => 't',
        'fallback_value' => '',
        'id' => 1,
      ),
      2 => array(
        'identifier' => ' EIGE\'s research view context',
        'keyword' => 'eige_research_context',
        'name' => 'view:eige_solr_search_research-ctools_context_1',
        'id' => 1,
      ),
      3 => array(
        'identifier' => 'EIGE\'s primo view context',
        'keyword' => 'eige_primo_context',
        'name' => 'view:eige_primo_search-ctools_context_1',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'panels_page_title_state' => 1,
    'panels_page_title' => 'EIGE\'s website | Resource & Documentation Centre | EIGE',
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Resource & Documentation Centre',
    'panels_breadcrumbs_paths' => 'rdc',
    'panels_breadcrumbs_home' => 1,
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'query_string_exists',
          'settings' => array(
            'key' => 't',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'foundation_1col_collapse';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'dde1996a-3498-48db-8305-5272d009cab5';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ba30fdaa-9ce2-4383-8f68-42047a8dc7a0';
    $pane->panel = 'middle';
    $pane->type = 'views_footer';
    $pane->subtype = 'views_footer';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'context_view:eige_solr_search_research-ctools_context_1_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ba30fdaa-9ce2-4383-8f68-42047a8dc7a0';
    $display->content['new-ba30fdaa-9ce2-4383-8f68-42047a8dc7a0'] = $pane;
    $display->panels['middle'][0] = 'new-ba30fdaa-9ce2-4383-8f68-42047a8dc7a0';
    $pane = new stdClass();
    $pane->pid = 'new-a4de5beb-c23a-4421-8d40-75b8775b11fb';
    $pane->panel = 'middle';
    $pane->type = 'views_footer';
    $pane->subtype = 'views_footer';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'context_view:eige_primo_search-ctools_context_1_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a4de5beb-c23a-4421-8d40-75b8775b11fb';
    $display->content['new-a4de5beb-c23a-4421-8d40-75b8775b11fb'] = $pane;
    $display->panels['middle'][1] = 'new-a4de5beb-c23a-4421-8d40-75b8775b11fb';
    $pane = new stdClass();
    $pane->pid = 'new-a4a2e094-7b8d-4d8e-a23a-325c83894757';
    $pane->panel = 'middle';
    $pane->type = 'page_tabs';
    $pane->subtype = 'page_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'primary',
      'id' => 'tabs',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'a4a2e094-7b8d-4d8e-a23a-325c83894757';
    $display->content['new-a4a2e094-7b8d-4d8e-a23a-325c83894757'] = $pane;
    $display->panels['middle'][2] = 'new-a4a2e094-7b8d-4d8e-a23a-325c83894757';
    $pane = new stdClass();
    $pane->pid = 'new-7aa81841-bf1a-456e-8d9b-f328b3de929f';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-hZXFtUcfXbbJPjJvRm0dxqzpxn3PKQzR';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Type',
      'override_title_heading' => 'h3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '7aa81841-bf1a-456e-8d9b-f328b3de929f';
    $display->content['new-7aa81841-bf1a-456e-8d9b-f328b3de929f'] = $pane;
    $display->panels['middle'][3] = 'new-7aa81841-bf1a-456e-8d9b-f328b3de929f';
    $pane = new stdClass();
    $pane->pid = 'new-5c545f4e-51ad-4d6a-a8fa-30c5e413c7f5';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Link to clear search and return to search form',
      'title' => '',
      'body' => '<p class="toggler-header"><a href="/rdc">Continue searching..</a></p>
',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '5c545f4e-51ad-4d6a-a8fa-30c5e413c7f5';
    $display->content['new-5c545f4e-51ad-4d6a-a8fa-30c5e413c7f5'] = $pane;
    $display->panels['middle'][4] = 'new-5c545f4e-51ad-4d6a-a8fa-30c5e413c7f5';
    $pane = new stdClass();
    $pane->pid = 'new-0bc67934-8e30-404d-8681-c4b3b43acf71';
    $pane->panel = 'middle';
    $pane->type = 'views_exposed';
    $pane->subtype = 'views_exposed';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'context_view:eige_solr_search_website-ctools_context_1_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '0bc67934-8e30-404d-8681-c4b3b43acf71';
    $display->content['new-0bc67934-8e30-404d-8681-c4b3b43acf71'] = $pane;
    $display->panels['middle'][5] = 'new-0bc67934-8e30-404d-8681-c4b3b43acf71';
    $pane = new stdClass();
    $pane->pid = 'new-1897b026-67ab-4ebd-9160-cab347f36b27';
    $pane->panel = 'middle';
    $pane->type = 'views_header';
    $pane->subtype = 'views_header';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'context_view:eige_solr_search_website-ctools_context_1_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '1897b026-67ab-4ebd-9160-cab347f36b27';
    $display->content['new-1897b026-67ab-4ebd-9160-cab347f36b27'] = $pane;
    $display->panels['middle'][6] = 'new-1897b026-67ab-4ebd-9160-cab347f36b27';
    $pane = new stdClass();
    $pane->pid = 'new-f0771f9a-aad1-4698-98a9-6b26819b10d9';
    $pane->panel = 'middle';
    $pane->type = 'views_pager';
    $pane->subtype = 'views_pager';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'context_view:eige_solr_search_website-ctools_context_1_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = 'f0771f9a-aad1-4698-98a9-6b26819b10d9';
    $display->content['new-f0771f9a-aad1-4698-98a9-6b26819b10d9'] = $pane;
    $display->panels['middle'][7] = 'new-f0771f9a-aad1-4698-98a9-6b26819b10d9';
    $pane = new stdClass();
    $pane->pid = 'new-5c20858d-a2a6-4698-922c-db51378a4307';
    $pane->panel = 'middle';
    $pane->type = 'views_row';
    $pane->subtype = 'views_row';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'rows' => array(),
      'use_fields' => 0,
      'fields' => array(),
      'context' => 'context_view:eige_solr_search_website-ctools_context_1_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = '5c20858d-a2a6-4698-922c-db51378a4307';
    $display->content['new-5c20858d-a2a6-4698-922c-db51378a4307'] = $pane;
    $display->panels['middle'][8] = 'new-5c20858d-a2a6-4698-922c-db51378a4307';
    $pane = new stdClass();
    $pane->pid = 'new-f71e1ece-3ae5-4d08-9afe-3d8139187b05';
    $pane->panel = 'middle';
    $pane->type = 'views_pager';
    $pane->subtype = 'views_pager';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'context_view:eige_solr_search_website-ctools_context_1_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = 'f71e1ece-3ae5-4d08-9afe-3d8139187b05';
    $display->content['new-f71e1ece-3ae5-4d08-9afe-3d8139187b05'] = $pane;
    $display->panels['middle'][9] = 'new-f71e1ece-3ae5-4d08-9afe-3d8139187b05';
    $pane = new stdClass();
    $pane->pid = 'new-ed29bdfa-5c91-4540-a601-179a3b1d48a0';
    $pane->panel = 'middle';
    $pane->type = 'views_empty';
    $pane->subtype = 'views_empty';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'context_view:eige_solr_search_website-ctools_context_1_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 10;
    $pane->locks = array();
    $pane->uuid = 'ed29bdfa-5c91-4540-a601-179a3b1d48a0';
    $display->content['new-ed29bdfa-5c91-4540-a601-179a3b1d48a0'] = $pane;
    $display->panels['middle'][10] = 'new-ed29bdfa-5c91-4540-a601-179a3b1d48a0';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-7aa81841-bf1a-456e-8d9b-f328b3de929f';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page__vw_redirect_to_rdc';
  $handler->task = 'page';
  $handler->subtask = 'eige_website';
  $handler->handler = 'http_response';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Redirect to RDC',
    'contexts' => array(),
    'relationships' => array(),
    'code' => '301',
    'destination' => 'rdc',
    'name' => 'vw_redirect_to_rdc',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'query_string_exists',
          'settings' => array(
            'key' => 't',
          ),
          'not' => TRUE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['eige_website'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'rdc_home_page';
  $page->task = 'page';
  $page->admin_title = 'RDC home page';
  $page->admin_description = 'The home/landing page for the RDC. ';
  $page->path = 'rdc';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_rdc_home_page__panel_context_2518cede-db74-456f-8803-71ae85a93fef';
  $handler->task = 'page';
  $handler->subtask = 'rdc_home_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
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
  $display->title = 'Resource & Documentation Centre';
  $display->uuid = 'fd969985-1072-450b-8412-52e95e5323aa';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-337c0d84-2cfe-4d6d-98db-279e3978221d';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'search-form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '337c0d84-2cfe-4d6d-98db-279e3978221d';
    $display->content['new-337c0d84-2cfe-4d6d-98db-279e3978221d'] = $pane;
    $display->panels['middle'][0] = 'new-337c0d84-2cfe-4d6d-98db-279e3978221d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-337c0d84-2cfe-4d6d-98db-279e3978221d';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['rdc_home_page'] = $page;

  return $pages;

}

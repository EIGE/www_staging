<?php
/**
 * @file
 * eige_base.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function eige_base_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home_page';
  $page->task = 'page';
  $page->admin_title = 'Home page';
  $page->admin_description = '';
  $page->path = 'home';
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
  $handler->name = 'page_home_page__panel_context_d7969933-ac29-46de-a93d-8f5628c951dd';
  $handler->task = 'page';
  $handler->subtask = 'home_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Home page panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'metatag_panels' => array(
      'enabled' => 0,
      'metatags' => array(
        'title' => array(
          'value' => '',
        ),
        'description' => array(
          'value' => '',
        ),
        'og:site_name' => array(
          'value' => '',
        ),
        'og:url' => array(
          'value' => '',
        ),
        'og:title' => array(
          'value' => '',
        ),
        'og:image' => array(
          'value' => '',
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'foundation_2column_homepage';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'first' => NULL,
      'second' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'bae6c8b6-e729-4004-bf13-c89f9af0b8e5';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3cda3bd8-af99-40c3-a27f-e4d0098c2ba8';
    $pane->panel = 'first';
    $pane->type = 'views';
    $pane->subtype = 'home_page_nodequeue';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '1',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3cda3bd8-af99-40c3-a27f-e4d0098c2ba8';
    $display->content['new-3cda3bd8-af99-40c3-a27f-e4d0098c2ba8'] = $pane;
    $display->panels['first'][0] = 'new-3cda3bd8-af99-40c3-a27f-e4d0098c2ba8';
    $pane = new stdClass();
    $pane->pid = 'new-acdfe220-e195-4400-97e5-039b8201a9b1';
    $pane->panel = 'second';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-promo-topics-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'acdfe220-e195-4400-97e5-039b8201a9b1';
    $display->content['new-acdfe220-e195-4400-97e5-039b8201a9b1'] = $pane;
    $display->panels['second'][0] = 'new-acdfe220-e195-4400-97e5-039b8201a9b1';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-3cda3bd8-af99-40c3-a27f-e4d0098c2ba8';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home_page'] = $page;

  return $pages;

}

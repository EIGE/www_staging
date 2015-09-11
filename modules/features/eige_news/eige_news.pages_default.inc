<?php
/**
 * @file
 * eige_news.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function eige_news_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'news_and_events';
  $page->task = 'page';
  $page->admin_title = 'News and Events';
  $page->admin_description = '';
  $page->path = 'news-and-events';
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
  $handler->name = 'page_news_and_events__panel_context_6c344f87-cd21-41f4-9994-3200c3d8ed6a';
  $handler->task = 'page';
  $handler->subtask = 'news_and_events';
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
  $display->layout = 'foundation_2col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'News and Events';
  $display->uuid = '6884fed3-b134-4240-84f0-91704b0a14e4';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a8c2208d-1de4-43a6-a316-91f990ab56ae';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'news-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a8c2208d-1de4-43a6-a316-91f990ab56ae';
    $display->content['new-a8c2208d-1de4-43a6-a316-91f990ab56ae'] = $pane;
    $display->panels['left'][0] = 'new-a8c2208d-1de4-43a6-a316-91f990ab56ae';
    $pane = new stdClass();
    $pane->pid = 'new-b13e44d6-cee2-417b-86d7-d3215e77105a';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'events-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b13e44d6-cee2-417b-86d7-d3215e77105a';
    $display->content['new-b13e44d6-cee2-417b-86d7-d3215e77105a'] = $pane;
    $display->panels['right'][0] = 'new-b13e44d6-cee2-417b-86d7-d3215e77105a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['news_and_events'] = $page;

  return $pages;

}

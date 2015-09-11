<?php
/**
 * @file
 * eige_news.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function eige_news_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'events';
  $view->description = 'Upcoming and ongoing events synchronously fetched from EuroGender platform';
  $view->tag = 'default';
  $view->base_table = 'eurogender_event';
  $view->human_name = 'Events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Events calendar';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['more_button_text'] = 'Load more events';
  $handler->display->display_options['pager']['options']['advance']['content_class'] = '.view-content:eq(0)';
  $handler->display->display_options['pager']['options']['effects']['type'] = 'fade';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'items-list large-centered large-block-grid-3 medium-block-grid-3 small-block-grid-2 columns';
  $handler->display->display_options['style_options']['wrapper_class'] = 'items-list-wrapper';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<div class="view-results-count"><strong>@total</strong> Events found</div>';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p><em>There are no results that match the selected criteria</em></p>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Field: EuroGender event: ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'eurogender_event';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: EuroGender event: Start date (day only) */
  $handler->display->display_options['fields']['field_enge_event_begins_1']['id'] = 'field_enge_event_begins_1';
  $handler->display->display_options['fields']['field_enge_event_begins_1']['table'] = 'eurogender_event';
  $handler->display->display_options['fields']['field_enge_event_begins_1']['field'] = 'field_enge_event_begins_1';
  $handler->display->display_options['fields']['field_enge_event_begins_1']['label'] = '';
  $handler->display->display_options['fields']['field_enge_event_begins_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_enge_event_begins_1']['element_label_colon'] = FALSE;
  /* Field: EuroGender event: Start date (month/year) */
  $handler->display->display_options['fields']['field_enge_event_begins']['id'] = 'field_enge_event_begins';
  $handler->display->display_options['fields']['field_enge_event_begins']['table'] = 'eurogender_event';
  $handler->display->display_options['fields']['field_enge_event_begins']['field'] = 'field_enge_event_begins';
  $handler->display->display_options['fields']['field_enge_event_begins']['label'] = '';
  $handler->display->display_options['fields']['field_enge_event_begins']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_enge_event_begins']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_enge_event_begins']['alter']['text'] = '<div class="field field-name-field-enge-event-begins field-type-datetime field-label-hidden field-wrapper"><span class="day">[field_enge_event_begins_1] </span><span class="date-display-single">[field_enge_event_begins]</span></div>';
  $handler->display->display_options['fields']['field_enge_event_begins']['element_label_colon'] = FALSE;
  /* Field: EuroGender event: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'eurogender_event';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: EuroGender event: End date */
  $handler->display->display_options['fields']['field_enge_event_ends']['id'] = 'field_enge_event_ends';
  $handler->display->display_options['fields']['field_enge_event_ends']['table'] = 'eurogender_event';
  $handler->display->display_options['fields']['field_enge_event_ends']['field'] = 'field_enge_event_ends';
  $handler->display->display_options['fields']['field_enge_event_ends']['label'] = '';
  $handler->display->display_options['fields']['field_enge_event_ends']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_enge_event_ends']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_enge_event_ends']['alter']['text'] = '<div class="field field-name-field-enge-event-ends field-type-datetime field-label-hidden field-wrapper"><span class="date-display-single">Ends on: [field_enge_event_ends]</span></div>';
  $handler->display->display_options['fields']['field_enge_event_ends']['element_label_colon'] = FALSE;
  /* Field: EuroGender event: Image */
  $handler->display->display_options['fields']['field_enge_event_image']['id'] = 'field_enge_event_image';
  $handler->display->display_options['fields']['field_enge_event_image']['table'] = 'eurogender_event';
  $handler->display->display_options['fields']['field_enge_event_image']['field'] = 'field_enge_event_image';
  $handler->display->display_options['fields']['field_enge_event_image']['label'] = '';
  $handler->display->display_options['fields']['field_enge_event_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_enge_event_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_enge_event_image']['alter']['text'] = '<div class="image">[field_enge_event_image]</div>';
  $handler->display->display_options['fields']['field_enge_event_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_enge_event_image']['hide_empty'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a class="group-link-wrapper field-group-link" href="/news-and-events/events-calendar/event/[nid]">
<div class="field field-name-content-type field-type-ds field-label-hidden field-wrapper">
<p>Event</p>
</div>
[field_enge_event_image]
<div class="group-title-quote-wrapper field-group-div">
[field_enge_event_begins]
<h2>[title]</h2>
[field_enge_event_ends]
</div>
</a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'news-and-events/events-calendar';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More events';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'items-list large-centered large-block-grid-2 medium-block-grid-2 small-block-grid-1 columns';
  $handler->display->display_options['style_options']['wrapper_class'] = 'items-list-wrapper';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $export['events'] = $view;

  $view = new view();
  $view->name = 'events_past';
  $view->description = 'Past events synchronously fetched from EuroGender platform';
  $view->tag = 'default';
  $view->base_table = 'eurogender_event';
  $view->human_name = 'Events Past';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Past Events';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['past_events'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['more_button_text'] = 'Load more events';
  $handler->display->display_options['pager']['options']['advance']['content_class'] = '.view-content:eq(0)';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'items-list large-centered large-block-grid-3 medium-block-grid-3 small-block-grid-2 columns';
  $handler->display->display_options['style_options']['wrapper_class'] = 'items-list-wrapper';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<div class="view-results-count"><strong>@total</strong> Events found</div>';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p><em>There are no results that match the selected criteria</em></p>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Field: EuroGender event: ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'eurogender_event';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: EuroGender event: Start date (day only) */
  $handler->display->display_options['fields']['field_enge_event_begins_1']['id'] = 'field_enge_event_begins_1';
  $handler->display->display_options['fields']['field_enge_event_begins_1']['table'] = 'eurogender_event';
  $handler->display->display_options['fields']['field_enge_event_begins_1']['field'] = 'field_enge_event_begins_1';
  $handler->display->display_options['fields']['field_enge_event_begins_1']['label'] = '';
  $handler->display->display_options['fields']['field_enge_event_begins_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_enge_event_begins_1']['element_label_colon'] = FALSE;
  /* Field: EuroGender event: Start date (month/year) */
  $handler->display->display_options['fields']['field_enge_event_begins']['id'] = 'field_enge_event_begins';
  $handler->display->display_options['fields']['field_enge_event_begins']['table'] = 'eurogender_event';
  $handler->display->display_options['fields']['field_enge_event_begins']['field'] = 'field_enge_event_begins';
  $handler->display->display_options['fields']['field_enge_event_begins']['label'] = '';
  $handler->display->display_options['fields']['field_enge_event_begins']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_enge_event_begins']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_enge_event_begins']['alter']['text'] = '<div class="field field-name-field-enge-event-begins field-type-datetime field-label-hidden field-wrapper"><span class="day">[field_enge_event_begins_1] </span><span class="date-display-single">[field_enge_event_begins]</span></div>';
  $handler->display->display_options['fields']['field_enge_event_begins']['element_label_colon'] = FALSE;
  /* Field: EuroGender event: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'eurogender_event';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: EuroGender event: End date */
  $handler->display->display_options['fields']['field_enge_event_ends']['id'] = 'field_enge_event_ends';
  $handler->display->display_options['fields']['field_enge_event_ends']['table'] = 'eurogender_event';
  $handler->display->display_options['fields']['field_enge_event_ends']['field'] = 'field_enge_event_ends';
  $handler->display->display_options['fields']['field_enge_event_ends']['label'] = '';
  $handler->display->display_options['fields']['field_enge_event_ends']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_enge_event_ends']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_enge_event_ends']['alter']['text'] = '<div class="field field-name-field-enge-event-ends field-type-datetime field-label-hidden field-wrapper"><span class="date-display-single">Ends on: [field_enge_event_ends]</span></div>';
  $handler->display->display_options['fields']['field_enge_event_ends']['element_label_colon'] = FALSE;
  /* Field: EuroGender event: Image */
  $handler->display->display_options['fields']['field_enge_event_image']['id'] = 'field_enge_event_image';
  $handler->display->display_options['fields']['field_enge_event_image']['table'] = 'eurogender_event';
  $handler->display->display_options['fields']['field_enge_event_image']['field'] = 'field_enge_event_image';
  $handler->display->display_options['fields']['field_enge_event_image']['label'] = '';
  $handler->display->display_options['fields']['field_enge_event_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_enge_event_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_enge_event_image']['alter']['text'] = '<div class="image">[field_enge_event_image]</div>';
  $handler->display->display_options['fields']['field_enge_event_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_enge_event_image']['hide_empty'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a class="group-link-wrapper field-group-link" href="/news-and-events/events-calendar/event/[nid]">
<div class="field field-name-content-type field-type-ds field-label-hidden field-wrapper">
<p>Event</p>
</div>
[field_enge_event_image]
<div class="group-title-quote-wrapper field-group-div">
[field_enge_event_begins]
<h2>[title]</h2>
[field_enge_event_ends]
</div>
</a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'news-and-events/events-calendar/past-events';
  $export['events_past'] = $view;

  $view = new view();
  $view->name = 'news';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'News';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'News';
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
  $handler->display->display_options['pager']['options']['more_button_text'] = 'Load more news';
  $handler->display->display_options['pager']['options']['advance']['content_class'] = '.view-content:eq(0)';
  $handler->display->display_options['pager']['options']['effects']['type'] = 'fade';
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
  $handler->display->display_options['header']['result']['content'] = '<div class="view-results-count"><strong>@total</strong> News articles found</div>';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p><em>There are no results that match the selected criteria</em></p>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'eige_text_trimmed_formatter';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'rfc_822';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
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
    'news_article' => 'news_article',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Global: Populate filters */
  $handler->display->display_options['filters']['populate']['id'] = 'populate';
  $handler->display->display_options['filters']['populate']['table'] = 'views_filters_populate';
  $handler->display->display_options['filters']['populate']['field'] = 'populate';
  $handler->display->display_options['filters']['populate']['group'] = 1;
  $handler->display->display_options['filters']['populate']['exposed'] = TRUE;
  $handler->display->display_options['filters']['populate']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['populate']['expose']['label'] = 'Search News';
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
    'title_field_value' => 'title_field_value',
    'body_value' => 'body_value',
    'status' => 0,
    'type' => 0,
  );
  /* Filter criterion: Content: Title (title_field) */
  $handler->display->display_options['filters']['title_field_value']['id'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['table'] = 'field_data_title_field';
  $handler->display->display_options['filters']['title_field_value']['field'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['operator'] = 'allwords';
  $handler->display->display_options['filters']['title_field_value']['group'] = 2;
  /* Filter criterion: Content: Body (body) */
  $handler->display->display_options['filters']['body_value']['id'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['table'] = 'field_data_body';
  $handler->display->display_options['filters']['body_value']['field'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['operator'] = 'allwords';
  $handler->display->display_options['filters']['body_value']['group'] = 2;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'news-and-events/news';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More news';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'items-list large-centered large-block-grid-2 medium-block-grid-2 small-block-grid-1 columns';
  $handler->display->display_options['style_options']['wrapper_class'] = 'items-list-wrapper';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
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
    'news_article' => 'news_article',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'rss_fields';
  $handler->display->display_options['row_options']['title_field'] = 'title';
  $handler->display->display_options['row_options']['link_field'] = 'path';
  $handler->display->display_options['row_options']['description_field'] = 'body';
  $handler->display->display_options['row_options']['creator_field'] = 'name';
  $handler->display->display_options['row_options']['date_field'] = 'created';
  $handler->display->display_options['row_options']['guid_field_options'] = array(
    'guid_field' => 'path',
    'guid_field_is_permalink' => 0,
  );
  $handler->display->display_options['defaults']['header'] = FALSE;
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
    'news_article' => 'news_article',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'rss.xml';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
    'panel_pane_1' => 0,
  );
  $export['news'] = $view;

  return $export;
}

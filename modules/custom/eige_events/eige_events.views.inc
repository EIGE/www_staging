<?php

/**
 * @file eige_events.views.inc
 */

/**
 * Implements hook_views_data().
 */
function eige_events_views_data() {
  $data = array();

  // Base table definition.
  $data['eurogender_event']['table'] = array(
    'group' => t('EuroGender event'),
    'base' => array(
      'title' => t('EuroGender event'),
      'help' => t('Events fetched from EuroGender platform.'),
      'query class' => 'eige_events_query',
    ),
  );

  // ID
  $data['eurogender_event']['nid'] = array(
    'title' => t('ID'),
    'help' => t('Identifier of the EuroGender event.'),
    'field' => array(
      'handler' => 'eige_events_views_handler_field',
    ),
  );
  
  // Title
  $data['eurogender_event']['title'] = array(
    'title' => t('Title'),
    'help' => t('Title of the EuroGender event.'),
    'field' => array(
      'handler' => 'eige_events_views_handler_field',
    ),
  );
  
  // Start date / Begins
  $data['eurogender_event']['field_enge_event_begins_1'] = array(
    'title' => t('Start date (day only)'),
    'help' => t('Start date (day only) of the EuroGender event.'),
    'field' => array(
      'handler' => 'eige_events_views_handler_field',
    ),
  );
  
  // Start date / Begins
  $data['eurogender_event']['field_enge_event_begins'] = array(
    'title' => t('Start date (month/year)'),
    'help' => t('Start date (month/year) of the EuroGender event.'),
    'field' => array(
      'handler' => 'eige_events_views_handler_field',
    ),
  );
  
  // End date / Ends
  $data['eurogender_event']['field_enge_event_ends'] = array(
    'title' => t('End date'),
    'help' => t('End date of the EuroGender event.'),
    'field' => array(
      'handler' => 'eige_events_views_handler_field',
    ),
  );
  
  // Venue
  $data['eurogender_event']['field_enge_venue'] = array(
    'title' => t('Venue'),
    'help' => t('Venue of the EuroGender event.'),
    'field' => array(
      'handler' => 'eige_events_views_handler_field',
    ),
  );
  
  // Address
  $data['eurogender_event']['field_enge_event_address'] = array(
    'title' => t('Address'),
    'help' => t('Address of the EuroGender event.'),
    'field' => array(
      'handler' => 'eige_events_views_handler_field',
    ),
  );
  
  // External URL
  $data['eurogender_event']['field_enge_external_url'] = array(
    'title' => t('External URL'),
    'help' => t('External URL of the EuroGender event.'),
    'field' => array(
      'handler' => 'eige_events_views_handler_field_link',
    ),
  );
  
  // Keywords
  $data['eurogender_event']['field_enge_node_tags'] = array(
    'title' => t('Keywords'),
    'help' => t('Keywords of the EuroGender event.'),
    'field' => array(
      'handler' => 'eige_events_views_handler_field',
    ),
  );
  
  // File upload
  $data['eurogender_event']['field_enge_file_upload'] = array(
    'title' => t('Remote file'),
    'help' => t('Remote file of the EuroGender event.'),
    'field' => array(
      'handler' => 'eige_events_views_handler_field_link',
    ),
  );

  // Location
  $data['eurogender_event']['field_enge_location'] = array(
    'title' => t('Location'),
    'help' => t('Location of the EuroGender event.'),
    'field' => array(
      'handler' => 'eige_events_views_handler_field',
    ),
  );
  
  // Image
  $data['eurogender_event']['field_enge_event_image'] = array(
    'title' => t('Image'),
    'help' => t('Image of the EuroGender event.'),
    'field' => array(
      'handler' => 'eige_events_views_handler_field_image',
    ),
  );

  // Description / Body
  $data['eurogender_event']['body'] = array(
    'title' => t('Description'),
    'help' => t('Description of the EuroGender event.'),
    'field' => array(
      'handler' => 'eige_events_views_handler_field',
    ),
  );

  return $data;
}

/**
 * Implements hook_views_plugins().
 */
function eige_events_views_plugins() {
  $plugins = array(
    'query' => array(
      'eige_events_query' => array(
        'title' => t('EuroGenderEventsAPIRequest'),
        'help' => t('Uses EuroGenderEventsAPIRequest for querying information about events from EuroGender platform.'),
        'handler' => 'eige_events_views_plugin_query',
      ),
    ),
  );

  return $plugins;
}


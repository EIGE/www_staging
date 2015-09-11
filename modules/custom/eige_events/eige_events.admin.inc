<?php

/**
 * @file eige_events.admin.inc
 */

/**
 * Form builder; administration form.
 */
function eige_events_admin_form($form) {
  $form = array();
  $form['eurogender_events_api_url'] = array(
    '#title' => t('Events API URL'),
    '#description' => t('Enter the URL where the EuroGender event information can be fetched from. Do not include trailing slash.'),
    '#type' => 'textfield',
    '#default_value' => variable_get('eurogender_events_api_url', EUROGENDER_EVENTS_DEFAULT_API_URL),
  );
  $form['eurogender_past_events_api_url'] = array(
    '#title' => t('Past Events API URL'),
    '#description' => t('Enter the URL where the EuroGender past event information can be fetched from. Do not include trailing slash.'),
    '#type' => 'textfield',
    '#default_value' => variable_get('eurogender_past_events_api_url', EUROGENDER_PAST_EVENTS_API_URL),
  );
  $form['eurogender_event_api_url'] = array(
    '#title' => t('Event (single) API URL'),
    '#description' => t('Enter the URL where a single EuroGender event details can be fetched from. Do not include trailing slash.'),
    '#type' => 'textfield',
    '#default_value' => variable_get('eurogender_event_api_url', EUROGENDER_SINGLE_EVENT_API_URL),
  );
  $form['eurogender_events_debug_mode'] = array(
    '#title' => t('Debug mode'),
    '#description' => t('Enable debug mode if you would like to see the URL when a request is being executed.'),
    '#type' => 'checkbox',
    '#default_value' => variable_get('eurogender_events_debug_mode', EUROGENDER_EVENTS_DEFAULT_DEBUG_MODE),
  );
  return system_settings_form($form);
}


<?php

/**
 * @file eige_events.api.inc
 */

/**
 * Simple class for putting together a URL for the API call, and doing an HTTP request
 * for retrieving information about EuroGender events.
 * All public methods return $this and can be chained together, except the execute(),
 * which returns the response data.
 *
 * Possible and recommended improvement: implementing a caching logic.
 * See Last.FM module for a smart example:
 * http://drupalcode.org/project/lastfm.git/blob/refs/heads/7.x-2.x:/lastfm.api.inc
 */
class EuroGenderEventsAPIRequest {

  // API URLs for the request.
  private $events_api_url;
  private $past_events_api_url;
  private $single_event_api_url;

  // Flag to designate whether we are in debug mode.
  private $debug_mode;

  // API call arguments. Use EuroGenderEventsAPIRequest->addArgument() to set.
  private $arguments = array();

  // The ID of a particular EuroGender event. If it's greater than 0, it means,
  // the request goes for on certain EuroGender event, no arguments.
  private $eurogender_event_id = 0;
  
  // Opt to fetch past EuroGender events
  private $past_events = 0;
  
  // Opt to fetch the count of total results
  private $count = 0;
  
  // Limit total results fetched
  // TODO AKZ: 
  // Normally I should expose the offset and items_per_page options in EuroGender and 
  // dynamically request those depending on the wrapper view settings in EIGE
  private $limit = 0;

  /**
   * Constructor.
   */
  public function __construct() {
    $this->events_api_url = variable_get('eurogender_events_api_url', EUROGENDER_EVENTS_DEFAULT_API_URL);
    $this->past_events_api_url = variable_get('eurogender_past_events_api_url', EUROGENDER_PAST_EVENTS_API_URL);
    $this->single_event_api_url = variable_get('eurogender_event_api_url', EUROGENDER_SINGLE_EVENT_API_URL);
    $this->debug_mode = variable_get('eurogender_events_debug_mode', EUROGENDER_EVENTS_DEFAULT_DEBUG_MODE);
  }

  /**
   * Sets the ID for the EuroGender event. The execute() method will ignore
   * the arguments, and the request will go for a certain EuroGender event.
   */
  public function getItem($id) {
    $this->eurogender_event_id = $id;
    return $this;
  }
  
  /**
   * Opt to fetch past EuroGender events
   */
  public function getPastEvents() {
    $this->past_events = 1;
    return $this;
  }
  
  public function setLimit($limit) {
    if ($limit > 0) {
      $this->limit = $limit;
    }
    return $this;
  }

  /**
   * Sets an argument for the request.
   */
  public function addArgument($key, $value) {
    $this->arguments[$key] = $value;
    return $this;
  }
  
  public function getRequestUrl() {
    $options = array();
    $options['absolute'] = TRUE;
    if ($this->eurogender_event_id > 0) {
      $request_url = url($this->single_event_api_url . '/' . $this->eurogender_event_id, $options);
    } else {
      $api_url = $this->events_api_url;
      if ($this->past_events) {
        $api_url = $this->past_events_api_url;
      }
      $options['query'] = $this->arguments;
      $request_url = url($api_url, $options);
    }
    return $request_url;
  }

  /**
   * Executes the request. Returns the response data.
   */
  public function execute() {
    $request_url = $this->getRequestUrl();
    if ($this->debug_mode) {
      drupal_set_message(t('Request URL: !url', array('!url' => urldecode($request_url))));
    }
    return $this->request($request_url);
  }
  
  public function executeCount() {
    if ($this->eurogender_event_id > 0) {
      return 1;
    }
    $request_url = $this->getRequestUrl();
    $request_url .= '/count';
    if ($this->debug_mode) {
      drupal_set_message(t('Request URL: !url', array('!url' => urldecode($request_url))));
    }
    $this->count = 1;
    return $this->request($request_url);
  }

  /**
   * Actual HTTP request.
   */
  private function request($request_url) {
    $response = drupal_http_request($request_url);
    if ($response->code != 200) {
      watchdog('eige_events', 'HTTP error !code received.', array('!code' => $response->code), WATCHDOG_ERROR);
      return FALSE;
    }
    $data = json_decode($response->data);
    if (!is_object($data)) {
      watchdog('eige_events', 'Did not receive valid API response (invalid JSON).', array(), WATCHDOG_ERROR);
      return FALSE;
    }
    if (isset($data->error)) {
      watchdog('eige_events', 'Error !code received: %message', array('!code' => $data->error, '%message' => $data->message), WATCHDOG_ERROR);
      return FALSE;
    }
    return $this->parse($data);
  }

  /**
   * Parses the response data.
   */
  private function parse($data) {
    if ($this->count) {
      $counter = $data->counter[0];
      return $counter->nid;
    }
    $parsed_data = array();
    foreach ($data->events as $item) {
      $parsed_data[$item->event->nid] = $item->event;
    }
    if ($this->eurogender_event_id > 0) {
      return isset($parsed_data[$this->eurogender_event_id]) ? $parsed_data[$this->eurogender_event_id] : false;
    }
    if (($this->limit > 0) && ($this->limit < count($parsed_data))) {
      return array_slice($parsed_data, 0, $this->limit);
    }
    return $parsed_data;
  }
}


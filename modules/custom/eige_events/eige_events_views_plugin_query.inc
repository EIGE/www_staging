<?php

/**
 * @file eige_events_views_plugin_query.inc
 */

/**
 * Class for implementing a simple Views query backend plugin, that uses our custom class
 * to execute requests to get information about EuroGender events.
 *
 * Possible improvement: implementing pager functionality.
 * See the EntityFieldQuery Views Backend module for an example:
 * http://drupalcode.org/project/efq_views.git/blob/refs/heads/7.x-1.x:/efq_views_plugin_query.inc
 */
class eige_events_views_plugin_query extends views_plugin_query {

  /**
   * The EuroGenderEventsAPIRequest object.
   */
  var $request;

  /**
   * Constructor; Create the basic request object.
   */
  function init($base_table, $base_field, $options) {
    parent::init($base_table, $base_field, $options);
    $this->request = new EuroGenderEventsAPIRequest();
  }
  
  function option_definition() {
    $options = parent::option_definition();
    $options['past_events'] = array(
      'default' => FALSE,
      'bool' => TRUE,
    );
    return $options;
  }
  
  /**
   * Add settings for the ui.
   */
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    $form['past_events'] = array(
      '#type' => 'checkbox',
      '#title' => t('Fetch past events'),
      '#description' => t('This will make the view fetch past events instead of upcoming/ongoing ones'),
      '#default_value' => !empty($this->options['past_events']),
    );
  }

  /**
   * Builds the necessary info to execute the query.
   */
  function build(&$view) {
    $view->build_info['eige_events_request'] = $this->request;
    $count_request = new EuroGenderEventsAPIRequest();
    
    $request_params = $_GET;
    // hardcoded 'page' argument for pager implementation
    if (isset($request_params['page'])) {
      $page = $request_params['page'];
      if (is_numeric($page) && $page>0) {
        $view->build_info['eige_events_request']->addArgument('page', $page);
      }
    }
    if (!empty($this->options['past_events'])) {
      $view->build_info['eige_events_request']->getPastEvents();
      $count_request->getPastEvents();
    }
    
    $results_count = $count_request->executeCount();
    
    $view->total_rows = $results_count;
    $view->init_pager();
    $this->pager->total_items = $results_count;
    $this->pager->update_page_info();
    
    if ($this->pager->plugin_name == "some") {
      $limit = $this->pager->options['items_per_page'];
      // normally I should check for offset other than zero as well
      if ($limit>0) {
        $view->build_info['eige_events_request']->setLimit($limit);
      }
    }
  }

  /**
   * Executes the request and fills the associated view object with according
   * values.
   */
  function execute(&$view) {
    $request = $view->build_info['eige_events_request'];

    $start = microtime(true);

    $view->result = array();
    $view->result = $request->execute();
    
    $view->execute_time = microtime(true) - $start;
  }
}

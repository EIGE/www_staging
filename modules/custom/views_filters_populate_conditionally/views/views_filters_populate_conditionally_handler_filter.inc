<?php

/**
 * @file
 * Filter class
 */
class views_filters_populate_conditionally_handler_filter extends views_handler_filter_boolean_operator {
  
  function construct() {
    parent::construct();
    $this->value_value = t('Default value');
  }
  
  function expose_options() {
    parent::expose_options();
    $this->options['expose']['required'] = FALSE;
  }

  function option_definition() {
    $options = parent::option_definition();

    $options['value']['default'] = FALSE;
    $options['filters'] = array('default' => array());

    return $options;
  }

  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);

    foreach((array)$this->view->display_handler->get_handlers('filter') as $id => $filter) {
      if ($id != $this->options['id']) {
        $options[$id] = t($filter->definition['group']) . ':' . t($filter->definition['title']);
      }
    }
    
    $form['filters'] = array(
      '#type' => 'checkboxes',
      '#options' => $options,
      '#title' => t('Filters'),
      '#description' => t('Choose the filters that should be executed if this filter is populated (has a non empty value). Beware that the value of this filter will not be populated to the underline filters. They should have default values of their own.'),
      '#default_value' => $this->options['filters'],
    );

  }
  
 /**
   * Add this filter to the query.
   *
   */
  function query() {
    // do nothing
  }
  
  function pre_query() {
    
    // start with default null value 
    $value = $this->value;
    
    // If exposed, take data from input, as this hasn't reached the views object yet
    if ($this->options['exposed']) {
      $input = $this->view->get_exposed_input();
      $identifier = $this->options['expose']['identifier'];
      if (isset($input[$identifier])) {
        $value = $input[$identifier];
      }
    }
		
    $should_apply_underline_filters = false;
    if (isset($value) && !empty($value) && $value) {
      $should_apply_underline_filters = true;
    }
		
    foreach ($this->options['filters'] as $filter) {
      if ($filter) {
        // if this filter is not populated (has an empty/null value), then set the underline filters' default values
        // to an empty string so they will not be included in the resulting query
        if (!$should_apply_underline_filters) {
          // attempt to support different types of values over different filters
          // i.e. cck integer value is an array of min, max and value

          // this prevents filters of type string and integer with default values from executing
          if (is_string($this->view->filter[$filter]->value)) {
              $this->view->filter[$filter]->value = '';
          }
          if (is_array($this->view->filter[$filter]->value)) {
            if (isset($this->view->filter[$filter]->value['value']) && is_string($this->view->filter[$filter]->value['value'])) {
              $this->view->filter[$filter]->value['value'] = '';
            } else {
             $this->view->filter[$filter]->value = array(); 
            }
          }
          // this prevents filters of type string and operations type 'empty', 'not empty' etc from executing
          $this->view->filter[$filter]->operator = '';
        }
      }
    }
  }
  
  function value_form(&$form, &$form_state) {
    parent::value_form($form, $form_state);
    
    // if bef_single is the chosen theme function, the following are required
    // otherwise they are not taken into account
    
    // required to ensure default behavior
    $form['value']['#value'] = $this->value;
    
    // required to ensure behavior upon form population
    if (!empty($this->options['exposed'])) {
      $identifier = $this->options['expose']['identifier'];
      if (!empty($form_state['exposed']) && isset($form_state['input'][$identifier])) {
        $form['value']['#value'] = $form_state['input'][$identifier];
      }
    }
  }
  
}

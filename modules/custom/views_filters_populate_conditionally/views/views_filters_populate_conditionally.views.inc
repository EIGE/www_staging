<?php

/**
 * Implementation of hook_views_data().
 */
function views_filters_populate_conditionally_views_data() {
  $data['views_filters_populate_conditionally']['table']['group'] = t('Global');
  $data['views_filters_populate_conditionally']['table']['join'] = array(
    '#global' => array(),
  );

  $data['views_filters_populate_conditionally']['populate'] = array(
    'title' => t('Conditionally populate filters'),
    'help' => t('Use other filters with default values that will be applied conditionally depending on whether this filter is populated.'),
    'filter' => array(
      'handler' => 'views_filters_populate_conditionally_handler_filter',
    ),
  );
  
  return $data;
}

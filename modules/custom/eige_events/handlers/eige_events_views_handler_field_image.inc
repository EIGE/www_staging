<?php

/**
 * @file eige_events_views_handler_field_image.inc
 * EuroGender event image field handler.
 */

/**
 * Field handler to render a field as an image.
 */
class eige_events_views_handler_field_image extends eige_events_views_handler_field {

  // TODO AKZ is there a better way to theme image without hardcoding dimensions
  function render($values) {
    $image = $this->get_value($values);
    if (isset($image)) {
      return theme_image(array(
        'path' => $image->src, 
        'width' => 350,
        'height' => 200,
        'alt' => $image->alt, 
        'attributes' => array()
      ));
    }
  }

  /**
   * Called to add the field to a query.
   */
  function query() {
    $this->field_alias = $this->real_field;
  }

}


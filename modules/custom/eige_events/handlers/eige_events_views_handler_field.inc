<?php

/**
 * @file eige_events_views_handler_field.inc
 * Basic "EuroGender event" field handler.
 */

/**
 * Field handler to provide simple renderer that allows linking to a EuroGender event.
 */
class eige_events_views_handler_field extends views_handler_field {
  /**
   * Called to add the field to a query.
   */
  function query() {
    $this->field_alias = $this->real_field;
  }

}


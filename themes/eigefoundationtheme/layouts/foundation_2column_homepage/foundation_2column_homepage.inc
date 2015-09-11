<?php

/**
 * Implements hook_panels_layouts()
 */
function eigefoundationtheme_foundation_2column_homepage_panels_layouts() {
  $items['foundation_2column_homepage'] = array(
    'title' => t('Foundation: 2 column homepage'),
    'category' => t('Foundation: 2 Columns - Homepage'),
    'icon' => 'foundation_2column_homepage.png',
    'theme' => 'foundation_2column_homepage',
    //'admin css' => '../foundation_panels_admin.css',
    'regions' => array(
      'first' => t('First'),
      'second' => t('Second'),
    ),
  );
  return $items;
}


<?php

/**
 * Implements hook_panels_layouts()
 */
function eigefoundationtheme_foundation_2row_country_panels_layouts() {
  $items['foundation_2row_country'] = array(
    'title' => t('Foundation: 2 row country'),
    'category' => t('Foundation: 2 Country'),
    'icon' => 'foundation_2row_country.png',
    'theme' => 'foundation_2row_country',
    //'admin css' => '../foundation_panels_admin.css',
    'regions' => array(
      'first' => t('First'),
      'second' => t('Second'),
    ),
  );
  return $items;
}


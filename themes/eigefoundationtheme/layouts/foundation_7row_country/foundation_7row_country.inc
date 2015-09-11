<?php

/**
 * Implements hook_panels_layouts()
 */
function eigefoundationtheme_foundation_7row_country_panels_layouts() {
  $items['foundation_7row_country'] = array(
    'title' => t('Foundation: 7 row country'),
    'category' => t('Foundation: 7 Country'),
    'icon' => 'foundation_7row_country.png',
    'theme' => 'foundation_7row_country',
    //'admin css' => '../foundation_panels_admin.css',
    'regions' => array(
      'first_left' => t('First Left'),
      'first_right' => t('First Right'),
      'second_left' => t('Second Left'),
      'second_right' => t('Second Right'),
      'third_left' => t('Third Left'),
      'third_right' => t('Third Right'),
      'fourth_left' => t('Fourth Left'),
      'fourth_right' => t('Fourth Right'),
      'fourth_second' => t('Fourth Second'),
      'fifth' => t('Fifth'),
      'sixth' => t('Sixth'),
	  'seventh' => t('Seventh'),
    ),
  );
  return $items;
}


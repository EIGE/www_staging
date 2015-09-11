<?php
/**
 * @file
 * eige_gender_mainstreaming.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function eige_gender_mainstreaming_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['menu_block-3'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 3,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => 'gender-mainstreaming',
    'roles' => array(),
    'themes' => array(
      'eigefoundationtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'eigefoundationtheme',
        'weight' => 0,
      ),
    ),
    'title' => '<title>',
    'visibility' => 1,
  );

  return $export;
}

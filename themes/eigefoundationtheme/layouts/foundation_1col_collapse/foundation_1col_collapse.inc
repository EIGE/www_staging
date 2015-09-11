<?php

/**
 * Implements hook_panels_layouts()
 */
function eigefoundationtheme_foundation_1col_collapse_panels_layouts() {
  $items['foundation_1col_collapse'] = array(
    'title' => t('Foundation: 1 row collapsed'),
    'category' => t('Foundation: 1 - Collapsed'),
    'icon' => 'foundation_1col_collapse.png',
    'theme' => 'foundation_1col_collapse',
    //'admin css' => '../foundation_panels_admin.css',
    'regions' => array('middle' => t('Main column')),
  );
  return $items;
}


<?php
/**
 * @file
 * eige_base.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function eige_base_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-accessibility_links'] = array(
    'cache' => -1,
    'css_class' => 'block-accessibility-links',
    'custom' => 0,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'machine_name' => 'accessibility_links',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'eige_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'eige_seven',
        'weight' => 0,
      ),
      'eigefoundationtheme' => array(
        'region' => 'top-links',
        'status' => 1,
        'theme' => 'eigefoundationtheme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-enge_logo'] = array(
    'cache' => -1,
    'css_class' => 'block-enge-logo',
    'custom' => 0,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'machine_name' => 'enge_logo',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'eige_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'eige_seven',
        'weight' => -17,
      ),
      'eigefoundationtheme' => array(
        'region' => 'logo-right',
        'status' => 1,
        'theme' => 'eigefoundationtheme',
        'weight' => -17,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['lang_dropdown-language_content'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'language_content',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'lang_dropdown',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'eige_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'eige_seven',
        'weight' => -18,
      ),
      'eigefoundationtheme' => array(
        'region' => 'top-links',
        'status' => 1,
        'theme' => 'eigefoundationtheme',
        'weight' => -18,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['menu-menu-about-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-about-menu',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'eige_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'eige_seven',
        'weight' => 0,
      ),
      'eigefoundationtheme' => array(
        'region' => 'footer_firstcolumn',
        'status' => 1,
        'theme' => 'eigefoundationtheme',
        'weight' => 0,
      ),
    ),
    'title' => 'About',
    'visibility' => 0,
  );

  $export['menu-menu-other-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-other-menu',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'eige_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'eige_seven',
        'weight' => 0,
      ),
      'eigefoundationtheme' => array(
        'region' => 'footer_thirdcolumn',
        'status' => 1,
        'theme' => 'eigefoundationtheme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-popular-topics-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-popular-topics-menu',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'eige_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'eige_seven',
        'weight' => 0,
      ),
      'eigefoundationtheme' => array(
        'region' => 'footer_secondcolumn',
        'status' => 1,
        'theme' => 'eigefoundationtheme',
        'weight' => 0,
      ),
    ),
    'title' => 'Popular Topics',
    'visibility' => 0,
  );

  $export['menu-menu-promo-topics-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-promo-topics-menu',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'eige_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'eige_seven',
        'weight' => -21,
      ),
      'eigefoundationtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'eigefoundationtheme',
        'weight' => -21,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['search-form'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'form',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'search',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'eige_seven' => array(
        'region' => 'dashboard_inactive',
        'status' => 1,
        'theme' => 'eige_seven',
        'weight' => -16,
      ),
      'eigefoundationtheme' => array(
        'region' => 'logo-right',
        'status' => 1,
        'theme' => 'eigefoundationtheme',
        'weight' => -16,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['sharethis-sharethis_block'] = array(
    'cache' => 4,
    'css_class' => 'block-eige-share-this',
    'custom' => 0,
    'delta' => 'sharethis_block',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'sharethis',
    'node_types' => array(
      0 => 'administrative_data_source',
      1 => 'advanced_page',
      2 => 'career_opportunity',
      3 => 'country_overview',
      4 => 'document',
      5 => 'gender_equality_policy',
      6 => 'gender_story',
      7 => 'good_practice',
      8 => 'legal_definition',
      9 => 'method_tool',
      10 => 'news_article',
      11 => 'page',
      12 => 'procurement',
      13 => 'publication',
      14 => 'resource',
      15 => 'resource_pool_item',
      16 => 'sectoral_area',
      17 => 'simplenews',
      18 => 'statistical_product',
      19 => 'statistics_on_sexual_violence',
      20 => 'structure',
      21 => 'tool_method_category',
      22 => 'video',
      23 => 'webform',
    ),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'eige_seven' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'eige_seven',
        'weight' => 0,
      ),
      'eigefoundationtheme' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'eigefoundationtheme',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['system-powered-by'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'powered-by',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'eige_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'eige_seven',
        'weight' => 10,
      ),
      'eigefoundationtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'eigefoundationtheme',
        'weight' => 10,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-home_page_nodequeue-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'home_page_nodequeue-block',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'eige_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'eige_seven',
        'weight' => -22,
      ),
      'eigefoundationtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'eigefoundationtheme',
        'weight' => -22,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  return $export;
}

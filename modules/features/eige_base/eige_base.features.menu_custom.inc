<?php
/**
 * @file
 * eige_base.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function eige_base_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-about-menu.
  $menus['menu-about-menu'] = array(
    'menu_name' => 'menu-about-menu',
    'title' => 'About menu',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Exported menu: menu-other-menu.
  $menus['menu-other-menu'] = array(
    'menu_name' => 'menu-other-menu',
    'title' => 'Other',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Exported menu: menu-popular-topics-menu.
  $menus['menu-popular-topics-menu'] = array(
    'menu_name' => 'menu-popular-topics-menu',
    'title' => 'Popular Topics menu',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Exported menu: menu-promo-topics-menu.
  $menus['menu-promo-topics-menu'] = array(
    'menu_name' => 'menu-promo-topics-menu',
    'title' => 'Promo Topics menu',
    'description' => 'Important menu links in order to be promoted in home page (and possibly on other website areas as well)',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Exported menu: menu-user-login-menu.
  $menus['menu-user-login-menu'] = array(
    'menu_name' => 'menu-user-login-menu',
    'title' => 'User login menu',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About menu');
  t('Important menu links in order to be promoted in home page (and possibly on other website areas as well)');
  t('Other');
  t('Popular Topics menu');
  t('Promo Topics menu');
  t('User login menu');


  return $menus;
}

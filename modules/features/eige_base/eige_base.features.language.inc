<?php
/**
 * @file
 * eige_base.features.language.inc
 */

/**
 * Implements hook_locale_default_languages().
 */
function eige_base_locale_default_languages() {
  $languages = array();

  // Exported language: bg.
  $languages['bg'] = array(
    'language' => 'bg',
    'name' => 'Bulgarian',
    'native' => 'Български',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'bg',
    'weight' => -9,
  );
  // Exported language: cs.
  $languages['cs'] = array(
    'language' => 'cs',
    'name' => 'Czech',
    'native' => 'Čeština',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'cs',
    'weight' => -7,
  );
  // Exported language: da.
  $languages['da'] = array(
    'language' => 'da',
    'name' => 'Danish',
    'native' => 'Dansk',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'da',
    'weight' => -6,
  );
  // Exported language: de.
  $languages['de'] = array(
    'language' => 'de',
    'name' => 'German',
    'native' => 'Deutsch',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'de',
    'weight' => -5,
  );
  // Exported language: el.
  $languages['el'] = array(
    'language' => 'el',
    'name' => 'Greek',
    'native' => 'Ελληνικά',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'el',
    'weight' => -3,
  );
  // Exported language: en.
  $languages['en'] = array(
    'language' => 'en',
    'name' => 'English',
    'native' => 'English',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => '',
    'weight' => -10,
  );
  // Exported language: es.
  $languages['es'] = array(
    'language' => 'es',
    'name' => 'Spanish',
    'native' => 'Español',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'es',
    'weight' => -8,
  );
  // Exported language: et.
  $languages['et'] = array(
    'language' => 'et',
    'name' => 'Estonian',
    'native' => 'Eesti',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'et',
    'weight' => -4,
  );
  // Exported language: fi.
  $languages['fi'] = array(
    'language' => 'fi',
    'name' => 'Finnish',
    'native' => 'Suomi',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'fi',
    'weight' => 10,
  );
  // Exported language: fr.
  $languages['fr'] = array(
    'language' => 'fr',
    'name' => 'French',
    'native' => 'Français',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'fr',
    'weight' => -2,
  );
  // Exported language: ga.
  $languages['ga'] = array(
    'language' => 'ga',
    'name' => 'Irish',
    'native' => 'Gaeilge',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'ga',
    'weight' => -1,
  );
  // Exported language: hr.
  $languages['hr'] = array(
    'language' => 'hr',
    'name' => 'Croatian',
    'native' => 'Hrvatski',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'hr',
    'weight' => 0,
  );
  // Exported language: hu.
  $languages['hu'] = array(
    'language' => 'hu',
    'name' => 'Hungarian',
    'native' => 'Magyar',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'hu',
    'weight' => 4,
  );
  // Exported language: it.
  $languages['it'] = array(
    'language' => 'it',
    'name' => 'Italian',
    'native' => 'Italiano',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'it',
    'weight' => 1,
  );
  // Exported language: lt.
  $languages['lt'] = array(
    'language' => 'lt',
    'name' => 'Lithuanian',
    'native' => 'Lietuvių kalba',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 3,
    'formula' => '(((($n%10)==1)&&(($n%100)!=11))?(0):(((($n%10)>=2)&&((($n%100)<10)||(($n%100)>=20)))?(1):2))',
    'domain' => '',
    'prefix' => 'lt',
    'weight' => 3,
  );
  // Exported language: lv.
  $languages['lv'] = array(
    'language' => 'lv',
    'name' => 'Latvian',
    'native' => 'Latviešu valoda',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'lv',
    'weight' => 2,
  );
  // Exported language: mt.
  $languages['mt'] = array(
    'language' => 'mt',
    'name' => 'Maltese',
    'native' => 'Malti',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'mt',
    'weight' => 5,
  );
  // Exported language: nl.
  $languages['nl'] = array(
    'language' => 'nl',
    'name' => 'Dutch',
    'native' => 'Nederlands',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'nl',
    'weight' => 6,
  );
  // Exported language: pl.
  $languages['pl'] = array(
    'language' => 'pl',
    'name' => 'Polish',
    'native' => 'Polski',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'pl',
    'weight' => 7,
  );
  // Exported language: pt.
  $languages['pt'] = array(
    'language' => 'pt',
    'name' => 'Portuguese',
    'native' => 'Português',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'pt',
    'weight' => 8,
  );
  // Exported language: ro.
  $languages['ro'] = array(
    'language' => 'ro',
    'name' => 'Romanian',
    'native' => 'Română',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'ro',
    'weight' => 9,
  );
  // Exported language: sk.
  $languages['sk'] = array(
    'language' => 'sk',
    'name' => 'Slovak',
    'native' => 'Slovenčina (slovenský jazyk)',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'sk',
    'weight' => 9,
  );
  // Exported language: sl.
  $languages['sl'] = array(
    'language' => 'sl',
    'name' => 'Slovenian',
    'native' => 'Slovenščina (slovenski jezik)',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'sl',
    'weight' => 9,
  );
  // Exported language: sv.
  $languages['sv'] = array(
    'language' => 'sv',
    'name' => 'Swedish',
    'native' => 'Svenska',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'sv',
    'weight' => 10,
  );
  return $languages;
}

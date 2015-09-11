<?php
/**
 * @file
 * eige_base.variable.inc
 */

/**
 * Implements hook_variable_realm_default_variables().
 */
function eige_base_variable_realm_default_variables() {
$realm_variables = array();
  $realm_variables['language']['bg'] = array();
  $realm_variables['language']['cs'] = array();
  $realm_variables['language']['da'] = array();
  $realm_variables['language']['de'] = array();
  $realm_variables['language']['el'] = array();
  $realm_variables['language']['en'] = array(
  'site_name' => 'EIGE',
  'site_slogan' => 'European Institute for Gender Equality',
);
  $realm_variables['language']['es'] = array();
  $realm_variables['language']['et'] = array();
  $realm_variables['language']['fi'] = array();
  $realm_variables['language']['fr'] = array();
  $realm_variables['language']['ga'] = array();
  $realm_variables['language']['hr'] = array();
  $realm_variables['language']['hu'] = array();
  $realm_variables['language']['it'] = array();
  $realm_variables['language']['lt'] = array();
  $realm_variables['language']['lv'] = array();
  $realm_variables['language']['mt'] = array();
  $realm_variables['language']['nl'] = array();
  $realm_variables['language']['pl'] = array();
  $realm_variables['language']['pt'] = array();
  $realm_variables['language']['ro'] = array();
  $realm_variables['language']['sk'] = array();
  $realm_variables['language']['sl'] = array();
  $realm_variables['language']['sv'] = array();

return $realm_variables;
}

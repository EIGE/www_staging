<?php
/**
 * @file
 * eige_roles_and_permissions.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function eige_roles_and_permissions_user_default_roles() {
  $roles = array();

  // Exported role: EIGE Administrator.
  $roles['EIGE Administrator'] = array(
    'name' => 'EIGE Administrator',
    'weight' => 4,
  );

  // Exported role: EIGE Content Manager.
  $roles['EIGE Content Manager'] = array(
    'name' => 'EIGE Content Manager',
    'weight' => 3,
  );

  // Exported role: External Content Manager.
  $roles['External Content Manager'] = array(
    'name' => 'External Content Manager',
    'weight' => 2,
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 5,
  );

  return $roles;
}

<?php
/**
 * @file
 * eige_roles_and_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function eige_roles_and_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access PDF version'.
  $permissions['access PDF version'] = array(
    'name' => 'access PDF version',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'print_pdf',
  );

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access all views'.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'access all webform results'.
  $permissions['access all webform results'] = array(
    'name' => 'access all webform results',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access comments'.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'contextual',
  );

  // Exported permission: 'access dashboard'.
  $permissions['access dashboard'] = array(
    'name' => 'access dashboard',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'dashboard',
  );

  // Exported permission: 'access environment indicator'.
  $permissions['access environment indicator'] = array(
    'name' => 'access environment indicator',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'environment_indicator',
  );

  // Exported permission: 'access environment indicator default_environment'.
  $permissions['access environment indicator default_environment'] = array(
    'name' => 'access environment indicator default_environment',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'environment_indicator',
  );

  // Exported permission: 'access environment indicator overwritten_environment'.
  $permissions['access environment indicator overwritten_environment'] = array(
    'name' => 'access environment indicator overwritten_environment',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'environment_indicator',
  );

  // Exported permission: 'access lexicon'.
  $permissions['access lexicon'] = array(
    'name' => 'access lexicon',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'lexicon',
  );

  // Exported permission: 'access own webform results'.
  $permissions['access own webform results'] = array(
    'name' => 'access own webform results',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access own webform submissions'.
  $permissions['access own webform submissions'] = array(
    'name' => 'access own webform submissions',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access print'.
  $permissions['access print'] = array(
    'name' => 'access print',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'print',
  );

  // Exported permission: 'access rules debug'.
  $permissions['access rules debug'] = array(
    'name' => 'access rules debug',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site-wide contact form'.
  $permissions['access site-wide contact form'] = array(
    'name' => 'access site-wide contact form',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'contact',
  );

  // Exported permission: 'access user contact forms'.
  $permissions['access user contact forms'] = array(
    'name' => 'access user contact forms',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'contact',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'add media from remote sources'.
  $permissions['add media from remote sources'] = array(
    'name' => 'add media from remote sources',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'media_internet',
  );

  // Exported permission: 'admin_classes'.
  $permissions['admin_classes'] = array(
    'name' => 'admin_classes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ds_ui',
  );

  // Exported permission: 'admin_display_suite'.
  $permissions['admin_display_suite'] = array(
    'name' => 'admin_display_suite',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ds',
  );

  // Exported permission: 'admin_fields'.
  $permissions['admin_fields'] = array(
    'name' => 'admin_fields',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ds_ui',
  );

  // Exported permission: 'admin_view_modes'.
  $permissions['admin_view_modes'] = array(
    'name' => 'admin_view_modes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ds_ui',
  );

  // Exported permission: 'administer EU Cookie Compliance popup'.
  $permissions['administer EU Cookie Compliance popup'] = array(
    'name' => 'administer EU Cookie Compliance popup',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'eu_cookie_compliance',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer advanced pane settings'.
  $permissions['administer advanced pane settings'] = array(
    'name' => 'administer advanced pane settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer block classes'.
  $permissions['administer block classes'] = array(
    'name' => 'administer block classes',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'block_class',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'block',
  );

  // Exported permission: 'administer cer settings'.
  $permissions['administer cer settings'] = array(
    'name' => 'administer cer settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'cer',
  );

  // Exported permission: 'administer ckeditor'.
  $permissions['administer ckeditor'] = array(
    'name' => 'administer ckeditor',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: 'administer comments'.
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'administer contact forms'.
  $permissions['administer contact forms'] = array(
    'name' => 'administer contact forms',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'contact',
  );

  // Exported permission: 'administer content translations'.
  $permissions['administer content translations'] = array(
    'name' => 'administer content translations',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'i18n_node',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer contexts'.
  $permissions['administer contexts'] = array(
    'name' => 'administer contexts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'context_ui',
  );

  // Exported permission: 'administer eige events'.
  $permissions['administer eige events'] = array(
    'name' => 'administer eige events',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eige_events',
  );

  // Exported permission: 'administer elysia_cron'.
  $permissions['administer elysia_cron'] = array(
    'name' => 'administer elysia_cron',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'elysia_cron',
  );

  // Exported permission: 'administer entity translation'.
  $permissions['administer entity translation'] = array(
    'name' => 'administer entity translation',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: 'administer environment indicator settings'.
  $permissions['administer environment indicator settings'] = array(
    'name' => 'administer environment indicator settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'environment_indicator',
  );

  // Exported permission: 'administer facets'.
  $permissions['administer facets'] = array(
    'name' => 'administer facets',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'facetapi',
  );

  // Exported permission: 'administer features'.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'administer feeds'.
  $permissions['administer feeds'] = array(
    'name' => 'administer feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'administer field collections'.
  $permissions['administer field collections'] = array(
    'name' => 'administer field collections',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_collection',
  );

  // Exported permission: 'administer fieldgroups'.
  $permissions['administer fieldgroups'] = array(
    'name' => 'administer fieldgroups',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_group',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'administer google analytics'.
  $permissions['administer google analytics'] = array(
    'name' => 'administer google analytics',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'administer honeypot'.
  $permissions['administer honeypot'] = array(
    'name' => 'administer honeypot',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'honeypot',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'image',
  );

  // Exported permission: 'administer languages'.
  $permissions['administer languages'] = array(
    'name' => 'administer languages',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'locale',
  );

  // Exported permission: 'administer lexicon'.
  $permissions['administer lexicon'] = array(
    'name' => 'administer lexicon',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'lexicon',
  );

  // Exported permission: 'administer lightbox2'.
  $permissions['administer lightbox2'] = array(
    'name' => 'administer lightbox2',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'lightbox2',
  );

  // Exported permission: 'administer mailsystem'.
  $permissions['administer mailsystem'] = array(
    'name' => 'administer mailsystem',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'mailsystem',
  );

  // Exported permission: 'administer masquerade'.
  $permissions['administer masquerade'] = array(
    'name' => 'administer masquerade',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'masquerade',
  );

  // Exported permission: 'administer media'.
  $permissions['administer media'] = array(
    'name' => 'administer media',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'media',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer menu attributes'.
  $permissions['administer menu attributes'] = array(
    'name' => 'administer menu attributes',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'menu_attributes',
  );

  // Exported permission: 'administer menu positions'.
  $permissions['administer menu positions'] = array(
    'name' => 'administer menu positions',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'menu_position',
  );

  // Exported permission: 'administer meta tags'.
  $permissions['administer meta tags'] = array(
    'name' => 'administer meta tags',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'administer module filter'.
  $permissions['administer module filter'] = array(
    'name' => 'administer module filter',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'module_filter',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer newsletters'.
  $permissions['administer newsletters'] = array(
    'name' => 'administer newsletters',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'simplenews',
  );

  // Exported permission: 'administer nodequeue'.
  $permissions['administer nodequeue'] = array(
    'name' => 'administer nodequeue',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'nodequeue',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer page manager'.
  $permissions['administer page manager'] = array(
    'name' => 'administer page manager',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: 'administer pane access'.
  $permissions['administer pane access'] = array(
    'name' => 'administer pane access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer panels layouts'.
  $permissions['administer panels layouts'] = array(
    'name' => 'administer panels layouts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer panels styles'.
  $permissions['administer panels styles'] = array(
    'name' => 'administer panels styles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer pathauto'.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer print'.
  $permissions['administer print'] = array(
    'name' => 'administer print',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'print',
  );

  // Exported permission: 'administer rules'.
  $permissions['administer rules'] = array(
    'name' => 'administer rules',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'administer scs'.
  $permissions['administer scs'] = array(
    'name' => 'administer scs',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'scs',
  );

  // Exported permission: 'administer search'.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'administer search_api'.
  $permissions['administer search_api'] = array(
    'name' => 'administer search_api',
    'roles' => array(),
    'module' => 'search_api',
  );

  // Exported permission: 'administer sharethis'.
  $permissions['administer sharethis'] = array(
    'name' => 'administer sharethis',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'sharethis',
  );

  // Exported permission: 'administer simplenews settings'.
  $permissions['administer simplenews settings'] = array(
    'name' => 'administer simplenews settings',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'simplenews',
  );

  // Exported permission: 'administer simplenews subscriptions'.
  $permissions['administer simplenews subscriptions'] = array(
    'name' => 'administer simplenews subscriptions',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'simplenews',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer smtp module'.
  $permissions['administer smtp module'] = array(
    'name' => 'administer smtp module',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'smtp',
  );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer views'.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'administer xmlsitemap'.
  $permissions['administer xmlsitemap'] = array(
    'name' => 'administer xmlsitemap',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'xmlsitemap',
  );

  // Exported permission: 'assign EIGE Administrator role'.
  $permissions['assign EIGE Administrator role'] = array(
    'name' => 'assign EIGE Administrator role',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: 'assign EIGE Content Manager role'.
  $permissions['assign EIGE Content Manager role'] = array(
    'name' => 'assign EIGE Content Manager role',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: 'assign External Content Manager role'.
  $permissions['assign External Content Manager role'] = array(
    'name' => 'assign External Content Manager role',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: 'assign all roles'.
  $permissions['assign all roles'] = array(
    'name' => 'assign all roles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'bypass honeypot protection'.
  $permissions['bypass honeypot protection'] = array(
    'name' => 'bypass honeypot protection',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'honeypot',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'bypass rules access'.
  $permissions['bypass rules access'] = array(
    'name' => 'bypass rules access',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'change layouts in place editing'.
  $permissions['change layouts in place editing'] = array(
    'name' => 'change layouts in place editing',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'choose htmlmail_plaintext'.
  $permissions['choose htmlmail_plaintext'] = array(
    'name' => 'choose htmlmail_plaintext',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'htmlmail',
  );

  // Exported permission: 'clear gm_concepts_and_definitions_importer feeds'.
  $permissions['clear gm_concepts_and_definitions_importer feeds'] = array(
    'name' => 'clear gm_concepts_and_definitions_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'clear node feeds'.
  $permissions['clear node feeds'] = array(
    'name' => 'clear node feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'clear user feeds'.
  $permissions['clear user feeds'] = array(
    'name' => 'clear user feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'context ajax block access'.
  $permissions['context ajax block access'] = array(
    'name' => 'context ajax block access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'context_ui',
  );

  // Exported permission: 'create administrative_data_source content'.
  $permissions['create administrative_data_source content'] = array(
    'name' => 'create administrative_data_source content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create advanced_page content'.
  $permissions['create advanced_page content'] = array(
    'name' => 'create advanced_page content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create career_opportunity content'.
  $permissions['create career_opportunity content'] = array(
    'name' => 'create career_opportunity content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create country_overview content'.
  $permissions['create country_overview content'] = array(
    'name' => 'create country_overview content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create document content'.
  $permissions['create document content'] = array(
    'name' => 'create document content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create gender_equality_country content'.
  $permissions['create gender_equality_country content'] = array(
    'name' => 'create gender_equality_country content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create gender_equality_policy content'.
  $permissions['create gender_equality_policy content'] = array(
    'name' => 'create gender_equality_policy content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create gender_story content'.
  $permissions['create gender_story content'] = array(
    'name' => 'create gender_story content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create good_practice content'.
  $permissions['create good_practice content'] = array(
    'name' => 'create good_practice content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create legal_definition content'.
  $permissions['create legal_definition content'] = array(
    'name' => 'create legal_definition content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create method_tool content'.
  $permissions['create method_tool content'] = array(
    'name' => 'create method_tool content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create news_article content'.
  $permissions['create news_article content'] = array(
    'name' => 'create news_article content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create procurement content'.
  $permissions['create procurement content'] = array(
    'name' => 'create procurement content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create publication content'.
  $permissions['create publication content'] = array(
    'name' => 'create publication content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create resource content'.
  $permissions['create resource content'] = array(
    'name' => 'create resource content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create resource_pool_item content'.
  $permissions['create resource_pool_item content'] = array(
    'name' => 'create resource_pool_item content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create sectoral_area content'.
  $permissions['create sectoral_area content'] = array(
    'name' => 'create sectoral_area content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create simplenews content'.
  $permissions['create simplenews content'] = array(
    'name' => 'create simplenews content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create statistical_product content'.
  $permissions['create statistical_product content'] = array(
    'name' => 'create statistical_product content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create statistics_on_sexual_violence content'.
  $permissions['create statistics_on_sexual_violence content'] = array(
    'name' => 'create statistics_on_sexual_violence content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create structure content'.
  $permissions['create structure content'] = array(
    'name' => 'create structure content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create tool_method_category content'.
  $permissions['create tool_method_category content'] = array(
    'name' => 'create tool_method_category content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'create video content'.
  $permissions['create video content'] = array(
    'name' => 'create video content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create webform content'.
  $permissions['create webform content'] = array(
    'name' => 'create webform content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'customize ckeditor'.
  $permissions['customize ckeditor'] = array(
    'name' => 'customize ckeditor',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: 'delete all webform submissions'.
  $permissions['delete all webform submissions'] = array(
    'name' => 'delete all webform submissions',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'delete any administrative_data_source content'.
  $permissions['delete any administrative_data_source content'] = array(
    'name' => 'delete any administrative_data_source content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any advanced_page content'.
  $permissions['delete any advanced_page content'] = array(
    'name' => 'delete any advanced_page content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any career_opportunity content'.
  $permissions['delete any career_opportunity content'] = array(
    'name' => 'delete any career_opportunity content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any country_overview content'.
  $permissions['delete any country_overview content'] = array(
    'name' => 'delete any country_overview content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any document content'.
  $permissions['delete any document content'] = array(
    'name' => 'delete any document content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any gender_equality_country content'.
  $permissions['delete any gender_equality_country content'] = array(
    'name' => 'delete any gender_equality_country content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any gender_equality_policy content'.
  $permissions['delete any gender_equality_policy content'] = array(
    'name' => 'delete any gender_equality_policy content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any gender_story content'.
  $permissions['delete any gender_story content'] = array(
    'name' => 'delete any gender_story content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any good_practice content'.
  $permissions['delete any good_practice content'] = array(
    'name' => 'delete any good_practice content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any legal_definition content'.
  $permissions['delete any legal_definition content'] = array(
    'name' => 'delete any legal_definition content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any method_tool content'.
  $permissions['delete any method_tool content'] = array(
    'name' => 'delete any method_tool content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any news_article content'.
  $permissions['delete any news_article content'] = array(
    'name' => 'delete any news_article content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any procurement content'.
  $permissions['delete any procurement content'] = array(
    'name' => 'delete any procurement content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any publication content'.
  $permissions['delete any publication content'] = array(
    'name' => 'delete any publication content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any resource content'.
  $permissions['delete any resource content'] = array(
    'name' => 'delete any resource content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any resource_pool_item content'.
  $permissions['delete any resource_pool_item content'] = array(
    'name' => 'delete any resource_pool_item content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any sectoral_area content'.
  $permissions['delete any sectoral_area content'] = array(
    'name' => 'delete any sectoral_area content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any simplenews content'.
  $permissions['delete any simplenews content'] = array(
    'name' => 'delete any simplenews content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any statistical_product content'.
  $permissions['delete any statistical_product content'] = array(
    'name' => 'delete any statistical_product content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any statistics_on_sexual_violence content'.
  $permissions['delete any statistics_on_sexual_violence content'] = array(
    'name' => 'delete any statistics_on_sexual_violence content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any structure content'.
  $permissions['delete any structure content'] = array(
    'name' => 'delete any structure content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any tool_method_category content'.
  $permissions['delete any tool_method_category content'] = array(
    'name' => 'delete any tool_method_category content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any video content'.
  $permissions['delete any video content'] = array(
    'name' => 'delete any video content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any webform content'.
  $permissions['delete any webform content'] = array(
    'name' => 'delete any webform content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own administrative_data_source content'.
  $permissions['delete own administrative_data_source content'] = array(
    'name' => 'delete own administrative_data_source content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own advanced_page content'.
  $permissions['delete own advanced_page content'] = array(
    'name' => 'delete own advanced_page content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own career_opportunity content'.
  $permissions['delete own career_opportunity content'] = array(
    'name' => 'delete own career_opportunity content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own country_overview content'.
  $permissions['delete own country_overview content'] = array(
    'name' => 'delete own country_overview content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own document content'.
  $permissions['delete own document content'] = array(
    'name' => 'delete own document content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own gender_equality_country content'.
  $permissions['delete own gender_equality_country content'] = array(
    'name' => 'delete own gender_equality_country content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own gender_equality_policy content'.
  $permissions['delete own gender_equality_policy content'] = array(
    'name' => 'delete own gender_equality_policy content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own gender_story content'.
  $permissions['delete own gender_story content'] = array(
    'name' => 'delete own gender_story content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own good_practice content'.
  $permissions['delete own good_practice content'] = array(
    'name' => 'delete own good_practice content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own legal_definition content'.
  $permissions['delete own legal_definition content'] = array(
    'name' => 'delete own legal_definition content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own method_tool content'.
  $permissions['delete own method_tool content'] = array(
    'name' => 'delete own method_tool content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own news_article content'.
  $permissions['delete own news_article content'] = array(
    'name' => 'delete own news_article content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own procurement content'.
  $permissions['delete own procurement content'] = array(
    'name' => 'delete own procurement content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own publication content'.
  $permissions['delete own publication content'] = array(
    'name' => 'delete own publication content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own resource content'.
  $permissions['delete own resource content'] = array(
    'name' => 'delete own resource content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own resource_pool_item content'.
  $permissions['delete own resource_pool_item content'] = array(
    'name' => 'delete own resource_pool_item content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own sectoral_area content'.
  $permissions['delete own sectoral_area content'] = array(
    'name' => 'delete own sectoral_area content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own simplenews content'.
  $permissions['delete own simplenews content'] = array(
    'name' => 'delete own simplenews content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own statistical_product content'.
  $permissions['delete own statistical_product content'] = array(
    'name' => 'delete own statistical_product content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own statistics_on_sexual_violence content'.
  $permissions['delete own statistics_on_sexual_violence content'] = array(
    'name' => 'delete own statistics_on_sexual_violence content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own structure content'.
  $permissions['delete own structure content'] = array(
    'name' => 'delete own structure content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own tool_method_category content'.
  $permissions['delete own tool_method_category content'] = array(
    'name' => 'delete own tool_method_category content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own video content'.
  $permissions['delete own video content'] = array(
    'name' => 'delete own video content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own webform content'.
  $permissions['delete own webform content'] = array(
    'name' => 'delete own webform content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own webform submissions'.
  $permissions['delete own webform submissions'] = array(
    'name' => 'delete own webform submissions',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in administrative_data_sectors'.
  $permissions['delete terms in administrative_data_sectors'] = array(
    'name' => 'delete terms in administrative_data_sectors',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in areas'.
  $permissions['delete terms in areas'] = array(
    'name' => 'delete terms in areas',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in bpfa_areas'.
  $permissions['delete terms in bpfa_areas'] = array(
    'name' => 'delete terms in bpfa_areas',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in career_opportunity_types'.
  $permissions['delete terms in career_opportunity_types'] = array(
    'name' => 'delete terms in career_opportunity_types',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in coverage'.
  $permissions['delete terms in coverage'] = array(
    'name' => 'delete terms in coverage',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in document_type_categories'.
  $permissions['delete terms in document_type_categories'] = array(
    'name' => 'delete terms in document_type_categories',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in document_types'.
  $permissions['delete terms in document_types'] = array(
    'name' => 'delete terms in document_types',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in domain'.
  $permissions['delete terms in domain'] = array(
    'name' => 'delete terms in domain',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in gender_based_violence_types'.
  $permissions['delete terms in gender_based_violence_types'] = array(
    'name' => 'delete terms in gender_based_violence_types',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in gender_story_topic'.
  $permissions['delete terms in gender_story_topic'] = array(
    'name' => 'delete terms in gender_story_topic',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in gm_concepts_and_definitions'.
  $permissions['delete terms in gm_concepts_and_definitions'] = array(
    'name' => 'delete terms in gm_concepts_and_definitions',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in good_practice_tools'.
  $permissions['delete terms in good_practice_tools'] = array(
    'name' => 'delete terms in good_practice_tools',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in languages'.
  $permissions['delete terms in languages'] = array(
    'name' => 'delete terms in languages',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in method_tool_target_groups'.
  $permissions['delete terms in method_tool_target_groups'] = array(
    'name' => 'delete terms in method_tool_target_groups',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in newsletter'.
  $permissions['delete terms in newsletter'] = array(
    'name' => 'delete terms in newsletter',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in primary_gender_story_topic'.
  $permissions['delete terms in primary_gender_story_topic'] = array(
    'name' => 'delete terms in primary_gender_story_topic',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in procurement_types'.
  $permissions['delete terms in procurement_types'] = array(
    'name' => 'delete terms in procurement_types',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in resource_formats'.
  $permissions['delete terms in resource_formats'] = array(
    'name' => 'delete terms in resource_formats',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in sex'.
  $permissions['delete terms in sex'] = array(
    'name' => 'delete terms in sex',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in structure_scopes'.
  $permissions['delete terms in structure_scopes'] = array(
    'name' => 'delete terms in structure_scopes',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in structure_types'.
  $permissions['delete terms in structure_types'] = array(
    'name' => 'delete terms in structure_types',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tags'.
  $permissions['delete terms in tags'] = array(
    'name' => 'delete terms in tags',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in topic_categories'.
  $permissions['delete terms in topic_categories'] = array(
    'name' => 'delete terms in topic_categories',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in topics'.
  $permissions['delete terms in topics'] = array(
    'name' => 'delete terms in topics',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in types'.
  $permissions['delete terms in types'] = array(
    'name' => 'delete terms in types',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'display EU Cookie Compliance popup'.
  $permissions['display EU Cookie Compliance popup'] = array(
    'name' => 'display EU Cookie Compliance popup',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'eu_cookie_compliance',
  );

  // Exported permission: 'display admin pages in another language'.
  $permissions['display admin pages in another language'] = array(
    'name' => 'display admin pages in another language',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_language',
  );

  // Exported permission: 'display drupal links'.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'download original image'.
  $permissions['download original image'] = array(
    'name' => 'download original image',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'lightbox2',
  );

  // Exported permission: 'edit all webform submissions'.
  $permissions['edit all webform submissions'] = array(
    'name' => 'edit all webform submissions',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'edit any administrative_data_source content'.
  $permissions['edit any administrative_data_source content'] = array(
    'name' => 'edit any administrative_data_source content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any advanced_page content'.
  $permissions['edit any advanced_page content'] = array(
    'name' => 'edit any advanced_page content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any career_opportunity content'.
  $permissions['edit any career_opportunity content'] = array(
    'name' => 'edit any career_opportunity content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any country_overview content'.
  $permissions['edit any country_overview content'] = array(
    'name' => 'edit any country_overview content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any document content'.
  $permissions['edit any document content'] = array(
    'name' => 'edit any document content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any gender_equality_country content'.
  $permissions['edit any gender_equality_country content'] = array(
    'name' => 'edit any gender_equality_country content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any gender_equality_policy content'.
  $permissions['edit any gender_equality_policy content'] = array(
    'name' => 'edit any gender_equality_policy content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any gender_story content'.
  $permissions['edit any gender_story content'] = array(
    'name' => 'edit any gender_story content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any good_practice content'.
  $permissions['edit any good_practice content'] = array(
    'name' => 'edit any good_practice content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any legal_definition content'.
  $permissions['edit any legal_definition content'] = array(
    'name' => 'edit any legal_definition content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any method_tool content'.
  $permissions['edit any method_tool content'] = array(
    'name' => 'edit any method_tool content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any news_article content'.
  $permissions['edit any news_article content'] = array(
    'name' => 'edit any news_article content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any procurement content'.
  $permissions['edit any procurement content'] = array(
    'name' => 'edit any procurement content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any publication content'.
  $permissions['edit any publication content'] = array(
    'name' => 'edit any publication content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any resource content'.
  $permissions['edit any resource content'] = array(
    'name' => 'edit any resource content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any resource_pool_item content'.
  $permissions['edit any resource_pool_item content'] = array(
    'name' => 'edit any resource_pool_item content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any sectoral_area content'.
  $permissions['edit any sectoral_area content'] = array(
    'name' => 'edit any sectoral_area content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any simplenews content'.
  $permissions['edit any simplenews content'] = array(
    'name' => 'edit any simplenews content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any statistical_product content'.
  $permissions['edit any statistical_product content'] = array(
    'name' => 'edit any statistical_product content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any statistics_on_sexual_violence content'.
  $permissions['edit any statistics_on_sexual_violence content'] = array(
    'name' => 'edit any statistics_on_sexual_violence content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any structure content'.
  $permissions['edit any structure content'] = array(
    'name' => 'edit any structure content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any tool_method_category content'.
  $permissions['edit any tool_method_category content'] = array(
    'name' => 'edit any tool_method_category content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any video content'.
  $permissions['edit any video content'] = array(
    'name' => 'edit any video content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any webform content'.
  $permissions['edit any webform content'] = array(
    'name' => 'edit any webform content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit media'.
  $permissions['edit media'] = array(
    'name' => 'edit media',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'media',
  );

  // Exported permission: 'edit meta tags'.
  $permissions['edit meta tags'] = array(
    'name' => 'edit meta tags',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'edit own administrative_data_source content'.
  $permissions['edit own administrative_data_source content'] = array(
    'name' => 'edit own administrative_data_source content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own advanced_page content'.
  $permissions['edit own advanced_page content'] = array(
    'name' => 'edit own advanced_page content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own career_opportunity content'.
  $permissions['edit own career_opportunity content'] = array(
    'name' => 'edit own career_opportunity content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own comments'.
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'edit own country_overview content'.
  $permissions['edit own country_overview content'] = array(
    'name' => 'edit own country_overview content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own document content'.
  $permissions['edit own document content'] = array(
    'name' => 'edit own document content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own gender_equality_country content'.
  $permissions['edit own gender_equality_country content'] = array(
    'name' => 'edit own gender_equality_country content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own gender_equality_policy content'.
  $permissions['edit own gender_equality_policy content'] = array(
    'name' => 'edit own gender_equality_policy content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own gender_story content'.
  $permissions['edit own gender_story content'] = array(
    'name' => 'edit own gender_story content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own good_practice content'.
  $permissions['edit own good_practice content'] = array(
    'name' => 'edit own good_practice content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own legal_definition content'.
  $permissions['edit own legal_definition content'] = array(
    'name' => 'edit own legal_definition content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own method_tool content'.
  $permissions['edit own method_tool content'] = array(
    'name' => 'edit own method_tool content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own news_article content'.
  $permissions['edit own news_article content'] = array(
    'name' => 'edit own news_article content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own procurement content'.
  $permissions['edit own procurement content'] = array(
    'name' => 'edit own procurement content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own publication content'.
  $permissions['edit own publication content'] = array(
    'name' => 'edit own publication content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own resource content'.
  $permissions['edit own resource content'] = array(
    'name' => 'edit own resource content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own resource_pool_item content'.
  $permissions['edit own resource_pool_item content'] = array(
    'name' => 'edit own resource_pool_item content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own sectoral_area content'.
  $permissions['edit own sectoral_area content'] = array(
    'name' => 'edit own sectoral_area content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own simplenews content'.
  $permissions['edit own simplenews content'] = array(
    'name' => 'edit own simplenews content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own statistical_product content'.
  $permissions['edit own statistical_product content'] = array(
    'name' => 'edit own statistical_product content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own statistics_on_sexual_violence content'.
  $permissions['edit own statistics_on_sexual_violence content'] = array(
    'name' => 'edit own statistics_on_sexual_violence content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own structure content'.
  $permissions['edit own structure content'] = array(
    'name' => 'edit own structure content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own tool_method_category content'.
  $permissions['edit own tool_method_category content'] = array(
    'name' => 'edit own tool_method_category content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own video content'.
  $permissions['edit own video content'] = array(
    'name' => 'edit own video content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own webform content'.
  $permissions['edit own webform content'] = array(
    'name' => 'edit own webform content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own webform submissions'.
  $permissions['edit own webform submissions'] = array(
    'name' => 'edit own webform submissions',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'edit revisions'.
  $permissions['edit revisions'] = array(
    'name' => 'edit revisions',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'revisioning',
  );

  // Exported permission: 'edit terms in administrative_data_sectors'.
  $permissions['edit terms in administrative_data_sectors'] = array(
    'name' => 'edit terms in administrative_data_sectors',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in areas'.
  $permissions['edit terms in areas'] = array(
    'name' => 'edit terms in areas',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in bpfa_areas'.
  $permissions['edit terms in bpfa_areas'] = array(
    'name' => 'edit terms in bpfa_areas',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in career_opportunity_types'.
  $permissions['edit terms in career_opportunity_types'] = array(
    'name' => 'edit terms in career_opportunity_types',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in coverage'.
  $permissions['edit terms in coverage'] = array(
    'name' => 'edit terms in coverage',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in document_type_categories'.
  $permissions['edit terms in document_type_categories'] = array(
    'name' => 'edit terms in document_type_categories',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in document_types'.
  $permissions['edit terms in document_types'] = array(
    'name' => 'edit terms in document_types',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in domain'.
  $permissions['edit terms in domain'] = array(
    'name' => 'edit terms in domain',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in gender_based_violence_types'.
  $permissions['edit terms in gender_based_violence_types'] = array(
    'name' => 'edit terms in gender_based_violence_types',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in gender_story_topic'.
  $permissions['edit terms in gender_story_topic'] = array(
    'name' => 'edit terms in gender_story_topic',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in gm_concepts_and_definitions'.
  $permissions['edit terms in gm_concepts_and_definitions'] = array(
    'name' => 'edit terms in gm_concepts_and_definitions',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in good_practice_tools'.
  $permissions['edit terms in good_practice_tools'] = array(
    'name' => 'edit terms in good_practice_tools',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in languages'.
  $permissions['edit terms in languages'] = array(
    'name' => 'edit terms in languages',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in method_tool_target_groups'.
  $permissions['edit terms in method_tool_target_groups'] = array(
    'name' => 'edit terms in method_tool_target_groups',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in newsletter'.
  $permissions['edit terms in newsletter'] = array(
    'name' => 'edit terms in newsletter',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in primary_gender_story_topic'.
  $permissions['edit terms in primary_gender_story_topic'] = array(
    'name' => 'edit terms in primary_gender_story_topic',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in procurement_types'.
  $permissions['edit terms in procurement_types'] = array(
    'name' => 'edit terms in procurement_types',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in resource_formats'.
  $permissions['edit terms in resource_formats'] = array(
    'name' => 'edit terms in resource_formats',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in sex'.
  $permissions['edit terms in sex'] = array(
    'name' => 'edit terms in sex',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in structure_scopes'.
  $permissions['edit terms in structure_scopes'] = array(
    'name' => 'edit terms in structure_scopes',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in structure_types'.
  $permissions['edit terms in structure_types'] = array(
    'name' => 'edit terms in structure_types',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tags'.
  $permissions['edit terms in tags'] = array(
    'name' => 'edit terms in tags',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in topic_categories'.
  $permissions['edit terms in topic_categories'] = array(
    'name' => 'edit terms in topic_categories',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in topics'.
  $permissions['edit terms in topics'] = array(
    'name' => 'edit terms in topics',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in types'.
  $permissions['edit terms in types'] = array(
    'name' => 'edit terms in types',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit webform components'.
  $permissions['edit webform components'] = array(
    'name' => 'edit webform components',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'flush caches'.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'generate features'.
  $permissions['generate features'] = array(
    'name' => 'generate features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'import gm_concepts_and_definitions_importer feeds'.
  $permissions['import gm_concepts_and_definitions_importer feeds'] = array(
    'name' => 'import gm_concepts_and_definitions_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import media'.
  $permissions['import media'] = array(
    'name' => 'import media',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'media',
  );

  // Exported permission: 'import node feeds'.
  $permissions['import node feeds'] = array(
    'name' => 'import node feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import or export menu'.
  $permissions['import or export menu'] = array(
    'name' => 'import or export menu',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu_import',
  );

  // Exported permission: 'import user feeds'.
  $permissions['import user feeds'] = array(
    'name' => 'import user feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'manipulate all queues'.
  $permissions['manipulate all queues'] = array(
    'name' => 'manipulate all queues',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'nodequeue',
  );

  // Exported permission: 'manipulate queues'.
  $permissions['manipulate queues'] = array(
    'name' => 'manipulate queues',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'nodequeue',
  );

  // Exported permission: 'masquerade as admin'.
  $permissions['masquerade as admin'] = array(
    'name' => 'masquerade as admin',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'masquerade',
  );

  // Exported permission: 'masquerade as any user'.
  $permissions['masquerade as any user'] = array(
    'name' => 'masquerade as any user',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'masquerade',
  );

  // Exported permission: 'masquerade as user'.
  $permissions['masquerade as user'] = array(
    'name' => 'masquerade as user',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'masquerade',
  );

  // Exported permission: 'merge administrative_data_sectors terms'.
  $permissions['merge administrative_data_sectors terms'] = array(
    'name' => 'merge administrative_data_sectors terms',
    'roles' => array(),
    'module' => 'term_merge',
  );

  // Exported permission: 'merge areas terms'.
  $permissions['merge areas terms'] = array(
    'name' => 'merge areas terms',
    'roles' => array(),
    'module' => 'term_merge',
  );

  // Exported permission: 'merge bpfa_areas terms'.
  $permissions['merge bpfa_areas terms'] = array(
    'name' => 'merge bpfa_areas terms',
    'roles' => array(),
    'module' => 'term_merge',
  );

  // Exported permission: 'merge career_opportunity_types terms'.
  $permissions['merge career_opportunity_types terms'] = array(
    'name' => 'merge career_opportunity_types terms',
    'roles' => array(),
    'module' => 'term_merge',
  );

  // Exported permission: 'merge coverage terms'.
  $permissions['merge coverage terms'] = array(
    'name' => 'merge coverage terms',
    'roles' => array(),
    'module' => 'term_merge',
  );

  // Exported permission: 'merge document_type_categories terms'.
  $permissions['merge document_type_categories terms'] = array(
    'name' => 'merge document_type_categories terms',
    'roles' => array(),
    'module' => 'term_merge',
  );

  // Exported permission: 'merge document_types terms'.
  $permissions['merge document_types terms'] = array(
    'name' => 'merge document_types terms',
    'roles' => array(),
    'module' => 'term_merge',
  );

  // Exported permission: 'merge domain terms'.
  $permissions['merge domain terms'] = array(
    'name' => 'merge domain terms',
    'roles' => array(),
    'module' => 'term_merge',
  );

  // Exported permission: 'merge gender_based_violence_types terms'.
  $permissions['merge gender_based_violence_types terms'] = array(
    'name' => 'merge gender_based_violence_types terms',
    'roles' => array(),
    'module' => 'term_merge',
  );

  // Exported permission: 'merge gender_story_topic terms'.
  $permissions['merge gender_story_topic terms'] = array(
    'name' => 'merge gender_story_topic terms',
    'roles' => array(),
    'module' => 'term_merge',
  );

  // Exported permission: 'merge gm_concepts_and_definitions terms'.
  $permissions['merge gm_concepts_and_definitions terms'] = array(
    'name' => 'merge gm_concepts_and_definitions terms',
    'roles' => array(),
    'module' => 'term_merge',
  );

  // Exported permission: 'merge good_practice_tools terms'.
  $permissions['merge good_practice_tools terms'] = array(
    'name' => 'merge good_practice_tools terms',
    'roles' => array(),
    'module' => 'term_merge',
  );

  // Exported permission: 'merge languages terms'.
  $permissions['merge languages terms'] = array(
    'name' => 'merge languages terms',
    'roles' => array(),
    'module' => 'term_merge',
  );

  // Exported permission: 'merge method_tool_target_groups terms'.
  $permissions['merge method_tool_target_groups terms'] = array(
    'name' => 'merge method_tool_target_groups terms',
    'roles' => array(),
    'module' => 'term_merge',
  );

  // Exported permission: 'merge newsletter terms'.
  $permissions['merge newsletter terms'] = array(
    'name' => 'merge newsletter terms',
    'roles' => array(),
    'module' => 'term_merge',
  );

  // Exported permission: 'merge primary_gender_story_topic terms'.
  $permissions['merge primary_gender_story_topic terms'] = array(
    'name' => 'merge primary_gender_story_topic terms',
    'roles' => array(),
    'module' => 'term_merge',
  );

  // Exported permission: 'merge procurement_types terms'.
  $permissions['merge procurement_types terms'] = array(
    'name' => 'merge procurement_types terms',
    'roles' => array(),
    'module' => 'term_merge',
  );

  // Exported permission: 'merge resource_formats terms'.
  $permissions['merge resource_formats terms'] = array(
    'name' => 'merge resource_formats terms',
    'roles' => array(),
    'module' => 'term_merge',
  );

  // Exported permission: 'merge sex terms'.
  $permissions['merge sex terms'] = array(
    'name' => 'merge sex terms',
    'roles' => array(),
    'module' => 'term_merge',
  );

  // Exported permission: 'merge structure_scopes terms'.
  $permissions['merge structure_scopes terms'] = array(
    'name' => 'merge structure_scopes terms',
    'roles' => array(),
    'module' => 'term_merge',
  );

  // Exported permission: 'merge structure_types terms'.
  $permissions['merge structure_types terms'] = array(
    'name' => 'merge structure_types terms',
    'roles' => array(),
    'module' => 'term_merge',
  );

  // Exported permission: 'merge tags terms'.
  $permissions['merge tags terms'] = array(
    'name' => 'merge tags terms',
    'roles' => array(),
    'module' => 'term_merge',
  );

  // Exported permission: 'merge terms'.
  $permissions['merge terms'] = array(
    'name' => 'merge terms',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'term_merge',
  );

  // Exported permission: 'merge topic_categories terms'.
  $permissions['merge topic_categories terms'] = array(
    'name' => 'merge topic_categories terms',
    'roles' => array(),
    'module' => 'term_merge',
  );

  // Exported permission: 'merge topics terms'.
  $permissions['merge topics terms'] = array(
    'name' => 'merge topics terms',
    'roles' => array(),
    'module' => 'term_merge',
  );

  // Exported permission: 'merge types terms'.
  $permissions['merge types terms'] = array(
    'name' => 'merge types terms',
    'roles' => array(),
    'module' => 'term_merge',
  );

  // Exported permission: 'notify of path changes'.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'opt-in or out of tracking'.
  $permissions['opt-in or out of tracking'] = array(
    'name' => 'opt-in or out of tracking',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'piwik',
  );

  // Exported permission: 'post comments'.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'publish revisions'.
  $permissions['publish revisions'] = array(
    'name' => 'publish revisions',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'revisioning',
  );

  // Exported permission: 'rename features'.
  $permissions['rename features'] = array(
    'name' => 'rename features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'search content'.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'send newsletter'.
  $permissions['send newsletter'] = array(
    'name' => 'send newsletter',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'simplenews',
  );

  // Exported permission: 'skip comment approval'.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'subscribe to newsletters'.
  $permissions['subscribe to newsletters'] = array(
    'name' => 'subscribe to newsletters',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'simplenews',
  );

  // Exported permission: 'toggle field translatability'.
  $permissions['toggle field translatability'] = array(
    'name' => 'toggle field translatability',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: 'translate admin strings'.
  $permissions['translate admin strings'] = array(
    'name' => 'translate admin strings',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'i18n_string',
  );

  // Exported permission: 'translate any entity'.
  $permissions['translate any entity'] = array(
    'name' => 'translate any entity',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: 'translate content'.
  $permissions['translate content'] = array(
    'name' => 'translate content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'translation',
  );

  // Exported permission: 'translate interface'.
  $permissions['translate interface'] = array(
    'name' => 'translate interface',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'locale',
  );

  // Exported permission: 'translate node entities'.
  $permissions['translate node entities'] = array(
    'name' => 'translate node entities',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: 'translate taxonomy_term entities'.
  $permissions['translate taxonomy_term entities'] = array(
    'name' => 'translate taxonomy_term entities',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: 'translate user-defined strings'.
  $permissions['translate user-defined strings'] = array(
    'name' => 'translate user-defined strings',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'i18n_string',
  );

  // Exported permission: 'unlock gm_concepts_and_definitions_importer feeds'.
  $permissions['unlock gm_concepts_and_definitions_importer feeds'] = array(
    'name' => 'unlock gm_concepts_and_definitions_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock node feeds'.
  $permissions['unlock node feeds'] = array(
    'name' => 'unlock node feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock user feeds'.
  $permissions['unlock user feeds'] = array(
    'name' => 'unlock user feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unpublish current revision'.
  $permissions['unpublish current revision'] = array(
    'name' => 'unpublish current revision',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'revisioning',
  );

  // Exported permission: 'use PHP for settings'.
  $permissions['use PHP for settings'] = array(
    'name' => 'use PHP for settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'php',
  );

  // Exported permission: 'use PHP for tracking visibility'.
  $permissions['use PHP for tracking visibility'] = array(
    'name' => 'use PHP for tracking visibility',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'piwik',
  );

  // Exported permission: 'use advanced search'.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'use all enabled languages'.
  $permissions['use all enabled languages'] = array(
    'name' => 'use all enabled languages',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_language',
  );

  // Exported permission: 'use ctools import'.
  $permissions['use ctools import'] = array(
    'name' => 'use ctools import',
    'roles' => array(),
    'module' => 'ctools',
  );

  // Exported permission: 'use ipe with page manager'.
  $permissions['use ipe with page manager'] = array(
    'name' => 'use ipe with page manager',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use page manager'.
  $permissions['use page manager'] = array(
    'name' => 'use page manager',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: 'use panels caching features'.
  $permissions['use panels caching features'] = array(
    'name' => 'use panels caching features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels dashboard'.
  $permissions['use panels dashboard'] = array(
    'name' => 'use panels dashboard',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels in place editing'.
  $permissions['use panels in place editing'] = array(
    'name' => 'use panels in place editing',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels locks'.
  $permissions['use panels locks'] = array(
    'name' => 'use panels locks',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format newsletter'.
  $permissions['use text format newsletter'] = array(
    'name' => 'use text format newsletter',
    'roles' => array(),
    'module' => 'filter',
  );

  // Exported permission: 'use text format php_code'.
  $permissions['use text format php_code'] = array(
    'name' => 'use text format php_code',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'view advanced help index'.
  $permissions['view advanced help index'] = array(
    'name' => 'view advanced help index',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'advanced_help',
  );

  // Exported permission: 'view advanced help popup'.
  $permissions['view advanced help popup'] = array(
    'name' => 'view advanced help popup',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'advanced_help',
  );

  // Exported permission: 'view advanced help topic'.
  $permissions['view advanced help topic'] = array(
    'name' => 'view advanced help topic',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'advanced_help',
  );

  // Exported permission: 'view media'.
  $permissions['view media'] = array(
    'name' => 'view media',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'media',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view pane admin links'.
  $permissions['view pane admin links'] = array(
    'name' => 'view pane admin links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'view revision status messages'.
  $permissions['view revision status messages'] = array(
    'name' => 'view revision status messages',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'revisioning',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'EIGE Administrator' => 'EIGE Administrator',
      'EIGE Content Manager' => 'EIGE Content Manager',
      'External Content Manager' => 'External Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  return $permissions;
}

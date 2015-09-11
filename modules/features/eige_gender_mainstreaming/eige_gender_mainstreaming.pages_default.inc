<?php
/**
 * @file
 * eige_gender_mainstreaming.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function eige_gender_mainstreaming_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'country_about';
  $page->task = 'page';
  $page->admin_title = 'Country About';
  $page->admin_description = '';
  $page->path = 'gender-mainstreaming/countries/%name/about';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
    'plugins' => array(
      0 => array(
        'name' => 'php',
        'settings' => array(
          'description' => 'Visible only in staging environment (eige_gender_mainstreaming_environment_access)',
          'php' => 'return eige_gender_mainstreaming_environment_access();',
        ),
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'About',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'name' => array(
      'id' => 1,
      'identifier' => 'Country: ISO Code',
      'name' => 'country_code',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_country_about_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'country_about';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Gender Mainstreaming
Country Specific Information
%name:name',
    'panels_breadcrumbs_paths' => 'gender-mainstreaming
gender-mainstreaming/countries
gender-mainstreaming/countries/%name:name',
    'panels_breadcrumbs_home' => 1,
    'panels_page_title_state' => 1,
    'panels_page_title' => '%name:name // About',
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'foundation_2row_country';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'first' => NULL,
      'second' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '<span class="country">%name:name</span> About';
  $display->uuid = 'ed60b77e-1c8d-480d-9abf-1cb3ce2b2b40';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e8c43d71-c5fd-4c66-a58f-6ef72906819e';
    $pane->panel = 'first';
    $pane->type = 'views_panes';
    $pane->subtype = 'country_profile-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e8c43d71-c5fd-4c66-a58f-6ef72906819e';
    $display->content['new-e8c43d71-c5fd-4c66-a58f-6ef72906819e'] = $pane;
    $display->panels['first'][0] = 'new-e8c43d71-c5fd-4c66-a58f-6ef72906819e';
    $pane = new stdClass();
    $pane->pid = 'new-b71644fb-2e86-46bf-a339-3a3d828b72b6';
    $pane->panel = 'second';
    $pane->type = 'views_panes';
    $pane->subtype = 'country_profile-panel_pane_country_additional_information';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b71644fb-2e86-46bf-a339-3a3d828b72b6';
    $display->content['new-b71644fb-2e86-46bf-a339-3a3d828b72b6'] = $pane;
    $display->panels['second'][0] = 'new-b71644fb-2e86-46bf-a339-3a3d828b72b6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['country_about'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'country_good_practices';
  $page->task = 'page';
  $page->admin_title = 'Country Good Practices';
  $page->admin_description = '';
  $page->path = 'gender-mainstreaming/countries/%name/good-practices';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Good Practices',
    'name' => 'navigation',
    'weight' => '4',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'name' => array(
      'id' => 1,
      'identifier' => 'Country: ISO Code',
      'name' => 'country_code',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_country_good_practices_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'country_good_practices';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'panels_page_title_state' => 1,
    'panels_page_title' => '%name:name // Good Practices',
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Gender Mainstreaming
Country Specific Information
%name:name',
    'panels_breadcrumbs_paths' => 'gender-mainstreaming
gender-mainstreaming/countries
gender-mainstreaming/countries/%name:name',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'foundation_2row_country';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'first' => NULL,
      'second' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '<span class="country">%name:name</span> Good Practices';
  $display->uuid = 'aafab29a-36d6-4b4a-982b-f380e9b0cfab';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-584ca604-7e9a-43ef-bedf-1e2c4ca96e4f';
    $pane->panel = 'second';
    $pane->type = 'views_panes';
    $pane->subtype = 'gender_mainstreaming_good_practices-panel_pane_gm_good_practices';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '584ca604-7e9a-43ef-bedf-1e2c4ca96e4f';
    $display->content['new-584ca604-7e9a-43ef-bedf-1e2c4ca96e4f'] = $pane;
    $display->panels['second'][0] = 'new-584ca604-7e9a-43ef-bedf-1e2c4ca96e4f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['country_good_practices'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'country_laws_policies';
  $page->task = 'page';
  $page->admin_title = 'Country Laws & Policies';
  $page->admin_description = '';
  $page->path = 'gender-mainstreaming/countries/%name/laws-and-policies';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Laws & Policies',
    'name' => 'navigation',
    'weight' => '2',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'name' => array(
      'id' => 1,
      'identifier' => 'Country: ISO Code',
      'name' => 'country_code',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_country_laws_policies_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'country_laws_policies';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Gender Mainstreaming
Country Specific Information
%name:name',
    'panels_breadcrumbs_paths' => 'gender-mainstreaming
gender-mainstreaming/countries
gender-mainstreaming/countries/%name:name',
    'panels_breadcrumbs_home' => 1,
    'panels_page_title_state' => 1,
    'panels_page_title' => '%name:name // Laws and Policies',
  );
  $display = new panels_display();
  $display->layout = 'foundation_2row_country';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'first' => NULL,
      'second' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '<span class="country">%name:name</span> Laws and Policies';
  $display->uuid = '9c81932c-03e9-4642-8ad8-89704665e139';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c95d249a-63f0-4260-b985-0f8331140ea7';
    $pane->panel = 'first';
    $pane->type = 'views_panes';
    $pane->subtype = 'country_profile-panel_pane_8';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c95d249a-63f0-4260-b985-0f8331140ea7';
    $display->content['new-c95d249a-63f0-4260-b985-0f8331140ea7'] = $pane;
    $display->panels['first'][0] = 'new-c95d249a-63f0-4260-b985-0f8331140ea7';
    $pane = new stdClass();
    $pane->pid = 'new-63922f86-461c-40bb-9f5c-d73301ad69a0';
    $pane->panel = 'second';
    $pane->type = 'views_panes';
    $pane->subtype = 'gender_mainstreaming_laws_and_policies-pane_laws_policies';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '63922f86-461c-40bb-9f5c-d73301ad69a0';
    $display->content['new-63922f86-461c-40bb-9f5c-d73301ad69a0'] = $pane;
    $display->panels['second'][0] = 'new-63922f86-461c-40bb-9f5c-d73301ad69a0';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['country_laws_policies'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'country_methods_tools';
  $page->task = 'page';
  $page->admin_title = 'Country Methods & Tools';
  $page->admin_description = '';
  $page->path = 'gender-mainstreaming/countries/%name/methods-and-tools';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Methods & Tools',
    'name' => 'navigation',
    'weight' => '3',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'name' => array(
      'id' => 1,
      'identifier' => 'Country: ISO Code',
      'name' => 'country_code',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_country_methods_tools_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'country_methods_tools';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'panels_page_title_state' => 1,
    'panels_page_title' => '%name:name // Methods and Tools',
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Gender Mainstreaming
Country Specific Information
%name:name',
    'panels_breadcrumbs_paths' => 'gender-mainstreaming
gender-mainstreaming/countries
gender-mainstreaming/countries/%name:name',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'foundation_2row_country';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'first' => NULL,
      'second' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '<span class="country">%name:name</span> Methods and Tools';
  $display->uuid = 'b98b6fcf-9289-46ab-b7a7-e699f85d859f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7b58ab46-e733-49e2-9dbe-fdad1088322e';
    $pane->panel = 'first';
    $pane->type = 'views_panes';
    $pane->subtype = 'country_profile-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7b58ab46-e733-49e2-9dbe-fdad1088322e';
    $display->content['new-7b58ab46-e733-49e2-9dbe-fdad1088322e'] = $pane;
    $display->panels['first'][0] = 'new-7b58ab46-e733-49e2-9dbe-fdad1088322e';
    $pane = new stdClass();
    $pane->pid = 'new-7bc6d926-f79a-40e1-8985-a2f9120fba66';
    $pane->panel = 'second';
    $pane->type = 'views_panes';
    $pane->subtype = 'gender_mainstreaming_methods_tools-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7bc6d926-f79a-40e1-8985-a2f9120fba66';
    $display->content['new-7bc6d926-f79a-40e1-8985-a2f9120fba66'] = $pane;
    $display->panels['second'][0] = 'new-7bc6d926-f79a-40e1-8985-a2f9120fba66';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['country_methods_tools'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'country_profile';
  $page->task = 'page';
  $page->admin_title = 'Country Profile';
  $page->admin_description = '';
  $page->path = 'gender-mainstreaming/countries/%name';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'none',
    'title' => 'Profile',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'name' => array(
      'id' => 1,
      'identifier' => 'Country: ISO Code',
      'name' => 'country_code',
      'settings' => array(),
      'keyword' => 'name',
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_country_profile_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'country_profile';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'panels_page_title_state' => 1,
    'panels_page_title' => '%name:name',
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Gender Mainstreaming
Country Specific Information
',
    'panels_breadcrumbs_paths' => 'gender-mainstreaming
gender-mainstreaming/countries',
    'panels_breadcrumbs_home' => 1,
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'Visible only in staging environment (eige_gender_mainstreaming_environment_access)',
            'php' => 'return eige_gender_mainstreaming_environment_access();',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'foundation_7row_country';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'first_left' => NULL,
      'first_right' => NULL,
      'second_left' => NULL,
      'second_right' => NULL,
      'third_left' => NULL,
      'third_right' => NULL,
      'fourth_left' => NULL,
      'fourth_right' => NULL,
      'fourth_second' => NULL,
      'fifth' => NULL,
      'seventh' => NULL,
      'sixth' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%name:name';
  $display->uuid = '6cad5437-3cd0-4bcb-b7a5-68451696b6c8';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6778f93b-ed54-42d8-8b72-a643781b406b';
    $pane->panel = 'fifth';
    $pane->type = 'views_panes';
    $pane->subtype = 'country_profile-panel_pane_country_good_practices';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6778f93b-ed54-42d8-8b72-a643781b406b';
    $display->content['new-6778f93b-ed54-42d8-8b72-a643781b406b'] = $pane;
    $display->panels['fifth'][0] = 'new-6778f93b-ed54-42d8-8b72-a643781b406b';
    $pane = new stdClass();
    $pane->pid = 'new-a583b1eb-6ae4-4eb4-8a7d-d34b03dfa37b';
    $pane->panel = 'first_left';
    $pane->type = 'views_panes';
    $pane->subtype = 'country_profile-panel_pane_about';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a583b1eb-6ae4-4eb4-8a7d-d34b03dfa37b';
    $display->content['new-a583b1eb-6ae4-4eb4-8a7d-d34b03dfa37b'] = $pane;
    $display->panels['first_left'][0] = 'new-a583b1eb-6ae4-4eb4-8a7d-d34b03dfa37b';
    $pane = new stdClass();
    $pane->pid = 'new-432ea1e3-4fb0-4b98-960c-eb22a69066c9';
    $pane->panel = 'first_right';
    $pane->type = 'views_panes';
    $pane->subtype = 'country_profile-panel_pane_about_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '432ea1e3-4fb0-4b98-960c-eb22a69066c9';
    $display->content['new-432ea1e3-4fb0-4b98-960c-eb22a69066c9'] = $pane;
    $display->panels['first_right'][0] = 'new-432ea1e3-4fb0-4b98-960c-eb22a69066c9';
    $pane = new stdClass();
    $pane->pid = 'new-1f6a409b-409e-4650-8de6-f956e9e683be';
    $pane->panel = 'fourth_left';
    $pane->type = 'views_panes';
    $pane->subtype = 'country_profile-panel_pane_methods_tools';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1f6a409b-409e-4650-8de6-f956e9e683be';
    $display->content['new-1f6a409b-409e-4650-8de6-f956e9e683be'] = $pane;
    $display->panels['fourth_left'][0] = 'new-1f6a409b-409e-4650-8de6-f956e9e683be';
    $pane = new stdClass();
    $pane->pid = 'new-943811b1-4ff1-43e2-9e54-5a0a144488bf';
    $pane->panel = 'fourth_right';
    $pane->type = 'views_panes';
    $pane->subtype = 'country_profile-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '943811b1-4ff1-43e2-9e54-5a0a144488bf';
    $display->content['new-943811b1-4ff1-43e2-9e54-5a0a144488bf'] = $pane;
    $display->panels['fourth_right'][0] = 'new-943811b1-4ff1-43e2-9e54-5a0a144488bf';
    $pane = new stdClass();
    $pane->pid = 'new-d152e1fc-81ce-4ef8-88e9-a59b422a7c4a';
    $pane->panel = 'fourth_second';
    $pane->type = 'views_panes';
    $pane->subtype = 'country_profile-panel_pane_country_methods_tools';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd152e1fc-81ce-4ef8-88e9-a59b422a7c4a';
    $display->content['new-d152e1fc-81ce-4ef8-88e9-a59b422a7c4a'] = $pane;
    $display->panels['fourth_second'][0] = 'new-d152e1fc-81ce-4ef8-88e9-a59b422a7c4a';
    $pane = new stdClass();
    $pane->pid = 'new-0ca7916c-d3af-48bd-8a25-bf37a2f9c7d5';
    $pane->panel = 'second_left';
    $pane->type = 'views_panes';
    $pane->subtype = 'country_profile-panel_pane_structures';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0ca7916c-d3af-48bd-8a25-bf37a2f9c7d5';
    $display->content['new-0ca7916c-d3af-48bd-8a25-bf37a2f9c7d5'] = $pane;
    $display->panels['second_left'][0] = 'new-0ca7916c-d3af-48bd-8a25-bf37a2f9c7d5';
    $pane = new stdClass();
    $pane->pid = 'new-9178557f-4452-478e-88e7-3711dab00e06';
    $pane->panel = 'second_right';
    $pane->type = 'views_panes';
    $pane->subtype = 'country_profile-panel_pane_structures_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9178557f-4452-478e-88e7-3711dab00e06';
    $display->content['new-9178557f-4452-478e-88e7-3711dab00e06'] = $pane;
    $display->panels['second_right'][0] = 'new-9178557f-4452-478e-88e7-3711dab00e06';
    $pane = new stdClass();
    $pane->pid = 'new-7039a759-7800-4dba-a960-2cd861821dca';
    $pane->panel = 'seventh';
    $pane->type = 'views_panes';
    $pane->subtype = 'country_profile-panel_pane_country_additional_information';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7039a759-7800-4dba-a960-2cd861821dca';
    $display->content['new-7039a759-7800-4dba-a960-2cd861821dca'] = $pane;
    $display->panels['seventh'][0] = 'new-7039a759-7800-4dba-a960-2cd861821dca';
    $pane = new stdClass();
    $pane->pid = 'new-b29bee02-2f11-4b11-b418-3091a174aad7';
    $pane->panel = 'sixth';
    $pane->type = 'views_panes';
    $pane->subtype = 'country_profile-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b29bee02-2f11-4b11-b418-3091a174aad7';
    $display->content['new-b29bee02-2f11-4b11-b418-3091a174aad7'] = $pane;
    $display->panels['sixth'][0] = 'new-b29bee02-2f11-4b11-b418-3091a174aad7';
    $pane = new stdClass();
    $pane->pid = 'new-de78ce32-f3d5-45f1-8aca-56e4182123dd';
    $pane->panel = 'third_left';
    $pane->type = 'views_panes';
    $pane->subtype = 'country_profile-panel_pane_laws_policies';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'de78ce32-f3d5-45f1-8aca-56e4182123dd';
    $display->content['new-de78ce32-f3d5-45f1-8aca-56e4182123dd'] = $pane;
    $display->panels['third_left'][0] = 'new-de78ce32-f3d5-45f1-8aca-56e4182123dd';
    $pane = new stdClass();
    $pane->pid = 'new-2370ff17-9cfb-4598-b9db-887b7534896b';
    $pane->panel = 'third_right';
    $pane->type = 'views_panes';
    $pane->subtype = 'country_profile-panel_pane_laws_policies_right_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2370ff17-9cfb-4598-b9db-887b7534896b';
    $display->content['new-2370ff17-9cfb-4598-b9db-887b7534896b'] = $pane;
    $display->panels['third_right'][0] = 'new-2370ff17-9cfb-4598-b9db-887b7534896b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page__redirect_to_country_structures';
  $handler->task = 'page';
  $handler->subtask = 'country_profile';
  $handler->handler = 'http_response';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Redirect to country structures',
    'contexts' => array(),
    'relationships' => array(),
    'code' => '301',
    'destination' => 'gender-mainstreaming/countries/%name/structures',
    'name' => 'redirect_to_country_structures',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'Redirect only for production environment (eige_gender_mainstreaming_environment_access)',
            'php' => 'return !eige_gender_mainstreaming_environment_access();',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'destination_normalize' => 1,
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['country_profile'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'country_resources';
  $page->task = 'page';
  $page->admin_title = 'Country Resources';
  $page->admin_description = '';
  $page->path = 'gender-mainstreaming/countries/%name/resources';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Other resources',
    'name' => 'navigation',
    'weight' => '5',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'name' => array(
      'id' => 1,
      'identifier' => 'Country: ISO Code',
      'name' => 'country_code',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_country_resources_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'country_resources';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'panels_page_title_state' => 1,
    'panels_page_title' => '%name:name // Other resources',
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Gender Mainstreaming
Country Specific Information
%name:name',
    'panels_breadcrumbs_paths' => 'gender-mainstreaming
gender-mainstreaming/countries
gender-mainstreaming/countries/%name:name',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'foundation_2row_country';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'first' => NULL,
      'second' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '<span class="country">%name:name</span> Other resources';
  $display->uuid = '98116cac-1fd9-470d-b331-98cb46a2fc4f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9a7f575b-0a40-4a1d-8c38-673adcd98fc4';
    $pane->panel = 'second';
    $pane->type = 'views_panes';
    $pane->subtype = 'gender_mainstreaming_resources-panel_pane_gm_resources';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9a7f575b-0a40-4a1d-8c38-673adcd98fc4';
    $display->content['new-9a7f575b-0a40-4a1d-8c38-673adcd98fc4'] = $pane;
    $display->panels['second'][0] = 'new-9a7f575b-0a40-4a1d-8c38-673adcd98fc4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['country_resources'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'country_structures';
  $page->task = 'page';
  $page->admin_title = 'Country Structures';
  $page->admin_description = '';
  $page->path = 'gender-mainstreaming/countries/%name/structures';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Structures',
    'name' => 'navigation',
    'weight' => '1',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'name' => array(
      'id' => 1,
      'identifier' => 'Country: ISO Code',
      'name' => 'country_code',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_country_structures_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'country_structures';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'panels_page_title_state' => 1,
    'panels_page_title' => '%name:name // Structures',
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Gender Mainstreaming
Country Specific Information
%name:name',
    'panels_breadcrumbs_paths' => 'gender-mainstreaming
gender-mainstreaming/countries
gender-mainstreaming/countries/%name:name',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'foundation_2row_country';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'first' => NULL,
      'second' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '<span class="country">%name:name</span> Structures';
  $display->uuid = '0abccabe-3664-443b-9a22-3461abe3f194';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-af68e01c-ef41-4c47-8a05-6efe36c290f3';
    $pane->panel = 'first';
    $pane->type = 'views_panes';
    $pane->subtype = 'country_profile-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'af68e01c-ef41-4c47-8a05-6efe36c290f3';
    $display->content['new-af68e01c-ef41-4c47-8a05-6efe36c290f3'] = $pane;
    $display->panels['first'][0] = 'new-af68e01c-ef41-4c47-8a05-6efe36c290f3';
    $pane = new stdClass();
    $pane->pid = 'new-146b393f-4708-4aac-896e-9252a5c0cf75';
    $pane->panel = 'second';
    $pane->type = 'views_panes';
    $pane->subtype = 'gender_mainstreaming_structures-panel_pane_gm_structures';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '146b393f-4708-4aac-896e-9252a5c0cf75';
    $display->content['new-146b393f-4708-4aac-896e-9252a5c0cf75'] = $pane;
    $display->panels['second'][0] = 'new-146b393f-4708-4aac-896e-9252a5c0cf75';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['country_structures'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'gender_mainstreaming_home_page';
  $page->task = 'page';
  $page->admin_title = 'Gender Mainstreaming home page';
  $page->admin_description = '';
  $page->path = 'gender-mainstreaming';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_gender_mainstreaming_home_page__panel_context_09964a2d-00be-4599-a4d9-37dda800c2d9';
  $handler->task = 'page';
  $handler->subtask = 'gender_mainstreaming_home_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'foundation_1col_collapse';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Gender Mainstreaming';
  $display->uuid = 'f38af5cb-5e09-4409-8d1b-1d3701e0edf1';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-28fc2041-8d42-4649-bc06-bb56e745b941';
    $pane->panel = 'middle';
    $pane->type = 'menu_tree';
    $pane->subtype = '_active';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'menu_name' => '_active',
      'parent_mlid' => 0,
      'parent' => '_active:0',
      'title_link' => 0,
      'admin_title' => 'Gender Mainstreaming menu',
      'level' => '2',
      'follow' => 0,
      'depth' => '2',
      'expanded' => 0,
      'sort' => 0,
      'override_title' => 1,
      'override_title_text' => 'A strategy to achieve equality between women and men',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '28fc2041-8d42-4649-bc06-bb56e745b941';
    $display->content['new-28fc2041-8d42-4649-bc06-bb56e745b941'] = $pane;
    $display->panels['middle'][0] = 'new-28fc2041-8d42-4649-bc06-bb56e745b941';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['gender_mainstreaming_home_page'] = $page;

  return $pages;

}

<?php
/**
 * @file
 * eige_base.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function eige_base_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_external_references|node|advanced_page|form';
  $field_group->group_name = 'group_external_references';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'advanced_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Want to know more?',
    'weight' => '9',
    'children' => array(
      0 => 'field_external_references',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-external-references field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_external_references|node|advanced_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_external_references|node|advanced_page|full';
  $field_group->group_name = 'group_external_references';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'advanced_page';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Want to know more?',
    'weight' => '8',
    'children' => array(
      0 => 'field_external_references',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Want to know more?',
      'instance_settings' => array(
        'id' => 'group-external-references',
        'classes' => 'group-external-references field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_external_references|node|advanced_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image_quote|node|advanced_page|full';
  $field_group->group_name = 'group_image_quote';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'advanced_page';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Image/Quote',
    'weight' => '2',
    'children' => array(
      0 => 'field_image',
      1 => 'field_quote',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Image/Quote',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-image-quote field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_image_quote|node|advanced_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image_quote|node|page|full';
  $field_group->group_name = 'group_image_quote';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Image/Quote',
    'weight' => '2',
    'children' => array(
      0 => 'field_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Image/Quote',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-image-quote field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_image_quote|node|page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_keywords|node|advanced_page|full';
  $field_group->group_name = 'group_keywords';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'advanced_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_metadata';
  $field_group->data = array(
    'label' => 'Keywords wrapper',
    'weight' => '2',
    'children' => array(
      0 => 'field_keywords',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Keywords wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-keywords field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_keywords|node|advanced_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_keywords|node|page|default';
  $field_group->group_name = 'group_keywords';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_metadata';
  $field_group->data = array(
    'label' => 'Keywords wrapper',
    'weight' => '19',
    'children' => array(
      0 => 'field_keywords',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Keywords wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-keywords field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_keywords|node|page|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_keywords|node|page|full';
  $field_group->group_name = 'group_keywords';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_metadata';
  $field_group->data = array(
    'label' => 'Keywords wrapper',
    'weight' => '6',
    'children' => array(
      0 => 'field_keywords',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Keywords wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-keywords field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_keywords|node|page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_keywords|node|webform|full';
  $field_group->group_name = 'group_keywords';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'webform';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_metadata';
  $field_group->data = array(
    'label' => 'Keywords wrapper',
    'weight' => '9',
    'children' => array(
      0 => 'field_keywords',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Keywords wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-keywords field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_keywords|node|webform|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_link_wrapper|node|advanced_page|related_content';
  $field_group->group_name = 'group_link_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'advanced_page';
  $field_group->mode = 'related_content';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group link wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'content_type',
      1 => 'group_title_quote_wrapper',
    ),
    'format_type' => 'link',
    'format_settings' => array(
      'label' => 'Group link wrapper',
      'instance_settings' => array(
        'link_to' => 'entity',
        'custom_url' => '',
        'custom_url_normalize' => 1,
        'classes' => 'group-link-wrapper field-group-link',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_link_wrapper|node|advanced_page|related_content'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_link_wrapper|node|advanced_page|teaser';
  $field_group->group_name = 'group_link_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'advanced_page';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group link wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'field_image',
      1 => 'group_title_quote_wrapper',
    ),
    'format_type' => 'link',
    'format_settings' => array(
      'label' => 'Group link wrapper',
      'instance_settings' => array(
        'link_to' => 'entity',
        'custom_url' => '',
        'custom_url_normalize' => 1,
        'classes' => 'group-link-wrapper field-group-link',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_link_wrapper|node|advanced_page|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_link_wrapper|node|page|related_content';
  $field_group->group_name = 'group_link_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'related_content';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group link wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'content_type',
      1 => 'group_title_quote_wrapper',
    ),
    'format_type' => 'link',
    'format_settings' => array(
      'label' => 'Group link wrapper',
      'instance_settings' => array(
        'link_to' => 'entity',
        'classes' => 'group-link-wrapper field-group-link',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_link_wrapper|node|page|related_content'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_link_wrapper|node|page|teaser';
  $field_group->group_name = 'group_link_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group link wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'content_type',
      1 => 'group_summary_wrapper',
      2 => 'group_title_quote_wrapper',
    ),
    'format_type' => 'link',
    'format_settings' => array(
      'label' => 'Group link wrapper',
      'instance_settings' => array(
        'link_to' => 'entity',
        'classes' => 'group-link-wrapper field-group-link',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_link_wrapper|node|page|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_link_wrapper|node|webform|related_content';
  $field_group->group_name = 'group_link_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'webform';
  $field_group->mode = 'related_content';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group link wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'content_type',
      1 => 'group_title_quote_wrapper',
    ),
    'format_type' => 'link',
    'format_settings' => array(
      'label' => 'Group link wrapper',
      'instance_settings' => array(
        'link_to' => 'entity',
        'custom_url' => '',
        'custom_url_normalize' => 1,
        'classes' => 'group-link-wrapper field-group-link',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_link_wrapper|node|webform|related_content'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_link_wrapper|node|webform|teaser';
  $field_group->group_name = 'group_link_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'webform';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group link wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'content_type',
      1 => 'group_title_quote_wrapper',
    ),
    'format_type' => 'link',
    'format_settings' => array(
      'label' => 'Group link wrapper',
      'instance_settings' => array(
        'link_to' => 'entity',
        'custom_url' => '',
        'custom_url_normalize' => 1,
        'classes' => 'group-link-wrapper field-group-link',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_link_wrapper|node|webform|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_metadata|node|advanced_page|full';
  $field_group->group_name = 'group_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'advanced_page';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => '1',
    'children' => array(
      0 => 'group_keywords',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Metadata',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-metadata field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_metadata|node|advanced_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_metadata|node|page|default';
  $field_group->group_name = 'group_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => '0',
    'children' => array(
      0 => 'group_keywords',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Metadata',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-metadata field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_metadata|node|page|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_metadata|node|page|full';
  $field_group->group_name = 'group_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => '1',
    'children' => array(
      0 => 'group_keywords',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Metadata',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-metadata field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_metadata|node|page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_metadata|node|webform|full';
  $field_group->group_name = 'group_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'webform';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => '0',
    'children' => array(
      0 => 'content_type',
      1 => 'group_keywords',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Metadata',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-metadata field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_metadata|node|webform|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_migration_information|node|page|form';
  $field_group->group_name = 'group_migration_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Migration Information',
    'weight' => '10',
    'children' => array(
      0 => 'field_legacy_id',
      1 => 'field_migration_notes',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Migration Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-migration-information field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_migration_information|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_policy_cycle|node|advanced_page|form';
  $field_group->group_name = 'group_policy_cycle';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'advanced_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Policy Cycle',
    'weight' => '5',
    'children' => array(
      0 => 'field_act_elements',
      1 => 'field_act_tools',
      2 => 'field_check_elements',
      3 => 'field_check_tools',
      4 => 'field_define_elements',
      5 => 'field_define_tools',
      6 => 'field_plan_elements',
      7 => 'field_plan_tools',
      8 => 'field_sa_design',
      9 => 'field_sa_implementation',
      10 => 'field_sa_monitoring',
      11 => 'field_sa_planning',
      12 => 'field_sa_policy_cycle_summary',
      13 => 'field_simple_policy_cycle',
      14 => 'field_policy_cycle_title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Policy Cycle',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_policy_cycle|node|advanced_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_policy_cycle|node|advanced_page|full';
  $field_group->group_name = 'group_policy_cycle';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'advanced_page';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Policy cycle',
    'weight' => '4',
    'children' => array(
      0 => 'sectoral_area_policy_cycle',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Policy cycle',
      'instance_settings' => array(
        'id' => 'group-policy-cycle',
        'classes' => 'group-policy-cycle field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_policy_cycle|node|advanced_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_quote_more_wrapper|node|advanced_page|teaser';
  $field_group->group_name = 'group_quote_more_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'advanced_page';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_title_quote_wrapper';
  $field_group->data = array(
    'label' => 'Quote/More wrapper',
    'weight' => '19',
    'children' => array(
      0 => 'field_quote',
      1 => 'read_more',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Quote/More wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-quote-more-wrapper field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_quote_more_wrapper|node|advanced_page|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related_content|node|advanced_page|full';
  $field_group->group_name = 'group_related_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'advanced_page';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Related content',
    'weight' => '12',
    'children' => array(
      0 => 'field_related_content',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Related content',
      'instance_settings' => array(
        'id' => 'related-content',
        'classes' => 'group-related-content items-list field-group-div large-12 columns',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_related_content|node|advanced_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related_content|node|page|default';
  $field_group->group_name = 'group_related_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Related content',
    'weight' => '3',
    'children' => array(
      0 => 'field_related_content',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Related content',
      'instance_settings' => array(
        'id' => 'related-content',
        'classes' => 'group-related-content items-list field-group-div large-12 columns',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_related_content|node|page|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related_content|node|page|full';
  $field_group->group_name = 'group_related_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Related content',
    'weight' => '7',
    'children' => array(
      0 => 'field_related_content',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Related content',
      'instance_settings' => array(
        'id' => 'related-content',
        'classes' => 'group-related-content items-list field-group-div large-12 columns',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_related_content|node|page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related_content|node|webform|full';
  $field_group->group_name = 'group_related_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'webform';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Related content',
    'weight' => '6',
    'children' => array(
      0 => 'field_related_content',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Related content',
      'instance_settings' => array(
        'id' => 'related-content',
        'classes' => 'group-related-content items-list field-group-div large-12 columns',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_related_content|node|webform|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_summary_wrapper|node|advanced_page|related_content';
  $field_group->group_name = 'group_summary_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'advanced_page';
  $field_group->mode = 'related_content';
  $field_group->parent_name = 'group_title_quote_wrapper';
  $field_group->data = array(
    'label' => 'Summary Wrapper',
    'weight' => '18',
    'children' => array(
      0 => 'body',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Summary Wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-summary-wrapper field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_summary_wrapper|node|advanced_page|related_content'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_summary_wrapper|node|page|related_content';
  $field_group->group_name = 'group_summary_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'related_content';
  $field_group->parent_name = 'group_title_quote_wrapper';
  $field_group->data = array(
    'label' => 'Summary Wrapper',
    'weight' => '2',
    'children' => array(
      0 => 'body',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Summary Wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-summary-wrapper field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_summary_wrapper|node|page|related_content'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_summary_wrapper|node|page|teaser';
  $field_group->group_name = 'group_summary_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_link_wrapper';
  $field_group->data = array(
    'label' => 'Summary Wrapper',
    'weight' => '2',
    'children' => array(
      0 => 'body',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Summary Wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-summary-wrapper field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_summary_wrapper|node|page|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_timeline|node|advanced_page|form';
  $field_group->group_name = 'group_timeline';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'advanced_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Timeline',
    'weight' => '7',
    'children' => array(
      0 => 'field_timeline_events',
      1 => 'field_timeline_footer',
      2 => 'field_timeline_summary',
      3 => 'field_timeline_title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Timeline',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_timeline|node|advanced_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_timeline|node|advanced_page|full';
  $field_group->group_name = 'group_timeline';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'advanced_page';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Timeline',
    'weight' => '6',
    'children' => array(
      0 => 'field_timeline_events',
      1 => 'field_timeline_footer',
      2 => 'field_timeline_summary',
      3 => 'field_timeline_title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Timeline',
      'instance_settings' => array(
        'id' => 'group-timeline',
        'classes' => 'group-timeline field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_timeline|node|advanced_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_timeline|node|page|form';
  $field_group->group_name = 'group_timeline';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Timeline',
    'weight' => '4',
    'children' => array(
      0 => 'field_timeline_events',
      1 => 'field_timeline_footer',
      2 => 'field_timeline_summary',
      3 => 'field_timeline_title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Timeline',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-timeline field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_timeline|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_timeline|node|page|full';
  $field_group->group_name = 'group_timeline';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Timeline',
    'weight' => '4',
    'children' => array(
      0 => 'field_timeline_events',
      1 => 'field_timeline_footer',
      2 => 'field_timeline_summary',
      3 => 'field_timeline_title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Timeline',
      'instance_settings' => array(
        'id' => 'group-timeline',
        'classes' => 'group-timeline field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_timeline|node|page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title_quote_wrapper|node|advanced_page|related_content';
  $field_group->group_name = 'group_title_quote_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'advanced_page';
  $field_group->mode = 'related_content';
  $field_group->parent_name = 'group_link_wrapper';
  $field_group->data = array(
    'label' => 'Title/Quote wrapper',
    'weight' => '3',
    'children' => array(
      0 => 'title_field',
      1 => 'group_summary_wrapper',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Title/Quote wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-title-quote-wrapper field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_title_quote_wrapper|node|advanced_page|related_content'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title_quote_wrapper|node|advanced_page|teaser';
  $field_group->group_name = 'group_title_quote_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'advanced_page';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_link_wrapper';
  $field_group->data = array(
    'label' => 'Title/Quote wrapper',
    'weight' => '3',
    'children' => array(
      0 => 'title_field',
      1 => 'group_quote_more_wrapper',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Title/Quote wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-title-quote-wrapper field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_title_quote_wrapper|node|advanced_page|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title_quote_wrapper|node|page|related_content';
  $field_group->group_name = 'group_title_quote_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'related_content';
  $field_group->parent_name = 'group_link_wrapper';
  $field_group->data = array(
    'label' => 'Title/Quote wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'title_field',
      1 => 'group_summary_wrapper',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Title/Quote wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-title-quote-wrapper field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_title_quote_wrapper|node|page|related_content'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title_quote_wrapper|node|page|teaser';
  $field_group->group_name = 'group_title_quote_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_link_wrapper';
  $field_group->data = array(
    'label' => 'Title/Quote wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'title_field',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Title/Quote wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-title-quote-wrapper field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_title_quote_wrapper|node|page|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title_quote_wrapper|node|webform|related_content';
  $field_group->group_name = 'group_title_quote_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'webform';
  $field_group->mode = 'related_content';
  $field_group->parent_name = 'group_link_wrapper';
  $field_group->data = array(
    'label' => 'Title/Quote wrapper',
    'weight' => '13',
    'children' => array(
      0 => 'title_field',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Title/Quote wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-title-quote-wrapper field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_title_quote_wrapper|node|webform|related_content'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title_quote_wrapper|node|webform|teaser';
  $field_group->group_name = 'group_title_quote_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'webform';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_link_wrapper';
  $field_group->data = array(
    'label' => 'Title/Quote wrapper',
    'weight' => '4',
    'children' => array(
      0 => 'title_field',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Title/Quote wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-title-quote-wrapper field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_title_quote_wrapper|node|webform|teaser'] = $field_group;

  return $export;
}

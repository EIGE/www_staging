<?php
/**
 * @file
 * eige_gei_policies.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function eige_gei_policies_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group__teaser_metadata|node|gender_equality_policy|related_content';
  $field_group->group_name = 'group__teaser_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gender_equality_policy';
  $field_group->mode = 'related_content';
  $field_group->parent_name = 'group__title_quote_wrapper';
  $field_group->data = array(
    'label' => 'Teaser metadata',
    'weight' => '21',
    'children' => array(
      0 => 'group_domain_level_wrapper',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Teaser metadata',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-teaser-metadata field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group__teaser_metadata|node|gender_equality_policy|related_content'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group__title_quote_wrapper|node|gender_equality_policy|related_content';
  $field_group->group_name = 'group__title_quote_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gender_equality_policy';
  $field_group->mode = 'related_content';
  $field_group->parent_name = 'group_link_wrapper';
  $field_group->data = array(
    'label' => 'Title/Quote wrapper',
    'weight' => '20',
    'children' => array(
      0 => 'title_field',
      1 => 'group__teaser_metadata',
      2 => 'group_summary_wrapper',
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
  $export['group__title_quote_wrapper|node|gender_equality_policy|related_content'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|node|gender_equality_policy|teaser';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gender_equality_policy';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'field_stakeholder',
      2 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Content',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-content field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_content|node|gender_equality_policy|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_domain_level_wrapper|node|gender_equality_policy|related_content';
  $field_group->group_name = 'group_domain_level_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gender_equality_policy';
  $field_group->mode = 'related_content';
  $field_group->parent_name = 'group__teaser_metadata';
  $field_group->data = array(
    'label' => 'Domain/Level wrapper',
    'weight' => '3',
    'children' => array(
      0 => 'field_domain',
      1 => 'field_level',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Domain/Level wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-domain-level-wrapper field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_domain_level_wrapper|node|gender_equality_policy|related_content'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_link_wrapper|node|gender_equality_policy|related_content';
  $field_group->group_name = 'group_link_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gender_equality_policy';
  $field_group->mode = 'related_content';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group link wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'content_type',
      1 => 'group__title_quote_wrapper',
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
  $export['group_link_wrapper|node|gender_equality_policy|related_content'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_metadata|node|gender_equality_policy|teaser';
  $field_group->group_name = 'group_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gender_equality_policy';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => '0',
    'children' => array(
      0 => 'field_country',
      1 => 'field_date',
      2 => 'field_domain',
      3 => 'field_level',
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
  $export['group_metadata|node|gender_equality_policy|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related_content|node|gender_equality_policy|full';
  $field_group->group_name = 'group_related_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gender_equality_policy';
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
  $export['group_related_content|node|gender_equality_policy|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_summary_wrapper|node|gender_equality_policy|related_content';
  $field_group->group_name = 'group_summary_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gender_equality_policy';
  $field_group->mode = 'related_content';
  $field_group->parent_name = 'group__title_quote_wrapper';
  $field_group->data = array(
    'label' => 'Summary Wrapper',
    'weight' => '22',
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
  $export['group_summary_wrapper|node|gender_equality_policy|related_content'] = $field_group;

  return $export;
}

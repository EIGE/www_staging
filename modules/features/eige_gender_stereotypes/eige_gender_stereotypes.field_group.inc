<?php
/**
 * @file
 * eige_gender_stereotypes.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function eige_gender_stereotypes_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_avatar_wrapper|node|gender_story|full';
  $field_group->group_name = 'group_avatar_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gender_story';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_story_info';
  $field_group->data = array(
    'label' => 'Avatar Wrapper',
    'weight' => '16',
    'children' => array(
      0 => 'field_age',
      1 => 'field_country',
      2 => 'field_sex',
      3 => 'gender_story_fixed_subtitle',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Avatar Wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-avatar-wrapper field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_avatar_wrapper|node|gender_story|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_avatar_wrapper|node|gender_story|related_content';
  $field_group->group_name = 'group_avatar_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gender_story';
  $field_group->mode = 'related_content';
  $field_group->parent_name = 'group_related_content_wrapper';
  $field_group->data = array(
    'label' => 'Avatar Wrapper',
    'weight' => '2',
    'children' => array(
      0 => 'field_age',
      1 => 'field_country',
      2 => 'field_sex',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Avatar Wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-avatar-wrapper field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_avatar_wrapper|node|gender_story|related_content'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_avatar_wrapper|node|gender_story|teaser';
  $field_group->group_name = 'group_avatar_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gender_story';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_teaser_wrapper';
  $field_group->data = array(
    'label' => 'Avatar Wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'field_age',
      1 => 'field_country',
      2 => 'field_sex',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Avatar Wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-avatar-wrapper field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_avatar_wrapper|node|gender_story|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_keywords|node|gender_story|full';
  $field_group->group_name = 'group_keywords';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gender_story';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_metadata';
  $field_group->data = array(
    'label' => 'Keywords wrapper',
    'weight' => '28',
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
  $export['group_keywords|node|gender_story|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_link_wrapper|node|gender_story|related_content';
  $field_group->group_name = 'group_link_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gender_story';
  $field_group->mode = 'related_content';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group link wrapper',
    'weight' => '13',
    'children' => array(),
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
  $export['group_link_wrapper|node|gender_story|related_content'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_metadata|node|gender_story|full';
  $field_group->group_name = 'group_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gender_story';
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
  $export['group_metadata|node|gender_story|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_migration_information|node|gender_story|form';
  $field_group->group_name = 'group_migration_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gender_story';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Migration Information',
    'weight' => '14',
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
  $export['group_migration_information|node|gender_story|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related_content_wrapper|node|gender_story|related_content';
  $field_group->group_name = 'group_related_content_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gender_story';
  $field_group->mode = 'related_content';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Related Content Wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_primary_topic_category',
      2 => 'group_avatar_wrapper',
    ),
    'format_type' => 'link',
    'format_settings' => array(
      'label' => 'Related Content Wrapper',
      'instance_settings' => array(
        'link_to' => 'entity',
        'custom_url' => '',
        'custom_url_normalize' => 1,
        'classes' => 'group-related-content-wrapper field-group-link',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_related_content_wrapper|node|gender_story|related_content'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_simplenews_wrapper|node|gender_story|scs';
  $field_group->group_name = 'group_simplenews_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gender_story';
  $field_group->mode = 'scs';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Simplenews Wrapper',
    'weight' => '5',
    'children' => array(
      0 => 'body',
      1 => 'field_age',
      2 => 'field_country',
      3 => 'field_sex',
    ),
    'format_type' => 'link',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'link_to' => 'entity',
        'classes' => 'group-simplenews-wrapper field-group-link',
        'custom_url' => '',
        'custom_url_normalize' => TRUE,
      ),
    ),
  );
  $export['group_simplenews_wrapper|node|gender_story|scs'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_story_info|node|gender_story|full';
  $field_group->group_name = 'group_story_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gender_story';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Story Info',
    'weight' => '5',
    'children' => array(
      0 => 'field_key_actors',
      1 => 'field_other_topic_categories',
      2 => 'field_other_topics',
      3 => 'field_primary_topic_category',
      4 => 'field_year',
      5 => 'pdf_download',
      6 => 'group_avatar_wrapper',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Story Info',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-story-info field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_story_info|node|gender_story|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_summary_wrapper|node|gender_story|related_content';
  $field_group->group_name = 'group_summary_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gender_story';
  $field_group->mode = 'related_content';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Summary Wrapper',
    'weight' => '6',
    'children' => array(),
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
  $export['group_summary_wrapper|node|gender_story|related_content'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_teaser_wrapper|node|gender_story|teaser';
  $field_group->group_name = 'group_teaser_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gender_story';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Teaser Wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_primary_topic_category',
      2 => 'group_avatar_wrapper',
    ),
    'format_type' => 'link',
    'format_settings' => array(
      'label' => 'Teaser Wrapper',
      'instance_settings' => array(
        'link_to' => 'entity',
        'custom_url' => '',
        'custom_url_normalize' => 1,
        'classes' => 'group-teaser-wrapper field-group-link',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_teaser_wrapper|node|gender_story|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title_quote_wrapper|node|gender_story|related_content';
  $field_group->group_name = 'group_title_quote_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gender_story';
  $field_group->mode = 'related_content';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Title/Quote wrapper',
    'weight' => '16',
    'children' => array(),
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
  $export['group_title_quote_wrapper|node|gender_story|related_content'] = $field_group;

  return $export;
}

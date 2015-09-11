<?php
/**
 * @file
 * eige_gender_mainstreaming.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function eige_gender_mainstreaming_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_additional_info|node|structure|full';
  $field_group->group_name = 'group_additional_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'structure';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Additional info',
    'weight' => '4',
    'children' => array(
      0 => 'field_country',
      1 => 'field_scope',
      2 => 'field_structure_type',
      3 => 'field_topic',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Additional info',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-additional-info field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_additional_info|node|structure|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_additional_titles|node|structure|full';
  $field_group->group_name = 'group_additional_titles';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'structure';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_main_content';
  $field_group->data = array(
    'label' => 'Additional title(s)',
    'weight' => '25',
    'children' => array(
      0 => 'field_native_title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Additional title(s)',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-additional-titles field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_additional_titles|node|structure|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_person|node|structure|form';
  $field_group->group_name = 'group_contact_person';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'structure';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact person',
    'weight' => '11',
    'children' => array(
      0 => 'field_contact_person_description',
      1 => 'field_contact_person_job_title',
      2 => 'field_contact_person_name',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Contact person',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-contact-person field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_contact_person|node|structure|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_external_references|node|sectoral_area|form';
  $field_group->group_name = 'group_external_references';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'sectoral_area';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Want to know more?',
    'weight' => '10',
    'children' => array(
      0 => 'field_external_references',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Want to know more?',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-external-references field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_external_references|node|sectoral_area|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_external_references|node|sectoral_area|full';
  $field_group->group_name = 'group_external_references';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'sectoral_area';
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
  $export['group_external_references|node|sectoral_area|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image_quote|node|country_overview|full';
  $field_group->group_name = 'group_image_quote';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'country_overview';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Image/Quote',
    'weight' => '1',
    'children' => array(),
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
  $export['group_image_quote|node|country_overview|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image_quote|node|sectoral_area|full';
  $field_group->group_name = 'group_image_quote';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'sectoral_area';
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
  $export['group_image_quote|node|sectoral_area|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image_quote|node|tool_method_category|full';
  $field_group->group_name = 'group_image_quote';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tool_method_category';
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
  $export['group_image_quote|node|tool_method_category|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_keywords_wrapper|node|structure|full';
  $field_group->group_name = 'group_keywords_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'structure';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_metadata';
  $field_group->data = array(
    'label' => 'Keywords wrapper',
    'weight' => '12',
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
  $export['group_keywords_wrapper|node|structure|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_keywords|node|country_overview|full';
  $field_group->group_name = 'group_keywords';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'country_overview';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_metadata';
  $field_group->data = array(
    'label' => 'Keywords wrapper',
    'weight' => '24',
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
  $export['group_keywords|node|country_overview|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_keywords|node|sectoral_area|full';
  $field_group->group_name = 'group_keywords';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'sectoral_area';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_metadata';
  $field_group->data = array(
    'label' => 'Keywords wrapper',
    'weight' => '3',
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
  $export['group_keywords|node|sectoral_area|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_keywords|node|tool_method_category|full';
  $field_group->group_name = 'group_keywords';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tool_method_category';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_metadata';
  $field_group->data = array(
    'label' => 'Keywords wrapper',
    'weight' => '3',
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
  $export['group_keywords|node|tool_method_category|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_keywords|node|video|full';
  $field_group->group_name = 'group_keywords';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_metadata';
  $field_group->data = array(
    'label' => 'Keywords wrapper',
    'weight' => '4',
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
  $export['group_keywords|node|video|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_link_wrapper|field_collection_item|field_other_information|default';
  $field_group->group_name = 'group_link_wrapper';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_other_information';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Link wrapper',
    'weight' => '6',
    'children' => array(
      0 => 'group_title_quote_wrapper',
    ),
    'format_type' => 'link',
    'format_settings' => array(
      'label' => 'Link wrapper',
      'instance_settings' => array(
        'link_to' => 'field_other_info_url',
        'custom_url' => '',
        'custom_url_normalize' => 1,
        'classes' => 'group-link-wrapper field-group-link',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_link_wrapper|field_collection_item|field_other_information|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_link_wrapper|node|country_overview|related_content';
  $field_group->group_name = 'group_link_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'country_overview';
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
        'link_to' => 'tokens',
        'custom_url' => 'gender-mainstreaming/countries/[node:field-country:name]',
        'custom_url_normalize' => 1,
        'classes' => 'group-link-wrapper field-group-link',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_link_wrapper|node|country_overview|related_content'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_link_wrapper|node|country_overview|teaser';
  $field_group->group_name = 'group_link_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'country_overview';
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
        'link_to' => 'tokens',
        'custom_url' => 'gender-mainstreaming/countries/[node:field-country:name]',
        'custom_url_normalize' => 1,
        'classes' => 'group-link-wrapper field-group-link',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_link_wrapper|node|country_overview|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_link_wrapper|node|sectoral_area|related_content';
  $field_group->group_name = 'group_link_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'sectoral_area';
  $field_group->mode = 'related_content';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group link wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'field_image',
      1 => 'content_type',
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
  $export['group_link_wrapper|node|sectoral_area|related_content'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_link_wrapper|node|sectoral_area|teaser';
  $field_group->group_name = 'group_link_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'sectoral_area';
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
      'formatter' => 'open',
      'instance_settings' => array(
        'link_to' => 'entity',
        'classes' => 'group-link-wrapper field-group-link',
      ),
    ),
  );
  $export['group_link_wrapper|node|sectoral_area|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_link_wrapper|node|structure|related_content';
  $field_group->group_name = 'group_link_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'structure';
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
      'formatter' => 'open',
      'instance_settings' => array(
        'link_to' => 'entity',
        'classes' => 'group-link-wrapper field-group-link',
      ),
    ),
  );
  $export['group_link_wrapper|node|structure|related_content'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_link_wrapper|node|structure|teaser';
  $field_group->group_name = 'group_link_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'structure';
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
      'formatter' => 'open',
      'instance_settings' => array(
        'link_to' => 'entity',
        'classes' => 'group-link-wrapper field-group-link',
      ),
    ),
  );
  $export['group_link_wrapper|node|structure|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_link_wrapper|node|tool_method_category|related_content';
  $field_group->group_name = 'group_link_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tool_method_category';
  $field_group->mode = 'related_content';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group link wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'field_image',
      1 => 'content_type',
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
  $export['group_link_wrapper|node|tool_method_category|related_content'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_link_wrapper|node|tool_method_category|teaser';
  $field_group->group_name = 'group_link_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tool_method_category';
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
      'formatter' => 'open',
      'instance_settings' => array(
        'link_to' => 'entity',
        'classes' => 'group-link-wrapper field-group-link',
      ),
    ),
  );
  $export['group_link_wrapper|node|tool_method_category|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_link_wrapper|node|video|related_content';
  $field_group->group_name = 'group_link_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
  $field_group->mode = 'related_content';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group link wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'field_video',
      1 => 'content_type',
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
  $export['group_link_wrapper|node|video|related_content'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_link_wrapper|node|video|teaser';
  $field_group->group_name = 'group_link_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group link wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'field_video',
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
  $export['group_link_wrapper|node|video|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_content|node|structure|full';
  $field_group->group_name = 'group_main_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'structure';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Main content',
    'weight' => '2',
    'children' => array(
      0 => 'group_metadata',
      1 => 'group_user_contact_info',
      2 => 'group_user_general_info',
      3 => 'group_user_social_media',
      4 => 'group_additional_titles',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Main content',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-main-content field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_main_content|node|structure|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_metadata|node|country_overview|full';
  $field_group->group_name = 'group_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'country_overview';
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
  $export['group_metadata|node|country_overview|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_metadata|node|sectoral_area|full';
  $field_group->group_name = 'group_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'sectoral_area';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => '1',
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
  $export['group_metadata|node|sectoral_area|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_metadata|node|structure|full';
  $field_group->group_name = 'group_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'structure';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_main_content';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => '27',
    'children' => array(
      0 => 'content_type',
      1 => 'group_keywords_wrapper',
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
  $export['group_metadata|node|structure|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_metadata|node|tool_method_category|full';
  $field_group->group_name = 'group_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tool_method_category';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => '1',
    'children' => array(
      0 => 'content_type',
      1 => 'group_keywords',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Metadata',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-metadata field-group-fieldset',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_metadata|node|tool_method_category|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_metadata|node|video|full';
  $field_group->group_name = 'group_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
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
  $export['group_metadata|node|video|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_migration_information|node|country_overview|form';
  $field_group->group_name = 'group_migration_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'country_overview';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Migration Information',
    'weight' => '17',
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
  $export['group_migration_information|node|country_overview|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_migration_information|node|structure|form';
  $field_group->group_name = 'group_migration_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'structure';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Migration Information',
    'weight' => '17',
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
  $export['group_migration_information|node|structure|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organisation_info|node|structure|form';
  $field_group->group_name = 'group_organisation_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'structure';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Organisation info',
    'weight' => '10',
    'children' => array(
      0 => 'field_org_area_of_intervention',
      1 => 'field_organisation_address',
      2 => 'field_organisation_facebook',
      3 => 'field_organisation_phone',
      4 => 'field_organisation_skype',
      5 => 'field_organisation_twitter',
      6 => 'field_organisation_website',
      7 => 'field_organisation_email',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Organisation info',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-organisation-info field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_organisation_info|node|structure|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_policy_cycle|node|sectoral_area|form';
  $field_group->group_name = 'group_policy_cycle';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'sectoral_area';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Policy Cycle',
    'weight' => '6',
    'children' => array(
      0 => 'field_sa_design',
      1 => 'field_sa_implementation',
      2 => 'field_sa_monitoring',
      3 => 'field_sa_planning',
      4 => 'field_sa_policy_cycle_summary',
      5 => 'field_policy_cycle_title',
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
  $export['group_policy_cycle|node|sectoral_area|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_policy_cycle|node|sectoral_area|full';
  $field_group->group_name = 'group_policy_cycle';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'sectoral_area';
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
  $export['group_policy_cycle|node|sectoral_area|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_quote_more_wrapper|node|sectoral_area|teaser';
  $field_group->group_name = 'group_quote_more_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'sectoral_area';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_title_quote_wrapper';
  $field_group->data = array(
    'label' => 'Quote/More wrapper',
    'weight' => '4',
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
  $export['group_quote_more_wrapper|node|sectoral_area|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_quote_more_wrapper|node|tool_method_category|teaser';
  $field_group->group_name = 'group_quote_more_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tool_method_category';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_title_quote_wrapper';
  $field_group->data = array(
    'label' => 'Quote/More wrapper',
    'weight' => '4',
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
  $export['group_quote_more_wrapper|node|tool_method_category|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related_content|node|country_overview|full';
  $field_group->group_name = 'group_related_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'country_overview';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Related content',
    'weight' => '11',
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
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_related_content|node|country_overview|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related_content|node|sectoral_area|full';
  $field_group->group_name = 'group_related_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'sectoral_area';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Related content',
    'weight' => '11',
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
  $export['group_related_content|node|sectoral_area|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related_content|node|structure|full';
  $field_group->group_name = 'group_related_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'structure';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Related content',
    'weight' => '5',
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
  $export['group_related_content|node|structure|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related_content|node|tool_method_category|full';
  $field_group->group_name = 'group_related_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tool_method_category';
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
  $export['group_related_content|node|tool_method_category|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related_content|node|video|full';
  $field_group->group_name = 'group_related_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Related content',
    'weight' => '5',
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
  $export['group_related_content|node|video|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_summary_wrapper|node|country_overview|related_content';
  $field_group->group_name = 'group_summary_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'country_overview';
  $field_group->mode = 'related_content';
  $field_group->parent_name = 'group_title_quote_wrapper';
  $field_group->data = array(
    'label' => 'Summary wrapper',
    'weight' => '2',
    'children' => array(),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Summary wrapper',
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
  $export['group_summary_wrapper|node|country_overview|related_content'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_summary_wrapper|node|country_overview|teaser';
  $field_group->group_name = 'group_summary_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'country_overview';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_title_quote_wrapper';
  $field_group->data = array(
    'label' => 'Summary wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'body',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Summary wrapper',
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
  $export['group_summary_wrapper|node|country_overview|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_summary_wrapper|node|structure|related_content';
  $field_group->group_name = 'group_summary_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'structure';
  $field_group->mode = 'related_content';
  $field_group->parent_name = 'group_title_quote_wrapper';
  $field_group->data = array(
    'label' => 'Summary Wrapper',
    'weight' => '5',
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
  $export['group_summary_wrapper|node|structure|related_content'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_summary_wrapper|node|structure|teaser';
  $field_group->group_name = 'group_summary_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'structure';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_title_quote_wrapper';
  $field_group->data = array(
    'label' => 'Summary Wrapper',
    'weight' => '6',
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
  $export['group_summary_wrapper|node|structure|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_summary_wrapper|node|video|related_content';
  $field_group->group_name = 'group_summary_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
  $field_group->mode = 'related_content';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Summary Wrapper',
    'weight' => '12',
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
  $export['group_summary_wrapper|node|video|related_content'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_summary_wrapper|node|video|teaser';
  $field_group->group_name = 'group_summary_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Summary Wrapper',
    'weight' => '21',
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
  $export['group_summary_wrapper|node|video|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_teaser_metadata|node|structure|related_content';
  $field_group->group_name = 'group_teaser_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'structure';
  $field_group->mode = 'related_content';
  $field_group->parent_name = 'group_title_quote_wrapper';
  $field_group->data = array(
    'label' => 'Teaser metadata',
    'weight' => '4',
    'children' => array(
      0 => 'field_topic',
      1 => 'group_type_scope_wrapper',
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
  $export['group_teaser_metadata|node|structure|related_content'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_teaser_metadata|node|structure|teaser';
  $field_group->group_name = 'group_teaser_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'structure';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_title_quote_wrapper';
  $field_group->data = array(
    'label' => 'Teaser metadata',
    'weight' => '5',
    'children' => array(
      0 => 'field_topic',
      1 => 'group_type_scope_wrapper',
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
  $export['group_teaser_metadata|node|structure|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_timeline|node|sectoral_area|form';
  $field_group->group_name = 'group_timeline';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'sectoral_area';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Timeline',
    'weight' => '8',
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
  $export['group_timeline|node|sectoral_area|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_timeline|node|sectoral_area|full';
  $field_group->group_name = 'group_timeline';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'sectoral_area';
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
  $export['group_timeline|node|sectoral_area|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title_quote_wrapper|field_collection_item|field_other_information|default';
  $field_group->group_name = 'group_title_quote_wrapper';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_other_information';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_link_wrapper';
  $field_group->data = array(
    'label' => 'Title/Quote wrapper',
    'weight' => '6',
    'children' => array(
      0 => 'field_other_info_title',
      1 => 'field_other_info_description',
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
  $export['group_title_quote_wrapper|field_collection_item|field_other_information|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title_quote_wrapper|node|country_overview|related_content';
  $field_group->group_name = 'group_title_quote_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'country_overview';
  $field_group->mode = 'related_content';
  $field_group->parent_name = 'group_link_wrapper';
  $field_group->data = array(
    'label' => 'Title/Quote wrapper',
    'weight' => '3',
    'children' => array(
      0 => 'field_country',
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
  $export['group_title_quote_wrapper|node|country_overview|related_content'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title_quote_wrapper|node|country_overview|teaser';
  $field_group->group_name = 'group_title_quote_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'country_overview';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_link_wrapper';
  $field_group->data = array(
    'label' => 'Title/Quote wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'field_country',
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
  $export['group_title_quote_wrapper|node|country_overview|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title_quote_wrapper|node|sectoral_area|related_content';
  $field_group->group_name = 'group_title_quote_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'sectoral_area';
  $field_group->mode = 'related_content';
  $field_group->parent_name = 'group_link_wrapper';
  $field_group->data = array(
    'label' => 'Title/Quote wrapper',
    'weight' => '3',
    'children' => array(
      0 => 'title_field',
      1 => 'field_quote',
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
  $export['group_title_quote_wrapper|node|sectoral_area|related_content'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title_quote_wrapper|node|sectoral_area|teaser';
  $field_group->group_name = 'group_title_quote_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'sectoral_area';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_link_wrapper';
  $field_group->data = array(
    'label' => 'Title/Quote wrapper',
    'weight' => '2',
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
  $export['group_title_quote_wrapper|node|sectoral_area|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title_quote_wrapper|node|structure|related_content';
  $field_group->group_name = 'group_title_quote_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'structure';
  $field_group->mode = 'related_content';
  $field_group->parent_name = 'group_link_wrapper';
  $field_group->data = array(
    'label' => 'Title/Quote wrapper',
    'weight' => '4',
    'children' => array(
      0 => 'title_field',
      1 => 'group_summary_wrapper',
      2 => 'group_teaser_metadata',
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
  $export['group_title_quote_wrapper|node|structure|related_content'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title_quote_wrapper|node|structure|teaser';
  $field_group->group_name = 'group_title_quote_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'structure';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_link_wrapper';
  $field_group->data = array(
    'label' => 'Title/Quote wrapper',
    'weight' => '2',
    'children' => array(
      0 => 'title_field',
      1 => 'group_summary_wrapper',
      2 => 'group_teaser_metadata',
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
  $export['group_title_quote_wrapper|node|structure|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title_quote_wrapper|node|tool_method_category|related_content';
  $field_group->group_name = 'group_title_quote_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tool_method_category';
  $field_group->mode = 'related_content';
  $field_group->parent_name = 'group_link_wrapper';
  $field_group->data = array(
    'label' => 'Title/Quote wrapper',
    'weight' => '3',
    'children' => array(
      0 => 'title_field',
      1 => 'field_quote',
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
  $export['group_title_quote_wrapper|node|tool_method_category|related_content'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title_quote_wrapper|node|tool_method_category|teaser';
  $field_group->group_name = 'group_title_quote_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tool_method_category';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_link_wrapper';
  $field_group->data = array(
    'label' => 'Title/Quote wrapper',
    'weight' => '2',
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
  $export['group_title_quote_wrapper|node|tool_method_category|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title_quote_wrapper|node|video|related_content';
  $field_group->group_name = 'group_title_quote_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
  $field_group->mode = 'related_content';
  $field_group->parent_name = 'group_link_wrapper';
  $field_group->data = array(
    'label' => 'Title/Quote wrapper',
    'weight' => '15',
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
  $export['group_title_quote_wrapper|node|video|related_content'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title_quote_wrapper|node|video|teaser';
  $field_group->group_name = 'group_title_quote_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_link_wrapper';
  $field_group->data = array(
    'label' => 'Title/Quote wrapper',
    'weight' => '20',
    'children' => array(
      0 => 'title_field',
      1 => 'field_display_date',
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
  $export['group_title_quote_wrapper|node|video|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_type_scope_wrapper|node|structure|related_content';
  $field_group->group_name = 'group_type_scope_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'structure';
  $field_group->mode = 'related_content';
  $field_group->parent_name = 'group_teaser_metadata';
  $field_group->data = array(
    'label' => 'Type/scope wrapper',
    'weight' => '27',
    'children' => array(
      0 => 'field_scope',
      1 => 'field_structure_type',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Type/scope wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-type-scope-wrapper field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_type_scope_wrapper|node|structure|related_content'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_type_scope_wrapper|node|structure|teaser';
  $field_group->group_name = 'group_type_scope_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'structure';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_teaser_metadata';
  $field_group->data = array(
    'label' => 'Type/scope wrapper',
    'weight' => '27',
    'children' => array(
      0 => 'field_scope',
      1 => 'field_structure_type',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Type/scope wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-type-scope-wrapper field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_type_scope_wrapper|node|structure|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_contact_info|node|structure|form';
  $field_group->group_name = 'group_user_contact_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'structure';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact Information',
    'weight' => '11',
    'children' => array(
      0 => 'field_contact_person_description',
      1 => 'field_contact_person_job_title',
      2 => 'field_contact_person_name',
      3 => 'field_structure_address',
      4 => 'field_structure_email',
      5 => 'field_structure_phone',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-user-contact-info field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_user_contact_info|node|structure|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_contact_info|node|structure|full';
  $field_group->group_name = 'group_user_contact_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'structure';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_main_content';
  $field_group->data = array(
    'label' => 'Contact Information',
    'weight' => '29',
    'children' => array(
      0 => 'field_contact_person_description',
      1 => 'field_contact_person_job_title',
      2 => 'field_contact_person_name',
      3 => 'field_structure_address',
      4 => 'field_structure_email',
      5 => 'field_structure_phone',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Contact Information',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-user-contact-info field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_user_contact_info|node|structure|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_general_info|node|structure|full';
  $field_group->group_name = 'group_user_general_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'structure';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_main_content';
  $field_group->data = array(
    'label' => 'User general info',
    'weight' => '28',
    'children' => array(
      0 => 'body',
      1 => 'field_areas_of_intervention',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'User general info',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-user-general-info field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_user_general_info|node|structure|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_social_media|node|structure|form';
  $field_group->group_name = 'group_user_social_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'structure';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Social media',
    'weight' => '12',
    'children' => array(
      0 => 'field_structure_website',
      1 => 'field_structure_facebook',
      2 => 'field_structure_twitter',
      3 => 'field_structure_skype',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-user-social-media field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_user_social_media|node|structure|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_social_media|node|structure|full';
  $field_group->group_name = 'group_user_social_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'structure';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_main_content';
  $field_group->data = array(
    'label' => 'Social Media',
    'weight' => '30',
    'children' => array(
      0 => 'field_structure_facebook',
      1 => 'field_structure_skype',
      2 => 'field_structure_twitter',
      3 => 'field_structure_website',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Social Media',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-user-social-media field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_user_social_media|node|structure|full'] = $field_group;

  return $export;
}

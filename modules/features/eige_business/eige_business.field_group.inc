<?php
/**
 * @file
 * eige_business.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function eige_business_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_additional_info|node|career_opportunity|full';
  $field_group->group_name = 'group_additional_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'career_opportunity';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Additional info',
    'weight' => '2',
    'children' => array(
      0 => 'field_activities',
      1 => 'field_closing_date',
      2 => 'field_publication_date',
      3 => 'field_ref_number',
      4 => 'field_grade',
      5 => 'field_maximum_n_on_reserve_list',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Additional info',
      'instance_settings' => array(
        'classes' => 'group-additional-info field-group-div',
        'element' => 'table',
        'show_label' => '0',
        'label_element' => 'h3',
        'attributes' => '',
      ),
    ),
  );
  $export['group_additional_info|node|career_opportunity|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_additional_info|node|procurement|full';
  $field_group->group_name = 'group_additional_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'procurement';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Additional info',
    'weight' => '2',
    'children' => array(
      0 => 'field_activities',
      1 => 'field_closing_date',
      2 => 'field_publication_date',
      3 => 'field_ref_number',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Additional info',
      'instance_settings' => array(
        'classes' => 'group-additional-info field-group-div',
        'element' => 'table',
        'show_label' => '0',
        'label_element' => 'h3',
        'attributes' => '',
      ),
    ),
  );
  $export['group_additional_info|node|procurement|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_keywords|node|career_opportunity|full';
  $field_group->group_name = 'group_keywords';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'career_opportunity';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_metadata';
  $field_group->data = array(
    'label' => 'Keywords wrapper',
    'weight' => '18',
    'children' => array(
      0 => 'field_career_opportunity_type',
      1 => 'field_keywords',
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
  $export['group_keywords|node|career_opportunity|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_keywords|node|procurement|full';
  $field_group->group_name = 'group_keywords';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'procurement';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_metadata';
  $field_group->data = array(
    'label' => 'Keywords wrapper',
    'weight' => '7',
    'children' => array(
      0 => 'field_procurement_type',
      1 => 'field_keywords',
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
  $export['group_keywords|node|procurement|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_link_wrapper|node|career_opportunity|document_registry';
  $field_group->group_name = 'group_link_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'career_opportunity';
  $field_group->mode = 'document_registry';
  $field_group->parent_name = 'group_outer_row_wrapper';
  $field_group->data = array(
    'label' => 'Group link wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'group_teaser_left_wrapper',
    ),
    'format_type' => 'link',
    'format_settings' => array(
      'label' => 'Group link wrapper',
      'instance_settings' => array(
        'link_to' => 'entity',
        'custom_url' => '',
        'custom_url_normalize' => 1,
        'classes' => 'group-link-wrapper field-group-link columns small-12',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_link_wrapper|node|career_opportunity|document_registry'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_link_wrapper|node|career_opportunity|related_content';
  $field_group->group_name = 'group_link_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'career_opportunity';
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
  $export['group_link_wrapper|node|career_opportunity|related_content'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_link_wrapper|node|career_opportunity|teaser';
  $field_group->group_name = 'group_link_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'career_opportunity';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group link wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'group_teaser_left_wrapper',
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
  $export['group_link_wrapper|node|career_opportunity|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_link_wrapper|node|procurement|document_registry';
  $field_group->group_name = 'group_link_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'procurement';
  $field_group->mode = 'document_registry';
  $field_group->parent_name = 'group_outer_row_wrapper';
  $field_group->data = array(
    'label' => 'Group link wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'group_teaser_left_wrapper',
    ),
    'format_type' => 'link',
    'format_settings' => array(
      'label' => 'Group link wrapper',
      'instance_settings' => array(
        'link_to' => 'entity',
        'custom_url' => '',
        'custom_url_normalize' => 1,
        'classes' => 'group-link-wrapper field-group-link columns small-12',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_link_wrapper|node|procurement|document_registry'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_link_wrapper|node|procurement|related_content';
  $field_group->group_name = 'group_link_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'procurement';
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
  $export['group_link_wrapper|node|procurement|related_content'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_link_wrapper|node|procurement|teaser';
  $field_group->group_name = 'group_link_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'procurement';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group link wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'group_teaser_left_wrapper',
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
  $export['group_link_wrapper|node|procurement|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_metadata|node|career_opportunity|full';
  $field_group->group_name = 'group_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'career_opportunity';
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
  $export['group_metadata|node|career_opportunity|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_metadata|node|procurement|full';
  $field_group->group_name = 'group_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'procurement';
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
  $export['group_metadata|node|procurement|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_migration_information|node|career_opportunity|form';
  $field_group->group_name = 'group_migration_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'career_opportunity';
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
  $export['group_migration_information|node|career_opportunity|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_migration_information|node|procurement|form';
  $field_group->group_name = 'group_migration_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'procurement';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Migration Information',
    'weight' => '15',
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
  $export['group_migration_information|node|procurement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_outer_row_wrapper|node|career_opportunity|document_registry';
  $field_group->group_name = 'group_outer_row_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'career_opportunity';
  $field_group->mode = 'document_registry';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Outer row wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'group_link_wrapper',
      1 => 'group_teaser_right_wrapper',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Outer row wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-outer-row-wrapper field-group-div row',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_outer_row_wrapper|node|career_opportunity|document_registry'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_outer_row_wrapper|node|procurement|document_registry';
  $field_group->group_name = 'group_outer_row_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'procurement';
  $field_group->mode = 'document_registry';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Outer row wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'group_link_wrapper',
      1 => 'group_teaser_right_wrapper',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Outer row wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-outer-row-wrapper field-group-div row',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_outer_row_wrapper|node|procurement|document_registry'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related_content|node|career_opportunity|full';
  $field_group->group_name = 'group_related_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'career_opportunity';
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
  $export['group_related_content|node|career_opportunity|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related_content|node|procurement|full';
  $field_group->group_name = 'group_related_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'procurement';
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
  $export['group_related_content|node|procurement|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_status_wrapper|node|career_opportunity|full';
  $field_group->group_name = 'group_status_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'career_opportunity';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Status wrapper',
    'weight' => '17',
    'children' => array(
      0 => 'field_career_opportunity_status',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Status wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-status-wrapper field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_status_wrapper|node|career_opportunity|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_status_wrapper|node|procurement|full';
  $field_group->group_name = 'group_status_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'procurement';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Status wrapper',
    'weight' => '5',
    'children' => array(
      0 => 'field_procurement_status',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Status wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-status-wrapper field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_status_wrapper|node|procurement|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_summary_wrapper|node|career_opportunity|related_content';
  $field_group->group_name = 'group_summary_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'career_opportunity';
  $field_group->mode = 'related_content';
  $field_group->parent_name = 'group_title_quote_wrapper';
  $field_group->data = array(
    'label' => 'Summary Wrapper',
    'weight' => '23',
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
  $export['group_summary_wrapper|node|career_opportunity|related_content'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_summary_wrapper|node|career_opportunity|teaser';
  $field_group->group_name = 'group_summary_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'career_opportunity';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_teaser_left_wrapper';
  $field_group->data = array(
    'label' => 'Summary Wrapper',
    'weight' => '9',
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
  $export['group_summary_wrapper|node|career_opportunity|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_summary_wrapper|node|procurement|related_content';
  $field_group->group_name = 'group_summary_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'procurement';
  $field_group->mode = 'related_content';
  $field_group->parent_name = 'group_title_quote_wrapper';
  $field_group->data = array(
    'label' => 'Summary Wrapper',
    'weight' => '3',
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
  $export['group_summary_wrapper|node|procurement|related_content'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_summary_wrapper|node|procurement|teaser';
  $field_group->group_name = 'group_summary_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'procurement';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_teaser_left_wrapper';
  $field_group->data = array(
    'label' => 'Summary Wrapper',
    'weight' => '3',
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
  $export['group_summary_wrapper|node|procurement|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_teaser_left_wrapper|node|career_opportunity|document_registry';
  $field_group->group_name = 'group_teaser_left_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'career_opportunity';
  $field_group->mode = 'document_registry';
  $field_group->parent_name = 'group_link_wrapper';
  $field_group->data = array(
    'label' => 'Teaser left wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'group_teaser_metadata',
      1 => 'group_title_author_wrapper',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Teaser left wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-teaser-left-wrapper field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_teaser_left_wrapper|node|career_opportunity|document_registry'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_teaser_left_wrapper|node|career_opportunity|teaser';
  $field_group->group_name = 'group_teaser_left_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'career_opportunity';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_link_wrapper';
  $field_group->data = array(
    'label' => 'Teaser left wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'group_summary_wrapper',
      1 => 'group_teaser_metadata',
      2 => 'group_title_author_wrapper',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Teaser left wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-teaser-left-wrapper field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_teaser_left_wrapper|node|career_opportunity|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_teaser_left_wrapper|node|procurement|document_registry';
  $field_group->group_name = 'group_teaser_left_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'procurement';
  $field_group->mode = 'document_registry';
  $field_group->parent_name = 'group_link_wrapper';
  $field_group->data = array(
    'label' => 'Teaser left wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'group_teaser_metadata',
      1 => 'group_title_author_wrapper',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Teaser left wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-teaser-left-wrapper field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_teaser_left_wrapper|node|procurement|document_registry'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_teaser_left_wrapper|node|procurement|teaser';
  $field_group->group_name = 'group_teaser_left_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'procurement';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_link_wrapper';
  $field_group->data = array(
    'label' => 'Teaser left wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'group_summary_wrapper',
      1 => 'group_teaser_metadata',
      2 => 'group_title_author_wrapper',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Teaser left wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-teaser-left-wrapper field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_teaser_left_wrapper|node|procurement|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_teaser_metadata|node|career_opportunity|document_registry';
  $field_group->group_name = 'group_teaser_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'career_opportunity';
  $field_group->mode = 'document_registry';
  $field_group->parent_name = 'group_teaser_left_wrapper';
  $field_group->data = array(
    'label' => 'Teaser metadata',
    'weight' => '27',
    'children' => array(
      0 => 'field_document_type',
      1 => 'field_publication_date',
      2 => 'field_ref_number',
      3 => 'eige_author',
      4 => 'content_type',
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
  $export['group_teaser_metadata|node|career_opportunity|document_registry'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_teaser_metadata|node|career_opportunity|teaser';
  $field_group->group_name = 'group_teaser_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'career_opportunity';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_teaser_left_wrapper';
  $field_group->data = array(
    'label' => 'Teaser metadata',
    'weight' => '8',
    'children' => array(
      0 => 'field_career_opportunity_type',
      1 => 'field_closing_date',
      2 => 'field_publication_date',
      3 => 'field_ref_number',
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
  $export['group_teaser_metadata|node|career_opportunity|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_teaser_metadata|node|procurement|document_registry';
  $field_group->group_name = 'group_teaser_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'procurement';
  $field_group->mode = 'document_registry';
  $field_group->parent_name = 'group_teaser_left_wrapper';
  $field_group->data = array(
    'label' => 'Teaser metadata',
    'weight' => '16',
    'children' => array(
      0 => 'field_document_type',
      1 => 'field_publication_date',
      2 => 'field_ref_number',
      3 => 'eige_author',
      4 => 'content_type',
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
  $export['group_teaser_metadata|node|procurement|document_registry'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_teaser_metadata|node|procurement|teaser';
  $field_group->group_name = 'group_teaser_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'procurement';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_teaser_left_wrapper';
  $field_group->data = array(
    'label' => 'Teaser metadata',
    'weight' => '2',
    'children' => array(
      0 => 'field_closing_date',
      1 => 'field_procurement_type',
      2 => 'field_ref_number',
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
  $export['group_teaser_metadata|node|procurement|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_teaser_right_wrapper|node|career_opportunity|document_registry';
  $field_group->group_name = 'group_teaser_right_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'career_opportunity';
  $field_group->mode = 'document_registry';
  $field_group->parent_name = 'group_outer_row_wrapper';
  $field_group->data = array(
    'label' => 'Teaser right wrapper',
    'weight' => '2',
    'children' => array(
      0 => 'field_downloads',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Teaser right wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-teaser-right-wrapper field-group-div columns small-12',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_teaser_right_wrapper|node|career_opportunity|document_registry'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_teaser_right_wrapper|node|procurement|document_registry';
  $field_group->group_name = 'group_teaser_right_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'procurement';
  $field_group->mode = 'document_registry';
  $field_group->parent_name = 'group_outer_row_wrapper';
  $field_group->data = array(
    'label' => 'Teaser right wrapper',
    'weight' => '2',
    'children' => array(
      0 => 'field_downloads',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Teaser right wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-teaser-right-wrapper field-group-div columns small-12',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_teaser_right_wrapper|node|procurement|document_registry'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title_author_wrapper|node|career_opportunity|document_registry';
  $field_group->group_name = 'group_title_author_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'career_opportunity';
  $field_group->mode = 'document_registry';
  $field_group->parent_name = 'group_teaser_left_wrapper';
  $field_group->data = array(
    'label' => 'Title/Author wrapper',
    'weight' => '26',
    'children' => array(
      0 => 'title_field',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Title/Author wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-title-author-wrapper field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_title_author_wrapper|node|career_opportunity|document_registry'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title_author_wrapper|node|career_opportunity|teaser';
  $field_group->group_name = 'group_title_author_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'career_opportunity';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_teaser_left_wrapper';
  $field_group->data = array(
    'label' => 'Title/Author wrapper',
    'weight' => '7',
    'children' => array(
      0 => 'title_field',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Title/Author wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-title-author-wrapper field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_title_author_wrapper|node|career_opportunity|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title_author_wrapper|node|procurement|document_registry';
  $field_group->group_name = 'group_title_author_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'procurement';
  $field_group->mode = 'document_registry';
  $field_group->parent_name = 'group_teaser_left_wrapper';
  $field_group->data = array(
    'label' => 'Title/Author wrapper',
    'weight' => '15',
    'children' => array(
      0 => 'title_field',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Title/Author wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-title-author-wrapper field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_title_author_wrapper|node|procurement|document_registry'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title_author_wrapper|node|procurement|teaser';
  $field_group->group_name = 'group_title_author_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'procurement';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_teaser_left_wrapper';
  $field_group->data = array(
    'label' => 'Title/Author wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'title_field',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Title/Author wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-title-author-wrapper field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_title_author_wrapper|node|procurement|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title_quote_wrapper|node|career_opportunity|related_content';
  $field_group->group_name = 'group_title_quote_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'career_opportunity';
  $field_group->mode = 'related_content';
  $field_group->parent_name = 'group_link_wrapper';
  $field_group->data = array(
    'label' => 'Title/Quote wrapper',
    'weight' => '19',
    'children' => array(
      0 => 'title_field',
      1 => 'field_closing_date',
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
  $export['group_title_quote_wrapper|node|career_opportunity|related_content'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title_quote_wrapper|node|procurement|related_content';
  $field_group->group_name = 'group_title_quote_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'procurement';
  $field_group->mode = 'related_content';
  $field_group->parent_name = 'group_link_wrapper';
  $field_group->data = array(
    'label' => 'Title/Quote wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'field_closing_date',
      1 => 'title_field',
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
  $export['group_title_quote_wrapper|node|procurement|related_content'] = $field_group;

  return $export;
}

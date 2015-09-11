<?php
/**
 * @file
 * eige_documents.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function eige_documents_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_additional_info|node|document|full';
  $field_group->group_name = 'group_additional_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'document';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Additional info',
    'weight' => '5',
    'children' => array(
      0 => 'field_activities',
      1 => 'field_document_type',
      2 => 'field_publication_date',
      3 => 'field_author',
      4 => 'field_publisher',
      5 => 'field_serial_number',
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
  $export['group_additional_info|node|document|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_additional_info|node|publication|full';
  $field_group->group_name = 'group_additional_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Additional info',
    'weight' => '5',
    'children' => array(
      0 => 'field_activities',
      1 => 'field_document_type',
      2 => 'field_doi',
      3 => 'field_isbn',
      4 => 'field_publication_date',
      5 => 'field_author',
      6 => 'field_publisher',
      7 => 'field_bpfa_areas',
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
  $export['group_additional_info|node|publication|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_keywords|node|document|full';
  $field_group->group_name = 'group_keywords';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'document';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_metadata';
  $field_group->data = array(
    'label' => 'Keywords wrapper',
    'weight' => '13',
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
  $export['group_keywords|node|document|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_keywords|node|publication|full';
  $field_group->group_name = 'group_keywords';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
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
  $export['group_keywords|node|publication|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_link_wrapper|node|document|document_registry';
  $field_group->group_name = 'group_link_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'document';
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
  $export['group_link_wrapper|node|document|document_registry'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_link_wrapper|node|document|related_content';
  $field_group->group_name = 'group_link_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'document';
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
  $export['group_link_wrapper|node|document|related_content'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_link_wrapper|node|document|teaser';
  $field_group->group_name = 'group_link_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'document';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group link wrapper',
    'weight' => '3',
    'children' => array(
      0 => 'field_document_type',
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
  $export['group_link_wrapper|node|document|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_link_wrapper|node|publication|document_registry';
  $field_group->group_name = 'group_link_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
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
  $export['group_link_wrapper|node|publication|document_registry'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_link_wrapper|node|publication|related_content';
  $field_group->group_name = 'group_link_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
  $field_group->mode = 'related_content';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group link wrapper',
    'weight' => '3',
    'children' => array(
      0 => 'content_type',
      1 => 'pdf_preview',
      2 => 'group_title_quote_wrapper',
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
  $export['group_link_wrapper|node|publication|related_content'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_link_wrapper|node|publication|teaser';
  $field_group->group_name = 'group_link_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group link wrapper',
    'weight' => '25',
    'children' => array(
      0 => 'content_type',
      1 => 'pdf_preview',
      2 => 'group_title_quote_wrapper',
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
  $export['group_link_wrapper|node|publication|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_metadata|node|document|full';
  $field_group->group_name = 'group_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'document';
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
  $export['group_metadata|node|document|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_metadata|node|publication|full';
  $field_group->group_name = 'group_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
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
  $export['group_metadata|node|publication|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_migration_information|node|document|form';
  $field_group->group_name = 'group_migration_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'document';
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
  $export['group_migration_information|node|document|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_migration_information|node|publication|form';
  $field_group->group_name = 'group_migration_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
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
  $export['group_migration_information|node|publication|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_outer_row_wrapper|node|document|document_registry';
  $field_group->group_name = 'group_outer_row_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'document';
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
  $export['group_outer_row_wrapper|node|document|document_registry'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_outer_row_wrapper|node|publication|document_registry';
  $field_group->group_name = 'group_outer_row_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
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
  $export['group_outer_row_wrapper|node|publication|document_registry'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pdf_preview_body_wrapper|node|publication|full';
  $field_group->group_name = 'group_pdf_preview_body_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'PDF Preview - Body Wrapper',
    'weight' => '2',
    'children' => array(
      0 => 'body',
      1 => 'pdf_preview',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'PDF Preview - Body Wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-pdf-preview-body-wrapper field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_pdf_preview_body_wrapper|node|publication|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related_content|node|document|full';
  $field_group->group_name = 'group_related_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'document';
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
        'id' => '',
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
  $export['group_related_content|node|document|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related_content|node|publication|full';
  $field_group->group_name = 'group_related_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
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
        'id' => '',
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
  $export['group_related_content|node|publication|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_summary_wrapper|node|document|related_content';
  $field_group->group_name = 'group_summary_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'document';
  $field_group->mode = 'related_content';
  $field_group->parent_name = 'group_title_quote_wrapper';
  $field_group->data = array(
    'label' => 'Summary Wrapper',
    'weight' => '7',
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
  $export['group_summary_wrapper|node|document|related_content'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_summary_wrapper|node|document|teaser';
  $field_group->group_name = 'group_summary_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'document';
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
  $export['group_summary_wrapper|node|document|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_teaser_left_wrapper|node|document|document_registry';
  $field_group->group_name = 'group_teaser_left_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'document';
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
  $export['group_teaser_left_wrapper|node|document|document_registry'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_teaser_left_wrapper|node|document|teaser';
  $field_group->group_name = 'group_teaser_left_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'document';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Teaser left wrapper',
    'weight' => '0',
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
  $export['group_teaser_left_wrapper|node|document|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_teaser_left_wrapper|node|publication|document_registry';
  $field_group->group_name = 'group_teaser_left_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
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
  $export['group_teaser_left_wrapper|node|publication|document_registry'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_teaser_left_wrapper|node|publication|teaser';
  $field_group->group_name = 'group_teaser_left_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Teaser left wrapper',
    'weight' => '0',
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
  $export['group_teaser_left_wrapper|node|publication|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_teaser_metadata|node|document|document_registry';
  $field_group->group_name = 'group_teaser_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'document';
  $field_group->mode = 'document_registry';
  $field_group->parent_name = 'group_teaser_left_wrapper';
  $field_group->data = array(
    'label' => 'Teaser metadata',
    'weight' => '2',
    'children' => array(
      0 => 'field_document_type',
      1 => 'field_publication_date',
      2 => 'field_author',
      3 => 'field_serial_number',
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
  $export['group_teaser_metadata|node|document|document_registry'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_teaser_metadata|node|document|teaser';
  $field_group->group_name = 'group_teaser_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'document';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_teaser_left_wrapper';
  $field_group->data = array(
    'label' => 'Teaser metadata',
    'weight' => '2',
    'children' => array(
      0 => 'field_document_type',
      1 => 'field_publication_date',
      2 => 'content_type',
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
  $export['group_teaser_metadata|node|document|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_teaser_metadata|node|publication|document_registry';
  $field_group->group_name = 'group_teaser_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
  $field_group->mode = 'document_registry';
  $field_group->parent_name = 'group_teaser_left_wrapper';
  $field_group->data = array(
    'label' => 'Teaser metadata',
    'weight' => '2',
    'children' => array(
      0 => 'field_document_type',
      1 => 'field_doi',
      2 => 'field_isbn',
      3 => 'field_publication_date',
      4 => 'field_author',
      5 => 'content_type',
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
  $export['group_teaser_metadata|node|publication|document_registry'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_teaser_metadata|node|publication|teaser';
  $field_group->group_name = 'group_teaser_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_teaser_left_wrapper';
  $field_group->data = array(
    'label' => 'Teaser metadata',
    'weight' => '2',
    'children' => array(),
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
  $export['group_teaser_metadata|node|publication|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_teaser_right_wrapper|node|document|document_registry';
  $field_group->group_name = 'group_teaser_right_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'document';
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
  $export['group_teaser_right_wrapper|node|document|document_registry'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_teaser_right_wrapper|node|document|teaser';
  $field_group->group_name = 'group_teaser_right_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'document';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Teaser right wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'field_downloads',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Teaser right wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-teaser-right-wrapper field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_teaser_right_wrapper|node|document|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_teaser_right_wrapper|node|publication|document_registry';
  $field_group->group_name = 'group_teaser_right_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
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
  $export['group_teaser_right_wrapper|node|publication|document_registry'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_teaser_right_wrapper|node|publication|teaser';
  $field_group->group_name = 'group_teaser_right_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Teaser right wrapper',
    'weight' => '4',
    'children' => array(
      0 => 'field_downloads',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Teaser right wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-teaser-right-wrapper field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_teaser_right_wrapper|node|publication|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title_author_wrapper|node|document|document_registry';
  $field_group->group_name = 'group_title_author_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'document';
  $field_group->mode = 'document_registry';
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
  $export['group_title_author_wrapper|node|document|document_registry'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title_author_wrapper|node|document|teaser';
  $field_group->group_name = 'group_title_author_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'document';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_teaser_left_wrapper';
  $field_group->data = array(
    'label' => 'Title/Author wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'title_field',
      1 => 'author',
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
  $export['group_title_author_wrapper|node|document|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title_author_wrapper|node|publication|document_registry';
  $field_group->group_name = 'group_title_author_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
  $field_group->mode = 'document_registry';
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
  $export['group_title_author_wrapper|node|publication|document_registry'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title_author_wrapper|node|publication|teaser';
  $field_group->group_name = 'group_title_author_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_teaser_left_wrapper';
  $field_group->data = array(
    'label' => 'Title/Author wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'author',
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
  $export['group_title_author_wrapper|node|publication|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title_quote_wrapper|node|document|document_registry';
  $field_group->group_name = 'group_title_quote_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'document';
  $field_group->mode = 'document_registry';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Title/Quote wrapper',
    'weight' => '1',
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
  $export['group_title_quote_wrapper|node|document|document_registry'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title_quote_wrapper|node|document|related_content';
  $field_group->group_name = 'group_title_quote_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'document';
  $field_group->mode = 'related_content';
  $field_group->parent_name = 'group_link_wrapper';
  $field_group->data = array(
    'label' => 'Title/Quote wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'field_publication_date',
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
  $export['group_title_quote_wrapper|node|document|related_content'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title_quote_wrapper|node|document|teaser';
  $field_group->group_name = 'group_title_quote_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'document';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_link_wrapper';
  $field_group->data = array(
    'label' => 'Title/Quote wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'field_publication_date',
      1 => 'title_field',
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
  $export['group_title_quote_wrapper|node|document|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title_quote_wrapper|node|publication|related_content';
  $field_group->group_name = 'group_title_quote_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
  $field_group->mode = 'related_content';
  $field_group->parent_name = 'group_link_wrapper';
  $field_group->data = array(
    'label' => 'Title/Quote wrapper',
    'weight' => '6',
    'children' => array(
      0 => 'field_publication_date',
      1 => 'title_field',
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
  $export['group_title_quote_wrapper|node|publication|related_content'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title_quote_wrapper|node|publication|teaser';
  $field_group->group_name = 'group_title_quote_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_link_wrapper';
  $field_group->data = array(
    'label' => 'Title/Quote wrapper',
    'weight' => '2',
    'children' => array(
      0 => 'field_publication_date',
      1 => 'title_field',
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
  $export['group_title_quote_wrapper|node|publication|teaser'] = $field_group;

  return $export;
}

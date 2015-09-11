<?php
/**
 * @file
 * eige_gender_stereotypes.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function eige_gender_stereotypes_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|gender_story|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'gender_story';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'gender_story_fixed_subtitle' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'gender_story_fixed_title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'h1',
          'ow-cl' => 'title',
          'ow-def-cl' => FALSE,
          'ow-at' => 'id="page-title"',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'pdf_download' => array(
      'weight' => '80',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
    'field_other_topic_categories' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Topics',
        ),
      ),
    ),
    'field_other_topics' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Tags',
        ),
      ),
    ),
    'field_primary_topic_category' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Primary Topic',
        ),
      ),
    ),
  );
  $export['node|gender_story|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|gender_story|related_content';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'gender_story';
  $ds_fieldsetting->view_mode = 'related_content';
  $ds_fieldsetting->settings = array(
    'body' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|gender_story|related_content'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|gender_story|scs';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'gender_story';
  $ds_fieldsetting->view_mode = 'scs';
  $ds_fieldsetting->settings = array(
    'title_field' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'h3',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|gender_story|scs'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|gender_story|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'gender_story';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'body' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|gender_story|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function eige_gender_stereotypes_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'gender_story_fixed_subtitle';
  $ds_field->label = 'Gender story fixed subtitle';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'gender_story|full';
  $ds_field->properties = array(
    'code' => array(
      'value' => 'Gender did matter',
      'format' => 'plain_text',
    ),
    'use_token' => 0,
  );
  $export['gender_story_fixed_subtitle'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'gender_story_fixed_title';
  $ds_field->label = 'Gender story fixed title';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'gender_story|full';
  $ds_field->properties = array(
    'code' => array(
      'value' => 'My personal story',
      'format' => 'plain_text',
    ),
    'use_token' => 0,
  );
  $export['gender_story_fixed_title'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'pdf_download';
  $ds_field->label = 'PDF Download';
  $ds_field->field_type = 3;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'gender_story|full';
  $ds_field->properties = array();
  $export['pdf_download'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function eige_gender_stereotypes_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|gender_story|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'gender_story';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'zf_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'gender_story_fixed_title',
        2 => 'group_metadata',
        4 => 'body',
        6 => 'field_body_in_native_language',
        7 => 'field_native_language',
        16 => 'field_keywords',
        17 => 'group_keywords',
      ),
      'right' => array(
        1 => 'gender_story_fixed_subtitle',
        3 => 'field_country',
        5 => 'field_age',
        8 => 'field_sex',
        9 => 'group_story_info',
        10 => 'group_avatar_wrapper',
        11 => 'field_primary_topic_category',
        12 => 'field_other_topic_categories',
        13 => 'field_key_actors',
        14 => 'field_year',
        15 => 'field_other_topics',
        18 => 'pdf_download',
      ),
    ),
    'fields' => array(
      'gender_story_fixed_title' => 'left',
      'gender_story_fixed_subtitle' => 'right',
      'group_metadata' => 'left',
      'field_country' => 'right',
      'body' => 'left',
      'field_age' => 'right',
      'field_body_in_native_language' => 'left',
      'field_native_language' => 'left',
      'field_sex' => 'right',
      'group_story_info' => 'right',
      'group_avatar_wrapper' => 'right',
      'field_primary_topic_category' => 'right',
      'field_other_topic_categories' => 'right',
      'field_key_actors' => 'right',
      'field_year' => 'right',
      'field_other_topics' => 'right',
      'field_keywords' => 'left',
      'group_keywords' => 'left',
      'pdf_download' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '1',
    'page_option_title' => '',
  );
  $export['node|gender_story|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|gender_story|related_content';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'gender_story';
  $ds_layout->view_mode = 'related_content';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_related_content_wrapper',
        1 => 'group_avatar_wrapper',
        2 => 'body',
        3 => 'field_primary_topic_category',
        4 => 'field_sex',
        5 => 'field_age',
        6 => 'field_country',
      ),
    ),
    'fields' => array(
      'group_related_content_wrapper' => 'ds_content',
      'group_avatar_wrapper' => 'ds_content',
      'body' => 'ds_content',
      'field_primary_topic_category' => 'ds_content',
      'field_sex' => 'ds_content',
      'field_age' => 'ds_content',
      'field_country' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|gender_story|related_content'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|gender_story|scs';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'gender_story';
  $ds_layout->view_mode = 'scs';
  $ds_layout->layout = 'zf_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_age',
        1 => 'field_sex',
        2 => 'field_country',
        3 => 'body',
        4 => 'group_simplenews_wrapper',
      ),
    ),
    'fields' => array(
      'field_age' => 'ds_content',
      'field_sex' => 'ds_content',
      'field_country' => 'ds_content',
      'body' => 'ds_content',
      'group_simplenews_wrapper' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|gender_story|scs'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|gender_story|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'gender_story';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_sex',
        1 => 'group_teaser_wrapper',
        2 => 'group_avatar_wrapper',
        3 => 'field_age',
        4 => 'field_country',
        5 => 'body',
        6 => 'field_primary_topic_category',
      ),
    ),
    'fields' => array(
      'field_sex' => 'ds_content',
      'group_teaser_wrapper' => 'ds_content',
      'group_avatar_wrapper' => 'ds_content',
      'field_age' => 'ds_content',
      'field_country' => 'ds_content',
      'body' => 'ds_content',
      'field_primary_topic_category' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|gender_story|teaser'] = $ds_layout;

  return $export;
}

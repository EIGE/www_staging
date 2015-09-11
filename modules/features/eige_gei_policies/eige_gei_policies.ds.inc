<?php
/**
 * @file
 * eige_gei_policies.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function eige_gei_policies_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|gender_equality_policy|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'gender_equality_policy';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'field_related_content' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fis' => TRUE,
          'fis-el' => 'ul',
          'fis-cl' => '',
          'fis-at' => '',
          'fis-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'li',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
  );
  $export['node|gender_equality_policy|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|gender_equality_policy|related_content';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'gender_equality_policy';
  $ds_fieldsetting->view_mode = 'related_content';
  $ds_fieldsetting->settings = array(
    'content_type' => array(
      'weight' => '19',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title_field' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'h2',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_domain' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
    'field_level' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|gender_equality_policy|related_content'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|gender_equality_policy|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'gender_equality_policy';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h3',
        'class' => '',
        'exclude node title settings' => '1',
        'ft' => array(),
      ),
    ),
  );
  $export['node|gender_equality_policy|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function eige_gei_policies_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|gender_equality_policy|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'gender_equality_policy';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'zf_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_country',
        1 => 'field_domain',
        2 => 'field_level',
        3 => 'field_date',
        4 => 'field_stakeholder',
        5 => 'body',
        6 => 'group_related_content',
        7 => 'field_related_content',
      ),
    ),
    'fields' => array(
      'field_country' => 'ds_content',
      'field_domain' => 'ds_content',
      'field_level' => 'ds_content',
      'field_date' => 'ds_content',
      'field_stakeholder' => 'ds_content',
      'body' => 'ds_content',
      'group_related_content' => 'ds_content',
      'field_related_content' => 'ds_content',
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
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|gender_equality_policy|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|gender_equality_policy|related_content';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'gender_equality_policy';
  $ds_layout->view_mode = 'related_content';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_link_wrapper',
        1 => 'body',
        2 => 'group_domain_level_wrapper',
        3 => 'field_domain',
        4 => 'field_level',
        5 => 'content_type',
        6 => 'title_field',
        7 => 'group__title_quote_wrapper',
        8 => 'group__teaser_metadata',
        9 => 'group_summary_wrapper',
      ),
    ),
    'fields' => array(
      'group_link_wrapper' => 'ds_content',
      'body' => 'ds_content',
      'group_domain_level_wrapper' => 'ds_content',
      'field_domain' => 'ds_content',
      'field_level' => 'ds_content',
      'content_type' => 'ds_content',
      'title_field' => 'ds_content',
      'group__title_quote_wrapper' => 'ds_content',
      'group__teaser_metadata' => 'ds_content',
      'group_summary_wrapper' => 'ds_content',
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
  $export['node|gender_equality_policy|related_content'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|gender_equality_policy|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'gender_equality_policy';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_metadata',
        1 => 'group_content',
        2 => 'title',
        3 => 'field_stakeholder',
        4 => 'body',
        5 => 'field_domain',
        6 => 'field_level',
        7 => 'field_country',
        8 => 'field_date',
      ),
    ),
    'fields' => array(
      'group_metadata' => 'ds_content',
      'group_content' => 'ds_content',
      'title' => 'ds_content',
      'field_stakeholder' => 'ds_content',
      'body' => 'ds_content',
      'field_domain' => 'ds_content',
      'field_level' => 'ds_content',
      'field_country' => 'ds_content',
      'field_date' => 'ds_content',
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
  $export['node|gender_equality_policy|teaser'] = $ds_layout;

  return $export;
}

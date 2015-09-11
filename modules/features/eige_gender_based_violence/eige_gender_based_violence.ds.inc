<?php
/**
 * @file
 * eige_gender_based_violence.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function eige_gender_based_violence_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|legal_definition|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'legal_definition';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'content_type' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_downloads' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'h2',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => 'id="downloads-wrapper"',
          'ow-def-at' => TRUE,
        ),
      ),
    ),
    'field_general_legal_definition' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'field field-name-field-general-legal-definition',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'field-label',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_legal_provisions' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'h2',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => TRUE,
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => TRUE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_legal_source' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'h2',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => TRUE,
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => TRUE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_observations' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'h2',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => TRUE,
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => TRUE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_related_content' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fis' => TRUE,
          'fis-el' => 'ul',
          'fis-cl' => 'large-centered large-block-grid-3 medium-block-grid-3 small-block-grid-2 columns',
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
    'title_field' => array(
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
  );
  $export['node|legal_definition|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|legal_definition|related_content';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'legal_definition';
  $ds_fieldsetting->view_mode = 'related_content';
  $ds_fieldsetting->settings = array(
    'content_type' => array(
      'weight' => '27',
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
  );
  $export['node|legal_definition|related_content'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|legal_definition|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'legal_definition';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'content_type' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
    'body' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
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
  );
  $export['node|legal_definition|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function eige_gender_based_violence_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|legal_definition|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'legal_definition';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'zf_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'content_type',
        1 => 'title_field',
        2 => 'field_keywords',
        3 => 'group_metadata',
        4 => 'body',
        5 => 'field_legal_provisions',
        6 => 'field_legal_source',
        7 => 'field_observations',
        8 => 'field_downloads',
        15 => 'group_keywords',
      ),
      'right' => array(
        9 => 'group_additional_info',
        11 => 'field_general_legal_definition',
        12 => 'field_country',
        14 => 'field_violence_types',
      ),
      'footer' => array(
        10 => 'group_related_content',
        13 => 'field_related_content',
      ),
    ),
    'fields' => array(
      'content_type' => 'left',
      'title_field' => 'left',
      'field_keywords' => 'left',
      'group_metadata' => 'left',
      'body' => 'left',
      'field_legal_provisions' => 'left',
      'field_legal_source' => 'left',
      'field_observations' => 'left',
      'field_downloads' => 'left',
      'group_additional_info' => 'right',
      'group_related_content' => 'footer',
      'field_general_legal_definition' => 'right',
      'field_country' => 'right',
      'field_related_content' => 'footer',
      'field_violence_types' => 'right',
      'group_keywords' => 'left',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
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
  $export['node|legal_definition|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|legal_definition|related_content';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'legal_definition';
  $ds_layout->view_mode = 'related_content';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_link_wrapper',
        1 => 'title_field',
        2 => 'group_summary_wrapper',
        3 => 'body',
        4 => 'content_type',
        5 => 'group_title_quote_wrapper',
      ),
    ),
    'fields' => array(
      'group_link_wrapper' => 'ds_content',
      'title_field' => 'ds_content',
      'group_summary_wrapper' => 'ds_content',
      'body' => 'ds_content',
      'content_type' => 'ds_content',
      'group_title_quote_wrapper' => 'ds_content',
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
  $export['node|legal_definition|related_content'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|legal_definition|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'legal_definition';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_country',
        1 => 'field_general_legal_definition',
        2 => 'field_violence_types',
        3 => 'group_content',
        4 => 'body',
        5 => 'field_observations',
        6 => 'field_legal_source',
        7 => 'field_legal_provisions',
      ),
    ),
    'fields' => array(
      'field_country' => 'ds_content',
      'field_general_legal_definition' => 'ds_content',
      'field_violence_types' => 'ds_content',
      'group_content' => 'ds_content',
      'body' => 'ds_content',
      'field_observations' => 'ds_content',
      'field_legal_source' => 'ds_content',
      'field_legal_provisions' => 'ds_content',
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
  $export['node|legal_definition|teaser'] = $ds_layout;

  return $export;
}

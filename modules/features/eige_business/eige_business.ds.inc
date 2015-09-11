<?php
/**
 * @file
 * eige_business.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function eige_business_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|career_opportunity|document_registry';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'career_opportunity';
  $ds_fieldsetting->view_mode = 'document_registry';
  $ds_fieldsetting->settings = array(
    'eige_author' => array(
      'weight' => '18',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
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
          'ow-el' => 'h3',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_downloads' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'field-name-field-downloads-minimal',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|career_opportunity|document_registry'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|career_opportunity|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'career_opportunity';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'content_type' => array(
      'weight' => '16',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_toc' => array(
      'weight' => '5',
      'label' => 'above',
      'format' => 'default',
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
    'field_activities' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'h3',
          'lb-col' => TRUE,
          'lbw' => 1,
          'lbw-el' => 'td',
          'ow' => TRUE,
          'ow-el' => 'tr',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => TRUE,
          'fi' => TRUE,
          'fi-el' => 'td',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_closing_date' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'h3',
          'lb-col' => TRUE,
          'lbw' => 1,
          'lbw-el' => 'td',
          'ow' => TRUE,
          'ow-el' => 'tr',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => TRUE,
          'fi' => TRUE,
          'fi-el' => 'td',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
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
    'field_publication_date' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'h3',
          'lb-col' => TRUE,
          'lbw' => 1,
          'lbw-el' => 'td',
          'ow' => TRUE,
          'ow-el' => 'tr',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => TRUE,
          'fi' => TRUE,
          'fi-el' => 'td',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_ref_number' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'h3',
          'lb-col' => TRUE,
          'lbw' => 1,
          'lbw-el' => 'td',
          'ow' => TRUE,
          'ow-el' => 'tr',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => TRUE,
          'fi' => TRUE,
          'fi-el' => 'td',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
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
    'field_grade' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'h3',
          'lb-col' => TRUE,
          'lbw' => 1,
          'lbw-el' => 'td',
          'ow' => TRUE,
          'ow-el' => 'tr',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => TRUE,
          'fi' => TRUE,
          'fi-el' => 'td',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_maximum_n_on_reserve_list' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'h3',
          'lb-col' => TRUE,
          'lbw' => 1,
          'lbw-el' => 'td',
          'ow' => TRUE,
          'ow-el' => 'tr',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => TRUE,
          'fi' => TRUE,
          'fi-el' => 'td',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
  );
  $export['node|career_opportunity|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|career_opportunity|related_content';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'career_opportunity';
  $ds_fieldsetting->view_mode = 'related_content';
  $ds_fieldsetting->settings = array(
    'content_type' => array(
      'weight' => '18',
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
    'field_closing_date' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|career_opportunity|related_content'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|career_opportunity|scs';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'career_opportunity';
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
  $export['node|career_opportunity|scs'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|career_opportunity|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'career_opportunity';
  $ds_fieldsetting->view_mode = 'teaser';
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
  $export['node|career_opportunity|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|procurement|document_registry';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'procurement';
  $ds_fieldsetting->view_mode = 'document_registry';
  $ds_fieldsetting->settings = array(
    'eige_author' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
    'content_type' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_downloads' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'field-name-field-downloads-minimal',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => TRUE,
        ),
      ),
    ),
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
  $export['node|procurement|document_registry'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|procurement|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'procurement';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'content_type' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_toc' => array(
      'weight' => '5',
      'label' => 'above',
      'format' => 'default',
    ),
    'field_activities' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'h3',
          'lb-col' => TRUE,
          'lbw' => 1,
          'lbw-el' => 'td',
          'ow' => TRUE,
          'ow-el' => 'tr',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => TRUE,
          'fi' => TRUE,
          'fi-el' => 'td',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_closing_date' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'h3',
          'lb-col' => TRUE,
          'lbw' => 1,
          'lbw-el' => 'td',
          'ow' => TRUE,
          'ow-el' => 'tr',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => TRUE,
          'fi' => TRUE,
          'fi-el' => 'td',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
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
    'field_publication_date' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'h3',
          'lb-col' => TRUE,
          'lbw' => 1,
          'lbw-el' => 'td',
          'ow' => TRUE,
          'ow-el' => 'tr',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => TRUE,
          'fi' => TRUE,
          'fi-el' => 'td',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_ref_number' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'h3',
          'lb-col' => TRUE,
          'lbw' => 1,
          'lbw-el' => 'td',
          'ow' => TRUE,
          'ow-el' => 'tr',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => TRUE,
          'fi' => TRUE,
          'fi-el' => 'td',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
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
  $export['node|procurement|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|procurement|related_content';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'procurement';
  $ds_fieldsetting->view_mode = 'related_content';
  $ds_fieldsetting->settings = array(
    'content_type' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_closing_date' => array(
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
  $export['node|procurement|related_content'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|procurement|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'procurement';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'field_closing_date' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
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
  $export['node|procurement|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function eige_business_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'eige_author';
  $ds_field->label = 'EIGE Author';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'procurement|*
career_opportunity|*';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<div class="author-wrapper">EIGE</div>
',
      'format' => 'full_html',
    ),
    'use_token' => 0,
  );
  $export['eige_author'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'field_career_opportunity_status';
  $ds_field->label = 'Career opportunity status';
  $ds_field->field_type = 3;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'career_opportunity|full';
  $ds_field->properties = array();
  $export['field_career_opportunity_status'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'field_procurement_status';
  $ds_field->label = 'Procurement status';
  $ds_field->field_type = 3;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'procurement|full';
  $ds_field->properties = array();
  $export['field_procurement_status'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function eige_business_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|career_opportunity|document_registry';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'career_opportunity';
  $ds_layout->view_mode = 'document_registry';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_outer_row_wrapper',
        1 => 'group_link_wrapper',
        2 => 'group_teaser_left_wrapper',
        3 => 'group_teaser_right_wrapper',
        4 => 'field_downloads',
        5 => 'field_publication_date',
        6 => 'eige_author',
        7 => 'content_type',
        8 => 'field_document_type',
        9 => 'field_ref_number',
        10 => 'title_field',
        11 => 'group_title_author_wrapper',
        12 => 'group_teaser_metadata',
      ),
    ),
    'fields' => array(
      'group_outer_row_wrapper' => 'ds_content',
      'group_link_wrapper' => 'ds_content',
      'group_teaser_left_wrapper' => 'ds_content',
      'group_teaser_right_wrapper' => 'ds_content',
      'field_downloads' => 'ds_content',
      'field_publication_date' => 'ds_content',
      'eige_author' => 'ds_content',
      'content_type' => 'ds_content',
      'field_document_type' => 'ds_content',
      'field_ref_number' => 'ds_content',
      'title_field' => 'ds_content',
      'group_title_author_wrapper' => 'ds_content',
      'group_teaser_metadata' => 'ds_content',
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
  $export['node|career_opportunity|document_registry'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|career_opportunity|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'career_opportunity';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'zf_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'title_field',
        1 => 'group_metadata',
        2 => 'group_additional_info',
        3 => 'field_downloads',
        4 => 'body',
        7 => 'field_ref_number',
        8 => 'field_grade',
        9 => 'field_closing_date',
        11 => 'field_maximum_n_on_reserve_list',
        12 => 'field_publication_date',
        13 => 'field_activities',
        14 => 'content_type',
        15 => 'group_keywords',
        16 => 'field_career_opportunity_type',
        17 => 'field_keywords',
      ),
      'right' => array(
        5 => 'field_toc',
      ),
      'footer' => array(
        6 => 'group_related_content',
        10 => 'field_related_content',
      ),
    ),
    'fields' => array(
      'title_field' => 'left',
      'group_metadata' => 'left',
      'group_additional_info' => 'left',
      'field_downloads' => 'left',
      'body' => 'left',
      'field_toc' => 'right',
      'group_related_content' => 'footer',
      'field_ref_number' => 'left',
      'field_grade' => 'left',
      'field_closing_date' => 'left',
      'field_related_content' => 'footer',
      'field_maximum_n_on_reserve_list' => 'left',
      'field_publication_date' => 'left',
      'field_activities' => 'left',
      'content_type' => 'left',
      'group_keywords' => 'left',
      'field_career_opportunity_type' => 'left',
      'field_keywords' => 'left',
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
  $export['node|career_opportunity|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|career_opportunity|related_content';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'career_opportunity';
  $ds_layout->view_mode = 'related_content';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_link_wrapper',
        1 => 'body',
        2 => 'content_type',
        3 => 'group_title_quote_wrapper',
        4 => 'title_field',
        5 => 'field_closing_date',
        6 => 'group_summary_wrapper',
      ),
    ),
    'fields' => array(
      'group_link_wrapper' => 'ds_content',
      'body' => 'ds_content',
      'content_type' => 'ds_content',
      'group_title_quote_wrapper' => 'ds_content',
      'title_field' => 'ds_content',
      'field_closing_date' => 'ds_content',
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
  $export['node|career_opportunity|related_content'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|career_opportunity|scs';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'career_opportunity';
  $ds_layout->view_mode = 'scs';
  $ds_layout->layout = 'zf_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title_field',
        1 => 'body',
      ),
    ),
    'fields' => array(
      'title_field' => 'ds_content',
      'body' => 'ds_content',
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
  $export['node|career_opportunity|scs'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|career_opportunity|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'career_opportunity';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_link_wrapper',
        1 => 'title_field',
        2 => 'group_teaser_left_wrapper',
        3 => 'group_title_author_wrapper',
        4 => 'group_teaser_metadata',
        5 => 'group_summary_wrapper',
        6 => 'body',
        7 => 'field_career_opportunity_type',
        8 => 'field_ref_number',
        9 => 'field_publication_date',
        10 => 'field_closing_date',
      ),
    ),
    'fields' => array(
      'group_link_wrapper' => 'ds_content',
      'title_field' => 'ds_content',
      'group_teaser_left_wrapper' => 'ds_content',
      'group_title_author_wrapper' => 'ds_content',
      'group_teaser_metadata' => 'ds_content',
      'group_summary_wrapper' => 'ds_content',
      'body' => 'ds_content',
      'field_career_opportunity_type' => 'ds_content',
      'field_ref_number' => 'ds_content',
      'field_publication_date' => 'ds_content',
      'field_closing_date' => 'ds_content',
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
  $export['node|career_opportunity|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|procurement|document_registry';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'procurement';
  $ds_layout->view_mode = 'document_registry';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_publication_date',
        1 => 'group_outer_row_wrapper',
        2 => 'group_teaser_left_wrapper',
        3 => 'group_link_wrapper',
        4 => 'eige_author',
        5 => 'title_field',
        6 => 'group_teaser_right_wrapper',
        7 => 'content_type',
        8 => 'field_document_type',
        9 => 'field_downloads',
        10 => 'field_ref_number',
        11 => 'group_title_author_wrapper',
        12 => 'group_teaser_metadata',
      ),
    ),
    'fields' => array(
      'field_publication_date' => 'ds_content',
      'group_outer_row_wrapper' => 'ds_content',
      'group_teaser_left_wrapper' => 'ds_content',
      'group_link_wrapper' => 'ds_content',
      'eige_author' => 'ds_content',
      'title_field' => 'ds_content',
      'group_teaser_right_wrapper' => 'ds_content',
      'content_type' => 'ds_content',
      'field_document_type' => 'ds_content',
      'field_downloads' => 'ds_content',
      'field_ref_number' => 'ds_content',
      'group_title_author_wrapper' => 'ds_content',
      'group_teaser_metadata' => 'ds_content',
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
  $export['node|procurement|document_registry'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|procurement|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'procurement';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'zf_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'title_field',
        1 => 'group_metadata',
        2 => 'group_additional_info',
        3 => 'field_downloads',
        4 => 'body',
        5 => 'content_type',
        9 => 'group_keywords',
        10 => 'field_procurement_type',
        11 => 'field_keywords',
        12 => 'field_closing_date',
        13 => 'field_publication_date',
        14 => 'field_ref_number',
        15 => 'field_activities',
      ),
      'right' => array(
        6 => 'field_toc',
      ),
      'footer' => array(
        7 => 'field_related_content',
        8 => 'group_related_content',
      ),
    ),
    'fields' => array(
      'title_field' => 'left',
      'group_metadata' => 'left',
      'group_additional_info' => 'left',
      'field_downloads' => 'left',
      'body' => 'left',
      'content_type' => 'left',
      'field_toc' => 'right',
      'field_related_content' => 'footer',
      'group_related_content' => 'footer',
      'group_keywords' => 'left',
      'field_procurement_type' => 'left',
      'field_keywords' => 'left',
      'field_closing_date' => 'left',
      'field_publication_date' => 'left',
      'field_ref_number' => 'left',
      'field_activities' => 'left',
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
  $export['node|procurement|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|procurement|related_content';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'procurement';
  $ds_layout->view_mode = 'related_content';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'content_type',
        1 => 'group_link_wrapper',
        2 => 'group_title_quote_wrapper',
        3 => 'title_field',
        4 => 'field_closing_date',
        5 => 'group_summary_wrapper',
        6 => 'body',
      ),
    ),
    'fields' => array(
      'content_type' => 'ds_content',
      'group_link_wrapper' => 'ds_content',
      'group_title_quote_wrapper' => 'ds_content',
      'title_field' => 'ds_content',
      'field_closing_date' => 'ds_content',
      'group_summary_wrapper' => 'ds_content',
      'body' => 'ds_content',
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
  $export['node|procurement|related_content'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|procurement|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'procurement';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_link_wrapper',
        1 => 'group_teaser_left_wrapper',
        2 => 'group_title_author_wrapper',
        3 => 'field_procurement_type',
        4 => 'group_teaser_metadata',
        5 => 'title_field',
        6 => 'group_summary_wrapper',
        7 => 'field_ref_number',
        8 => 'field_closing_date',
        9 => 'body',
      ),
    ),
    'fields' => array(
      'group_link_wrapper' => 'ds_content',
      'group_teaser_left_wrapper' => 'ds_content',
      'group_title_author_wrapper' => 'ds_content',
      'field_procurement_type' => 'ds_content',
      'group_teaser_metadata' => 'ds_content',
      'title_field' => 'ds_content',
      'group_summary_wrapper' => 'ds_content',
      'field_ref_number' => 'ds_content',
      'field_closing_date' => 'ds_content',
      'body' => 'ds_content',
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
  $export['node|procurement|teaser'] = $ds_layout;

  return $export;
}

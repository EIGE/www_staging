<?php
/**
 * @file
 * eige_gender_mainstreaming.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function eige_gender_mainstreaming_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'field_collection_item|field_external_references|full';
  $ds_fieldsetting->entity_type = 'field_collection_item';
  $ds_fieldsetting->bundle = 'field_external_references';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'field_external_reference_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => TRUE,
          'fi' => TRUE,
          'fi-el' => 'h3',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => TRUE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_external_reference_links' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => TRUE,
          'fis' => TRUE,
          'fis-el' => 'ul',
          'fis-cl' => '',
          'fis-at' => '',
          'fis-def-at' => TRUE,
          'fi' => TRUE,
          'fi-el' => 'li',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => TRUE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
  );
  $export['field_collection_item|field_external_references|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'field_collection_item|field_other_information|default';
  $ds_fieldsetting->entity_type = 'field_collection_item';
  $ds_fieldsetting->bundle = 'field_other_information';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_other_info_title' => array(
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
  $export['field_collection_item|field_other_information|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|country_overview|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'country_overview';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'content_type' => array(
      'weight' => '23',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_downloads' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'h2',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => 'id="downloads-wrapper"',
          'ow-def-at' => TRUE,
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
  );
  $export['node|country_overview|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|country_overview|related_content';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'country_overview';
  $ds_fieldsetting->view_mode = 'related_content';
  $ds_fieldsetting->settings = array(
    'content_type' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_country' => array(
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
  $export['node|country_overview|related_content'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|country_overview|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'country_overview';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'content_type' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_country' => array(
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
  $export['node|country_overview|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|sectoral_area|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'sectoral_area';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'content_type' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_toc' => array(
      'weight' => '10',
      'label' => 'above',
      'format' => 'default',
    ),
    'sectoral_area_policy_cycle' => array(
      'weight' => '22',
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
    'field_timeline_title' => array(
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
  $export['node|sectoral_area|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|sectoral_area|related_content';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'sectoral_area';
  $ds_fieldsetting->view_mode = 'related_content';
  $ds_fieldsetting->settings = array(
    'content_type' => array(
      'weight' => '0',
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
  $export['node|sectoral_area|related_content'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|sectoral_area|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'sectoral_area';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'read_more' => array(
      'weight' => '6',
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
    'field_quote' => array(
      'formatter_settings' => array(
        'ft' => array(
          'prefix' => '<div class="quote-more"><div class="quote">',
          'suffix' => '</div><div class="read-more">Read more</div></div>',
        ),
      ),
    ),
  );
  $export['node|sectoral_area|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|structure|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'structure';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'content_type' => array(
      'weight' => '11',
      'label' => 'hidden',
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
  );
  $export['node|structure|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|structure|related_content';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'structure';
  $ds_fieldsetting->view_mode = 'related_content';
  $ds_fieldsetting->settings = array(
    'content_type' => array(
      'weight' => '3',
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
  $export['node|structure|related_content'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|structure|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'structure';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'content_type' => array(
      'weight' => '0',
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
  $export['node|structure|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|tool_method_category|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'tool_method_category';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'field_toc' => array(
      'weight' => '6',
      'label' => 'above',
      'format' => 'default',
    ),
    'content_type' => array(
      'weight' => '2',
      'label' => 'hidden',
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
  );
  $export['node|tool_method_category|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|tool_method_category|related_content';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'tool_method_category';
  $ds_fieldsetting->view_mode = 'related_content';
  $ds_fieldsetting->settings = array(
    'content_type' => array(
      'weight' => '0',
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
  $export['node|tool_method_category|related_content'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|tool_method_category|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'tool_method_category';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'read_more' => array(
      'weight' => '6',
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
  $export['node|tool_method_category|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|video|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'video';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_video' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|video|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|video|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'video';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
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
    'field_video' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'flex-video widescreen',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|video|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|video|related_content';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'video';
  $ds_fieldsetting->view_mode = 'related_content';
  $ds_fieldsetting->settings = array(
    'content_type' => array(
      'weight' => '13',
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
    'field_video' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'image',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|video|related_content'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|video|scs';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'video';
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
  $export['node|video|scs'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|video|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'video';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
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
    'field_video' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|video|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function eige_gender_mainstreaming_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'read_more';
  $ds_field->label = 'Read more (no link)';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '*|teaser';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<div class="read-more">Read more</div>
',
      'format' => 'full_html',
    ),
    'use_token' => 0,
  );
  $export['read_more'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'sectoral_area_policy_cycle';
  $ds_field->label = 'Sectoral Area Policy Cycle';
  $ds_field->field_type = 3;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'sectoral_area|full
advanced_page|full';
  $ds_field->properties = array();
  $export['sectoral_area_policy_cycle'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function eige_gender_mainstreaming_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_external_references|full';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_external_references';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'zf_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_external_reference_title',
        1 => 'field_external_reference_links',
      ),
    ),
    'fields' => array(
      'field_external_reference_title' => 'ds_content',
      'field_external_reference_links' => 'ds_content',
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
  $export['field_collection_item|field_external_references|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_other_information|default';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_other_information';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_other_info_title',
        1 => 'field_other_info_description',
        2 => 'group_title_quote_wrapper',
        3 => 'group_link_wrapper',
      ),
    ),
    'fields' => array(
      'field_other_info_title' => 'ds_content',
      'field_other_info_description' => 'ds_content',
      'group_title_quote_wrapper' => 'ds_content',
      'group_link_wrapper' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(
        '[field_collection_item:field-other-info-category]' => '[field_collection_item:field-other-info-category]',
      ),
      'ds_content' => array(
        '[field_collection_item:field-other-info-category]' => '[field_collection_item:field-other-info-category]',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['field_collection_item|field_other_information|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|country_overview|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'country_overview';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'zf_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_metadata',
        1 => 'group_image_quote',
        2 => 'field_keywords',
        3 => 'field_related_content',
        4 => 'field_structures',
        5 => 'field_structures_image',
        6 => 'field_laws_policies',
        7 => 'field_methods_tools',
        8 => 'field_methods_tools_image',
        9 => 'field_downloads',
        10 => 'group_related_content',
        11 => 'content_type',
        12 => 'group_keywords',
      ),
    ),
    'fields' => array(
      'group_metadata' => 'ds_content',
      'group_image_quote' => 'ds_content',
      'field_keywords' => 'ds_content',
      'field_related_content' => 'ds_content',
      'field_structures' => 'ds_content',
      'field_structures_image' => 'ds_content',
      'field_laws_policies' => 'ds_content',
      'field_methods_tools' => 'ds_content',
      'field_methods_tools_image' => 'ds_content',
      'field_downloads' => 'ds_content',
      'group_related_content' => 'ds_content',
      'content_type' => 'ds_content',
      'group_keywords' => 'ds_content',
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
  $export['node|country_overview|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|country_overview|related_content';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'country_overview';
  $ds_layout->view_mode = 'related_content';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_link_wrapper',
        1 => 'field_country',
        2 => 'group_summary_wrapper',
        3 => 'content_type',
        4 => 'group_title_quote_wrapper',
      ),
    ),
    'fields' => array(
      'group_link_wrapper' => 'ds_content',
      'field_country' => 'ds_content',
      'group_summary_wrapper' => 'ds_content',
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
  $export['node|country_overview|related_content'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|country_overview|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'country_overview';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'content_type',
        1 => 'group_link_wrapper',
        2 => 'field_country',
        3 => 'group_summary_wrapper',
        4 => 'group_title_quote_wrapper',
        5 => 'body',
      ),
    ),
    'fields' => array(
      'content_type' => 'ds_content',
      'group_link_wrapper' => 'ds_content',
      'field_country' => 'ds_content',
      'group_summary_wrapper' => 'ds_content',
      'group_title_quote_wrapper' => 'ds_content',
      'body' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => 'tokens',
    'layout_link_custom' => '',
  );
  $export['node|country_overview|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|sectoral_area|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'sectoral_area';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'zf_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'title_field',
        1 => 'group_metadata',
        2 => 'content_type',
        3 => 'group_image_quote',
        4 => 'field_introduction',
        5 => 'group_keywords',
        6 => 'field_keywords',
        7 => 'group_policy_cycle',
        8 => 'field_image',
        9 => 'body',
        10 => 'field_quote',
        11 => 'group_timeline',
        12 => 'field_additional_information',
        14 => 'field_external_references',
        15 => 'group_external_references',
        16 => 'field_downloads',
        19 => 'field_timeline_title',
        20 => 'field_timeline_summary',
        21 => 'sectoral_area_policy_cycle',
        22 => 'field_timeline_events',
        23 => 'field_timeline_footer',
      ),
      'footer' => array(
        13 => 'field_related_content',
        18 => 'group_related_content',
      ),
      'right' => array(
        17 => 'field_toc',
      ),
    ),
    'fields' => array(
      'title_field' => 'left',
      'group_metadata' => 'left',
      'content_type' => 'left',
      'group_image_quote' => 'left',
      'field_introduction' => 'left',
      'group_keywords' => 'left',
      'field_keywords' => 'left',
      'group_policy_cycle' => 'left',
      'field_image' => 'left',
      'body' => 'left',
      'field_quote' => 'left',
      'group_timeline' => 'left',
      'field_additional_information' => 'left',
      'field_related_content' => 'footer',
      'field_external_references' => 'left',
      'group_external_references' => 'left',
      'field_downloads' => 'left',
      'field_toc' => 'right',
      'group_related_content' => 'footer',
      'field_timeline_title' => 'left',
      'field_timeline_summary' => 'left',
      'sectoral_area_policy_cycle' => 'left',
      'field_timeline_events' => 'left',
      'field_timeline_footer' => 'left',
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
  $export['node|sectoral_area|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|sectoral_area|related_content';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'sectoral_area';
  $ds_layout->view_mode = 'related_content';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_link_wrapper',
        1 => 'content_type',
        2 => 'field_image',
        3 => 'title_field',
        4 => 'group_title_quote_wrapper',
        5 => 'field_quote',
      ),
    ),
    'fields' => array(
      'group_link_wrapper' => 'ds_content',
      'content_type' => 'ds_content',
      'field_image' => 'ds_content',
      'title_field' => 'ds_content',
      'group_title_quote_wrapper' => 'ds_content',
      'field_quote' => 'ds_content',
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
  $export['node|sectoral_area|related_content'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|sectoral_area|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'sectoral_area';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_link_wrapper',
        1 => 'field_image',
        2 => 'group_title_quote_wrapper',
        3 => 'title_field',
        4 => 'group_quote_more_wrapper',
        5 => 'field_quote',
        6 => 'read_more',
      ),
    ),
    'fields' => array(
      'group_link_wrapper' => 'ds_content',
      'field_image' => 'ds_content',
      'group_title_quote_wrapper' => 'ds_content',
      'title_field' => 'ds_content',
      'group_quote_more_wrapper' => 'ds_content',
      'field_quote' => 'ds_content',
      'read_more' => 'ds_content',
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
  $export['node|sectoral_area|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|structure|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'structure';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'zf_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_structure_address',
        1 => 'title_field',
        2 => 'group_main_content',
        3 => 'field_structure_website',
        4 => 'field_structure_email',
        5 => 'field_structure_facebook',
        6 => 'field_downloads',
        7 => 'field_structure_phone',
        9 => 'field_structure_twitter',
        10 => 'field_contact_person_name',
        11 => 'field_contact_person_job_title',
        13 => 'field_structure_skype',
        15 => 'field_contact_person_description',
        16 => 'body',
        17 => 'field_areas_of_intervention',
        18 => 'content_type',
        19 => 'group_keywords_wrapper',
        24 => 'field_keywords',
        25 => 'group_additional_titles',
        26 => 'field_native_title',
        27 => 'group_metadata',
        28 => 'group_user_general_info',
        29 => 'group_user_contact_info',
        30 => 'group_user_social_media',
      ),
      'right' => array(
        8 => 'group_additional_info',
        20 => 'field_scope',
        21 => 'field_structure_type',
        22 => 'field_country',
        23 => 'field_topic',
      ),
      'footer' => array(
        12 => 'field_related_content',
        14 => 'group_related_content',
      ),
    ),
    'fields' => array(
      'field_structure_address' => 'left',
      'title_field' => 'left',
      'group_main_content' => 'left',
      'field_structure_website' => 'left',
      'field_structure_email' => 'left',
      'field_structure_facebook' => 'left',
      'field_downloads' => 'left',
      'field_structure_phone' => 'left',
      'group_additional_info' => 'right',
      'field_structure_twitter' => 'left',
      'field_contact_person_name' => 'left',
      'field_contact_person_job_title' => 'left',
      'field_related_content' => 'footer',
      'field_structure_skype' => 'left',
      'group_related_content' => 'footer',
      'field_contact_person_description' => 'left',
      'body' => 'left',
      'field_areas_of_intervention' => 'left',
      'content_type' => 'left',
      'group_keywords_wrapper' => 'left',
      'field_scope' => 'right',
      'field_structure_type' => 'right',
      'field_country' => 'right',
      'field_topic' => 'right',
      'field_keywords' => 'left',
      'group_additional_titles' => 'left',
      'field_native_title' => 'left',
      'group_metadata' => 'left',
      'group_user_general_info' => 'left',
      'group_user_contact_info' => 'left',
      'group_user_social_media' => 'left',
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
  $export['node|structure|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|structure|related_content';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'structure';
  $ds_layout->view_mode = 'related_content';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_link_wrapper',
        1 => 'body',
        2 => 'title_field',
        3 => 'content_type',
        4 => 'group_teaser_metadata',
        5 => 'group_title_quote_wrapper',
        6 => 'group_summary_wrapper',
        7 => 'group_type_scope_wrapper',
        8 => 'field_structure_type',
        9 => 'field_topic',
        10 => 'field_scope',
      ),
    ),
    'fields' => array(
      'group_link_wrapper' => 'ds_content',
      'body' => 'ds_content',
      'title_field' => 'ds_content',
      'content_type' => 'ds_content',
      'group_teaser_metadata' => 'ds_content',
      'group_title_quote_wrapper' => 'ds_content',
      'group_summary_wrapper' => 'ds_content',
      'group_type_scope_wrapper' => 'ds_content',
      'field_structure_type' => 'ds_content',
      'field_topic' => 'ds_content',
      'field_scope' => 'ds_content',
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
  $export['node|structure|related_content'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|structure|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'structure';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'content_type',
        1 => 'group_link_wrapper',
        2 => 'body',
        3 => 'group_title_quote_wrapper',
        4 => 'title_field',
        5 => 'group_teaser_metadata',
        6 => 'group_summary_wrapper',
        7 => 'group_type_scope_wrapper',
        8 => 'field_structure_type',
        9 => 'field_scope',
        10 => 'field_topic',
      ),
    ),
    'fields' => array(
      'content_type' => 'ds_content',
      'group_link_wrapper' => 'ds_content',
      'body' => 'ds_content',
      'group_title_quote_wrapper' => 'ds_content',
      'title_field' => 'ds_content',
      'group_teaser_metadata' => 'ds_content',
      'group_summary_wrapper' => 'ds_content',
      'group_type_scope_wrapper' => 'ds_content',
      'field_structure_type' => 'ds_content',
      'field_scope' => 'ds_content',
      'field_topic' => 'ds_content',
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
  $export['node|structure|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|tool_method_category|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'tool_method_category';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'zf_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'title_field',
        1 => 'group_metadata',
        2 => 'group_image_quote',
        3 => 'content_type',
        4 => 'field_image',
        5 => 'group_keywords',
        6 => 'field_keywords',
        7 => 'field_quote',
        8 => 'body',
        9 => 'field_downloads',
      ),
      'right' => array(
        10 => 'field_toc',
      ),
      'footer' => array(
        11 => 'group_related_content',
        12 => 'field_related_content',
      ),
    ),
    'fields' => array(
      'title_field' => 'left',
      'group_metadata' => 'left',
      'group_image_quote' => 'left',
      'content_type' => 'left',
      'field_image' => 'left',
      'group_keywords' => 'left',
      'field_keywords' => 'left',
      'field_quote' => 'left',
      'body' => 'left',
      'field_downloads' => 'left',
      'field_toc' => 'right',
      'group_related_content' => 'footer',
      'field_related_content' => 'footer',
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
  $export['node|tool_method_category|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|tool_method_category|related_content';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'tool_method_category';
  $ds_layout->view_mode = 'related_content';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_link_wrapper',
        1 => 'content_type',
        2 => 'field_image',
        3 => 'title_field',
        4 => 'group_title_quote_wrapper',
        5 => 'field_quote',
      ),
    ),
    'fields' => array(
      'group_link_wrapper' => 'ds_content',
      'content_type' => 'ds_content',
      'field_image' => 'ds_content',
      'title_field' => 'ds_content',
      'group_title_quote_wrapper' => 'ds_content',
      'field_quote' => 'ds_content',
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
  $export['node|tool_method_category|related_content'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|tool_method_category|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'tool_method_category';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_link_wrapper',
        1 => 'field_image',
        2 => 'group_title_quote_wrapper',
        3 => 'title_field',
        4 => 'group_quote_more_wrapper',
        5 => 'field_quote',
        6 => 'read_more',
      ),
    ),
    'fields' => array(
      'group_link_wrapper' => 'ds_content',
      'field_image' => 'ds_content',
      'group_title_quote_wrapper' => 'ds_content',
      'title_field' => 'ds_content',
      'group_quote_more_wrapper' => 'ds_content',
      'field_quote' => 'ds_content',
      'read_more' => 'ds_content',
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
  $export['node|tool_method_category|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|video|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'video';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'zf_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'body',
        1 => 'field_keywords',
        2 => 'field_downloads',
        3 => 'field_related_content',
        4 => 'field_display_date',
        5 => 'field_video',
      ),
    ),
    'fields' => array(
      'body' => 'ds_content',
      'field_keywords' => 'ds_content',
      'field_downloads' => 'ds_content',
      'field_related_content' => 'ds_content',
      'field_display_date' => 'ds_content',
      'field_video' => 'ds_content',
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
  $export['node|video|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|video|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'video';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'zf_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'title_field',
        1 => 'group_metadata',
        2 => 'body',
        3 => 'field_video',
        4 => 'group_keywords',
        5 => 'field_downloads',
        7 => 'field_keywords',
      ),
      'footer' => array(
        6 => 'group_related_content',
        8 => 'field_related_content',
      ),
    ),
    'fields' => array(
      'title_field' => 'left',
      'group_metadata' => 'left',
      'body' => 'left',
      'field_video' => 'left',
      'group_keywords' => 'left',
      'field_downloads' => 'left',
      'group_related_content' => 'footer',
      'field_keywords' => 'left',
      'field_related_content' => 'footer',
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
  $export['node|video|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|video|related_content';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'video';
  $ds_layout->view_mode = 'related_content';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_link_wrapper',
        1 => 'title_field',
        2 => 'content_type',
        3 => 'field_video',
        4 => 'group_title_quote_wrapper',
      ),
    ),
    'fields' => array(
      'group_link_wrapper' => 'ds_content',
      'title_field' => 'ds_content',
      'content_type' => 'ds_content',
      'field_video' => 'ds_content',
      'group_title_quote_wrapper' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|video|related_content'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|video|scs';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'video';
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
  $export['node|video|scs'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|video|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'video';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_link_wrapper',
        1 => 'title_field',
        2 => 'field_display_date',
        3 => 'field_video',
        4 => 'group_title_quote_wrapper',
      ),
    ),
    'fields' => array(
      'group_link_wrapper' => 'ds_content',
      'title_field' => 'ds_content',
      'field_display_date' => 'ds_content',
      'field_video' => 'ds_content',
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
  $export['node|video|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|gm_concepts_and_definitions|default';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'gm_concepts_and_definitions';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'description_field',
        1 => 'field_source',
        2 => 'field_related_concepts',
      ),
    ),
    'fields' => array(
      'description_field' => 'ds_content',
      'field_source' => 'ds_content',
      'field_related_concepts' => 'ds_content',
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
  $export['taxonomy_term|gm_concepts_and_definitions|default'] = $ds_layout;

  return $export;
}

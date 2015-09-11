<?php
/**
 * @file
 * eige_administrative_data.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function eige_administrative_data_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|administrative_data_source|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'administrative_data_source';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'content_type' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'node_type type_administrative_data_source',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_purpose_of_data_collection' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'div',
          'lb-cl' => 'field-label label-above',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'field field-name-field-purpose-of-data-collection field-type-text-list field-label-above field-wrapper',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fis' => TRUE,
          'fis-el' => 'ul',
          'fis-cl' => 'text-list-items',
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
          'ow-el' => 'h2',
          'ow-cl' => 'node-title',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|administrative_data_source|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|administrative_data_source|related_content';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'administrative_data_source';
  $ds_fieldsetting->view_mode = 'related_content';
  $ds_fieldsetting->settings = array(
    'content_type' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_original_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'h3',
          'ow-cl' => 'official-title subtitle',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
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
  $export['node|administrative_data_source|related_content'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|administrative_data_source|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'administrative_data_source';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'content_type' => array(
      'weight' => '1',
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
  );
  $export['node|administrative_data_source|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|statistical_product|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'statistical_product';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'content_type' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'node_type type_statistical_product',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
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
    'title_field' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'h2',
          'ow-cl' => 'node-title',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|statistical_product|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|statistical_product|related_content';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'statistical_product';
  $ds_fieldsetting->view_mode = 'related_content';
  $ds_fieldsetting->settings = array(
    'content_type' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_original_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'h3',
          'ow-cl' => 'official-title subtitle',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
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
  $export['node|statistical_product|related_content'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|statistical_product|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'statistical_product';
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
          'ow-el' => 'h3',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|statistical_product|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|statistics_on_sexual_violence|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'statistics_on_sexual_violence';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'content_type' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'node_type type_statistics_on_sexual_violence',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'title_field' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'h2',
          'ow-cl' => 'node-title',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
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
  );
  $export['node|statistics_on_sexual_violence|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|statistics_on_sexual_violence|related_content';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'statistics_on_sexual_violence';
  $ds_fieldsetting->view_mode = 'related_content';
  $ds_fieldsetting->settings = array(
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
          'ow-el' => 'h2',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_violence_types' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|statistics_on_sexual_violence|related_content'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function eige_administrative_data_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|administrative_data_source|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'administrative_data_source';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'zf_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'content_type',
        1 => 'title_field',
        2 => 'group_keywords',
        3 => 'group_metadata',
        4 => 'field_country',
        5 => 'field_keywords',
        6 => 'field_original_title',
        7 => 'field_violence_remarks',
        8 => 'field_purpose_of_data_collection',
        9 => 'field_other_purpose',
        10 => 'group_victim',
        11 => 'field_perpetrator_info',
        12 => 'field_victim_info',
        13 => 'field_perpetrator_info_other',
        14 => 'field_victim_info_other',
        15 => 'field_witness_info',
        16 => 'group_perpetrator',
        17 => 'field_perpetrator_relationship',
        18 => 'field_witness_info_other',
        19 => 'group_witness',
        20 => 'field_victim_relationship',
        21 => 'field_incident_code_system',
        22 => 'field_victim_relation_type',
        23 => 'field_prosecution_stages',
        24 => 'field_witness_relationship',
        25 => 'field_incident_code_remarks',
        26 => 'field_perpetrator_rel_info',
        27 => 'group_incident',
        28 => 'field_incident_description',
        29 => 'group_prosecution_process',
        30 => 'field_victim_repetition',
        31 => 'field_witness_description',
        32 => 'field_outcomes_arrest_cases',
        33 => 'field_prosec_defendant_other',
        34 => 'field_perpetrator_reoffending',
        35 => 'field_incident_description_other',
        37 => 'field_witness_children',
        38 => 'field_outcomes_many_offenses',
        39 => 'group_outcomes',
        40 => 'field_chars_storage_system',
        41 => 'field_victim_remarks',
        42 => 'field_perpetrator_remarks',
        43 => 'field_prosecution_defendant',
        44 => 'group_characteristics',
        45 => 'field_chars_storage_other',
        47 => 'field_prosec_stages_other',
        48 => 'field_incident_protection',
        49 => 'field_witness_remarks',
        50 => 'field_outcomes_list_offenses',
        51 => 'field_chars_frequency',
        52 => 'field_prosecution_avg_time',
        53 => 'field_incident_orders',
        55 => 'field_outcomes_offenses_remarks',
        57 => 'field_general_remarks',
        58 => 'field_incident_justice_data',
        61 => 'field_chars_frequency_remarks',
        62 => 'field_outcomes_probation',
        63 => 'field_prosecution_remarks',
        64 => 'field_incident_justice_info',
        67 => 'field_outcomes_bail_remand',
        68 => 'field_chars_quality_assurance',
        69 => 'field_chars_comparability',
        71 => 'field_incident_resources',
        72 => 'field_outcomes_bail_remarks',
        73 => 'field_incident_other_resources',
        74 => 'field_outcomes_prisons',
        75 => 'field_chars_compare_remarks',
        76 => 'field_incident_remarks',
        77 => 'field_chars_timeliness',
        78 => 'field_outcomes_prisons_remarks',
        80 => 'field_outcomes_perp_other',
        81 => 'field_chars_timeliness_info',
        82 => 'field_chars_developments',
        83 => 'field_outcomes_death',
        84 => 'field_chars_reported',
        85 => 'field_outcomes_remarks',
        86 => 'field_chars_organisation',
        87 => 'field_chars_usage',
        88 => 'field_chars_usage_info',
        89 => 'field_chars_reporter',
        90 => 'field_chars_reporter_other',
      ),
      'right' => array(
        36 => 'field_violence_types',
        46 => 'field_organisation',
        56 => 'field_ad_sector',
        59 => 'field_other_sector',
        60 => 'group_about',
        66 => 'field_geographical_area',
        70 => 'field_geographical_area_remarks',
        79 => 'field_website',
      ),
      'footer' => array(
        54 => 'field_related_content',
        65 => 'group_related_content',
      ),
    ),
    'fields' => array(
      'content_type' => 'left',
      'title_field' => 'left',
      'group_keywords' => 'left',
      'group_metadata' => 'left',
      'field_country' => 'left',
      'field_keywords' => 'left',
      'field_original_title' => 'left',
      'field_violence_remarks' => 'left',
      'field_purpose_of_data_collection' => 'left',
      'field_other_purpose' => 'left',
      'group_victim' => 'left',
      'field_perpetrator_info' => 'left',
      'field_victim_info' => 'left',
      'field_perpetrator_info_other' => 'left',
      'field_victim_info_other' => 'left',
      'field_witness_info' => 'left',
      'group_perpetrator' => 'left',
      'field_perpetrator_relationship' => 'left',
      'field_witness_info_other' => 'left',
      'group_witness' => 'left',
      'field_victim_relationship' => 'left',
      'field_incident_code_system' => 'left',
      'field_victim_relation_type' => 'left',
      'field_prosecution_stages' => 'left',
      'field_witness_relationship' => 'left',
      'field_incident_code_remarks' => 'left',
      'field_perpetrator_rel_info' => 'left',
      'group_incident' => 'left',
      'field_incident_description' => 'left',
      'group_prosecution_process' => 'left',
      'field_victim_repetition' => 'left',
      'field_witness_description' => 'left',
      'field_outcomes_arrest_cases' => 'left',
      'field_prosec_defendant_other' => 'left',
      'field_perpetrator_reoffending' => 'left',
      'field_incident_description_other' => 'left',
      'field_violence_types' => 'right',
      'field_witness_children' => 'left',
      'field_outcomes_many_offenses' => 'left',
      'group_outcomes' => 'left',
      'field_chars_storage_system' => 'left',
      'field_victim_remarks' => 'left',
      'field_perpetrator_remarks' => 'left',
      'field_prosecution_defendant' => 'left',
      'group_characteristics' => 'left',
      'field_chars_storage_other' => 'left',
      'field_organisation' => 'right',
      'field_prosec_stages_other' => 'left',
      'field_incident_protection' => 'left',
      'field_witness_remarks' => 'left',
      'field_outcomes_list_offenses' => 'left',
      'field_chars_frequency' => 'left',
      'field_prosecution_avg_time' => 'left',
      'field_incident_orders' => 'left',
      'field_related_content' => 'footer',
      'field_outcomes_offenses_remarks' => 'left',
      'field_ad_sector' => 'right',
      'field_general_remarks' => 'left',
      'field_incident_justice_data' => 'left',
      'field_other_sector' => 'right',
      'group_about' => 'right',
      'field_chars_frequency_remarks' => 'left',
      'field_outcomes_probation' => 'left',
      'field_prosecution_remarks' => 'left',
      'field_incident_justice_info' => 'left',
      'group_related_content' => 'footer',
      'field_geographical_area' => 'right',
      'field_outcomes_bail_remand' => 'left',
      'field_chars_quality_assurance' => 'left',
      'field_chars_comparability' => 'left',
      'field_geographical_area_remarks' => 'right',
      'field_incident_resources' => 'left',
      'field_outcomes_bail_remarks' => 'left',
      'field_incident_other_resources' => 'left',
      'field_outcomes_prisons' => 'left',
      'field_chars_compare_remarks' => 'left',
      'field_incident_remarks' => 'left',
      'field_chars_timeliness' => 'left',
      'field_outcomes_prisons_remarks' => 'left',
      'field_website' => 'right',
      'field_outcomes_perp_other' => 'left',
      'field_chars_timeliness_info' => 'left',
      'field_chars_developments' => 'left',
      'field_outcomes_death' => 'left',
      'field_chars_reported' => 'left',
      'field_outcomes_remarks' => 'left',
      'field_chars_organisation' => 'left',
      'field_chars_usage' => 'left',
      'field_chars_usage_info' => 'left',
      'field_chars_reporter' => 'left',
      'field_chars_reporter_other' => 'left',
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
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|administrative_data_source|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|administrative_data_source|related_content';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'administrative_data_source';
  $ds_layout->view_mode = 'related_content';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_link_wrapper',
        1 => 'field_country',
        2 => 'field_violence_types',
        3 => 'content_type',
        4 => 'group_title_quote_wrapper',
        5 => 'title_field',
        6 => 'field_original_title',
        7 => 'group_teaser_metadata',
      ),
    ),
    'fields' => array(
      'group_link_wrapper' => 'ds_content',
      'field_country' => 'ds_content',
      'field_violence_types' => 'ds_content',
      'content_type' => 'ds_content',
      'group_title_quote_wrapper' => 'ds_content',
      'title_field' => 'ds_content',
      'field_original_title' => 'ds_content',
      'group_teaser_metadata' => 'ds_content',
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
  $export['node|administrative_data_source|related_content'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|administrative_data_source|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'administrative_data_source';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_link_wrapper',
        1 => 'content_type',
        2 => 'group_title_quote_wrapper',
        3 => 'title_field',
        4 => 'group_teaser_metadata',
        5 => 'field_country',
        6 => 'field_violence_types',
        7 => 'field_ad_sector',
      ),
    ),
    'fields' => array(
      'group_link_wrapper' => 'ds_content',
      'content_type' => 'ds_content',
      'group_title_quote_wrapper' => 'ds_content',
      'title_field' => 'ds_content',
      'group_teaser_metadata' => 'ds_content',
      'field_country' => 'ds_content',
      'field_violence_types' => 'ds_content',
      'field_ad_sector' => 'ds_content',
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
  $export['node|administrative_data_source|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|statistical_product|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'statistical_product';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'zf_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'content_type',
        1 => 'title_field',
        2 => 'field_keywords',
        3 => 'group_metadata',
        4 => 'field_country',
        5 => 'field_original_title',
        6 => 'field_violence_remarks',
        7 => 'field_raw_data_issues',
        8 => 'field_raw_data_issues_info',
        9 => 'field_survey_data',
        10 => 'field_indicator_usage',
        11 => 'field_indicator',
        12 => 'field_indicator_other',
        13 => 'field_remarks',
        14 => 'field_victim_info',
        15 => 'field_victim_relationship',
        16 => 'field_perpetrator_info',
        17 => 'field_incident',
        18 => 'group_victim',
        19 => 'field_incident_other',
        20 => 'group_perpetrator',
        21 => 'field_criminal_statistics_data',
        22 => 'field_criminal_data_info',
        23 => 'group_incident',
        24 => 'field_chars_reference_period',
        25 => 'group_criminal_statistics',
        26 => 'field_chars_ref_period_info',
        27 => 'group_characteristics',
        28 => 'field_chars_frequency_text',
        29 => 'field_chars_frequency_remarks',
        30 => 'field_general_remarks',
        31 => 'field_chars_validation',
        34 => 'field_chars_validation_info',
        35 => 'field_chars_compilation',
        36 => 'field_chars_quality_exists',
        37 => 'field_chars_quality_info',
        38 => 'field_chars_accuracy',
        39 => 'field_chars_reliability',
        40 => 'field_chars_timeliness',
        41 => 'field_chars_comparability',
        42 => 'field_chars_compare_remarks',
        43 => 'field_chars_developments',
        44 => 'field_chars_external_link',
        45 => 'field_chars_external_link_info',
        46 => 'field_chars_remarks',
        54 => 'group_keywords',
      ),
      'right' => array(
        32 => 'group_about',
        47 => 'field_violence_types',
        48 => 'field_organisation',
        49 => 'field_organisation_type',
        50 => 'field_ad_sector',
        51 => 'field_latest_update',
        53 => 'field_website',
      ),
      'footer' => array(
        33 => 'group_related_content',
        52 => 'field_related_content',
      ),
    ),
    'fields' => array(
      'content_type' => 'left',
      'title_field' => 'left',
      'field_keywords' => 'left',
      'group_metadata' => 'left',
      'field_country' => 'left',
      'field_original_title' => 'left',
      'field_violence_remarks' => 'left',
      'field_raw_data_issues' => 'left',
      'field_raw_data_issues_info' => 'left',
      'field_survey_data' => 'left',
      'field_indicator_usage' => 'left',
      'field_indicator' => 'left',
      'field_indicator_other' => 'left',
      'field_remarks' => 'left',
      'field_victim_info' => 'left',
      'field_victim_relationship' => 'left',
      'field_perpetrator_info' => 'left',
      'field_incident' => 'left',
      'group_victim' => 'left',
      'field_incident_other' => 'left',
      'group_perpetrator' => 'left',
      'field_criminal_statistics_data' => 'left',
      'field_criminal_data_info' => 'left',
      'group_incident' => 'left',
      'field_chars_reference_period' => 'left',
      'group_criminal_statistics' => 'left',
      'field_chars_ref_period_info' => 'left',
      'group_characteristics' => 'left',
      'field_chars_frequency_text' => 'left',
      'field_chars_frequency_remarks' => 'left',
      'field_general_remarks' => 'left',
      'field_chars_validation' => 'left',
      'group_about' => 'right',
      'group_related_content' => 'footer',
      'field_chars_validation_info' => 'left',
      'field_chars_compilation' => 'left',
      'field_chars_quality_exists' => 'left',
      'field_chars_quality_info' => 'left',
      'field_chars_accuracy' => 'left',
      'field_chars_reliability' => 'left',
      'field_chars_timeliness' => 'left',
      'field_chars_comparability' => 'left',
      'field_chars_compare_remarks' => 'left',
      'field_chars_developments' => 'left',
      'field_chars_external_link' => 'left',
      'field_chars_external_link_info' => 'left',
      'field_chars_remarks' => 'left',
      'field_violence_types' => 'right',
      'field_organisation' => 'right',
      'field_organisation_type' => 'right',
      'field_ad_sector' => 'right',
      'field_latest_update' => 'right',
      'field_related_content' => 'footer',
      'field_website' => 'right',
      'group_keywords' => 'left',
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
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|statistical_product|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|statistical_product|related_content';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'statistical_product';
  $ds_layout->view_mode = 'related_content';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_link_wrapper',
        1 => 'content_type',
        2 => 'title_field',
        3 => 'group_title_quote_wrapper',
        4 => 'field_original_title',
        5 => 'group_teaser_metadata',
        6 => 'field_country',
        7 => 'field_violence_types',
      ),
    ),
    'fields' => array(
      'group_link_wrapper' => 'ds_content',
      'content_type' => 'ds_content',
      'title_field' => 'ds_content',
      'group_title_quote_wrapper' => 'ds_content',
      'field_original_title' => 'ds_content',
      'group_teaser_metadata' => 'ds_content',
      'field_country' => 'ds_content',
      'field_violence_types' => 'ds_content',
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
  $export['node|statistical_product|related_content'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|statistical_product|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'statistical_product';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title_field',
        1 => 'content_type',
        2 => 'field_country',
        3 => 'group_teaser_metadata',
        4 => 'field_violence_types',
        5 => 'group_title_quote_wrapper',
        6 => 'field_ad_sector',
        7 => 'group_link_wrapper',
      ),
    ),
    'fields' => array(
      'title_field' => 'ds_content',
      'content_type' => 'ds_content',
      'field_country' => 'ds_content',
      'group_teaser_metadata' => 'ds_content',
      'field_violence_types' => 'ds_content',
      'group_title_quote_wrapper' => 'ds_content',
      'field_ad_sector' => 'ds_content',
      'group_link_wrapper' => 'ds_content',
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
  $export['node|statistical_product|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|statistics_on_sexual_violence|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'statistics_on_sexual_violence';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'zf_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'content_type',
        1 => 'title_field',
        2 => 'group_metadata',
        3 => 'group_statistics',
        5 => 'group_additional_data',
        6 => 'field_general_remarks',
        14 => 'field_reported_cases',
        16 => 'field_prosecutions_court_cases',
        17 => 'field_convictions',
        19 => 'field_keywords',
        20 => 'field_on_victims_disaggregated',
        21 => 'field_female_victims',
        22 => 'field_male_victims',
        23 => 'field_victim_remarks',
        24 => 'field_on_perpetrator_disaggregat',
        25 => 'field_female_perpetrator',
        26 => 'field_male_perpetrator',
        27 => 'field_perp_remarks',
        28 => 'field_relationship_victim_perp',
        29 => 'group_keywords',
        30 => 'field_partner_ex',
        31 => 'field_family_member',
        32 => 'field_other_known',
        33 => 'field_stranger',
        34 => 'field_remarks',
        35 => 'field_context_sexual_violence',
      ),
      'right' => array(
        4 => 'field_country',
        7 => 'field_violence_types',
        8 => 'field_violence_remarks',
        9 => 'group_about',
        11 => 'field_explicit_criminalisation',
        12 => 'field_source_of_data',
        13 => 'field_statistics_year',
        15 => 'field_website',
      ),
      'footer' => array(
        10 => 'group_related_content',
        18 => 'field_related_content',
      ),
    ),
    'fields' => array(
      'content_type' => 'left',
      'title_field' => 'left',
      'group_metadata' => 'left',
      'group_statistics' => 'left',
      'field_country' => 'right',
      'group_additional_data' => 'left',
      'field_general_remarks' => 'left',
      'field_violence_types' => 'right',
      'field_violence_remarks' => 'right',
      'group_about' => 'right',
      'group_related_content' => 'footer',
      'field_explicit_criminalisation' => 'right',
      'field_source_of_data' => 'right',
      'field_statistics_year' => 'right',
      'field_reported_cases' => 'left',
      'field_website' => 'right',
      'field_prosecutions_court_cases' => 'left',
      'field_convictions' => 'left',
      'field_related_content' => 'footer',
      'field_keywords' => 'left',
      'field_on_victims_disaggregated' => 'left',
      'field_female_victims' => 'left',
      'field_male_victims' => 'left',
      'field_victim_remarks' => 'left',
      'field_on_perpetrator_disaggregat' => 'left',
      'field_female_perpetrator' => 'left',
      'field_male_perpetrator' => 'left',
      'field_perp_remarks' => 'left',
      'field_relationship_victim_perp' => 'left',
      'group_keywords' => 'left',
      'field_partner_ex' => 'left',
      'field_family_member' => 'left',
      'field_other_known' => 'left',
      'field_stranger' => 'left',
      'field_remarks' => 'left',
      'field_context_sexual_violence' => 'left',
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
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|statistics_on_sexual_violence|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|statistics_on_sexual_violence|related_content';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'statistics_on_sexual_violence';
  $ds_layout->view_mode = 'related_content';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_link_wrapper',
        1 => 'title_field',
        2 => 'group_teaser_metadata',
        3 => 'content_type',
        4 => 'group_title_quote_wrapper',
        5 => 'field_country',
        6 => 'field_violence_types',
      ),
    ),
    'fields' => array(
      'group_link_wrapper' => 'ds_content',
      'title_field' => 'ds_content',
      'group_teaser_metadata' => 'ds_content',
      'content_type' => 'ds_content',
      'group_title_quote_wrapper' => 'ds_content',
      'field_country' => 'ds_content',
      'field_violence_types' => 'ds_content',
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
  $export['node|statistics_on_sexual_violence|related_content'] = $ds_layout;

  return $export;
}

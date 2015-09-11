<?php
/**
 * @file
 * eige_administrative_data.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function eige_administrative_data_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_about|node|administrative_data_source|default';
  $field_group->group_name = 'group_about';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'administrative_data_source';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Additional Info',
    'weight' => '0',
    'children' => array(),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Additional Info',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-about field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_about|node|administrative_data_source|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_about|node|administrative_data_source|form';
  $field_group->group_name = 'group_about';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'administrative_data_source';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'About',
    'weight' => '4',
    'children' => array(
      0 => 'field_ad_sector',
      1 => 'field_geographical_area',
      2 => 'field_geographical_area_remarks',
      3 => 'field_organisation',
      4 => 'field_other_sector',
      5 => 'field_website',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'About',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-additional-info field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_about|node|administrative_data_source|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_about|node|administrative_data_source|full';
  $field_group->group_name = 'group_about';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'administrative_data_source';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'About',
    'weight' => '16',
    'children' => array(
      0 => 'field_ad_sector',
      1 => 'field_geographical_area',
      2 => 'field_geographical_area_remarks',
      3 => 'field_organisation',
      4 => 'field_other_sector',
      5 => 'field_violence_types',
      6 => 'field_website',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'About',
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
  $export['group_about|node|administrative_data_source|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_about|node|statistical_product|form';
  $field_group->group_name = 'group_about';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'statistical_product';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'About',
    'weight' => '4',
    'children' => array(
      0 => 'field_ad_sector',
      1 => 'field_latest_update',
      2 => 'field_organisation',
      3 => 'field_organisation_type',
      4 => 'field_website',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'About',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-additional-info field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_about|node|statistical_product|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_about|node|statistical_product|full';
  $field_group->group_name = 'group_about';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'statistical_product';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'About',
    'weight' => '20',
    'children' => array(
      0 => 'field_ad_sector',
      1 => 'field_latest_update',
      2 => 'field_organisation',
      3 => 'field_organisation_type',
      4 => 'field_violence_types',
      5 => 'field_website',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'About',
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
  $export['group_about|node|statistical_product|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_about|node|statistics_on_sexual_violence|form';
  $field_group->group_name = 'group_about';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'statistics_on_sexual_violence';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'About',
    'weight' => '1',
    'children' => array(
      0 => 'field_country',
      1 => 'field_explicit_criminalisation',
      2 => 'field_remarks_on_types_of_sexual',
      3 => 'field_source_of_data',
      4 => 'field_statistics_year',
      5 => 'field_violence_types',
      6 => 'field_website',
      7 => 'field_violence_remarks',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-about field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_about|node|statistics_on_sexual_violence|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_about|node|statistics_on_sexual_violence|full';
  $field_group->group_name = 'group_about';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'statistics_on_sexual_violence';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'About',
    'weight' => '6',
    'children' => array(
      0 => 'field_country',
      1 => 'field_explicit_criminalisation',
      2 => 'field_source_of_data',
      3 => 'field_statistics_year',
      4 => 'field_violence_types',
      5 => 'field_website',
      6 => 'field_violence_remarks',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'About',
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
  $export['group_about|node|statistics_on_sexual_violence|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_additional_data|node|statistics_on_sexual_violence|form';
  $field_group->group_name = 'group_additional_data';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'statistics_on_sexual_violence';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Additional data',
    'weight' => '3',
    'children' => array(
      0 => 'field_context_sexual_violence',
      1 => 'field_family_member',
      2 => 'field_female_perpetrator',
      3 => 'field_female_victims',
      4 => 'field_male_perpetrator',
      5 => 'field_male_victims',
      6 => 'field_on_perpetrator_disaggregat',
      7 => 'field_on_victims_disaggregated',
      8 => 'field_other_known',
      9 => 'field_partner_ex',
      10 => 'field_perp_remarks',
      11 => 'field_relationship_victim_perp',
      12 => 'field_remarks',
      13 => 'field_stranger',
      14 => 'field_victim_remarks',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-additional-data field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_additional_data|node|statistics_on_sexual_violence|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_additional_data|node|statistics_on_sexual_violence|full';
  $field_group->group_name = 'group_additional_data';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'statistics_on_sexual_violence';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Additional data',
    'weight' => '4',
    'children' => array(
      0 => 'field_context_sexual_violence',
      1 => 'field_family_member',
      2 => 'field_female_perpetrator',
      3 => 'field_female_victims',
      4 => 'field_male_perpetrator',
      5 => 'field_male_victims',
      6 => 'field_on_perpetrator_disaggregat',
      7 => 'field_on_victims_disaggregated',
      8 => 'field_other_known',
      9 => 'field_partner_ex',
      10 => 'field_perp_remarks',
      11 => 'field_relationship_victim_perp',
      12 => 'field_remarks',
      13 => 'field_stranger',
      14 => 'field_victim_remarks',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Additional data',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-additional-data field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_additional_data|node|statistics_on_sexual_violence|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_basic_info|node|administrative_data_source|form';
  $field_group->group_name = 'group_basic_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'administrative_data_source';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Basic info',
    'weight' => '3',
    'children' => array(
      0 => 'field_country',
      1 => 'field_original_title',
      2 => 'field_other_purpose',
      3 => 'field_purpose_of_data_collection',
      4 => 'field_violence_remarks',
      5 => 'field_violence_types',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Basic info',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-basic-info field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_basic_info|node|administrative_data_source|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_basic_info|node|statistical_product|form';
  $field_group->group_name = 'group_basic_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'statistical_product';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Basic info',
    'weight' => '3',
    'children' => array(
      0 => 'field_country',
      1 => 'field_indicator',
      2 => 'field_indicator_other',
      3 => 'field_indicator_usage',
      4 => 'field_original_title',
      5 => 'field_raw_data_issues',
      6 => 'field_raw_data_issues_info',
      7 => 'field_remarks',
      8 => 'field_survey_data',
      9 => 'field_violence_remarks',
      10 => 'field_violence_types',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Basic info',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-basic-info field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_basic_info|node|statistical_product|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_characteristics|node|administrative_data_source|default';
  $field_group->group_name = 'group_characteristics';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'administrative_data_source';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Characteristics',
    'weight' => '88',
    'children' => array(),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-characteristics field-group-div',
        'id' => '',
      ),
    ),
  );
  $export['group_characteristics|node|administrative_data_source|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_characteristics|node|administrative_data_source|form';
  $field_group->group_name = 'group_characteristics';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'administrative_data_source';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Characteristics',
    'weight' => '11',
    'children' => array(
      0 => 'group_comparability',
      1 => 'group_current_developments',
      2 => 'group_frequency_of_updating',
      3 => 'group_qa_process',
      4 => 'group_relation_with_others',
      5 => 'group_storage_system',
      6 => 'group_timeliness',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-characteristics field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_characteristics|node|administrative_data_source|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_characteristics|node|administrative_data_source|full';
  $field_group->group_name = 'group_characteristics';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'administrative_data_source';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Characteristics',
    'weight' => '14',
    'children' => array(
      0 => 'field_chars_comparability',
      1 => 'field_chars_compare_remarks',
      2 => 'field_chars_developments',
      3 => 'field_chars_frequency',
      4 => 'field_chars_frequency_remarks',
      5 => 'field_chars_organisation',
      6 => 'field_chars_quality_assurance',
      7 => 'field_chars_reported',
      8 => 'field_chars_reporter',
      9 => 'field_chars_reporter_other',
      10 => 'field_chars_storage_other',
      11 => 'field_chars_storage_system',
      12 => 'field_chars_timeliness',
      13 => 'field_chars_timeliness_info',
      14 => 'field_chars_usage',
      15 => 'field_chars_usage_info',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-characteristics field-group-div',
        'id' => '',
      ),
    ),
  );
  $export['group_characteristics|node|administrative_data_source|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_characteristics|node|statistical_product|form';
  $field_group->group_name = 'group_characteristics';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'statistical_product';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Characteristics',
    'weight' => '9',
    'children' => array(
      0 => 'field_chars_accuracy',
      1 => 'field_chars_comparability',
      2 => 'field_chars_compare_remarks',
      3 => 'field_chars_compilation',
      4 => 'field_chars_developments',
      5 => 'field_chars_external_link',
      6 => 'field_chars_external_link_info',
      7 => 'field_chars_frequency_remarks',
      8 => 'field_chars_quality_exists',
      9 => 'field_chars_quality_info',
      10 => 'field_chars_ref_period_info',
      11 => 'field_chars_reference_period',
      12 => 'field_chars_reliability',
      13 => 'field_chars_remarks',
      14 => 'field_chars_timeliness',
      15 => 'field_chars_validation',
      16 => 'field_chars_validation_info',
      17 => 'field_chars_frequency_text',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-characteristics field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_characteristics|node|statistical_product|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_characteristics|node|statistical_product|full';
  $field_group->group_name = 'group_characteristics';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'statistical_product';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Characteristics',
    'weight' => '18',
    'children' => array(
      0 => 'field_chars_accuracy',
      1 => 'field_chars_comparability',
      2 => 'field_chars_compare_remarks',
      3 => 'field_chars_compilation',
      4 => 'field_chars_developments',
      5 => 'field_chars_external_link',
      6 => 'field_chars_external_link_info',
      7 => 'field_chars_frequency_remarks',
      8 => 'field_chars_quality_exists',
      9 => 'field_chars_quality_info',
      10 => 'field_chars_ref_period_info',
      11 => 'field_chars_reference_period',
      12 => 'field_chars_reliability',
      13 => 'field_chars_remarks',
      14 => 'field_chars_timeliness',
      15 => 'field_chars_validation',
      16 => 'field_chars_validation_info',
      17 => 'field_chars_frequency_text',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-characteristics field-group-div',
        'id' => '',
      ),
    ),
  );
  $export['group_characteristics|node|statistical_product|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_comparability|node|administrative_data_source|form';
  $field_group->group_name = 'group_comparability';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'administrative_data_source';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_characteristics';
  $field_group->data = array(
    'label' => 'Comparability',
    'weight' => '96',
    'children' => array(
      0 => 'field_chars_comparability',
      1 => 'field_chars_compare_remarks',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-comparability field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_comparability|node|administrative_data_source|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_criminal_statistics|node|statistical_product|form';
  $field_group->group_name = 'group_criminal_statistics';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'statistical_product';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Criminal statistics on sexual violence',
    'weight' => '8',
    'children' => array(
      0 => 'field_criminal_data_info',
      1 => 'field_criminal_statistics_data',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-criminal-statistics field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_criminal_statistics|node|statistical_product|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_criminal_statistics|node|statistical_product|full';
  $field_group->group_name = 'group_criminal_statistics';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'statistical_product';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Criminal statistics on sexual violence',
    'weight' => '17',
    'children' => array(
      0 => 'field_criminal_data_info',
      1 => 'field_criminal_statistics_data',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-criminal-statistics field-group-div',
        'id' => '',
      ),
    ),
  );
  $export['group_criminal_statistics|node|statistical_product|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_current_developments|node|administrative_data_source|form';
  $field_group->group_name = 'group_current_developments';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'administrative_data_source';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_characteristics';
  $field_group->data = array(
    'label' => 'Current developments',
    'weight' => '100',
    'children' => array(
      0 => 'field_chars_developments',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-current-developments field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_current_developments|node|administrative_data_source|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_frequency_of_updating|node|administrative_data_source|form';
  $field_group->group_name = 'group_frequency_of_updating';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'administrative_data_source';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_characteristics';
  $field_group->data = array(
    'label' => 'Frequency of updating',
    'weight' => '94',
    'children' => array(
      0 => 'field_chars_frequency',
      1 => 'field_chars_frequency_remarks',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-frequency-of-updating field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_frequency_of_updating|node|administrative_data_source|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_incident|node|administrative_data_source|default';
  $field_group->group_name = 'group_incident';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'administrative_data_source';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Incident',
    'weight' => '85',
    'children' => array(),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-incident field-group-div',
        'id' => '',
      ),
    ),
  );
  $export['group_incident|node|administrative_data_source|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_incident|node|administrative_data_source|form';
  $field_group->group_name = 'group_incident';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'administrative_data_source';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Incident',
    'weight' => '8',
    'children' => array(
      0 => 'field_incident_code_remarks',
      1 => 'field_incident_code_system',
      2 => 'field_incident_description',
      3 => 'field_incident_description_other',
      4 => 'field_incident_justice_data',
      5 => 'field_incident_justice_info',
      6 => 'field_incident_orders',
      7 => 'field_incident_other_resources',
      8 => 'field_incident_protection',
      9 => 'field_incident_remarks',
      10 => 'field_incident_resources',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-incident field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_incident|node|administrative_data_source|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_incident|node|administrative_data_source|full';
  $field_group->group_name = 'group_incident';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'administrative_data_source';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Incident',
    'weight' => '11',
    'children' => array(
      0 => 'field_incident_code_remarks',
      1 => 'field_incident_code_system',
      2 => 'field_incident_description',
      3 => 'field_incident_description_other',
      4 => 'field_incident_justice_data',
      5 => 'field_incident_justice_info',
      6 => 'field_incident_orders',
      7 => 'field_incident_other_resources',
      8 => 'field_incident_protection',
      9 => 'field_incident_remarks',
      10 => 'field_incident_resources',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Incident',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-incident field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_incident|node|administrative_data_source|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_incident|node|statistical_product|form';
  $field_group->group_name = 'group_incident';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'statistical_product';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Incident',
    'weight' => '7',
    'children' => array(
      0 => 'field_incident',
      1 => 'field_incident_other',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-incident field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_incident|node|statistical_product|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_incident|node|statistical_product|full';
  $field_group->group_name = 'group_incident';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'statistical_product';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Incident',
    'weight' => '16',
    'children' => array(
      0 => 'field_incident',
      1 => 'field_incident_other',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-incident field-group-div',
        'id' => '',
      ),
    ),
  );
  $export['group_incident|node|statistical_product|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_keywords|node|administrative_data_source|full';
  $field_group->group_name = 'group_keywords';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'administrative_data_source';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_metadata';
  $field_group->data = array(
    'label' => 'Keywords wrapper',
    'weight' => '2',
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
  $export['group_keywords|node|administrative_data_source|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_keywords|node|statistical_product|full';
  $field_group->group_name = 'group_keywords';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'statistical_product';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_metadata';
  $field_group->data = array(
    'label' => 'Keywords wrapper',
    'weight' => '68',
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
  $export['group_keywords|node|statistical_product|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_keywords|node|statistics_on_sexual_violence|full';
  $field_group->group_name = 'group_keywords';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'statistics_on_sexual_violence';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_metadata';
  $field_group->data = array(
    'label' => 'Keywords wrapper',
    'weight' => '41',
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
  $export['group_keywords|node|statistics_on_sexual_violence|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_link_wrapper|node|administrative_data_source|related_content';
  $field_group->group_name = 'group_link_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'administrative_data_source';
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
        'custom_url' => '',
        'custom_url_normalize' => TRUE,
      ),
    ),
  );
  $export['group_link_wrapper|node|administrative_data_source|related_content'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_link_wrapper|node|administrative_data_source|teaser';
  $field_group->group_name = 'group_link_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'administrative_data_source';
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
        'custom_url' => '',
        'custom_url_normalize' => TRUE,
      ),
    ),
  );
  $export['group_link_wrapper|node|administrative_data_source|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_link_wrapper|node|statistical_product|related_content';
  $field_group->group_name = 'group_link_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'statistical_product';
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
        'custom_url' => '',
        'custom_url_normalize' => TRUE,
      ),
    ),
  );
  $export['group_link_wrapper|node|statistical_product|related_content'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_link_wrapper|node|statistical_product|teaser';
  $field_group->group_name = 'group_link_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'statistical_product';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group link wrapper',
    'weight' => '3',
    'children' => array(
      0 => 'content_type',
      1 => 'group_title_quote_wrapper',
    ),
    'format_type' => 'link',
    'format_settings' => array(
      'label' => 'Group link wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-link-wrapper field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'link_to' => 'entity',
        'custom_url' => '',
        'custom_url_normalize' => TRUE,
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_link_wrapper|node|statistical_product|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_link_wrapper|node|statistics_on_sexual_violence|related_content';
  $field_group->group_name = 'group_link_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'statistics_on_sexual_violence';
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
        'custom_url' => '',
        'custom_url_normalize' => TRUE,
      ),
    ),
  );
  $export['group_link_wrapper|node|statistics_on_sexual_violence|related_content'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_metadata|node|administrative_data_source|full';
  $field_group->group_name = 'group_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'administrative_data_source';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => '2',
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
  $export['group_metadata|node|administrative_data_source|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_metadata|node|statistical_product|full';
  $field_group->group_name = 'group_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'statistical_product';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => '2',
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
  $export['group_metadata|node|statistical_product|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_metadata|node|statistics_on_sexual_violence|full';
  $field_group->group_name = 'group_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'statistics_on_sexual_violence';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => '2',
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
  $export['group_metadata|node|statistics_on_sexual_violence|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_migration_information|node|administrative_data_source|form';
  $field_group->group_name = 'group_migration_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'administrative_data_source';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Migration Information',
    'weight' => '16',
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
  $export['group_migration_information|node|administrative_data_source|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_migration_information|node|statistical_product|form';
  $field_group->group_name = 'group_migration_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'statistical_product';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Migration Information',
    'weight' => '13',
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
  $export['group_migration_information|node|statistical_product|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_migration_information|node|statistics_on_sexual_violence|form';
  $field_group->group_name = 'group_migration_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'statistics_on_sexual_violence';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Migration Information',
    'weight' => '7',
    'children' => array(
      0 => 'field_legacy_id',
      1 => 'field_migration_notes',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-migration-information field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_migration_information|node|statistics_on_sexual_violence|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_outcomes_perpetrator|node|administrative_data_source|form';
  $field_group->group_name = 'group_outcomes_perpetrator';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'administrative_data_source';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_outcomes';
  $field_group->data = array(
    'label' => 'Perpetrator',
    'weight' => '80',
    'children' => array(
      0 => 'field_outcomes_arrest_cases',
      1 => 'field_outcomes_bail_remand',
      2 => 'field_outcomes_bail_remarks',
      3 => 'field_outcomes_list_offenses',
      4 => 'field_outcomes_many_offenses',
      5 => 'field_outcomes_offenses_remarks',
      6 => 'field_outcomes_perp_other',
      7 => 'field_outcomes_prisons',
      8 => 'field_outcomes_prisons_remarks',
      9 => 'field_outcomes_probation',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-outcomes-perpetrator field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_outcomes_perpetrator|node|administrative_data_source|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_outcomes_victim|node|administrative_data_source|form';
  $field_group->group_name = 'group_outcomes_victim';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'administrative_data_source';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_outcomes';
  $field_group->data = array(
    'label' => 'Victim',
    'weight' => '91',
    'children' => array(
      0 => 'field_outcomes_death',
      1 => 'field_outcomes_remarks',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-outcomes-victim field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_outcomes_victim|node|administrative_data_source|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_outcomes|node|administrative_data_source|default';
  $field_group->group_name = 'group_outcomes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'administrative_data_source';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Outcomes',
    'weight' => '87',
    'children' => array(),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-outcomes field-group-div',
        'id' => '',
      ),
    ),
  );
  $export['group_outcomes|node|administrative_data_source|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_outcomes|node|administrative_data_source|form';
  $field_group->group_name = 'group_outcomes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'administrative_data_source';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Outcomes',
    'weight' => '10',
    'children' => array(
      0 => 'group_outcomes_perpetrator',
      1 => 'group_outcomes_victim',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-outcomes field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_outcomes|node|administrative_data_source|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_outcomes|node|administrative_data_source|full';
  $field_group->group_name = 'group_outcomes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'administrative_data_source';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Outcomes',
    'weight' => '13',
    'children' => array(
      0 => 'field_outcomes_arrest_cases',
      1 => 'field_outcomes_bail_remand',
      2 => 'field_outcomes_bail_remarks',
      3 => 'field_outcomes_death',
      4 => 'field_outcomes_list_offenses',
      5 => 'field_outcomes_many_offenses',
      6 => 'field_outcomes_offenses_remarks',
      7 => 'field_outcomes_perp_other',
      8 => 'field_outcomes_prisons',
      9 => 'field_outcomes_prisons_remarks',
      10 => 'field_outcomes_probation',
      11 => 'field_outcomes_remarks',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Outcomes',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-outcomes field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_outcomes|node|administrative_data_source|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_perpetrator|node|administrative_data_source|default';
  $field_group->group_name = 'group_perpetrator';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'administrative_data_source';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Perpetrator',
    'weight' => '83',
    'children' => array(),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-perpetrator field-group-div',
        'id' => '',
      ),
    ),
  );
  $export['group_perpetrator|node|administrative_data_source|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_perpetrator|node|administrative_data_source|form';
  $field_group->group_name = 'group_perpetrator';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'administrative_data_source';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Perpetrator',
    'weight' => '6',
    'children' => array(
      0 => 'field_perpetrator_info',
      1 => 'field_perpetrator_info_other',
      2 => 'field_perpetrator_rel_info',
      3 => 'field_perpetrator_relationship',
      4 => 'field_perpetrator_remarks',
      5 => 'field_perpetrator_reoffending',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-perpetrator field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_perpetrator|node|administrative_data_source|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_perpetrator|node|administrative_data_source|full';
  $field_group->group_name = 'group_perpetrator';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'administrative_data_source';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Perpetrator',
    'weight' => '9',
    'children' => array(
      0 => 'field_perpetrator_info',
      1 => 'field_perpetrator_info_other',
      2 => 'field_perpetrator_rel_info',
      3 => 'field_perpetrator_relationship',
      4 => 'field_perpetrator_remarks',
      5 => 'field_perpetrator_reoffending',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Perpetrator',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-perpetrator field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_perpetrator|node|administrative_data_source|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_perpetrator|node|statistical_product|form';
  $field_group->group_name = 'group_perpetrator';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'statistical_product';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Perpetrator',
    'weight' => '6',
    'children' => array(
      0 => 'field_perpetrator_info',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-perpetrator field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_perpetrator|node|statistical_product|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_perpetrator|node|statistical_product|full';
  $field_group->group_name = 'group_perpetrator';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'statistical_product';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Perpetrator',
    'weight' => '15',
    'children' => array(
      0 => 'field_perpetrator_info',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-perpetrator field-group-div',
        'id' => '',
      ),
    ),
  );
  $export['group_perpetrator|node|statistical_product|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_prosecution_process|node|administrative_data_source|default';
  $field_group->group_name = 'group_prosecution_process';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'administrative_data_source';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Prosecution process',
    'weight' => '86',
    'children' => array(),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-prosecution-process field-group-div',
        'id' => '',
      ),
    ),
  );
  $export['group_prosecution_process|node|administrative_data_source|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_prosecution_process|node|administrative_data_source|form';
  $field_group->group_name = 'group_prosecution_process';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'administrative_data_source';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Prosecution process',
    'weight' => '9',
    'children' => array(
      0 => 'field_prosec_defendant_other',
      1 => 'field_prosec_stages_other',
      2 => 'field_prosecution_avg_time',
      3 => 'field_prosecution_defendant',
      4 => 'field_prosecution_remarks',
      5 => 'field_prosecution_stages',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-prosecution-process field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_prosecution_process|node|administrative_data_source|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_prosecution_process|node|administrative_data_source|full';
  $field_group->group_name = 'group_prosecution_process';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'administrative_data_source';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Prosecution process',
    'weight' => '12',
    'children' => array(
      0 => 'field_prosec_defendant_other',
      1 => 'field_prosec_stages_other',
      2 => 'field_prosecution_avg_time',
      3 => 'field_prosecution_defendant',
      4 => 'field_prosecution_remarks',
      5 => 'field_prosecution_stages',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Prosecution process',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-prosecution-process field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_prosecution_process|node|administrative_data_source|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_qa_process|node|administrative_data_source|form';
  $field_group->group_name = 'group_qa_process';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'administrative_data_source';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_characteristics';
  $field_group->data = array(
    'label' => 'Quality assurance process',
    'weight' => '95',
    'children' => array(
      0 => 'field_chars_quality_assurance',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-qa-process field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_qa_process|node|administrative_data_source|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related_content|node|administrative_data_source|full';
  $field_group->group_name = 'group_related_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'administrative_data_source';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Related content',
    'weight' => '17',
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
  $export['group_related_content|node|administrative_data_source|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related_content|node|statistical_product|full';
  $field_group->group_name = 'group_related_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'statistical_product';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Related content',
    'weight' => '21',
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
  $export['group_related_content|node|statistical_product|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related_content|node|statistics_on_sexual_violence|full';
  $field_group->group_name = 'group_related_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'statistics_on_sexual_violence';
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
  $export['group_related_content|node|statistics_on_sexual_violence|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_relation_with_others|node|administrative_data_source|form';
  $field_group->group_name = 'group_relation_with_others';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'administrative_data_source';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_characteristics';
  $field_group->data = array(
    'label' => 'Relation with third parties',
    'weight' => '101',
    'children' => array(
      0 => 'group_reported_to_others',
      1 => 'group_reporter',
      2 => 'group_used_by_others',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-relation-with-others field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_relation_with_others|node|administrative_data_source|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_reported_to_others|node|administrative_data_source|form';
  $field_group->group_name = 'group_reported_to_others';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'administrative_data_source';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_relation_with_others';
  $field_group->data = array(
    'label' => 'Reported to third parties',
    'weight' => '93',
    'children' => array(
      0 => 'field_chars_organisation',
      1 => 'field_chars_reported',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-reported-to-others field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_reported_to_others|node|administrative_data_source|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_reporter|node|administrative_data_source|form';
  $field_group->group_name = 'group_reporter';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'administrative_data_source';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_relation_with_others';
  $field_group->data = array(
    'label' => 'Reporter',
    'weight' => '95',
    'children' => array(
      0 => 'field_chars_reporter',
      1 => 'field_chars_reporter_other',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-reporter field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_reporter|node|administrative_data_source|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_statistics|node|statistics_on_sexual_violence|form';
  $field_group->group_name = 'group_statistics';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'statistics_on_sexual_violence';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Statistics',
    'weight' => '2',
    'children' => array(
      0 => 'field_convictions',
      1 => 'field_prosecutions_court_cases',
      2 => 'field_reported_cases',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-statistics field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_statistics|node|statistics_on_sexual_violence|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_statistics|node|statistics_on_sexual_violence|full';
  $field_group->group_name = 'group_statistics';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'statistics_on_sexual_violence';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Statistics',
    'weight' => '3',
    'children' => array(
      0 => 'field_convictions',
      1 => 'field_prosecutions_court_cases',
      2 => 'field_reported_cases',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Statistics',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-statistics field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_statistics|node|statistics_on_sexual_violence|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_storage_system|node|administrative_data_source|form';
  $field_group->group_name = 'group_storage_system';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'administrative_data_source';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_characteristics';
  $field_group->data = array(
    'label' => 'Storage system',
    'weight' => '93',
    'children' => array(
      0 => 'field_chars_storage_other',
      1 => 'field_chars_storage_system',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-storage-system field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_storage_system|node|administrative_data_source|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_teaser_metadata|node|administrative_data_source|related_content';
  $field_group->group_name = 'group_teaser_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'administrative_data_source';
  $field_group->mode = 'related_content';
  $field_group->parent_name = 'group_title_quote_wrapper';
  $field_group->data = array(
    'label' => 'Teaser metadata',
    'weight' => '94',
    'children' => array(
      0 => 'field_country',
      1 => 'field_violence_types',
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
  $export['group_teaser_metadata|node|administrative_data_source|related_content'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_teaser_metadata|node|administrative_data_source|teaser';
  $field_group->group_name = 'group_teaser_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'administrative_data_source';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_title_quote_wrapper';
  $field_group->data = array(
    'label' => 'Teaser metadata',
    'weight' => '12',
    'children' => array(
      0 => 'field_ad_sector',
      1 => 'field_country',
      2 => 'field_violence_types',
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
  $export['group_teaser_metadata|node|administrative_data_source|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_teaser_metadata|node|statistical_product|related_content';
  $field_group->group_name = 'group_teaser_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'statistical_product';
  $field_group->mode = 'related_content';
  $field_group->parent_name = 'group_title_quote_wrapper';
  $field_group->data = array(
    'label' => 'Teaser metadata',
    'weight' => '4',
    'children' => array(
      0 => 'field_country',
      1 => 'field_violence_types',
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
  $export['group_teaser_metadata|node|statistical_product|related_content'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_teaser_metadata|node|statistical_product|teaser';
  $field_group->group_name = 'group_teaser_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'statistical_product';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_title_quote_wrapper';
  $field_group->data = array(
    'label' => 'Teaser metadata',
    'weight' => '1',
    'children' => array(
      0 => 'field_ad_sector',
      1 => 'field_country',
      2 => 'field_violence_types',
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
  $export['group_teaser_metadata|node|statistical_product|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_teaser_metadata|node|statistics_on_sexual_violence|related_content';
  $field_group->group_name = 'group_teaser_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'statistics_on_sexual_violence';
  $field_group->mode = 'related_content';
  $field_group->parent_name = 'group_title_quote_wrapper';
  $field_group->data = array(
    'label' => 'Teaser metadata',
    'weight' => '2',
    'children' => array(
      0 => 'field_country',
      1 => 'field_violence_types',
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
  $export['group_teaser_metadata|node|statistics_on_sexual_violence|related_content'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_timeliness|node|administrative_data_source|form';
  $field_group->group_name = 'group_timeliness';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'administrative_data_source';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_characteristics';
  $field_group->data = array(
    'label' => 'Timeliness',
    'weight' => '99',
    'children' => array(
      0 => 'field_chars_timeliness',
      1 => 'field_chars_timeliness_info',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-timeliness field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_timeliness|node|administrative_data_source|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title_quote_wrapper|node|administrative_data_source|related_content';
  $field_group->group_name = 'group_title_quote_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'administrative_data_source';
  $field_group->mode = 'related_content';
  $field_group->parent_name = 'group_link_wrapper';
  $field_group->data = array(
    'label' => 'Title/Quote wrapper',
    'weight' => '7',
    'children' => array(
      0 => 'field_original_title',
      1 => 'title_field',
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
  $export['group_title_quote_wrapper|node|administrative_data_source|related_content'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title_quote_wrapper|node|administrative_data_source|teaser';
  $field_group->group_name = 'group_title_quote_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'administrative_data_source';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_link_wrapper';
  $field_group->data = array(
    'label' => 'Title/Quote wrapper',
    'weight' => '2',
    'children' => array(
      0 => 'title_field',
      1 => 'group_teaser_metadata',
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
  $export['group_title_quote_wrapper|node|administrative_data_source|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title_quote_wrapper|node|statistical_product|related_content';
  $field_group->group_name = 'group_title_quote_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'statistical_product';
  $field_group->mode = 'related_content';
  $field_group->parent_name = 'group_link_wrapper';
  $field_group->data = array(
    'label' => 'Title/Quote wrapper',
    'weight' => '2',
    'children' => array(
      0 => 'field_original_title',
      1 => 'title_field',
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
  $export['group_title_quote_wrapper|node|statistical_product|related_content'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title_quote_wrapper|node|statistical_product|teaser';
  $field_group->group_name = 'group_title_quote_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'statistical_product';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_link_wrapper';
  $field_group->data = array(
    'label' => 'Title/Quote wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'title_field',
      1 => 'group_teaser_metadata',
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
  $export['group_title_quote_wrapper|node|statistical_product|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title_quote_wrapper|node|statistics_on_sexual_violence|related_content';
  $field_group->group_name = 'group_title_quote_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'statistics_on_sexual_violence';
  $field_group->mode = 'related_content';
  $field_group->parent_name = 'group_link_wrapper';
  $field_group->data = array(
    'label' => 'Title/Quote wrapper',
    'weight' => '3',
    'children' => array(
      0 => 'title_field',
      1 => 'group_teaser_metadata',
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
  $export['group_title_quote_wrapper|node|statistics_on_sexual_violence|related_content'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_used_by_others|node|administrative_data_source|form';
  $field_group->group_name = 'group_used_by_others';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'administrative_data_source';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_relation_with_others';
  $field_group->data = array(
    'label' => 'Used by third parties',
    'weight' => '94',
    'children' => array(
      0 => 'field_chars_usage',
      1 => 'field_chars_usage_info',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-used-by-others field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_used_by_others|node|administrative_data_source|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_victim|node|administrative_data_source|default';
  $field_group->group_name = 'group_victim';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'administrative_data_source';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Victim',
    'weight' => '82',
    'children' => array(),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-victim field-group-div',
        'id' => '',
      ),
    ),
  );
  $export['group_victim|node|administrative_data_source|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_victim|node|administrative_data_source|form';
  $field_group->group_name = 'group_victim';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'administrative_data_source';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Victim',
    'weight' => '5',
    'children' => array(
      0 => 'field_victim_info',
      1 => 'field_victim_info_other',
      2 => 'field_victim_relation_type',
      3 => 'field_victim_relationship',
      4 => 'field_victim_remarks',
      5 => 'field_victim_repetition',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-victim field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_victim|node|administrative_data_source|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_victim|node|administrative_data_source|full';
  $field_group->group_name = 'group_victim';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'administrative_data_source';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Victim',
    'weight' => '8',
    'children' => array(
      0 => 'field_victim_info',
      1 => 'field_victim_info_other',
      2 => 'field_victim_relation_type',
      3 => 'field_victim_relationship',
      4 => 'field_victim_remarks',
      5 => 'field_victim_repetition',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-victim field-group-div',
        'id' => '',
      ),
    ),
  );
  $export['group_victim|node|administrative_data_source|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_victim|node|statistical_product|form';
  $field_group->group_name = 'group_victim';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'statistical_product';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Victim',
    'weight' => '5',
    'children' => array(
      0 => 'field_victim_info',
      1 => 'field_victim_relationship',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-victim field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_victim|node|statistical_product|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_victim|node|statistical_product|full';
  $field_group->group_name = 'group_victim';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'statistical_product';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Victim',
    'weight' => '14',
    'children' => array(
      0 => 'field_victim_info',
      1 => 'field_victim_relationship',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-victim field-group-div',
        'id' => '',
      ),
    ),
  );
  $export['group_victim|node|statistical_product|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_witness|node|administrative_data_source|default';
  $field_group->group_name = 'group_witness';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'administrative_data_source';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Witness',
    'weight' => '84',
    'children' => array(),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-witness field-group-div',
        'id' => '',
      ),
    ),
  );
  $export['group_witness|node|administrative_data_source|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_witness|node|administrative_data_source|form';
  $field_group->group_name = 'group_witness';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'administrative_data_source';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Witness',
    'weight' => '7',
    'children' => array(
      0 => 'field_witness_children',
      1 => 'field_witness_description',
      2 => 'field_witness_info',
      3 => 'field_witness_info_other',
      4 => 'field_witness_relationship',
      5 => 'field_witness_remarks',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-witness field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_witness|node|administrative_data_source|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_witness|node|administrative_data_source|full';
  $field_group->group_name = 'group_witness';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'administrative_data_source';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Witness',
    'weight' => '10',
    'children' => array(
      0 => 'field_witness_children',
      1 => 'field_witness_description',
      2 => 'field_witness_info',
      3 => 'field_witness_info_other',
      4 => 'field_witness_relationship',
      5 => 'field_witness_remarks',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Witness',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-witness field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_witness|node|administrative_data_source|full'] = $field_group;

  return $export;
}

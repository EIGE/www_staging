<?php
/**
 * @file
 * eige_cer_presets.features.inc
 */

/**
 * Implements hook_default_cer().
 */
function eige_cer_presets_default_cer() {
  $items = array();
  $items['node:administrative_data_source:field_related_content*node:administrative_data_source:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:administrative_data_source:field_related_content*node:administrative_data_source:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:administrative_data_source:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:administrative_data_source:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:administrative_data_source:field_related_content*node:advanced_page:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:administrative_data_source:field_related_content*node:advanced_page:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:administrative_data_source:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:advanced_page:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:administrative_data_source:field_related_content*node:career_opportunity:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:administrative_data_source:field_related_content*node:career_opportunity:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:administrative_data_source:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:career_opportunity:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:administrative_data_source:field_related_content*node:country_overview:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:administrative_data_source:field_related_content*node:country_overview:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:administrative_data_source:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:country_overview:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:administrative_data_source:field_related_content*node:document:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:administrative_data_source:field_related_content*node:document:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:administrative_data_source:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:document:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:administrative_data_source:field_related_content*node:gender_equality_policy:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:administrative_data_source:field_related_content*node:gender_equality_policy:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:administrative_data_source:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:gender_equality_policy:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:administrative_data_source:field_related_content*node:gender_story:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:administrative_data_source:field_related_content*node:gender_story:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:administrative_data_source:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:gender_story:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:administrative_data_source:field_related_content*node:good_practice:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:administrative_data_source:field_related_content*node:good_practice:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:administrative_data_source:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:good_practice:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:administrative_data_source:field_related_content*node:legal_definition:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:administrative_data_source:field_related_content*node:legal_definition:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:administrative_data_source:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:legal_definition:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:administrative_data_source:field_related_content*node:method_tool:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:administrative_data_source:field_related_content*node:method_tool:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:administrative_data_source:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:method_tool:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:administrative_data_source:field_related_content*node:news_article:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:administrative_data_source:field_related_content*node:news_article:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:administrative_data_source:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:news_article:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:administrative_data_source:field_related_content*node:page:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:administrative_data_source:field_related_content*node:page:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:administrative_data_source:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:page:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:administrative_data_source:field_related_content*node:procurement:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:administrative_data_source:field_related_content*node:procurement:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:administrative_data_source:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:procurement:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:administrative_data_source:field_related_content*node:publication:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:administrative_data_source:field_related_content*node:publication:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:administrative_data_source:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:publication:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:administrative_data_source:field_related_content*node:resource:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:administrative_data_source:field_related_content*node:resource:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:administrative_data_source:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:resource:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:administrative_data_source:field_related_content*node:resource_pool_item:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:administrative_data_source:field_related_content*node:resource_pool_item:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:administrative_data_source:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:resource_pool_item:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:administrative_data_source:field_related_content*node:sectoral_area:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:administrative_data_source:field_related_content*node:sectoral_area:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:administrative_data_source:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:sectoral_area:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:administrative_data_source:field_related_content*node:statistical_product:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:administrative_data_source:field_related_content*node:statistical_product:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:administrative_data_source:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:statistical_product:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:administrative_data_source:field_related_content*node:statistics_on_sexual_violence:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:administrative_data_source:field_related_content*node:statistics_on_sexual_violence:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:administrative_data_source:field_related_content" } ] },
    "cer_right" : { "und" : [
        { "path" : "node:statistics_on_sexual_violence:field_related_content" }
      ]
    },
    "rdf_mapping" : []
  }');
  $items['node:administrative_data_source:field_related_content*node:structure:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:administrative_data_source:field_related_content*node:structure:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:administrative_data_source:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:structure:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:administrative_data_source:field_related_content*node:tool_method_category:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:administrative_data_source:field_related_content*node:tool_method_category:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:administrative_data_source:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:tool_method_category:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:administrative_data_source:field_related_content*node:video:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:administrative_data_source:field_related_content*node:video:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:administrative_data_source:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:video:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:administrative_data_source:field_related_content*node:webform:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:administrative_data_source:field_related_content*node:webform:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:administrative_data_source:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:webform:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:advanced_page:field_related_content*node:administrative_data_source:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:advanced_page:field_related_content*node:administrative_data_source:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:advanced_page:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:administrative_data_source:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:advanced_page:field_related_content*node:advanced_page:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:advanced_page:field_related_content*node:advanced_page:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:advanced_page:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:advanced_page:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:advanced_page:field_related_content*node:career_opportunity:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:advanced_page:field_related_content*node:career_opportunity:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:advanced_page:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:career_opportunity:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:advanced_page:field_related_content*node:country_overview:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:advanced_page:field_related_content*node:country_overview:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:advanced_page:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:country_overview:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:advanced_page:field_related_content*node:document:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:advanced_page:field_related_content*node:document:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:advanced_page:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:document:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:advanced_page:field_related_content*node:gender_equality_policy:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:advanced_page:field_related_content*node:gender_equality_policy:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:advanced_page:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:gender_equality_policy:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:advanced_page:field_related_content*node:gender_story:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:advanced_page:field_related_content*node:gender_story:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:advanced_page:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:gender_story:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:advanced_page:field_related_content*node:good_practice:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:advanced_page:field_related_content*node:good_practice:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:advanced_page:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:good_practice:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:advanced_page:field_related_content*node:legal_definition:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:advanced_page:field_related_content*node:legal_definition:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:advanced_page:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:legal_definition:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:advanced_page:field_related_content*node:method_tool:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:advanced_page:field_related_content*node:method_tool:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:advanced_page:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:method_tool:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:advanced_page:field_related_content*node:news_article:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:advanced_page:field_related_content*node:news_article:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:advanced_page:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:news_article:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:advanced_page:field_related_content*node:page:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:advanced_page:field_related_content*node:page:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:advanced_page:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:page:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:advanced_page:field_related_content*node:procurement:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:advanced_page:field_related_content*node:procurement:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:advanced_page:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:procurement:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:advanced_page:field_related_content*node:publication:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:advanced_page:field_related_content*node:publication:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:advanced_page:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:publication:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:advanced_page:field_related_content*node:resource:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:advanced_page:field_related_content*node:resource:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:advanced_page:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:resource:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:advanced_page:field_related_content*node:resource_pool_item:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:advanced_page:field_related_content*node:resource_pool_item:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:advanced_page:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:resource_pool_item:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:advanced_page:field_related_content*node:sectoral_area:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:advanced_page:field_related_content*node:sectoral_area:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:advanced_page:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:sectoral_area:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:advanced_page:field_related_content*node:statistical_product:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:advanced_page:field_related_content*node:statistical_product:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:advanced_page:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:statistical_product:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:advanced_page:field_related_content*node:statistics_on_sexual_violence:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:advanced_page:field_related_content*node:statistics_on_sexual_violence:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:advanced_page:field_related_content" } ] },
    "cer_right" : { "und" : [
        { "path" : "node:statistics_on_sexual_violence:field_related_content" }
      ]
    },
    "rdf_mapping" : []
  }');
  $items['node:advanced_page:field_related_content*node:structure:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:advanced_page:field_related_content*node:structure:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:advanced_page:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:structure:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:advanced_page:field_related_content*node:tool_method_category:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:advanced_page:field_related_content*node:tool_method_category:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:advanced_page:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:tool_method_category:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:advanced_page:field_related_content*node:video:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:advanced_page:field_related_content*node:video:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:advanced_page:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:video:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:advanced_page:field_related_content*node:webform:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:advanced_page:field_related_content*node:webform:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:advanced_page:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:webform:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:career_opportunity:field_related_content*node:administrative_data_source:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:career_opportunity:field_related_content*node:administrative_data_source:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:career_opportunity:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:administrative_data_source:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:career_opportunity:field_related_content*node:advanced_page:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:career_opportunity:field_related_content*node:advanced_page:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:career_opportunity:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:advanced_page:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:career_opportunity:field_related_content*node:career_opportunity:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:career_opportunity:field_related_content*node:career_opportunity:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:career_opportunity:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:career_opportunity:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:career_opportunity:field_related_content*node:country_overview:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:career_opportunity:field_related_content*node:country_overview:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:career_opportunity:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:country_overview:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:career_opportunity:field_related_content*node:document:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:career_opportunity:field_related_content*node:document:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:career_opportunity:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:document:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:career_opportunity:field_related_content*node:gender_equality_policy:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:career_opportunity:field_related_content*node:gender_equality_policy:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:career_opportunity:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:gender_equality_policy:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:career_opportunity:field_related_content*node:gender_story:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:career_opportunity:field_related_content*node:gender_story:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:career_opportunity:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:gender_story:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:career_opportunity:field_related_content*node:good_practice:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:career_opportunity:field_related_content*node:good_practice:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:career_opportunity:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:good_practice:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:career_opportunity:field_related_content*node:legal_definition:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:career_opportunity:field_related_content*node:legal_definition:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:career_opportunity:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:legal_definition:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:career_opportunity:field_related_content*node:method_tool:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:career_opportunity:field_related_content*node:method_tool:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:career_opportunity:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:method_tool:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:career_opportunity:field_related_content*node:news_article:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:career_opportunity:field_related_content*node:news_article:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:career_opportunity:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:news_article:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:career_opportunity:field_related_content*node:page:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:career_opportunity:field_related_content*node:page:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:career_opportunity:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:page:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:career_opportunity:field_related_content*node:procurement:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:career_opportunity:field_related_content*node:procurement:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:career_opportunity:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:procurement:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:career_opportunity:field_related_content*node:publication:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:career_opportunity:field_related_content*node:publication:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:career_opportunity:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:publication:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:career_opportunity:field_related_content*node:resource:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:career_opportunity:field_related_content*node:resource:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:career_opportunity:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:resource:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:career_opportunity:field_related_content*node:resource_pool_item:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:career_opportunity:field_related_content*node:resource_pool_item:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:career_opportunity:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:resource_pool_item:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:career_opportunity:field_related_content*node:sectoral_area:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:career_opportunity:field_related_content*node:sectoral_area:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:career_opportunity:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:sectoral_area:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:career_opportunity:field_related_content*node:statistical_product:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:career_opportunity:field_related_content*node:statistical_product:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:career_opportunity:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:statistical_product:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:career_opportunity:field_related_content*node:statistics_on_sexual_violence:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:career_opportunity:field_related_content*node:statistics_on_sexual_violence:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:career_opportunity:field_related_content" } ] },
    "cer_right" : { "und" : [
        { "path" : "node:statistics_on_sexual_violence:field_related_content" }
      ]
    },
    "rdf_mapping" : []
  }');
  $items['node:career_opportunity:field_related_content*node:structure:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:career_opportunity:field_related_content*node:structure:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:career_opportunity:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:structure:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:career_opportunity:field_related_content*node:tool_method_category:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:career_opportunity:field_related_content*node:tool_method_category:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:career_opportunity:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:tool_method_category:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:career_opportunity:field_related_content*node:video:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:career_opportunity:field_related_content*node:video:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:career_opportunity:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:video:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:career_opportunity:field_related_content*node:webform:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:career_opportunity:field_related_content*node:webform:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:career_opportunity:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:webform:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:country_overview:field_related_content*node:administrative_data_source:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:country_overview:field_related_content*node:administrative_data_source:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:country_overview:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:administrative_data_source:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:country_overview:field_related_content*node:advanced_page:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:country_overview:field_related_content*node:advanced_page:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:country_overview:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:advanced_page:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:country_overview:field_related_content*node:career_opportunity:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:country_overview:field_related_content*node:career_opportunity:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:country_overview:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:career_opportunity:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:country_overview:field_related_content*node:country_overview:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:country_overview:field_related_content*node:country_overview:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:country_overview:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:country_overview:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:country_overview:field_related_content*node:document:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:country_overview:field_related_content*node:document:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:country_overview:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:document:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:country_overview:field_related_content*node:gender_equality_policy:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:country_overview:field_related_content*node:gender_equality_policy:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:country_overview:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:gender_equality_policy:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:country_overview:field_related_content*node:gender_story:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:country_overview:field_related_content*node:gender_story:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:country_overview:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:gender_story:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:country_overview:field_related_content*node:good_practice:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:country_overview:field_related_content*node:good_practice:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:country_overview:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:good_practice:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:country_overview:field_related_content*node:legal_definition:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:country_overview:field_related_content*node:legal_definition:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:country_overview:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:legal_definition:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:country_overview:field_related_content*node:method_tool:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:country_overview:field_related_content*node:method_tool:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:country_overview:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:method_tool:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:country_overview:field_related_content*node:news_article:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:country_overview:field_related_content*node:news_article:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:country_overview:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:news_article:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:country_overview:field_related_content*node:page:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:country_overview:field_related_content*node:page:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:country_overview:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:page:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:country_overview:field_related_content*node:procurement:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:country_overview:field_related_content*node:procurement:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:country_overview:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:procurement:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:country_overview:field_related_content*node:publication:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:country_overview:field_related_content*node:publication:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:country_overview:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:publication:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:country_overview:field_related_content*node:resource:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:country_overview:field_related_content*node:resource:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:country_overview:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:resource:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:country_overview:field_related_content*node:resource_pool_item:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:country_overview:field_related_content*node:resource_pool_item:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:country_overview:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:resource_pool_item:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:country_overview:field_related_content*node:sectoral_area:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:country_overview:field_related_content*node:sectoral_area:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:country_overview:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:sectoral_area:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:country_overview:field_related_content*node:statistical_product:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:country_overview:field_related_content*node:statistical_product:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:country_overview:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:statistical_product:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:country_overview:field_related_content*node:statistics_on_sexual_violence:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:country_overview:field_related_content*node:statistics_on_sexual_violence:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:country_overview:field_related_content" } ] },
    "cer_right" : { "und" : [
        { "path" : "node:statistics_on_sexual_violence:field_related_content" }
      ]
    },
    "rdf_mapping" : []
  }');
  $items['node:country_overview:field_related_content*node:structure:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:country_overview:field_related_content*node:structure:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:country_overview:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:structure:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:country_overview:field_related_content*node:tool_method_category:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:country_overview:field_related_content*node:tool_method_category:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:country_overview:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:tool_method_category:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:country_overview:field_related_content*node:video:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:country_overview:field_related_content*node:video:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:country_overview:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:video:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:country_overview:field_related_content*node:webform:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:country_overview:field_related_content*node:webform:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:country_overview:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:webform:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:document:field_related_content*node:administrative_data_source:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:document:field_related_content*node:administrative_data_source:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:document:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:administrative_data_source:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:document:field_related_content*node:advanced_page:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:document:field_related_content*node:advanced_page:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:document:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:advanced_page:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:document:field_related_content*node:career_opportunity:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:document:field_related_content*node:career_opportunity:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:document:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:career_opportunity:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:document:field_related_content*node:country_overview:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:document:field_related_content*node:country_overview:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:document:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:country_overview:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:document:field_related_content*node:document:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:document:field_related_content*node:document:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:document:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:document:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:document:field_related_content*node:gender_equality_policy:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:document:field_related_content*node:gender_equality_policy:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:document:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:gender_equality_policy:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:document:field_related_content*node:gender_story:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:document:field_related_content*node:gender_story:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:document:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:gender_story:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:document:field_related_content*node:good_practice:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:document:field_related_content*node:good_practice:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:document:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:good_practice:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:document:field_related_content*node:legal_definition:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:document:field_related_content*node:legal_definition:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:document:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:legal_definition:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:document:field_related_content*node:method_tool:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:document:field_related_content*node:method_tool:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:document:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:method_tool:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:document:field_related_content*node:news_article:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:document:field_related_content*node:news_article:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:document:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:news_article:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:document:field_related_content*node:page:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:document:field_related_content*node:page:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:document:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:page:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:document:field_related_content*node:procurement:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:document:field_related_content*node:procurement:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:document:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:procurement:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:document:field_related_content*node:publication:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:document:field_related_content*node:publication:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:document:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:publication:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:document:field_related_content*node:resource:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:document:field_related_content*node:resource:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:document:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:resource:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:document:field_related_content*node:resource_pool_item:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:document:field_related_content*node:resource_pool_item:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:document:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:resource_pool_item:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:document:field_related_content*node:sectoral_area:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:document:field_related_content*node:sectoral_area:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:document:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:sectoral_area:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:document:field_related_content*node:statistical_product:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:document:field_related_content*node:statistical_product:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:document:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:statistical_product:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:document:field_related_content*node:statistics_on_sexual_violence:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:document:field_related_content*node:statistics_on_sexual_violence:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:document:field_related_content" } ] },
    "cer_right" : { "und" : [
        { "path" : "node:statistics_on_sexual_violence:field_related_content" }
      ]
    },
    "rdf_mapping" : []
  }');
  $items['node:document:field_related_content*node:structure:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:document:field_related_content*node:structure:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:document:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:structure:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:document:field_related_content*node:tool_method_category:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:document:field_related_content*node:tool_method_category:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:document:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:tool_method_category:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:document:field_related_content*node:video:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:document:field_related_content*node:video:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:document:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:video:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:document:field_related_content*node:webform:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:document:field_related_content*node:webform:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:document:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:webform:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:gender_equality_policy:field_related_content*node:administrative_data_source:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:gender_equality_policy:field_related_content*node:administrative_data_source:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:gender_equality_policy:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:administrative_data_source:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:gender_equality_policy:field_related_content*node:advanced_page:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:gender_equality_policy:field_related_content*node:advanced_page:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:gender_equality_policy:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:advanced_page:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:gender_equality_policy:field_related_content*node:career_opportunity:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:gender_equality_policy:field_related_content*node:career_opportunity:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:gender_equality_policy:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:career_opportunity:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:gender_equality_policy:field_related_content*node:country_overview:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:gender_equality_policy:field_related_content*node:country_overview:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:gender_equality_policy:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:country_overview:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:gender_equality_policy:field_related_content*node:document:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:gender_equality_policy:field_related_content*node:document:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:gender_equality_policy:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:document:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:gender_equality_policy:field_related_content*node:gender_equality_policy:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:gender_equality_policy:field_related_content*node:gender_equality_policy:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:gender_equality_policy:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:gender_equality_policy:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:gender_equality_policy:field_related_content*node:gender_story:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:gender_equality_policy:field_related_content*node:gender_story:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:gender_equality_policy:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:gender_story:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:gender_equality_policy:field_related_content*node:good_practice:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:gender_equality_policy:field_related_content*node:good_practice:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:gender_equality_policy:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:good_practice:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:gender_equality_policy:field_related_content*node:legal_definition:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:gender_equality_policy:field_related_content*node:legal_definition:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:gender_equality_policy:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:legal_definition:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:gender_equality_policy:field_related_content*node:method_tool:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:gender_equality_policy:field_related_content*node:method_tool:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:gender_equality_policy:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:method_tool:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:gender_equality_policy:field_related_content*node:news_article:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:gender_equality_policy:field_related_content*node:news_article:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:gender_equality_policy:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:news_article:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:gender_equality_policy:field_related_content*node:page:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:gender_equality_policy:field_related_content*node:page:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:gender_equality_policy:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:page:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:gender_equality_policy:field_related_content*node:procurement:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:gender_equality_policy:field_related_content*node:procurement:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:gender_equality_policy:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:procurement:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:gender_equality_policy:field_related_content*node:publication:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:gender_equality_policy:field_related_content*node:publication:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:gender_equality_policy:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:publication:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:gender_equality_policy:field_related_content*node:resource:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:gender_equality_policy:field_related_content*node:resource:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:gender_equality_policy:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:resource:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:gender_equality_policy:field_related_content*node:resource_pool_item:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:gender_equality_policy:field_related_content*node:resource_pool_item:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:gender_equality_policy:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:resource_pool_item:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:gender_equality_policy:field_related_content*node:sectoral_area:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:gender_equality_policy:field_related_content*node:sectoral_area:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:gender_equality_policy:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:sectoral_area:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:gender_equality_policy:field_related_content*node:statistical_product:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:gender_equality_policy:field_related_content*node:statistical_product:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:gender_equality_policy:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:statistical_product:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:gender_equality_policy:field_related_content*node:statistics_on_sexual_violence:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:gender_equality_policy:field_related_content*node:statistics_on_sexual_violence:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:gender_equality_policy:field_related_content" } ] },
    "cer_right" : { "und" : [
        { "path" : "node:statistics_on_sexual_violence:field_related_content" }
      ]
    },
    "rdf_mapping" : []
  }');
  $items['node:gender_equality_policy:field_related_content*node:structure:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:gender_equality_policy:field_related_content*node:structure:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:gender_equality_policy:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:structure:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:gender_equality_policy:field_related_content*node:tool_method_category:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:gender_equality_policy:field_related_content*node:tool_method_category:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:gender_equality_policy:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:tool_method_category:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:gender_equality_policy:field_related_content*node:video:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:gender_equality_policy:field_related_content*node:video:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:gender_equality_policy:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:video:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:gender_equality_policy:field_related_content*node:webform:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:gender_equality_policy:field_related_content*node:webform:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:gender_equality_policy:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:webform:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:gender_story:field_related_content*node:administrative_data_source:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:gender_story:field_related_content*node:administrative_data_source:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:gender_story:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:administrative_data_source:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:gender_story:field_related_content*node:advanced_page:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:gender_story:field_related_content*node:advanced_page:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:gender_story:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:advanced_page:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:gender_story:field_related_content*node:career_opportunity:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:gender_story:field_related_content*node:career_opportunity:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:gender_story:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:career_opportunity:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:gender_story:field_related_content*node:country_overview:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:gender_story:field_related_content*node:country_overview:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:gender_story:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:country_overview:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:gender_story:field_related_content*node:document:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:gender_story:field_related_content*node:document:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:gender_story:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:document:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:gender_story:field_related_content*node:gender_equality_policy:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:gender_story:field_related_content*node:gender_equality_policy:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:gender_story:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:gender_equality_policy:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:gender_story:field_related_content*node:gender_story:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:gender_story:field_related_content*node:gender_story:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:gender_story:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:gender_story:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:gender_story:field_related_content*node:good_practice:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:gender_story:field_related_content*node:good_practice:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:gender_story:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:good_practice:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:gender_story:field_related_content*node:legal_definition:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:gender_story:field_related_content*node:legal_definition:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:gender_story:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:legal_definition:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:gender_story:field_related_content*node:method_tool:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:gender_story:field_related_content*node:method_tool:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:gender_story:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:method_tool:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:gender_story:field_related_content*node:news_article:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:gender_story:field_related_content*node:news_article:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:gender_story:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:news_article:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:gender_story:field_related_content*node:page:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:gender_story:field_related_content*node:page:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:gender_story:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:page:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:gender_story:field_related_content*node:procurement:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:gender_story:field_related_content*node:procurement:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:gender_story:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:procurement:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:gender_story:field_related_content*node:publication:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:gender_story:field_related_content*node:publication:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:gender_story:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:publication:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:gender_story:field_related_content*node:resource:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:gender_story:field_related_content*node:resource:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:gender_story:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:resource:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:gender_story:field_related_content*node:resource_pool_item:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:gender_story:field_related_content*node:resource_pool_item:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:gender_story:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:resource_pool_item:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:gender_story:field_related_content*node:sectoral_area:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:gender_story:field_related_content*node:sectoral_area:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:gender_story:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:sectoral_area:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:gender_story:field_related_content*node:statistical_product:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:gender_story:field_related_content*node:statistical_product:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:gender_story:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:statistical_product:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:gender_story:field_related_content*node:statistics_on_sexual_violence:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:gender_story:field_related_content*node:statistics_on_sexual_violence:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:gender_story:field_related_content" } ] },
    "cer_right" : { "und" : [
        { "path" : "node:statistics_on_sexual_violence:field_related_content" }
      ]
    },
    "rdf_mapping" : []
  }');
  $items['node:gender_story:field_related_content*node:structure:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:gender_story:field_related_content*node:structure:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:gender_story:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:structure:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:gender_story:field_related_content*node:tool_method_category:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:gender_story:field_related_content*node:tool_method_category:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:gender_story:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:tool_method_category:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:gender_story:field_related_content*node:video:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:gender_story:field_related_content*node:video:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:gender_story:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:video:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:gender_story:field_related_content*node:webform:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:gender_story:field_related_content*node:webform:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:gender_story:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:webform:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:good_practice:field_related_content*node:administrative_data_source:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:good_practice:field_related_content*node:administrative_data_source:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:good_practice:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:administrative_data_source:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:good_practice:field_related_content*node:advanced_page:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:good_practice:field_related_content*node:advanced_page:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:good_practice:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:advanced_page:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:good_practice:field_related_content*node:career_opportunity:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:good_practice:field_related_content*node:career_opportunity:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:good_practice:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:career_opportunity:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:good_practice:field_related_content*node:country_overview:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:good_practice:field_related_content*node:country_overview:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:good_practice:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:country_overview:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:good_practice:field_related_content*node:document:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:good_practice:field_related_content*node:document:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:good_practice:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:document:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:good_practice:field_related_content*node:gender_equality_policy:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:good_practice:field_related_content*node:gender_equality_policy:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:good_practice:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:gender_equality_policy:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:good_practice:field_related_content*node:gender_story:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:good_practice:field_related_content*node:gender_story:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:good_practice:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:gender_story:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:good_practice:field_related_content*node:good_practice:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:good_practice:field_related_content*node:good_practice:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:good_practice:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:good_practice:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:good_practice:field_related_content*node:legal_definition:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:good_practice:field_related_content*node:legal_definition:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:good_practice:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:legal_definition:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:good_practice:field_related_content*node:method_tool:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:good_practice:field_related_content*node:method_tool:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:good_practice:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:method_tool:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:good_practice:field_related_content*node:news_article:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:good_practice:field_related_content*node:news_article:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:good_practice:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:news_article:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:good_practice:field_related_content*node:page:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:good_practice:field_related_content*node:page:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:good_practice:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:page:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:good_practice:field_related_content*node:procurement:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:good_practice:field_related_content*node:procurement:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:good_practice:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:procurement:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:good_practice:field_related_content*node:publication:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:good_practice:field_related_content*node:publication:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:good_practice:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:publication:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:good_practice:field_related_content*node:resource:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:good_practice:field_related_content*node:resource:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:good_practice:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:resource:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:good_practice:field_related_content*node:resource_pool_item:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:good_practice:field_related_content*node:resource_pool_item:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:good_practice:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:resource_pool_item:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:good_practice:field_related_content*node:sectoral_area:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:good_practice:field_related_content*node:sectoral_area:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:good_practice:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:sectoral_area:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:good_practice:field_related_content*node:statistical_product:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:good_practice:field_related_content*node:statistical_product:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:good_practice:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:statistical_product:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:good_practice:field_related_content*node:statistics_on_sexual_violence:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:good_practice:field_related_content*node:statistics_on_sexual_violence:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:good_practice:field_related_content" } ] },
    "cer_right" : { "und" : [
        { "path" : "node:statistics_on_sexual_violence:field_related_content" }
      ]
    },
    "rdf_mapping" : []
  }');
  $items['node:good_practice:field_related_content*node:structure:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:good_practice:field_related_content*node:structure:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:good_practice:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:structure:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:good_practice:field_related_content*node:tool_method_category:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:good_practice:field_related_content*node:tool_method_category:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:good_practice:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:tool_method_category:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:good_practice:field_related_content*node:video:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:good_practice:field_related_content*node:video:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:good_practice:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:video:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:good_practice:field_related_content*node:webform:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:good_practice:field_related_content*node:webform:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:good_practice:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:webform:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:legal_definition:field_related_content*node:administrative_data_source:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:legal_definition:field_related_content*node:administrative_data_source:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:legal_definition:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:administrative_data_source:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:legal_definition:field_related_content*node:advanced_page:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:legal_definition:field_related_content*node:advanced_page:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:legal_definition:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:advanced_page:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:legal_definition:field_related_content*node:career_opportunity:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:legal_definition:field_related_content*node:career_opportunity:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:legal_definition:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:career_opportunity:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:legal_definition:field_related_content*node:country_overview:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:legal_definition:field_related_content*node:country_overview:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:legal_definition:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:country_overview:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:legal_definition:field_related_content*node:document:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:legal_definition:field_related_content*node:document:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:legal_definition:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:document:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:legal_definition:field_related_content*node:gender_equality_policy:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:legal_definition:field_related_content*node:gender_equality_policy:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:legal_definition:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:gender_equality_policy:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:legal_definition:field_related_content*node:gender_story:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:legal_definition:field_related_content*node:gender_story:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:legal_definition:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:gender_story:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:legal_definition:field_related_content*node:good_practice:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:legal_definition:field_related_content*node:good_practice:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:legal_definition:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:good_practice:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:legal_definition:field_related_content*node:legal_definition:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:legal_definition:field_related_content*node:legal_definition:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:legal_definition:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:legal_definition:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:legal_definition:field_related_content*node:method_tool:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:legal_definition:field_related_content*node:method_tool:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:legal_definition:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:method_tool:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:legal_definition:field_related_content*node:news_article:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:legal_definition:field_related_content*node:news_article:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:legal_definition:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:news_article:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:legal_definition:field_related_content*node:page:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:legal_definition:field_related_content*node:page:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:legal_definition:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:page:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:legal_definition:field_related_content*node:procurement:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:legal_definition:field_related_content*node:procurement:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:legal_definition:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:procurement:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:legal_definition:field_related_content*node:publication:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:legal_definition:field_related_content*node:publication:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:legal_definition:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:publication:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:legal_definition:field_related_content*node:resource:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:legal_definition:field_related_content*node:resource:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:legal_definition:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:resource:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:legal_definition:field_related_content*node:resource_pool_item:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:legal_definition:field_related_content*node:resource_pool_item:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:legal_definition:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:resource_pool_item:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:legal_definition:field_related_content*node:sectoral_area:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:legal_definition:field_related_content*node:sectoral_area:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:legal_definition:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:sectoral_area:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:legal_definition:field_related_content*node:statistical_product:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:legal_definition:field_related_content*node:statistical_product:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:legal_definition:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:statistical_product:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:legal_definition:field_related_content*node:statistics_on_sexual_violence:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:legal_definition:field_related_content*node:statistics_on_sexual_violence:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:legal_definition:field_related_content" } ] },
    "cer_right" : { "und" : [
        { "path" : "node:statistics_on_sexual_violence:field_related_content" }
      ]
    },
    "rdf_mapping" : []
  }');
  $items['node:legal_definition:field_related_content*node:structure:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:legal_definition:field_related_content*node:structure:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:legal_definition:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:structure:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:legal_definition:field_related_content*node:tool_method_category:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:legal_definition:field_related_content*node:tool_method_category:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:legal_definition:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:tool_method_category:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:legal_definition:field_related_content*node:video:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:legal_definition:field_related_content*node:video:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:legal_definition:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:video:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:legal_definition:field_related_content*node:webform:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:legal_definition:field_related_content*node:webform:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:legal_definition:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:webform:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:method_tool:field_related_content*node:administrative_data_source:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:method_tool:field_related_content*node:administrative_data_source:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:method_tool:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:administrative_data_source:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:method_tool:field_related_content*node:advanced_page:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:method_tool:field_related_content*node:advanced_page:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:method_tool:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:advanced_page:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:method_tool:field_related_content*node:career_opportunity:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:method_tool:field_related_content*node:career_opportunity:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:method_tool:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:career_opportunity:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:method_tool:field_related_content*node:country_overview:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:method_tool:field_related_content*node:country_overview:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:method_tool:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:country_overview:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:method_tool:field_related_content*node:document:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:method_tool:field_related_content*node:document:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:method_tool:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:document:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:method_tool:field_related_content*node:gender_equality_policy:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:method_tool:field_related_content*node:gender_equality_policy:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:method_tool:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:gender_equality_policy:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:method_tool:field_related_content*node:gender_story:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:method_tool:field_related_content*node:gender_story:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:method_tool:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:gender_story:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:method_tool:field_related_content*node:good_practice:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:method_tool:field_related_content*node:good_practice:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:method_tool:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:good_practice:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:method_tool:field_related_content*node:legal_definition:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:method_tool:field_related_content*node:legal_definition:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:method_tool:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:legal_definition:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:method_tool:field_related_content*node:method_tool:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:method_tool:field_related_content*node:method_tool:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:method_tool:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:method_tool:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:method_tool:field_related_content*node:news_article:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:method_tool:field_related_content*node:news_article:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:method_tool:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:news_article:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:method_tool:field_related_content*node:page:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:method_tool:field_related_content*node:page:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:method_tool:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:page:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:method_tool:field_related_content*node:procurement:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:method_tool:field_related_content*node:procurement:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:method_tool:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:procurement:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:method_tool:field_related_content*node:publication:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:method_tool:field_related_content*node:publication:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:method_tool:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:publication:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:method_tool:field_related_content*node:resource:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:method_tool:field_related_content*node:resource:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:method_tool:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:resource:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:method_tool:field_related_content*node:resource_pool_item:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:method_tool:field_related_content*node:resource_pool_item:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:method_tool:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:resource_pool_item:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:method_tool:field_related_content*node:sectoral_area:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:method_tool:field_related_content*node:sectoral_area:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:method_tool:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:sectoral_area:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:method_tool:field_related_content*node:statistical_product:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:method_tool:field_related_content*node:statistical_product:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:method_tool:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:statistical_product:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:method_tool:field_related_content*node:statistics_on_sexual_violence:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:method_tool:field_related_content*node:statistics_on_sexual_violence:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:method_tool:field_related_content" } ] },
    "cer_right" : { "und" : [
        { "path" : "node:statistics_on_sexual_violence:field_related_content" }
      ]
    },
    "rdf_mapping" : []
  }');
  $items['node:method_tool:field_related_content*node:structure:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:method_tool:field_related_content*node:structure:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:method_tool:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:structure:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:method_tool:field_related_content*node:tool_method_category:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:method_tool:field_related_content*node:tool_method_category:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:method_tool:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:tool_method_category:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:method_tool:field_related_content*node:video:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:method_tool:field_related_content*node:video:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:method_tool:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:video:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:method_tool:field_related_content*node:webform:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:method_tool:field_related_content*node:webform:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:method_tool:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:webform:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:news_article:field_related_content*node:administrative_data_source:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:news_article:field_related_content*node:administrative_data_source:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:news_article:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:administrative_data_source:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:news_article:field_related_content*node:advanced_page:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:news_article:field_related_content*node:advanced_page:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:news_article:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:advanced_page:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:news_article:field_related_content*node:career_opportunity:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:news_article:field_related_content*node:career_opportunity:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:news_article:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:career_opportunity:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:news_article:field_related_content*node:country_overview:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:news_article:field_related_content*node:country_overview:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:news_article:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:country_overview:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:news_article:field_related_content*node:document:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:news_article:field_related_content*node:document:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:news_article:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:document:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:news_article:field_related_content*node:gender_equality_policy:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:news_article:field_related_content*node:gender_equality_policy:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:news_article:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:gender_equality_policy:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:news_article:field_related_content*node:gender_story:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:news_article:field_related_content*node:gender_story:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:news_article:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:gender_story:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:news_article:field_related_content*node:good_practice:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:news_article:field_related_content*node:good_practice:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:news_article:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:good_practice:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:news_article:field_related_content*node:legal_definition:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:news_article:field_related_content*node:legal_definition:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:news_article:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:legal_definition:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:news_article:field_related_content*node:method_tool:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:news_article:field_related_content*node:method_tool:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:news_article:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:method_tool:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:news_article:field_related_content*node:news_article:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:news_article:field_related_content*node:news_article:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:news_article:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:news_article:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:news_article:field_related_content*node:page:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:news_article:field_related_content*node:page:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:news_article:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:page:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:news_article:field_related_content*node:procurement:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:news_article:field_related_content*node:procurement:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:news_article:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:procurement:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:news_article:field_related_content*node:publication:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:news_article:field_related_content*node:publication:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:news_article:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:publication:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:news_article:field_related_content*node:resource:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:news_article:field_related_content*node:resource:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:news_article:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:resource:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:news_article:field_related_content*node:resource_pool_item:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:news_article:field_related_content*node:resource_pool_item:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:news_article:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:resource_pool_item:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:news_article:field_related_content*node:sectoral_area:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:news_article:field_related_content*node:sectoral_area:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:news_article:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:sectoral_area:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:news_article:field_related_content*node:statistical_product:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:news_article:field_related_content*node:statistical_product:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:news_article:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:statistical_product:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:news_article:field_related_content*node:statistics_on_sexual_violence:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:news_article:field_related_content*node:statistics_on_sexual_violence:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:news_article:field_related_content" } ] },
    "cer_right" : { "und" : [
        { "path" : "node:statistics_on_sexual_violence:field_related_content" }
      ]
    },
    "rdf_mapping" : []
  }');
  $items['node:news_article:field_related_content*node:structure:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:news_article:field_related_content*node:structure:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:news_article:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:structure:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:news_article:field_related_content*node:tool_method_category:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:news_article:field_related_content*node:tool_method_category:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:news_article:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:tool_method_category:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:news_article:field_related_content*node:video:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:news_article:field_related_content*node:video:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:news_article:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:video:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:news_article:field_related_content*node:webform:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:news_article:field_related_content*node:webform:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:news_article:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:webform:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:page:field_related_content*node:administrative_data_source:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:page:field_related_content*node:administrative_data_source:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:page:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:administrative_data_source:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:page:field_related_content*node:advanced_page:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:page:field_related_content*node:advanced_page:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:page:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:advanced_page:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:page:field_related_content*node:career_opportunity:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:page:field_related_content*node:career_opportunity:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:page:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:career_opportunity:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:page:field_related_content*node:country_overview:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:page:field_related_content*node:country_overview:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:page:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:country_overview:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:page:field_related_content*node:document:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:page:field_related_content*node:document:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:page:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:document:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:page:field_related_content*node:gender_equality_policy:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:page:field_related_content*node:gender_equality_policy:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:page:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:gender_equality_policy:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:page:field_related_content*node:gender_story:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:page:field_related_content*node:gender_story:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:page:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:gender_story:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:page:field_related_content*node:good_practice:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:page:field_related_content*node:good_practice:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:page:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:good_practice:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:page:field_related_content*node:legal_definition:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:page:field_related_content*node:legal_definition:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:page:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:legal_definition:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:page:field_related_content*node:method_tool:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:page:field_related_content*node:method_tool:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:page:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:method_tool:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:page:field_related_content*node:news_article:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:page:field_related_content*node:news_article:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:page:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:news_article:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:page:field_related_content*node:page:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:page:field_related_content*node:page:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:page:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:page:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:page:field_related_content*node:procurement:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:page:field_related_content*node:procurement:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:page:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:procurement:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:page:field_related_content*node:publication:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:page:field_related_content*node:publication:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:page:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:publication:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:page:field_related_content*node:resource:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:page:field_related_content*node:resource:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:page:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:resource:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:page:field_related_content*node:resource_pool_item:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:page:field_related_content*node:resource_pool_item:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:page:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:resource_pool_item:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:page:field_related_content*node:sectoral_area:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:page:field_related_content*node:sectoral_area:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:page:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:sectoral_area:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:page:field_related_content*node:statistical_product:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:page:field_related_content*node:statistical_product:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:page:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:statistical_product:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:page:field_related_content*node:statistics_on_sexual_violence:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:page:field_related_content*node:statistics_on_sexual_violence:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:page:field_related_content" } ] },
    "cer_right" : { "und" : [
        { "path" : "node:statistics_on_sexual_violence:field_related_content" }
      ]
    },
    "rdf_mapping" : []
  }');
  $items['node:page:field_related_content*node:structure:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:page:field_related_content*node:structure:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:page:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:structure:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:page:field_related_content*node:tool_method_category:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:page:field_related_content*node:tool_method_category:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:page:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:tool_method_category:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:page:field_related_content*node:video:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:page:field_related_content*node:video:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:page:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:video:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:page:field_related_content*node:webform:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:page:field_related_content*node:webform:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:page:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:webform:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:procurement:field_related_content*node:administrative_data_source:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:procurement:field_related_content*node:administrative_data_source:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:procurement:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:administrative_data_source:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:procurement:field_related_content*node:advanced_page:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:procurement:field_related_content*node:advanced_page:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:procurement:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:advanced_page:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:procurement:field_related_content*node:career_opportunity:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:procurement:field_related_content*node:career_opportunity:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:procurement:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:career_opportunity:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:procurement:field_related_content*node:country_overview:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:procurement:field_related_content*node:country_overview:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:procurement:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:country_overview:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:procurement:field_related_content*node:document:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:procurement:field_related_content*node:document:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:procurement:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:document:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:procurement:field_related_content*node:gender_equality_policy:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:procurement:field_related_content*node:gender_equality_policy:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:procurement:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:gender_equality_policy:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:procurement:field_related_content*node:gender_story:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:procurement:field_related_content*node:gender_story:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:procurement:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:gender_story:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:procurement:field_related_content*node:good_practice:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:procurement:field_related_content*node:good_practice:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:procurement:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:good_practice:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:procurement:field_related_content*node:legal_definition:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:procurement:field_related_content*node:legal_definition:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:procurement:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:legal_definition:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:procurement:field_related_content*node:method_tool:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:procurement:field_related_content*node:method_tool:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:procurement:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:method_tool:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:procurement:field_related_content*node:news_article:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:procurement:field_related_content*node:news_article:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:procurement:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:news_article:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:procurement:field_related_content*node:page:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:procurement:field_related_content*node:page:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:procurement:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:page:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:procurement:field_related_content*node:procurement:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:procurement:field_related_content*node:procurement:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:procurement:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:procurement:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:procurement:field_related_content*node:publication:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:procurement:field_related_content*node:publication:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:procurement:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:publication:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:procurement:field_related_content*node:resource:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:procurement:field_related_content*node:resource:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:procurement:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:resource:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:procurement:field_related_content*node:resource_pool_item:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:procurement:field_related_content*node:resource_pool_item:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:procurement:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:resource_pool_item:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:procurement:field_related_content*node:sectoral_area:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:procurement:field_related_content*node:sectoral_area:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:procurement:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:sectoral_area:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:procurement:field_related_content*node:statistical_product:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:procurement:field_related_content*node:statistical_product:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:procurement:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:statistical_product:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:procurement:field_related_content*node:statistics_on_sexual_violence:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:procurement:field_related_content*node:statistics_on_sexual_violence:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:procurement:field_related_content" } ] },
    "cer_right" : { "und" : [
        { "path" : "node:statistics_on_sexual_violence:field_related_content" }
      ]
    },
    "rdf_mapping" : []
  }');
  $items['node:procurement:field_related_content*node:structure:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:procurement:field_related_content*node:structure:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:procurement:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:structure:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:procurement:field_related_content*node:tool_method_category:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:procurement:field_related_content*node:tool_method_category:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:procurement:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:tool_method_category:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:procurement:field_related_content*node:video:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:procurement:field_related_content*node:video:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:procurement:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:video:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:procurement:field_related_content*node:webform:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:procurement:field_related_content*node:webform:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:procurement:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:webform:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:publication:field_related_content*node:administrative_data_source:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:publication:field_related_content*node:administrative_data_source:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:publication:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:administrative_data_source:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:publication:field_related_content*node:advanced_page:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:publication:field_related_content*node:advanced_page:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:publication:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:advanced_page:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:publication:field_related_content*node:career_opportunity:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:publication:field_related_content*node:career_opportunity:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:publication:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:career_opportunity:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:publication:field_related_content*node:country_overview:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:publication:field_related_content*node:country_overview:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:publication:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:country_overview:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:publication:field_related_content*node:document:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:publication:field_related_content*node:document:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:publication:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:document:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:publication:field_related_content*node:gender_equality_policy:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:publication:field_related_content*node:gender_equality_policy:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:publication:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:gender_equality_policy:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:publication:field_related_content*node:gender_story:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:publication:field_related_content*node:gender_story:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:publication:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:gender_story:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:publication:field_related_content*node:good_practice:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:publication:field_related_content*node:good_practice:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:publication:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:good_practice:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:publication:field_related_content*node:legal_definition:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:publication:field_related_content*node:legal_definition:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:publication:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:legal_definition:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:publication:field_related_content*node:method_tool:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:publication:field_related_content*node:method_tool:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:publication:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:method_tool:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:publication:field_related_content*node:news_article:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:publication:field_related_content*node:news_article:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:publication:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:news_article:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:publication:field_related_content*node:page:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:publication:field_related_content*node:page:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:publication:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:page:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:publication:field_related_content*node:procurement:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:publication:field_related_content*node:procurement:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:publication:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:procurement:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:publication:field_related_content*node:publication:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:publication:field_related_content*node:publication:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:publication:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:publication:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:publication:field_related_content*node:resource:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:publication:field_related_content*node:resource:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:publication:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:resource:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:publication:field_related_content*node:resource_pool_item:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:publication:field_related_content*node:resource_pool_item:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:publication:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:resource_pool_item:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:publication:field_related_content*node:sectoral_area:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:publication:field_related_content*node:sectoral_area:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:publication:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:sectoral_area:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:publication:field_related_content*node:statistical_product:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:publication:field_related_content*node:statistical_product:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:publication:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:statistical_product:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:publication:field_related_content*node:statistics_on_sexual_violence:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:publication:field_related_content*node:statistics_on_sexual_violence:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:publication:field_related_content" } ] },
    "cer_right" : { "und" : [
        { "path" : "node:statistics_on_sexual_violence:field_related_content" }
      ]
    },
    "rdf_mapping" : []
  }');
  $items['node:publication:field_related_content*node:structure:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:publication:field_related_content*node:structure:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:publication:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:structure:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:publication:field_related_content*node:tool_method_category:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:publication:field_related_content*node:tool_method_category:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:publication:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:tool_method_category:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:publication:field_related_content*node:video:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:publication:field_related_content*node:video:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:publication:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:video:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:publication:field_related_content*node:webform:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:publication:field_related_content*node:webform:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:publication:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:webform:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:resource:field_related_content*node:administrative_data_source:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:resource:field_related_content*node:administrative_data_source:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:resource:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:administrative_data_source:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:resource:field_related_content*node:advanced_page:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:resource:field_related_content*node:advanced_page:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:resource:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:advanced_page:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:resource:field_related_content*node:career_opportunity:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:resource:field_related_content*node:career_opportunity:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:resource:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:career_opportunity:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:resource:field_related_content*node:country_overview:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:resource:field_related_content*node:country_overview:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:resource:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:country_overview:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:resource:field_related_content*node:document:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:resource:field_related_content*node:document:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:resource:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:document:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:resource:field_related_content*node:gender_equality_policy:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:resource:field_related_content*node:gender_equality_policy:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:resource:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:gender_equality_policy:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:resource:field_related_content*node:gender_story:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:resource:field_related_content*node:gender_story:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:resource:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:gender_story:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:resource:field_related_content*node:good_practice:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:resource:field_related_content*node:good_practice:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:resource:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:good_practice:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:resource:field_related_content*node:legal_definition:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:resource:field_related_content*node:legal_definition:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:resource:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:legal_definition:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:resource:field_related_content*node:method_tool:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:resource:field_related_content*node:method_tool:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:resource:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:method_tool:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:resource:field_related_content*node:news_article:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:resource:field_related_content*node:news_article:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:resource:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:news_article:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:resource:field_related_content*node:page:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:resource:field_related_content*node:page:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:resource:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:page:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:resource:field_related_content*node:procurement:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:resource:field_related_content*node:procurement:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:resource:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:procurement:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:resource:field_related_content*node:publication:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:resource:field_related_content*node:publication:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:resource:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:publication:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:resource:field_related_content*node:resource:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:resource:field_related_content*node:resource:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:resource:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:resource:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:resource:field_related_content*node:resource_pool_item:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:resource:field_related_content*node:resource_pool_item:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:resource:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:resource_pool_item:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:resource:field_related_content*node:sectoral_area:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:resource:field_related_content*node:sectoral_area:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:resource:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:sectoral_area:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:resource:field_related_content*node:statistical_product:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:resource:field_related_content*node:statistical_product:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:resource:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:statistical_product:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:resource:field_related_content*node:statistics_on_sexual_violence:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:resource:field_related_content*node:statistics_on_sexual_violence:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:resource:field_related_content" } ] },
    "cer_right" : { "und" : [
        { "path" : "node:statistics_on_sexual_violence:field_related_content" }
      ]
    },
    "rdf_mapping" : []
  }');
  $items['node:resource:field_related_content*node:structure:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:resource:field_related_content*node:structure:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:resource:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:structure:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:resource:field_related_content*node:tool_method_category:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:resource:field_related_content*node:tool_method_category:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:resource:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:tool_method_category:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:resource:field_related_content*node:video:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:resource:field_related_content*node:video:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:resource:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:video:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:resource:field_related_content*node:webform:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:resource:field_related_content*node:webform:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:resource:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:webform:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:resource_pool_item:field_related_content*node:administrative_data_source:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:resource_pool_item:field_related_content*node:administrative_data_source:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:resource_pool_item:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:administrative_data_source:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:resource_pool_item:field_related_content*node:advanced_page:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:resource_pool_item:field_related_content*node:advanced_page:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:resource_pool_item:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:advanced_page:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:resource_pool_item:field_related_content*node:career_opportunity:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:resource_pool_item:field_related_content*node:career_opportunity:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:resource_pool_item:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:career_opportunity:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:resource_pool_item:field_related_content*node:country_overview:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:resource_pool_item:field_related_content*node:country_overview:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:resource_pool_item:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:country_overview:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:resource_pool_item:field_related_content*node:document:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:resource_pool_item:field_related_content*node:document:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:resource_pool_item:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:document:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:resource_pool_item:field_related_content*node:gender_equality_policy:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:resource_pool_item:field_related_content*node:gender_equality_policy:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:resource_pool_item:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:gender_equality_policy:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:resource_pool_item:field_related_content*node:gender_story:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:resource_pool_item:field_related_content*node:gender_story:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:resource_pool_item:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:gender_story:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:resource_pool_item:field_related_content*node:good_practice:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:resource_pool_item:field_related_content*node:good_practice:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:resource_pool_item:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:good_practice:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:resource_pool_item:field_related_content*node:legal_definition:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:resource_pool_item:field_related_content*node:legal_definition:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:resource_pool_item:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:legal_definition:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:resource_pool_item:field_related_content*node:method_tool:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:resource_pool_item:field_related_content*node:method_tool:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:resource_pool_item:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:method_tool:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:resource_pool_item:field_related_content*node:news_article:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:resource_pool_item:field_related_content*node:news_article:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:resource_pool_item:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:news_article:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:resource_pool_item:field_related_content*node:page:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:resource_pool_item:field_related_content*node:page:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:resource_pool_item:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:page:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:resource_pool_item:field_related_content*node:procurement:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:resource_pool_item:field_related_content*node:procurement:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:resource_pool_item:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:procurement:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:resource_pool_item:field_related_content*node:publication:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:resource_pool_item:field_related_content*node:publication:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:resource_pool_item:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:publication:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:resource_pool_item:field_related_content*node:resource:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:resource_pool_item:field_related_content*node:resource:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:resource_pool_item:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:resource:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:resource_pool_item:field_related_content*node:resource_pool_item:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:resource_pool_item:field_related_content*node:resource_pool_item:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:resource_pool_item:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:resource_pool_item:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:resource_pool_item:field_related_content*node:sectoral_area:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:resource_pool_item:field_related_content*node:sectoral_area:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:resource_pool_item:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:sectoral_area:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:resource_pool_item:field_related_content*node:statistical_product:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:resource_pool_item:field_related_content*node:statistical_product:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:resource_pool_item:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:statistical_product:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:resource_pool_item:field_related_content*node:statistics_on_sexual_violence:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:resource_pool_item:field_related_content*node:statistics_on_sexual_violence:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:resource_pool_item:field_related_content" } ] },
    "cer_right" : { "und" : [
        { "path" : "node:statistics_on_sexual_violence:field_related_content" }
      ]
    },
    "rdf_mapping" : []
  }');
  $items['node:resource_pool_item:field_related_content*node:structure:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:resource_pool_item:field_related_content*node:structure:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:resource_pool_item:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:structure:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:resource_pool_item:field_related_content*node:tool_method_category:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:resource_pool_item:field_related_content*node:tool_method_category:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:resource_pool_item:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:tool_method_category:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:resource_pool_item:field_related_content*node:video:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:resource_pool_item:field_related_content*node:video:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:resource_pool_item:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:video:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:resource_pool_item:field_related_content*node:webform:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:resource_pool_item:field_related_content*node:webform:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:resource_pool_item:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:webform:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:sectoral_area:field_related_content*node:administrative_data_source:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:sectoral_area:field_related_content*node:administrative_data_source:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:sectoral_area:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:administrative_data_source:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:sectoral_area:field_related_content*node:advanced_page:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:sectoral_area:field_related_content*node:advanced_page:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:sectoral_area:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:advanced_page:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:sectoral_area:field_related_content*node:career_opportunity:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:sectoral_area:field_related_content*node:career_opportunity:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:sectoral_area:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:career_opportunity:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:sectoral_area:field_related_content*node:country_overview:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:sectoral_area:field_related_content*node:country_overview:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:sectoral_area:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:country_overview:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:sectoral_area:field_related_content*node:document:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:sectoral_area:field_related_content*node:document:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:sectoral_area:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:document:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:sectoral_area:field_related_content*node:gender_equality_policy:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:sectoral_area:field_related_content*node:gender_equality_policy:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:sectoral_area:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:gender_equality_policy:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:sectoral_area:field_related_content*node:gender_story:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:sectoral_area:field_related_content*node:gender_story:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:sectoral_area:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:gender_story:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:sectoral_area:field_related_content*node:good_practice:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:sectoral_area:field_related_content*node:good_practice:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:sectoral_area:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:good_practice:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:sectoral_area:field_related_content*node:legal_definition:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:sectoral_area:field_related_content*node:legal_definition:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:sectoral_area:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:legal_definition:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:sectoral_area:field_related_content*node:method_tool:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:sectoral_area:field_related_content*node:method_tool:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:sectoral_area:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:method_tool:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:sectoral_area:field_related_content*node:news_article:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:sectoral_area:field_related_content*node:news_article:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:sectoral_area:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:news_article:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:sectoral_area:field_related_content*node:page:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:sectoral_area:field_related_content*node:page:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:sectoral_area:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:page:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:sectoral_area:field_related_content*node:procurement:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:sectoral_area:field_related_content*node:procurement:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:sectoral_area:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:procurement:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:sectoral_area:field_related_content*node:publication:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:sectoral_area:field_related_content*node:publication:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:sectoral_area:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:publication:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:sectoral_area:field_related_content*node:resource:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:sectoral_area:field_related_content*node:resource:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:sectoral_area:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:resource:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:sectoral_area:field_related_content*node:resource_pool_item:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:sectoral_area:field_related_content*node:resource_pool_item:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:sectoral_area:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:resource_pool_item:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:sectoral_area:field_related_content*node:sectoral_area:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:sectoral_area:field_related_content*node:sectoral_area:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:sectoral_area:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:sectoral_area:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:sectoral_area:field_related_content*node:statistical_product:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:sectoral_area:field_related_content*node:statistical_product:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:sectoral_area:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:statistical_product:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:sectoral_area:field_related_content*node:statistics_on_sexual_violence:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:sectoral_area:field_related_content*node:statistics_on_sexual_violence:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:sectoral_area:field_related_content" } ] },
    "cer_right" : { "und" : [
        { "path" : "node:statistics_on_sexual_violence:field_related_content" }
      ]
    },
    "rdf_mapping" : []
  }');
  $items['node:sectoral_area:field_related_content*node:structure:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:sectoral_area:field_related_content*node:structure:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:sectoral_area:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:structure:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:sectoral_area:field_related_content*node:tool_method_category:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:sectoral_area:field_related_content*node:tool_method_category:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:sectoral_area:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:tool_method_category:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:sectoral_area:field_related_content*node:video:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:sectoral_area:field_related_content*node:video:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:sectoral_area:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:video:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:sectoral_area:field_related_content*node:webform:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:sectoral_area:field_related_content*node:webform:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:sectoral_area:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:webform:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:statistical_product:field_related_content*node:administrative_data_source:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:statistical_product:field_related_content*node:administrative_data_source:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:statistical_product:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:administrative_data_source:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:statistical_product:field_related_content*node:advanced_page:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:statistical_product:field_related_content*node:advanced_page:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:statistical_product:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:advanced_page:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:statistical_product:field_related_content*node:career_opportunity:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:statistical_product:field_related_content*node:career_opportunity:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:statistical_product:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:career_opportunity:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:statistical_product:field_related_content*node:country_overview:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:statistical_product:field_related_content*node:country_overview:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:statistical_product:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:country_overview:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:statistical_product:field_related_content*node:document:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:statistical_product:field_related_content*node:document:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:statistical_product:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:document:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:statistical_product:field_related_content*node:gender_equality_policy:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:statistical_product:field_related_content*node:gender_equality_policy:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:statistical_product:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:gender_equality_policy:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:statistical_product:field_related_content*node:gender_story:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:statistical_product:field_related_content*node:gender_story:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:statistical_product:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:gender_story:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:statistical_product:field_related_content*node:good_practice:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:statistical_product:field_related_content*node:good_practice:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:statistical_product:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:good_practice:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:statistical_product:field_related_content*node:legal_definition:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:statistical_product:field_related_content*node:legal_definition:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:statistical_product:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:legal_definition:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:statistical_product:field_related_content*node:method_tool:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:statistical_product:field_related_content*node:method_tool:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:statistical_product:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:method_tool:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:statistical_product:field_related_content*node:news_article:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:statistical_product:field_related_content*node:news_article:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:statistical_product:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:news_article:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:statistical_product:field_related_content*node:page:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:statistical_product:field_related_content*node:page:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:statistical_product:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:page:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:statistical_product:field_related_content*node:procurement:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:statistical_product:field_related_content*node:procurement:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:statistical_product:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:procurement:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:statistical_product:field_related_content*node:publication:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:statistical_product:field_related_content*node:publication:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:statistical_product:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:publication:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:statistical_product:field_related_content*node:resource:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:statistical_product:field_related_content*node:resource:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:statistical_product:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:resource:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:statistical_product:field_related_content*node:resource_pool_item:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:statistical_product:field_related_content*node:resource_pool_item:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:statistical_product:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:resource_pool_item:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:statistical_product:field_related_content*node:sectoral_area:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:statistical_product:field_related_content*node:sectoral_area:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:statistical_product:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:sectoral_area:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:statistical_product:field_related_content*node:statistical_product:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:statistical_product:field_related_content*node:statistical_product:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:statistical_product:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:statistical_product:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:statistical_product:field_related_content*node:statistics_on_sexual_violence:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:statistical_product:field_related_content*node:statistics_on_sexual_violence:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:statistical_product:field_related_content" } ] },
    "cer_right" : { "und" : [
        { "path" : "node:statistics_on_sexual_violence:field_related_content" }
      ]
    },
    "rdf_mapping" : []
  }');
  $items['node:statistical_product:field_related_content*node:structure:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:statistical_product:field_related_content*node:structure:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:statistical_product:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:structure:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:statistical_product:field_related_content*node:tool_method_category:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:statistical_product:field_related_content*node:tool_method_category:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:statistical_product:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:tool_method_category:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:statistical_product:field_related_content*node:video:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:statistical_product:field_related_content*node:video:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:statistical_product:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:video:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:statistical_product:field_related_content*node:webform:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:statistical_product:field_related_content*node:webform:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:statistical_product:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:webform:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:statistics_on_sexual_violence:field_related_content*node:administrative_data_source:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:statistics_on_sexual_violence:field_related_content*node:administrative_data_source:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [
        { "path" : "node:statistics_on_sexual_violence:field_related_content" }
      ]
    },
    "cer_right" : { "und" : [ { "path" : "node:administrative_data_source:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:statistics_on_sexual_violence:field_related_content*node:advanced_page:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:statistics_on_sexual_violence:field_related_content*node:advanced_page:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [
        { "path" : "node:statistics_on_sexual_violence:field_related_content" }
      ]
    },
    "cer_right" : { "und" : [ { "path" : "node:advanced_page:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:statistics_on_sexual_violence:field_related_content*node:career_opportunity:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:statistics_on_sexual_violence:field_related_content*node:career_opportunity:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [
        { "path" : "node:statistics_on_sexual_violence:field_related_content" }
      ]
    },
    "cer_right" : { "und" : [ { "path" : "node:career_opportunity:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:statistics_on_sexual_violence:field_related_content*node:country_overview:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:statistics_on_sexual_violence:field_related_content*node:country_overview:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [
        { "path" : "node:statistics_on_sexual_violence:field_related_content" }
      ]
    },
    "cer_right" : { "und" : [ { "path" : "node:country_overview:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:statistics_on_sexual_violence:field_related_content*node:document:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:statistics_on_sexual_violence:field_related_content*node:document:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [
        { "path" : "node:statistics_on_sexual_violence:field_related_content" }
      ]
    },
    "cer_right" : { "und" : [ { "path" : "node:document:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:statistics_on_sexual_violence:field_related_content*node:gender_equality_policy:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:statistics_on_sexual_violence:field_related_content*node:gender_equality_policy:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [
        { "path" : "node:statistics_on_sexual_violence:field_related_content" }
      ]
    },
    "cer_right" : { "und" : [ { "path" : "node:gender_equality_policy:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:statistics_on_sexual_violence:field_related_content*node:gender_story:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:statistics_on_sexual_violence:field_related_content*node:gender_story:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [
        { "path" : "node:statistics_on_sexual_violence:field_related_content" }
      ]
    },
    "cer_right" : { "und" : [ { "path" : "node:gender_story:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:statistics_on_sexual_violence:field_related_content*node:good_practice:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:statistics_on_sexual_violence:field_related_content*node:good_practice:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [
        { "path" : "node:statistics_on_sexual_violence:field_related_content" }
      ]
    },
    "cer_right" : { "und" : [ { "path" : "node:good_practice:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:statistics_on_sexual_violence:field_related_content*node:legal_definition:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:statistics_on_sexual_violence:field_related_content*node:legal_definition:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [
        { "path" : "node:statistics_on_sexual_violence:field_related_content" }
      ]
    },
    "cer_right" : { "und" : [ { "path" : "node:legal_definition:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:statistics_on_sexual_violence:field_related_content*node:method_tool:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:statistics_on_sexual_violence:field_related_content*node:method_tool:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [
        { "path" : "node:statistics_on_sexual_violence:field_related_content" }
      ]
    },
    "cer_right" : { "und" : [ { "path" : "node:method_tool:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:statistics_on_sexual_violence:field_related_content*node:news_article:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:statistics_on_sexual_violence:field_related_content*node:news_article:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [
        { "path" : "node:statistics_on_sexual_violence:field_related_content" }
      ]
    },
    "cer_right" : { "und" : [ { "path" : "node:news_article:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:statistics_on_sexual_violence:field_related_content*node:page:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:statistics_on_sexual_violence:field_related_content*node:page:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [
        { "path" : "node:statistics_on_sexual_violence:field_related_content" }
      ]
    },
    "cer_right" : { "und" : [ { "path" : "node:page:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:statistics_on_sexual_violence:field_related_content*node:procurement:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:statistics_on_sexual_violence:field_related_content*node:procurement:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [
        { "path" : "node:statistics_on_sexual_violence:field_related_content" }
      ]
    },
    "cer_right" : { "und" : [ { "path" : "node:procurement:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:statistics_on_sexual_violence:field_related_content*node:publication:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:statistics_on_sexual_violence:field_related_content*node:publication:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [
        { "path" : "node:statistics_on_sexual_violence:field_related_content" }
      ]
    },
    "cer_right" : { "und" : [ { "path" : "node:publication:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:statistics_on_sexual_violence:field_related_content*node:resource:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:statistics_on_sexual_violence:field_related_content*node:resource:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [
        { "path" : "node:statistics_on_sexual_violence:field_related_content" }
      ]
    },
    "cer_right" : { "und" : [ { "path" : "node:resource:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:statistics_on_sexual_violence:field_related_content*node:resource_pool_item:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:statistics_on_sexual_violence:field_related_content*node:resource_pool_item:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [
        { "path" : "node:statistics_on_sexual_violence:field_related_content" }
      ]
    },
    "cer_right" : { "und" : [ { "path" : "node:resource_pool_item:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:statistics_on_sexual_violence:field_related_content*node:sectoral_area:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:statistics_on_sexual_violence:field_related_content*node:sectoral_area:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [
        { "path" : "node:statistics_on_sexual_violence:field_related_content" }
      ]
    },
    "cer_right" : { "und" : [ { "path" : "node:sectoral_area:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:statistics_on_sexual_violence:field_related_content*node:statistical_product:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:statistics_on_sexual_violence:field_related_content*node:statistical_product:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [
        { "path" : "node:statistics_on_sexual_violence:field_related_content" }
      ]
    },
    "cer_right" : { "und" : [ { "path" : "node:statistical_product:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:statistics_on_sexual_violence:field_related_content*node:statistics_on_sexual_violence:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:statistics_on_sexual_violence:field_related_content*node:statistics_on_sexual_violence:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [
        { "path" : "node:statistics_on_sexual_violence:field_related_content" }
      ]
    },
    "cer_right" : { "und" : [
        { "path" : "node:statistics_on_sexual_violence:field_related_content" }
      ]
    },
    "rdf_mapping" : []
  }');
  $items['node:statistics_on_sexual_violence:field_related_content*node:structure:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:statistics_on_sexual_violence:field_related_content*node:structure:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [
        { "path" : "node:statistics_on_sexual_violence:field_related_content" }
      ]
    },
    "cer_right" : { "und" : [ { "path" : "node:structure:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:statistics_on_sexual_violence:field_related_content*node:tool_method_category:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:statistics_on_sexual_violence:field_related_content*node:tool_method_category:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [
        { "path" : "node:statistics_on_sexual_violence:field_related_content" }
      ]
    },
    "cer_right" : { "und" : [ { "path" : "node:tool_method_category:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:statistics_on_sexual_violence:field_related_content*node:video:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:statistics_on_sexual_violence:field_related_content*node:video:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [
        { "path" : "node:statistics_on_sexual_violence:field_related_content" }
      ]
    },
    "cer_right" : { "und" : [ { "path" : "node:video:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:statistics_on_sexual_violence:field_related_content*node:webform:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:statistics_on_sexual_violence:field_related_content*node:webform:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [
        { "path" : "node:statistics_on_sexual_violence:field_related_content" }
      ]
    },
    "cer_right" : { "und" : [ { "path" : "node:webform:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:structure:field_related_content*node:administrative_data_source:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:structure:field_related_content*node:administrative_data_source:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:structure:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:administrative_data_source:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:structure:field_related_content*node:advanced_page:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:structure:field_related_content*node:advanced_page:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:structure:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:advanced_page:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:structure:field_related_content*node:career_opportunity:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:structure:field_related_content*node:career_opportunity:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:structure:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:career_opportunity:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:structure:field_related_content*node:country_overview:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:structure:field_related_content*node:country_overview:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:structure:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:country_overview:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:structure:field_related_content*node:document:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:structure:field_related_content*node:document:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:structure:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:document:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:structure:field_related_content*node:gender_equality_policy:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:structure:field_related_content*node:gender_equality_policy:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:structure:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:gender_equality_policy:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:structure:field_related_content*node:gender_story:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:structure:field_related_content*node:gender_story:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:structure:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:gender_story:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:structure:field_related_content*node:good_practice:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:structure:field_related_content*node:good_practice:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:structure:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:good_practice:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:structure:field_related_content*node:legal_definition:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:structure:field_related_content*node:legal_definition:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:structure:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:legal_definition:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:structure:field_related_content*node:method_tool:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:structure:field_related_content*node:method_tool:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:structure:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:method_tool:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:structure:field_related_content*node:news_article:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:structure:field_related_content*node:news_article:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:structure:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:news_article:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:structure:field_related_content*node:page:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:structure:field_related_content*node:page:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:structure:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:page:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:structure:field_related_content*node:procurement:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:structure:field_related_content*node:procurement:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:structure:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:procurement:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:structure:field_related_content*node:publication:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:structure:field_related_content*node:publication:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:structure:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:publication:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:structure:field_related_content*node:resource:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:structure:field_related_content*node:resource:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:structure:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:resource:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:structure:field_related_content*node:resource_pool_item:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:structure:field_related_content*node:resource_pool_item:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:structure:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:resource_pool_item:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:structure:field_related_content*node:sectoral_area:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:structure:field_related_content*node:sectoral_area:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:structure:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:sectoral_area:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:structure:field_related_content*node:statistical_product:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:structure:field_related_content*node:statistical_product:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:structure:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:statistical_product:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:structure:field_related_content*node:statistics_on_sexual_violence:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:structure:field_related_content*node:statistics_on_sexual_violence:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:structure:field_related_content" } ] },
    "cer_right" : { "und" : [
        { "path" : "node:statistics_on_sexual_violence:field_related_content" }
      ]
    },
    "rdf_mapping" : []
  }');
  $items['node:structure:field_related_content*node:structure:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:structure:field_related_content*node:structure:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:structure:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:structure:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:structure:field_related_content*node:tool_method_category:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:structure:field_related_content*node:tool_method_category:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:structure:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:tool_method_category:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:structure:field_related_content*node:video:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:structure:field_related_content*node:video:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:structure:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:video:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:structure:field_related_content*node:webform:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:structure:field_related_content*node:webform:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:structure:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:webform:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:tool_method_category:field_related_content*node:administrative_data_source:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:tool_method_category:field_related_content*node:administrative_data_source:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:tool_method_category:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:administrative_data_source:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:tool_method_category:field_related_content*node:advanced_page:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:tool_method_category:field_related_content*node:advanced_page:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:tool_method_category:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:advanced_page:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:tool_method_category:field_related_content*node:career_opportunity:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:tool_method_category:field_related_content*node:career_opportunity:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:tool_method_category:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:career_opportunity:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:tool_method_category:field_related_content*node:country_overview:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:tool_method_category:field_related_content*node:country_overview:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:tool_method_category:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:country_overview:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:tool_method_category:field_related_content*node:document:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:tool_method_category:field_related_content*node:document:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:tool_method_category:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:document:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:tool_method_category:field_related_content*node:gender_equality_policy:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:tool_method_category:field_related_content*node:gender_equality_policy:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:tool_method_category:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:gender_equality_policy:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:tool_method_category:field_related_content*node:gender_story:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:tool_method_category:field_related_content*node:gender_story:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:tool_method_category:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:gender_story:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:tool_method_category:field_related_content*node:good_practice:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:tool_method_category:field_related_content*node:good_practice:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:tool_method_category:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:good_practice:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:tool_method_category:field_related_content*node:legal_definition:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:tool_method_category:field_related_content*node:legal_definition:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:tool_method_category:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:legal_definition:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:tool_method_category:field_related_content*node:method_tool:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:tool_method_category:field_related_content*node:method_tool:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:tool_method_category:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:method_tool:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:tool_method_category:field_related_content*node:news_article:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:tool_method_category:field_related_content*node:news_article:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:tool_method_category:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:news_article:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:tool_method_category:field_related_content*node:page:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:tool_method_category:field_related_content*node:page:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:tool_method_category:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:page:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:tool_method_category:field_related_content*node:procurement:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:tool_method_category:field_related_content*node:procurement:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:tool_method_category:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:procurement:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:tool_method_category:field_related_content*node:publication:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:tool_method_category:field_related_content*node:publication:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:tool_method_category:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:publication:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:tool_method_category:field_related_content*node:resource:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:tool_method_category:field_related_content*node:resource:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:tool_method_category:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:resource:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:tool_method_category:field_related_content*node:resource_pool_item:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:tool_method_category:field_related_content*node:resource_pool_item:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:tool_method_category:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:resource_pool_item:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:tool_method_category:field_related_content*node:sectoral_area:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:tool_method_category:field_related_content*node:sectoral_area:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:tool_method_category:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:sectoral_area:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:tool_method_category:field_related_content*node:statistical_product:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:tool_method_category:field_related_content*node:statistical_product:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:tool_method_category:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:statistical_product:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:tool_method_category:field_related_content*node:statistics_on_sexual_violence:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:tool_method_category:field_related_content*node:statistics_on_sexual_violence:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:tool_method_category:field_related_content" } ] },
    "cer_right" : { "und" : [
        { "path" : "node:statistics_on_sexual_violence:field_related_content" }
      ]
    },
    "rdf_mapping" : []
  }');
  $items['node:tool_method_category:field_related_content*node:structure:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:tool_method_category:field_related_content*node:structure:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:tool_method_category:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:structure:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:tool_method_category:field_related_content*node:tool_method_category:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:tool_method_category:field_related_content*node:tool_method_category:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:tool_method_category:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:tool_method_category:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:tool_method_category:field_related_content*node:video:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:tool_method_category:field_related_content*node:video:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:tool_method_category:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:video:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:tool_method_category:field_related_content*node:webform:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:tool_method_category:field_related_content*node:webform:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:tool_method_category:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:webform:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:video:field_related_content*node:administrative_data_source:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:video:field_related_content*node:administrative_data_source:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:video:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:administrative_data_source:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:video:field_related_content*node:advanced_page:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:video:field_related_content*node:advanced_page:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:video:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:advanced_page:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:video:field_related_content*node:career_opportunity:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:video:field_related_content*node:career_opportunity:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:video:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:career_opportunity:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:video:field_related_content*node:country_overview:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:video:field_related_content*node:country_overview:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:video:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:country_overview:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:video:field_related_content*node:document:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:video:field_related_content*node:document:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:video:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:document:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:video:field_related_content*node:gender_equality_policy:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:video:field_related_content*node:gender_equality_policy:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:video:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:gender_equality_policy:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:video:field_related_content*node:gender_story:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:video:field_related_content*node:gender_story:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:video:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:gender_story:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:video:field_related_content*node:good_practice:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:video:field_related_content*node:good_practice:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:video:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:good_practice:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:video:field_related_content*node:legal_definition:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:video:field_related_content*node:legal_definition:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:video:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:legal_definition:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:video:field_related_content*node:method_tool:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:video:field_related_content*node:method_tool:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:video:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:method_tool:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:video:field_related_content*node:news_article:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:video:field_related_content*node:news_article:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:video:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:news_article:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:video:field_related_content*node:page:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:video:field_related_content*node:page:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:video:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:page:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:video:field_related_content*node:procurement:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:video:field_related_content*node:procurement:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:video:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:procurement:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:video:field_related_content*node:publication:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:video:field_related_content*node:publication:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:video:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:publication:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:video:field_related_content*node:resource:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:video:field_related_content*node:resource:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:video:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:resource:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:video:field_related_content*node:resource_pool_item:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:video:field_related_content*node:resource_pool_item:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:video:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:resource_pool_item:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:video:field_related_content*node:sectoral_area:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:video:field_related_content*node:sectoral_area:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:video:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:sectoral_area:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:video:field_related_content*node:statistical_product:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:video:field_related_content*node:statistical_product:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:video:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:statistical_product:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:video:field_related_content*node:statistics_on_sexual_violence:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:video:field_related_content*node:statistics_on_sexual_violence:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:video:field_related_content" } ] },
    "cer_right" : { "und" : [
        { "path" : "node:statistics_on_sexual_violence:field_related_content" }
      ]
    },
    "rdf_mapping" : []
  }');
  $items['node:video:field_related_content*node:structure:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:video:field_related_content*node:structure:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:video:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:structure:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:video:field_related_content*node:tool_method_category:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:video:field_related_content*node:tool_method_category:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:video:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:tool_method_category:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:video:field_related_content*node:video:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:video:field_related_content*node:video:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:video:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:video:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:video:field_related_content*node:webform:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:video:field_related_content*node:webform:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:video:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:webform:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:webform:field_related_content*node:administrative_data_source:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:webform:field_related_content*node:administrative_data_source:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:webform:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:administrative_data_source:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:webform:field_related_content*node:advanced_page:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:webform:field_related_content*node:advanced_page:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:webform:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:advanced_page:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:webform:field_related_content*node:career_opportunity:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:webform:field_related_content*node:career_opportunity:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:webform:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:career_opportunity:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:webform:field_related_content*node:country_overview:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:webform:field_related_content*node:country_overview:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:webform:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:country_overview:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:webform:field_related_content*node:document:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:webform:field_related_content*node:document:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:webform:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:document:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:webform:field_related_content*node:gender_equality_policy:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:webform:field_related_content*node:gender_equality_policy:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:webform:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:gender_equality_policy:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:webform:field_related_content*node:gender_story:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:webform:field_related_content*node:gender_story:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:webform:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:gender_story:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:webform:field_related_content*node:good_practice:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:webform:field_related_content*node:good_practice:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:webform:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:good_practice:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:webform:field_related_content*node:legal_definition:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:webform:field_related_content*node:legal_definition:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:webform:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:legal_definition:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:webform:field_related_content*node:method_tool:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:webform:field_related_content*node:method_tool:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:webform:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:method_tool:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:webform:field_related_content*node:news_article:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:webform:field_related_content*node:news_article:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:webform:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:news_article:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:webform:field_related_content*node:page:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:webform:field_related_content*node:page:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:webform:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:page:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:webform:field_related_content*node:procurement:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:webform:field_related_content*node:procurement:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:webform:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:procurement:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:webform:field_related_content*node:publication:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:webform:field_related_content*node:publication:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:webform:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:publication:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:webform:field_related_content*node:resource:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:webform:field_related_content*node:resource:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:webform:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:resource:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:webform:field_related_content*node:resource_pool_item:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:webform:field_related_content*node:resource_pool_item:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:webform:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:resource_pool_item:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:webform:field_related_content*node:sectoral_area:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:webform:field_related_content*node:sectoral_area:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:webform:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:sectoral_area:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:webform:field_related_content*node:statistical_product:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:webform:field_related_content*node:statistical_product:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:webform:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:statistical_product:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:webform:field_related_content*node:statistics_on_sexual_violence:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:webform:field_related_content*node:statistics_on_sexual_violence:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:webform:field_related_content" } ] },
    "cer_right" : { "und" : [
        { "path" : "node:statistics_on_sexual_violence:field_related_content" }
      ]
    },
    "rdf_mapping" : []
  }');
  $items['node:webform:field_related_content*node:structure:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:webform:field_related_content*node:structure:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:webform:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:structure:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:webform:field_related_content*node:tool_method_category:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:webform:field_related_content*node:tool_method_category:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:webform:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:tool_method_category:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:webform:field_related_content*node:video:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:webform:field_related_content*node:video:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:webform:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:video:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  $items['node:webform:field_related_content*node:webform:field_related_content'] = entity_import('cer', '{
    "identifier" : "node:webform:field_related_content*node:webform:field_related_content",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:webform:field_related_content" } ] },
    "cer_right" : { "und" : [ { "path" : "node:webform:field_related_content" } ] },
    "rdf_mapping" : []
  }');
  return $items;
}

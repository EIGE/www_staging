<?php
/**
 * @file
 * eige_gender_mainstreaming.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function eige_gender_mainstreaming_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'gm_concepts_and_definitions_importer';
  $feeds_importer->config = array(
    'name' => 'GM Concepts and Definitions importer',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => 0,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
          'private' => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ';',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'GUID',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'TERM NAME',
            'target' => 'name',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'TERM',
            'target' => 'name_field',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'DEFINITION',
            'target' => 'description_field',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'SOURCE',
            'target' => 'field_source',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'RELATED',
            'target' => 'field_related_concepts',
            'term_search' => '2',
            'autocreate' => 0,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'gm_concepts_and_definitions',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['gm_concepts_and_definitions_importer'] = $feeds_importer;

  return $export;
}

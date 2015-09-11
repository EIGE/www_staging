<?php
/**
 * @file
 * eige_search.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function eige_search_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'facetapi:block_cache:search_api@eige_primo_index';
  $strongarm->value = -1;
  $export['facetapi:block_cache:search_api@eige_primo_index'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'facetapi:block_cache:search_api@eige_solr_index_research';
  $strongarm->value = -1;
  $export['facetapi:block_cache:search_api@eige_solr_index_research'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'facetapi:block_cache:search_api@eige_solr_index_website';
  $strongarm->value = -1;
  $export['facetapi:block_cache:search_api@eige_solr_index_website'] = $strongarm;

  return $export;
}

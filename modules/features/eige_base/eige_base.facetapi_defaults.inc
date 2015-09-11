<?php
/**
 * @file
 * eige_base.facetapi_defaults.inc
 */

/**
 * Implements hook_facetapi_default_facet_settings().
 */
function eige_base_facetapi_default_facet_settings() {
  $export = array();

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@eige_primo_index::cdate';
  $facet->searcher = 'search_api@eige_primo_index';
  $facet->realm = '';
  $facet->facet = 'cdate';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'roles' => array(),
      'facets' => array(),
      'force_deactivation' => TRUE,
      'regex' => FALSE,
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => 0,
    'individual_parent' => 0,
    'query_type' => 'term',
    'limit_active_items' => 0,
    'default_true' => TRUE,
    'facet_search_ids' => array(),
    'date_granularity' => 'YEAR',
    'exclude' => 0,
  );
  $export['search_api@eige_primo_index::cdate'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@eige_primo_index::creator';
  $facet->searcher = 'search_api@eige_primo_index';
  $facet->realm = '';
  $facet->facet = 'creator';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'roles' => array(),
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => 0,
    'individual_parent' => 0,
    'query_type' => 'term',
    'limit_active_items' => 0,
    'default_true' => TRUE,
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@eige_primo_index::creator'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@eige_primo_index::lang';
  $facet->searcher = 'search_api@eige_primo_index';
  $facet->realm = '';
  $facet->facet = 'lang';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'roles' => array(),
      'facets' => array(),
      'force_deactivation' => TRUE,
      'regex' => FALSE,
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => 0,
    'individual_parent' => 0,
    'query_type' => 'term',
    'limit_active_items' => 0,
    'default_true' => TRUE,
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@eige_primo_index::lang'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@eige_primo_index::library';
  $facet->searcher = 'search_api@eige_primo_index';
  $facet->realm = '';
  $facet->facet = 'library';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'roles' => array(),
      'facets' => array(),
      'force_deactivation' => TRUE,
      'regex' => FALSE,
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => 0,
    'individual_parent' => 0,
    'query_type' => 'term',
    'limit_active_items' => 0,
    'default_true' => TRUE,
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@eige_primo_index::library'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@eige_primo_index::local01';
  $facet->searcher = 'search_api@eige_primo_index';
  $facet->realm = '';
  $facet->facet = 'local01';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'roles' => array(),
      'facets' => array(),
      'force_deactivation' => TRUE,
      'regex' => FALSE,
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => 0,
    'individual_parent' => 0,
    'query_type' => 'term',
    'limit_active_items' => 0,
    'default_true' => TRUE,
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@eige_primo_index::local01'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@eige_primo_index::rtype';
  $facet->searcher = 'search_api@eige_primo_index';
  $facet->realm = '';
  $facet->facet = 'rtype';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'roles' => array(
        1 => 0,
        2 => 0,
        6 => 0,
        5 => 0,
        4 => 0,
        3 => 0,
      ),
      'facets' => array(
        'lang' => 0,
        'library' => 0,
        'local01' => 0,
        'tlevel' => 0,
        'sub' => 0,
        'creator' => 0,
        'cdate' => 0,
      ),
      'force_deactivation' => 1,
      'regex' => 0,
      'facet_items_lang' => '',
      'facet_items_library' => '',
      'facet_items_local01' => '',
      'facet_items_tlevel' => '',
      'facet_items_sub' => '',
      'facet_items_creator' => '',
      'facet_items_cdate' => '',
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => 0,
    'individual_parent' => 0,
    'query_type' => 'term',
    'limit_active_items' => 0,
    'default_true' => TRUE,
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@eige_primo_index::rtype'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@eige_primo_index::sub';
  $facet->searcher = 'search_api@eige_primo_index';
  $facet->realm = '';
  $facet->facet = 'sub';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'roles' => array(),
      'facets' => array(),
      'force_deactivation' => TRUE,
      'regex' => FALSE,
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => 0,
    'individual_parent' => 0,
    'query_type' => 'term',
    'limit_active_items' => 0,
    'default_true' => TRUE,
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@eige_primo_index::sub'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@eige_primo_index::tlevel';
  $facet->searcher = 'search_api@eige_primo_index';
  $facet->realm = '';
  $facet->facet = 'tlevel';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'roles' => array(),
      'facets' => array(),
      'force_deactivation' => TRUE,
      'regex' => FALSE,
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => 0,
    'individual_parent' => 0,
    'query_type' => 'term',
    'limit_active_items' => 0,
    'default_true' => TRUE,
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@eige_primo_index::tlevel'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@eige_primo_index:block:cdate';
  $facet->searcher = 'search_api@eige_primo_index';
  $facet->realm = 'block';
  $facet->facet = 'cdate';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'count' => 'count',
      'display' => 'display',
      'active' => 0,
      'indexed' => 0,
      'natural' => 0,
    ),
    'sort_weight' => array(
      'count' => '-50',
      'display' => '-49',
      'active' => '-48',
      'indexed' => '-47',
      'natural' => '0',
    ),
    'sort_order' => array(
      'count' => '3',
      'display' => '4',
      'active' => '3',
      'indexed' => '4',
      'natural' => '4',
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => '5',
    'nofollow' => 1,
    'show_expanded' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'full_html',
    ),
  );
  $export['search_api@eige_primo_index:block:cdate'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@eige_primo_index:block:creator';
  $facet->searcher = 'search_api@eige_primo_index';
  $facet->realm = 'block';
  $facet->facet = 'creator';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'count' => 'count',
      'display' => 'display',
      'active' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'count' => '-50',
      'display' => '-49',
      'active' => '-48',
      'indexed' => '-47',
    ),
    'sort_order' => array(
      'count' => '3',
      'display' => '4',
      'active' => '3',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => '5',
    'nofollow' => 1,
    'show_expanded' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'full_html',
    ),
  );
  $export['search_api@eige_primo_index:block:creator'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@eige_primo_index:block:lang';
  $facet->searcher = 'search_api@eige_primo_index';
  $facet->realm = 'block';
  $facet->facet = 'lang';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(
      'active_items' => array(
        'status' => 0,
        'weight' => '-50',
      ),
      'exclude_items' => array(
        'status' => 0,
        'weight' => '-49',
      ),
      'rewrite_items' => array(
        'status' => 1,
        'weight' => '-48',
      ),
      'narrow_results' => array(
        'status' => 0,
        'weight' => '-47',
      ),
      'show_if_minimum_items' => array(
        'status' => 0,
        'weight' => '-46',
      ),
      'deepest_level_items' => array(
        'status' => 0,
        'weight' => '-45',
      ),
    ),
    'active_sorts' => array(
      'count' => 'count',
      'display' => 'display',
      'active' => 0,
      'indexed' => 0,
      'natural' => 0,
    ),
    'sort_weight' => array(
      'count' => '-50',
      'display' => '-49',
      'active' => '-48',
      'indexed' => '-47',
      'natural' => '0',
    ),
    'sort_order' => array(
      'count' => '3',
      'display' => '4',
      'active' => '3',
      'indexed' => '4',
      'natural' => '4',
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => '5',
    'nofollow' => 1,
    'show_expanded' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'full_html',
    ),
    'exclude' => '',
    'regex' => 0,
    'show_minimum_items' => 2,
    'rewrite_items' => 1,
  );
  $export['search_api@eige_primo_index:block:lang'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@eige_primo_index:block:library';
  $facet->searcher = 'search_api@eige_primo_index';
  $facet->realm = 'block';
  $facet->facet = 'library';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'count' => 'count',
      'display' => 'display',
      'indexed' => 0,
      'active' => 0,
      'natural' => 0,
    ),
    'sort_weight' => array(
      'count' => '-50',
      'display' => '-49',
      'indexed' => '-48',
      'active' => '-47',
      'natural' => '0',
    ),
    'sort_order' => array(
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
      'active' => '3',
      'natural' => '4',
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => '5',
    'nofollow' => 1,
    'show_expanded' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'full_html',
    ),
  );
  $export['search_api@eige_primo_index:block:library'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@eige_primo_index:block:local01';
  $facet->searcher = 'search_api@eige_primo_index';
  $facet->realm = 'block';
  $facet->facet = 'local01';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'count' => 'count',
      'display' => 'display',
      'indexed' => 0,
      'active' => 0,
      'natural' => 0,
    ),
    'sort_weight' => array(
      'count' => '-50',
      'display' => '-49',
      'indexed' => '-48',
      'active' => '-47',
      'natural' => '0',
    ),
    'sort_order' => array(
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
      'active' => '3',
      'natural' => '4',
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => '5',
    'nofollow' => 1,
    'show_expanded' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'full_html',
    ),
  );
  $export['search_api@eige_primo_index:block:local01'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@eige_primo_index:block:rtype';
  $facet->searcher = 'search_api@eige_primo_index';
  $facet->realm = 'block';
  $facet->facet = 'rtype';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(
      'active_items' => array(
        'status' => 0,
        'weight' => '-50',
      ),
      'exclude_items' => array(
        'status' => 0,
        'weight' => '-49',
      ),
      'rewrite_items' => array(
        'status' => 1,
        'weight' => '-48',
      ),
      'narrow_results' => array(
        'status' => 0,
        'weight' => '-47',
      ),
      'show_if_minimum_items' => array(
        'status' => 0,
        'weight' => '-46',
      ),
      'deepest_level_items' => array(
        'status' => 0,
        'weight' => '-45',
      ),
    ),
    'active_sorts' => array(
      'count' => 'count',
      'display' => 'display',
      'active' => 0,
      'indexed' => 0,
      'natural' => 0,
    ),
    'sort_weight' => array(
      'count' => '-50',
      'display' => '-49',
      'active' => '-48',
      'indexed' => '-47',
      'natural' => '0',
    ),
    'sort_order' => array(
      'count' => '3',
      'display' => '4',
      'active' => '3',
      'indexed' => '4',
      'natural' => '4',
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => '5',
    'nofollow' => 1,
    'show_expanded' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'full_html',
    ),
    'exclude' => '',
    'regex' => 0,
    'show_minimum_items' => 2,
    'rewrite_items' => 1,
  );
  $export['search_api@eige_primo_index:block:rtype'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@eige_primo_index:block:sub';
  $facet->searcher = 'search_api@eige_primo_index';
  $facet->realm = 'block';
  $facet->facet = 'sub';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'count' => 'count',
      'display' => 'display',
      'indexed' => 0,
      'active' => 0,
      'natural' => 0,
    ),
    'sort_weight' => array(
      'count' => '-50',
      'display' => '-49',
      'indexed' => '-48',
      'active' => '-47',
      'natural' => '0',
    ),
    'sort_order' => array(
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
      'active' => '3',
      'natural' => '4',
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => '5',
    'nofollow' => 1,
    'show_expanded' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'full_html',
    ),
  );
  $export['search_api@eige_primo_index:block:sub'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@eige_primo_index:block:tlevel';
  $facet->searcher = 'search_api@eige_primo_index';
  $facet->realm = 'block';
  $facet->facet = 'tlevel';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(
      'active_items' => array(
        'status' => 0,
        'weight' => '-50',
      ),
      'exclude_items' => array(
        'status' => 0,
        'weight' => '-49',
      ),
      'rewrite_items' => array(
        'status' => 1,
        'weight' => '-48',
      ),
      'narrow_results' => array(
        'status' => 0,
        'weight' => '-47',
      ),
      'show_if_minimum_items' => array(
        'status' => 0,
        'weight' => '-46',
      ),
      'deepest_level_items' => array(
        'status' => 0,
        'weight' => '-45',
      ),
    ),
    'active_sorts' => array(
      'count' => 'count',
      'display' => 'display',
      'indexed' => 0,
      'active' => 0,
      'natural' => 0,
    ),
    'sort_weight' => array(
      'count' => '-50',
      'display' => '-49',
      'indexed' => '-48',
      'active' => '-47',
      'natural' => '0',
    ),
    'sort_order' => array(
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
      'active' => '3',
      'natural' => '4',
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => '5',
    'nofollow' => 1,
    'show_expanded' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'full_html',
    ),
    'exclude' => '',
    'regex' => 0,
    'show_minimum_items' => 2,
    'rewrite_items' => 1,
  );
  $export['search_api@eige_primo_index:block:tlevel'] = $facet;

  return $export;
}

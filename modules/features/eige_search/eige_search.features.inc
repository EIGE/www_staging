<?php
/**
 * @file
 * eige_search.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function eige_search_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function eige_search_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_search_api_index().
 */
function eige_search_default_search_api_index() {
  $items = array();
  $items['eige_primo_index'] = entity_import('search_api_index', '{
    "name" : "EIGE primo index",
    "machine_name" : "eige_primo_index",
    "description" : null,
    "server" : "eige_primo_server",
    "item_type" : "primo_item",
    "options" : {
      "index_directly" : 0,
      "cron_limit" : "50",
      "fields" : {
        "availability" : { "type" : "string" },
        "backlink" : { "type" : "string" },
        "cataloguelink" : { "type" : "string" },
        "cdate" : { "type" : "integer" },
        "contributor" : { "type" : "string", "boost" : "13.0" },
        "coverage" : { "type" : "string" },
        "creator" : { "type" : "string", "boost" : "13.0" },
        "desc" : { "type" : "text", "boost" : "13.0" },
        "edition" : { "type" : "string" },
        "fmt" : { "type" : "string" },
        "id" : { "type" : "string" },
        "identifier" : { "type" : "string" },
        "institution" : { "type" : "string" },
        "isbn" : { "type" : "string" },
        "ispartof" : { "type" : "string" },
        "issn" : { "type" : "string" },
        "lang" : { "type" : "string" },
        "library" : { "type" : "string" },
        "library_call_number" : { "type" : "string" },
        "linktorsrc" : { "type" : "string" },
        "path" : { "type" : "string" },
        "popularity" : { "type" : "string" },
        "publisher" : { "type" : "string", "boost" : "13.0" },
        "rank" : { "type" : "string" },
        "relation" : { "type" : "string" },
        "rights" : { "type" : "string" },
        "rtype" : { "type" : "string", "boost" : "13.0" },
        "search_api_language" : { "type" : "string" },
        "source" : { "type" : "string" },
        "sub" : { "type" : "string", "boost" : "13.0" },
        "title" : { "type" : "string", "boost" : "13.0" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_language_control" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "lang_field" : "", "languages" : [] }
        },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : {
              "title" : true,
              "rtype" : true,
              "creator" : true,
              "contributor" : true,
              "publisher" : true,
              "identifier" : true,
              "isbn" : true,
              "issn" : true,
              "fmt" : true,
              "sub" : true,
              "desc" : true,
              "lang" : true,
              "coverage" : true,
              "relation" : true,
              "ispartof" : true,
              "rights" : true,
              "edition" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : [],
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_transliteration" : { "status" : 0, "weight" : "15", "settings" : { "fields" : [] } },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : { "fields" : [], "spaces" : "[^[:alnum:]],", "ignorable" : "[\\u0027]" }
        },
        "search_api_stopwords" : {
          "status" : 1,
          "weight" : "30",
          "settings" : {
            "fields" : {
              "title" : true,
              "rtype" : true,
              "creator" : true,
              "contributor" : true,
              "publisher" : true,
              "identifier" : true,
              "isbn" : true,
              "issn" : true,
              "fmt" : true,
              "sub" : true,
              "desc" : true,
              "coverage" : true,
              "relation" : true,
              "ispartof" : true,
              "rights" : true,
              "edition" : true
            },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc\\r\\nif\\r\\nof\\r\\nfrom\\r\\nand"
          }
        },
        "search_api_highlighting" : {
          "status" : 1,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cspan class=\\u0022searchword\\u0022\\u003E",
            "suffix" : "\\u003C\\/span\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "160",
            "exclude_fields" : [],
            "highlight" : "always"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "1",
    "rdf_mapping" : []
  }');
  $items['eige_solr_index_research'] = entity_import('search_api_index', '{
    "name" : "EIGE solr index: Research",
    "machine_name" : "eige_solr_index_research",
    "description" : null,
    "server" : "eige_solr_server",
    "item_type" : "node",
    "options" : {
      "index_directly" : 0,
      "cron_limit" : "100",
      "fields" : {
        "body:value" : { "type" : "text", "boost" : "8.0" },
        "field_additional_information:value" : { "type" : "text", "boost" : "8.0" },
        "field_display_date" : { "type" : "date" },
        "field_english_title" : { "type" : "text", "boost" : "5.0" },
        "field_general_remarks:value" : { "type" : "text", "boost" : "8.0" },
        "field_introduction:value" : { "type" : "text", "boost" : "8.0" },
        "field_keywords" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_purpose_of_data_collection" : { "type" : "list\\u003Ctext\\u003E", "boost" : "8.0" },
        "field_remarks:value" : { "type" : "text", "boost" : "8.0" },
        "field_source_of_data" : { "type" : "text", "boost" : "8.0" },
        "field_topic" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_unofficial_english_title" : { "type" : "text", "boost" : "3.0" },
        "language" : { "type" : "string" },
        "search_api_language" : { "type" : "string" },
        "status" : { "type" : "boolean" },
        "title_field" : { "type" : "text", "boost" : "13.0" },
        "type" : { "type" : "string" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 1,
          "weight" : "-10",
          "settings" : {
            "default" : "0",
            "bundles" : {
              "administrative_data_source" : "administrative_data_source",
              "country_overview" : "country_overview",
              "gender_equality_policy" : "gender_equality_policy",
              "gender_story" : "gender_story",
              "good_practice" : "good_practice",
              "legal_definition" : "legal_definition",
              "method_tool" : "method_tool",
              "publication" : "publication",
              "resource" : "resource",
              "sectoral_area" : "sectoral_area",
              "statistical_product" : "statistical_product",
              "statistics_on_sexual_violence" : "statistics_on_sexual_violence",
              "structure" : "structure",
              "tool_method_category" : "tool_method_category"
            }
          }
        },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_language_control" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "lang_field" : "", "languages" : [] }
        },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "-50",
          "settings" : { "fields" : {
              "title_field" : true,
              "field_english_title" : true,
              "field_unofficial_english_title" : true,
              "body:value" : true
            }
          }
        },
        "search_api_highlighting" : {
          "status" : 1,
          "weight" : "-49",
          "settings" : {
            "prefix" : "\\u003Cspan class=\\u0022searchword\\u0022\\u003E",
            "suffix" : "\\u003C\\/span\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "160",
            "exclude_fields" : { "title_field" : "title_field" },
            "highlight" : "always"
          }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "-48",
          "settings" : {
            "fields" : { "body:value" : true },
            "title" : 0,
            "alt" : 0,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_transliteration" : {
          "status" : 0,
          "weight" : "-47",
          "settings" : { "fields" : {
              "title_field" : true,
              "field_english_title" : true,
              "field_unofficial_english_title" : true,
              "body:value" : true
            }
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "-46",
          "settings" : {
            "fields" : {
              "title_field" : true,
              "field_english_title" : true,
              "field_unofficial_english_title" : true,
              "body:value" : true
            },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "-45",
          "settings" : {
            "fields" : {
              "title_field" : true,
              "field_english_title" : true,
              "field_unofficial_english_title" : true,
              "body:value" : true
            },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  $items['eige_solr_index_website'] = entity_import('search_api_index', '{
    "name" : "EIGE solr index: Website",
    "machine_name" : "eige_solr_index_website",
    "description" : null,
    "server" : "eige_solr_server",
    "item_type" : "node",
    "options" : {
      "index_directly" : 0,
      "cron_limit" : "100",
      "fields" : {
        "body:value" : { "type" : "text", "boost" : "8.0" },
        "field_additional_information:value" : { "type" : "text", "boost" : "8.0" },
        "field_display_date" : { "type" : "date" },
        "field_introduction:value" : { "type" : "text", "boost" : "8.0" },
        "field_keywords" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "language" : { "type" : "string" },
        "search_api_language" : { "type" : "string" },
        "status" : { "type" : "boolean" },
        "title_field" : { "type" : "text", "boost" : "13.0" },
        "type" : { "type" : "string" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 1,
          "weight" : "-10",
          "settings" : {
            "default" : "0",
            "bundles" : {
              "advanced_page" : "advanced_page",
              "career_opportunity" : "career_opportunity",
              "document" : "document",
              "news_article" : "news_article",
              "procurement" : "procurement",
              "resource_pool_item" : "resource_pool_item",
              "video" : "video",
              "page" : "page"
            }
          }
        },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_language_control" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "lang_field" : "", "languages" : [] }
        },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : { "title_field" : true, "body:value" : true } }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : { "title_field" : true, "body:value" : true },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_transliteration" : {
          "status" : 0,
          "weight" : "15",
          "settings" : { "fields" : { "title_field" : true, "body:value" : true } }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : { "title_field" : true, "body:value" : true },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : { "title_field" : true, "body:value" : true },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 1,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cspan class=\\u0022searchword\\u0022\\u003E",
            "suffix" : "\\u003C\\/span\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "160",
            "exclude_fields" : { "title_field" : "title_field" },
            "highlight" : "always"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function eige_search_default_search_api_server() {
  $items = array();
  $items['eige_primo_server'] = entity_import('search_api_server', '{
    "name" : "EIGE primo server",
    "machine_name" : "eige_primo_server",
    "description" : "",
    "class" : "search_api_primo_service",
    "options" : { "domain" : "primop.eige.europa.eu:1701", "institution" : "EIGE" },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  $items['eige_solr_server'] = entity_import('search_api_server', '{
    "name" : "EIGE solr server",
    "machine_name" : "eige_solr_server",
    "description" : "",
    "class" : "search_api_solr_service",
    "options" : {
      "clean_ids" : true,
      "site_hash" : true,
      "scheme" : "http",
      "host" : "127.0.0.1",
      "port" : "8983",
      "path" : "\\/solr\\/eige",
      "http_user" : "",
      "http_pass" : "",
      "excerpt" : 0,
      "retrieve_data" : 0,
      "highlight_data" : 0,
      "skip_schema_check" : 0,
      "solr_version" : "",
      "http_method" : "AUTO"
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}

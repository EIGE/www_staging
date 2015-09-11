<?php

/**
 * @file
 * Overriding the default simple view template to display the list of rows as an interactive Map
 *
 * @ingroup views_templates
 */
$results = $view->result;

// https://www.drupal.org/node/277675
global $language; // current selected language
$current_language = $language->language;
$default_language = language_default()->language;
$url_language_prefix = ($current_language != $default_language) ? "/$current_language" : "";

$all_countries = countries_get_countries('all', array('enabled' => COUNTRIES_ENABLED));

// list of European Union member states along with their data
$eu_countries = array();
$eu_countries_with_data_count = 0;

// $key is the country iso2 code
foreach ($all_countries as $key => $country) {
  $identifier = $key;
  // county is in Europe
  if ($country->continent == 'EU') {
    // country is member state of the European Union
    if (count($country->field_eu_country_code)) {
      $i18n_country_name = countries_t($country, "name", $current_language);
      // http://publications.europa.eu/code/en/en-370100.htm
      // EU country code is different from iso2 code in case of Greece (EL instead of GR) and United Kingdom (UK instead of GB)
      $identifier = $country->field_eu_country_code[LANGUAGE_NONE][0]['value'];
      // a sanitized version of the country name is used in the country profile url
      $sanitized_country_name = trim(strtolower($country->name));
      $sanitized_country_name = preg_replace("[\s]", "-", $sanitized_country_name);
      $country_data = array(
        "code" => $identifier,
        "display_name" => $i18n_country_name, // i18n name
        "sanitized_name" => $sanitized_country_name,
        "url" => "$url_language_prefix/gender-based-violence/countries/$sanitized_country_name",
        "url_title" => t('See overview for') . ' "' . $i18n_country_name . '"', // i18n title
        "no_results_text" => t('There are no results that match the selected criteria'),
        "results" => array(
          "total_count" => 0,
          "administrative_data_source" => array(
            "count" => 0,
            "label" => t('Administrative data source(s)'),
            "url" => "$url_language_prefix/gender-based-violence/administrative-data-sources/search?c[]=$key&type[]=administrative_data_source",
            "url_title" => t('See all results that match the selected criteria')
          ),
          "statistical_product" => array(
            "count" => 0,
            "label" => t('Statistical product(s)'),
            "url" => "$url_language_prefix/gender-based-violence/administrative-data-sources/search?c[]=$key&type[]=statistical_product",
            "url_title" => t('See all results that match the selected criteria')
          ),
        ),
      );
      foreach ($results as $delta => $result) {
        $country_code = $result->field_field_country[0]['raw']['iso2'];
        if ($key == $country_code) {
          $country_data['results']['total_count'] += 1;
          $country_data['results'][$result->node_type]['count'] +=1;
          if ($country_data['results'][$result->node_type]['count']>1) {
            $country_data['results'][$result->node_type]['entries'] = t('entries');
          } else {
            $country_data['results'][$result->node_type]['entries'] = t('entry');
          }
          unset($results[$delta]);
        }
      }
      if ($country_data['results']['total_count']>0) {
        $eu_countries_with_data_count += 1;
      }
      $eu_countries[$identifier] = $country_data;
    }
  }
}

$european_union_data = array(
  "url" => "$url_language_prefix/gender-based-violence/administrative-data-sources/european-union",
  "url_title" => t('European Union'),
  "total_count" => $eu_countries_with_data_count,
  "label_prefix" => t("Data available in"),
  "label_suffix_single" => t("country"),
  "label_suffix_plural" => t("countries"),
  "no_results_text" => t('There are no data available in any country for the specified criteria'),
);

drupal_add_js(array('ads_map_european_union_data' => $european_union_data), 'setting');
drupal_add_js(array('ads_map_country_data' => $eu_countries), 'setting');

drupal_add_js(drupal_get_path('theme', 'eigefoundationtheme').'/js/eige/map.js','file');
drupal_add_js(drupal_get_path('theme', 'eigefoundationtheme').'/js/underscore-1.8.2.min.js','file');
drupal_add_js(drupal_get_path('theme', 'eigefoundationtheme').'/js/eige/administrative-data-sources-script.js');

?>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<div id="ads-map-container">
  <div class="map"></div>
  <div class="eu-link"></div>
  <div class="map-results-summary"></div>
  <div class="country-data-info" style="display: none"></div>
  <div class="map-legend">
    <p><strong><?php print t('Available')?></strong> <span class="available"><?php print t('Dark blue color') ?></span></p>
    <p><strong><?php print t('Not Available')?></strong> <span class="not-available"><?php print t('Light blue color') ?></span></p>
  </div>
</div>


<!--
<style>
#ads-map-container {
  position: relative;
}
  #ads-map-container .map svg .country {
    fill: #CDCEDA;
    stroke: #fff;
    stroke-width: 1px;
  }

  #ads-map-container .map svg .country.withData {
    fill: #6685AB;
    transition: all .1s linear;
  }

  #ads-map-container .map svg .country.withData:hover {
    fill: #F0CC41;
    stroke: #fafafa;
    transition: all .0s linear;
    stroke-width: 0.5px;
    cursor: pointer;
  }
  
  #ads-map-container .map svg .country.withData.selected {
    fill: #F0F0F4;
  }

  #ads-map-container .map svg .country text {
    fill: #fff;
    stroke: none;
    font-size: 10px;
    text-anchor: middle;
  }
  #ads-map-container .map svg .country.withData.selected text{
    fill: black;
  }
  

  #ads-map-container .map svg .country-CY text,
  #ads-map-container .map svg .country-MT text {
    fill: black;
  }


#ads-map-container .map-legend {
  -moz-border-radius: 8px;
  -webkit-border-radius: 8px;
  border-radius: 8px;
  position: absolute;
  padding: 15px 12px;
  background-color: #F7F7F9;
  top: 235px;
  right: 25px;
  z-index: 50000;
  text-align: center;
  line-height: 1.1em;
  width: 75px;
  -moz-box-shadow: 0px 0px 5px #999;
  -webkit-box-shadow: 0px 0px 5px #999;
  box-shadow: 0px 0px 5px #999;
}
  #ads-map-container .map-legend strong {
    font-size: 0.7em;
    line-height: 1em;
  }
  #ads-map-container .map-legend span {
    display: block;
    clear: both;
    width: 25px;
    height: 25px;
    text-indent: -50000px;
    margin: 5px auto 0px auto;
  }
  #ads-map-container .map-legend span.available {
    background-color: #6584AA;
  }
  #ads-map-container .map-legend span.not-available {
    background-color: #A4BAD7;
  }


#ads-map-container .eu-link {
  width: 280px;
  position: absolute;
  top: 40px;
  left: 30px;
  -moz-border-radius: 8px;
  -webkit-border-radius: 8px;
  border-radius: 8px;
  z-index: 500;
  -moz-box-shadow: 0px 0px 5px #999;
  -webkit-box-shadow: 0px 0px 5px #999;
  box-shadow: 0px 0px 5px #999;
}

#ads-map-container .map-results-summary p {
  position: absolute;
  width: 239px;
  top: 108px;
  left: 30px;
  font-size: 1.2em;
  color: #666;
  background-color: rgba(255, 255, 255, 0.8);
  padding: 30px 20px 20px 20px;
  line-height: 1;
  -webkit-border-radius: 8px;
  -moz-border-radius: 8px;
  border-radius: 8px;
  z-index: 1;
  -moz-box-shadow: 0px 0px 5px #ccc;
  -webkit-box-shadow: 0px 0px 5px #CCC;
  box-shadow: 0px 0px 5px #CCC;
}

#ads-map-container .country-data-info {
  position: absolute;
  width: 280px;
  height: auto;
  padding: 0px;
  top: 230px;
  left: 30px;
  -moz-border-radius: 8px;
  -webkit-border-radius: 8px;
  border-radius: 8px;
  -moz-box-shadow: 0px 0px 5px #999;
  -webkit-box-shadow: 0px 0px 5px #999;
  box-shadow: 0px 0px 5px #999;
  z-index: 50000;
}

</style>

-->
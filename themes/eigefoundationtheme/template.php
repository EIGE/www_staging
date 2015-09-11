<?php

/**
 * Implements theme_breadcrumb().
 *
 * Print breadcrumbs as a list, with separators.
 */
function eigefoundationtheme_breadcrumb($variables) {
  $breadcrumb = $variables['breadcrumb'];
  if (!empty($breadcrumb)) {

    // custom breadcrumb for lexicon page gender-mainstreaming/concepts-and-definitions as lexicon pages do not have breadcrumb
    if (arg(0) == 'gender-mainstreaming' && arg(1) == 'concepts-and-definitions') {
      $breadcrumb[] = l('Gender Mainstreaming', 'gender-mainstreaming');
    }

    // moved h2 to page.tpl.php
    // Provide a navigational heading to give context for breadcrumb links to
    // screen-reader users. Make the heading invisible with .element-invisible.
    // $breadcrumbs = '<h2 class="element-invisible">' . t('You are here') . '</h2>';
    $breadcrumbs = '<ul class="breadcrumbs columns large-10">';
    foreach ($breadcrumb as $key => $value) {
      $breadcrumbs .= '<li>' . $value . '</li>';
    }
    $title = strip_tags(drupal_get_title());
    $breadcrumbs .= '</ul>';
    return $breadcrumbs;
  }
}

function eigefoundationtheme_views_view_grouping($vars) {
  $view = $vars['view'];
  if ($view->name=='policy_initiatives') {
    $title = $vars['title'];
    $content = $vars['content'];
    $domainClass = _title_to_css_class($title,'domain_');
    $output = '<div class="view-grouping '.$domainClass.'">';
    $output .= '<div class="view-grouping-header">' . $title . '</div>';
    $output .= '<div class="view-grouping-content">' . $content . '</div>' ;
    $output .= '</div>';
    return $output;  
  }
}

/**
 * Implements template_preprocess_page
 *
 * Add convenience variables and template suggestions.
 */
function eigefoundationtheme_preprocess_page(&$variables) {
  // EIGEDR-422 refactoring:
  // the only possible element (if exists) into the right sidebar (sidebar_second)
  // is the social media block, which is placed off the grid, 
  // so it shouldn't be taken into count for the grid classes calculation
  
  // Convenience variables
  if (!empty($variables['page']['sidebar_first'])){
    $left = $variables['page']['sidebar_first'];
  }
  $full_page_width = false;
  $current_path = drupal_get_path_alias();
  if ($variables["is_front"]) {
    $full_page_width = true;
  }
  $node = isset($variables['node']) ? $variables['node'] : null;
  if ( (strpos($current_path, 'gender-statistics/gender-equality-index') !== false) && (empty($node) || $node->type != 'gender_equality_policy')) {
    $full_page_width = true;
  }
  if (strpos($current_path, 'gender-statistics/women-and-men-in-the-eu-facts-and-figures') !== false) {
    $full_page_width = true;
  }
  
  $variables['main_grid'] = 'large-10 large-push-2 small-push-0';
  if ($full_page_width) {
    $variables['main_grid'] = 'large-12';
  }
  
  if (!empty($left)) {
    $variables['sidebar_first_grid'] = 'large-2 small-12 large-pull-10 ';
    $variables['sidebar_sec_grid'] = '';
  } else {
    $variables['sidebar_first_grid'] = '';
    $variables['sidebar_sec_grid'] = '';
  }

  if($panel_page = page_manager_get_current_page()) {
    if($panel_page['name']=='page-country_profile' || $panel_page['name']=='page-country_about' || $panel_page['name']=='page-country_structures' || $panel_page['name']=='page-country_laws_policies' || $panel_page['name']=='page-country_methods_tools' || $panel_page['name']=='page-country_good_practices' || $panel_page['name']=='page-country_resources'){
      $variables['page']['content_header']['tabs'] = $variables['tabs'];
      unset($variables['tabs']);
    }
    if($panel_page['name']=='page-eige_research' || $panel_page['name']=='page-eige_website' || $panel_page['name']=='page-eige_primo') {
      // tabs are appropriately placed in page via page manager/panel layout
      unset($variables['tabs']);
    }
  }

  // render search box programmatically
  $search_box_ref = drupal_get_form('search_block_form');
  $search_box = drupal_render($search_box_ref);
  $variables['search_box'] = $search_box;

  // custom libraries for lexicon page gender-mainstreaming/concepts-and-definitions
  if (arg(0) == 'gender-mainstreaming' && arg(1) == 'concepts-and-definitions') {
    $theme_path = drupal_get_path('theme', 'eigefoundationtheme');
    drupal_add_library('system', 'effects.highlight');
    drupal_add_js($theme_path.'/js/CustomScrollbar/jquery.mCustomScrollbar.min.js','file');
    drupal_add_css($theme_path.'/js/CustomScrollbar/jquery.mCustomScrollbar.css');
  }

  // Adds settings for the Structure node ENGE interoperability (EIGEDR-249).
  if (isset($variables['node'])) {
    $node = $variables['node'];
    if ($node->type == "structure") {
      if (isset($node->field_eurogender_user_id) && isset($node->field_eurogender_user_id['und']) && isset($node->field_eurogender_user_id['und'][0]) && isset($node->field_eurogender_user_id['und'][0]['value'])) {
        global $conf;
        drupal_add_js(array('enge_website' => $conf['enge_website'], 'eurogender_actor_id' => $node->field_eurogender_user_id['und'][0]['value']), 'setting');
      }
    }
  }
  
  // EIGEDR-331 home page carousel
  if (isset($variables['is_front']) && $variables['is_front']) {
    $theme_path = drupal_get_path('theme', 'eigefoundationtheme');
    drupal_add_css($theme_path.'/js/owl-carousel/owl.carousel.css');
    drupal_add_css($theme_path.'/js/owl-carousel/owl.theme.css');
    drupal_add_js($theme_path.'/js/owl-carousel/owl.carousel.js', 'file');
  }
  
  // EIGEDR-369 - hide default h1 from EuroGender event display
  $path = current_path();
  if (strpos($path, 'events-calendar/event/') !== false) {
    $variables['title'] = "";
  }
  // EIGEDR-278 - hide default h1 from Primo resource display
  if (strpos($path, 'rdc/library/resource/') !== false) {
    $variables['title'] = "";
  }

  _panelize_gm_nodes($variables);
}

function _panelize_gm_nodes(&$variables) {
  if (isset($variables['node'])) {
    $node = $variables['node'];

    $gmCTs = array(
      'good_practice' => 'Good Practices', 
      'structure' => 'Structures', 
      'method_tool' => 'Methods & Tools', 
      'resource' => 'Other resources'
      );
    $gmTopicCTs = array('structure', 'method_tool', 'resource');

    if (array_key_exists($node->type, $gmCTs) && isset($node->field_topic) && isset($node->field_topic['und'][0])) {

      $tId = $node->field_topic['und'][0]['tid'];
      $nodeTopic = taxonomy_term_load($tId);
      $tcId = $nodeTopic->field_topic_category['und'][0]['tid'];

      $gmTopicTerm = taxonomy_get_term_by_name('Gender Mainstreaming', 'topics');
      reset($gmTopicTerm);
      $gmTopicTermId = key($gmTopicTerm);
      $gmTopicCategoryTerm = taxonomy_get_term_by_name('Gender Mainstreaming', 'topic_categories');
      reset($gmTopicCategoryTerm);
      $gmTopicCategoryTermId = key($gmTopicCategoryTerm);

      // only nodes with GM topic category (good practices) or GM topic (structures, methods & tools, resources) should be panelized
      if ($tcId != $gmTopicCategoryTermId || (in_array($node->type, $gmTopicCTs) && $tId != $gmTopicTermId)) {
        return;
      }

      $countryName = $node->field_country['und'][0]['safe_value'];
      $countryUrl = strtolower(str_replace(" ", "-", $countryName));
      $panes = array(
        'about' => 'About',
        'structures' => 'Structures',
        'laws-and-policies' => 'Laws & Policies',
        'methods-and-tools' => 'Methods & Tools',
        'good-practices' => 'Good Practices',
        'resources' => 'Other resources',
        );

      $main_html_prefix = '<div class="page-gender-mainstreaming-countries panelized-gm-node">'
      . '<h1 class="title" id="page-title"><span class="country">' . $countryName . '</span> '. $gmCTs[$node->type] . '</h1>'
      . '<div class="content-header">'
      . '<h2 class="element-invisible">Primary tabs</h2>'
      . '<ul class="button-group">';

      foreach ($panes as $paneUrl => $paneName) {
        $active = $paneName == $gmCTs[$node->type];
        $main_html_prefix .= '<li' . ($active ? ' class="active"' : '') . '><a class="small button secondary' 
        . ($active ? ' active' : '') . '" href="/gender-mainstreaming/countries/' . $countryUrl . '/' . $paneUrl . '">' . $paneName . '' 
        . ($active ? '<span class="element-invisible">(active tab)</span>' : '') . '</a></li>';
      }

      $main_html_prefix .= '</ul></div></div>';

      $variables['main_html_prefix'] = $main_html_prefix;
    }
  }
}

function eigefoundationtheme_preprocess_node(&$variables) {
  if ($variables['type'] == 'legal_definition' && $variables['view_mode'] == 'teaser') {
    if (!isset($variables['field_general_legal_definition']) || !count($variables['field_general_legal_definition']) || !isset($variables['field_general_legal_definition'][0]) ||
        (isset($variables['field_general_legal_definition'][0]) && $variables['field_general_legal_definition'][0]['value'] == 0)) {
      unset($variables['content']['field_general_legal_definition']);
    }
  }
}

/**
 * Implements theme_field__field_type(). Overrides zurb_foundation_field__taxonomy_term_reference()
 */
function eigefoundationtheme_field__taxonomy_term_reference($variables) {
  $output = '';
  // Render the label, if it's not hidden.
  if (!$variables['label_hidden']) {
    $output .= '<div class="field-label">' . $variables['label'] . ': </div>';
  }

  // Render the items.
  $output .= '';
  foreach ($variables['items'] as $delta => $item) {
    $additional_css_classes = '';
    if (isset($variables['item_attributes_array'][$delta]) && isset($variables['item_attributes_array'][$delta]['class'])) {
      foreach ($variables['item_attributes_array'][$delta]['class'] as $index => $css_class) {
        $additional_css_classes .= ' ';
        $additional_css_classes .= $css_class;
      }
    }
    $output .= '<div class="taxonomy-term-reference ' . $additional_css_classes . '"' . $variables['item_attributes'][$delta] . '>' . drupal_render($item) . '</div>';
  }

  // Render the top-level DIV.
  $output = '<div class="' . $variables['classes'] . (!in_array('clearfix', $variables['classes_array']) ? ' clearfix' : '') . '">' . $output . '</div>';
  return $output;
}

/**
 * Implements hook_html_head_alter().
 */
function eigefoundationtheme_html_head_alter(&$head_elements) {
  //W3C Validation error: Bad value ImageToolbar for attribute http-equiv on element meta.
  //Removed the meta to avoid the error.
  unset($head_elements['ie_image_toolbar']);
}

/**
 * Implements hook_preprocess_field().
 */
function eigefoundationtheme_preprocess_field(&$variables, $hook) {
  if ($variables['element']['#field_name'] == 'field_mt_ongoing') {
    if (!isset($variables['element']['#items']) || !count($variables['element']['#items']) || !isset($variables['element']['#items'][0]) ||
        (isset($variables['element']['#items'][0]) && $variables['element']['#items'][0]['value'] == 0)) {
      $variables['items'][0]['#markup'] = '';
      $variables['label_hidden'] = TRUE;
    }
  }
  if (in_array($variables['element']['#field_name'], array('field_primary_topic_category', 'field_other_topic_categories'))) {
    foreach ($variables['items'] as $delta => $item) {
      if (isset($variables['items'][$delta]['#markup'])) {
        $term_name = $variables['items'][$delta]['#markup'];
        $css_class = _title_to_css_class($term_name, 'gender_story_topic_');
        array_push($variables['item_attributes_array'][$delta]['class'], $css_class);
        $variables['items'][$delta]['#markup'] = 
            '<a href="/more-areas/gender-stereotypes/search-for-gender-stories?pt[]='.$variables['element']['#items'][$delta]['tid'].'" title="'.t("See all stories for topic ") . $term_name .'">' . $term_name . '</a>';
      }
    }
  }
  // this is required for certain fields only (EIGEDR-400), but since it's unobtrusive, will apply to all
  if ($variables['element']['#field_type'] == 'list_integer') {
    if (isset($variables['items'][0]['#markup'])) {
      $css_class = _title_to_css_class($variables['items'][0]['#markup'], 'list_value_');
      $variables['classes_array'][] = $css_class;
    }
  }
  // this is required for certain CTs only (EIGEDR-413), but since it's unobtrusive, will apply to all
  if ($variables['element']['#field_name'] == 'content_type' && $variables['element']['#view_mode'] == 'teaser') {
    $variables['classes_array'][] = 'type_' . $variables['element']['#bundle'];
  }
}

/**
 * Implements hook_preprocess_html().
 */
function eigefoundationtheme_preprocess_html(&$variables) {
  _add_ie_edge_support();
}

/**
 * Implements hook_preprocess_views_view_row_rss().
 */
function eigefoundationtheme_preprocess_views_view_row_rss(&$vars) {
  $vars['item_elements'] = preg_replace('/<dc:creator>.*creator>/', '', $vars['item_elements']);
}

function eigefoundationtheme_customerror(&$variables) {
  $output = $variables['content'];
  if ($variables['code'] == 404) {
    // render search box programmatically
    $search_box_ref = drupal_get_form('search_block_form');
    $search_box = drupal_render($search_box_ref);
    return $output . $search_box;
  }
  return $output;
}

/**
 * EIGEDR-140 Add IE Edge support and Chrome Frame
 * https://www.drupal.org/node/1203112
 * http://dropbucket.org/node/1248
 */
function _add_ie_edge_support() {
  if (drupal_get_http_header('X-UA-Compatible') === NULL) {
    drupal_add_http_header('X-UA-Compatible', 'IE=edge,chrome=1');
  }
  $meta_ie_edge= array(
    '#type' => 'html_tag',
    '#tag' => 'meta',
    '#attributes' => array(
      'http-equiv' => 'X-UA-Compatible',
      'content' => 'IE=edge,chrome=1',
      ),
    '#weight' => -99999,
    );
  // Add header meta tag for IE to head
  drupal_add_html_head($meta_ie_edge, 'meta_ie_edge');
}

/**
 * Helper function to find and render a block.
 * https://www.drupal.org/node/26502
 */
function render_block_content_by_delta($module, $delta) {
  $output = '';
  if ($block = block_load($module, $delta)) {
    if ($build = module_invoke($module, 'block_view', $delta)) {
      $delta = str_replace('-', '_', $delta);
      drupal_alter(array('block_view', "block_view_{$module}_{$delta}"), $build, $block);

      if (!empty($build['content'])) {
        return is_array($build['content']) ? render($build['content']) : $build['content'];
      }
    }
  }
  return $output;
}

function render_block_content_by_css_class($module, $css_class) {
  $block = _fetch_block_by_class($css_class);
  $delta = $block->delta;
  return render_block_content_by_delta($module, $delta);
}

function _fetch_block_by_class($css_class) {
  $blocks = db_select('block', 'b')->fields('b')->condition('b.css_class', $css_class)->execute()->fetchAllAssoc('bid');
  foreach ($blocks as $block) {
    return $block;
  }
  return null;
}



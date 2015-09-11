<?php
/**
 * @file node.tpl.php
 *
 * Theme implementation to display a node.
 *
 * Available variables:
 * - $title: the (sanitized) title of the node.
 * - $content: Node body or teaser depending on $teaser flag.
 * - $picture: The authors picture of the node output from
 *   theme_user_picture().
 * - $date: Formatted creation date (use $created to reformat with
 *   format_date()).
 * - $links: Themed links like "Read more", "Add new comment", etc. output
 *   from theme_links().
 * - $name: Themed username of node author output from theme_username().
 * - $node_url: Direct url of the current node.
 * - $terms: the themed list of taxonomy term links output from theme_links().
 * - $submitted: themed submission information output from
 *   theme_node_submitted().
 *
 * Other variables:
 * - $node: Full node object. Contains data that may not be safe.
 * - $type: Node type, i.e. story, page, blog, etc.
 * - $comment_count: Number of comments attached to the node.
 * - $uid: User ID of the node author.
 * - $created: Time the node was published formatted in Unix timestamp.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *   teaser listings.
 * - $id: Position of the node. Increments each time it's output.
 *
 * Node status variables:
 * - $teaser: Flag for the teaser state.
 * - $page: Flag for the full page state.
 * - $promote: Flag for front page promotion state.
 * - $sticky: Flags for sticky post setting.
 * - $status: Flag for published status.
 * - $comment: State of comment settings for the node.
 * - $readmore: Flags true if the teaser content of the node cannot hold the
 *   main body content.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 */
?>
<div id="node-<?php print $node->nid; ?>" class="node<?php if ($sticky) { print ' sticky'; } ?><?php if (!$status) { print ' node-unpublished'; } ?> clear-block zf-2col-stacked node-statistical-product view-mode-full row">
  <?php
    node_build_content($node);
  ?>
  <div class="row">
    <div class="group-left large-9 small-12">

      <?php print drupal_render($content['content_type']); ?>
      <?php print drupal_render($content['title_field']); ?>
      <?php print drupal_render($content['group_metadata']); ?>
      
      <div class="node-metadata">
        <?php print drupal_render($content['field_country']); ?>
        <?php  if (isset($content['field_original_title'])): ?> <span class="separator"> - </span> <?php endif; ?>
        <?php print drupal_render($content['field_original_title']); ?>
      </div>

      <div class="content clear-block node-wrapper">
        <div id="node-main-content">

          <div class="eige-ad-intro">
            
            <?php
              $has_issues = isset($content['field_raw_data_issues']) && eige_administrative_data_boolean_field_has_business_value($content['field_raw_data_issues']);
              $issue_remarks = drupal_render($content['field_raw_data_issues_info']);
              $has_survey_data = isset($content['field_survey_data']) && eige_administrative_data_boolean_field_has_business_value($content['field_survey_data']);
              $has_indicator = isset($content['field_indicator_usage']) && eige_administrative_data_boolean_field_has_business_value($content['field_indicator_usage']);
              $indicator = drupal_render($content['field_indicator']);
              $indicator_other = drupal_render($content['field_indicator_other']);
              
              $issues_markup = '';
              $survey_markup = '';
              $indicator_markup = '';
              
              if ($has_issues || strlen($issue_remarks)>0) {
                $issues_markup .= '<h4>' . $content['field_raw_data_issues']['#title'] . '</h4>';
                $issues_markup .= drupal_render($content['field_raw_data_issues']);
                $issues_markup .= $issue_remarks;
              }
              
              if ($has_survey_data) {
                $survey_markup .= '<h4>' . $content['field_survey_data']['#title'] . '</h4>';
                $survey_markup .= drupal_render($content['field_survey_data']);
              }
              
              if ($has_indicator || strlen($indicator)>0 || strlen($indicator_other)>0) {
                $indicator_markup .= '<h4>' . $content['field_indicator_usage']['#title'] . '</h4>';
                $indicator_markup .= drupal_render($content['field_indicator_usage']);
                if (strlen($indicator)>0) {
                  $indicator_markup .= '<div class="field field-type-text field-field-eige-sp-indicator">';
                  $field = field_info_field('field_indicator', $node->type);
                  $allowed_values = list_allowed_values($field);
                  $selected_values = eige_administrative_data_get_all_field_values($content['field_indicator']);
                  $indicator_markup .= eige_administrative_data_get_options_list_markup($allowed_values, $selected_values);
                  $indicator_markup .= '</div>';
                }
                $indicator_markup .= $indicator_other;
              }
              
              $all_empty = !(strlen($issues_markup) || strlen($survey_markup) || strlen($indicator_markup));
              $issues_rendered = false;
              $survey_rendered = false;
              $indicator_rendered = false;
              
              $violence_types_css_class = 'medium-6';
              if ($all_empty) {
                $violence_types_css_class = 'large-12';
              }
              
            ?>

            <div class="row">
              
              <div class="eige-ad-violence-types columns <?php print $violence_types_css_class; ?>">
                  <?php $violence_remarks = drupal_render($content['field_violence_remarks']);?>
                  <?php $violence_types = $content['group_about']['field_violence_types']; ?>
                  <div class="field field-type-content-taxonomy field-field-eige-ad-violence-type">
                    <h4><?php print $violence_types['#title']; ?></h4>
                    <ul class="field-items">
                      <?php
                      $types_vocabulary = taxonomy_vocabulary_machine_name_load('gender_based_violence_types');
                      $types_tree = eige_administrative_data_visible_violence_types($types_vocabulary);
                      foreach ($types_tree as $key => $term) {
                        $css_class = "not-selected";
                        foreach ($violence_types['#items'] as $delta => $item) {
                          if ($item['tid']==$term->tid) {
                            $css_class = "selected";
                          }
                        }
                        print '<li class="'.$css_class.'">'.$term->name.'</li>';
                      }
                      ?>
                    </ul>
                  </div>
                  <?php
                  if (strlen($violence_remarks)) {
                      print $violence_remarks;
                  }
                  ?>
                </div>
                <?php
                  if (!$all_empty) {
                    print '<div class="columns medium-6">';
                      if ($has_issues || strlen($issue_remarks)>0) {
                        print $issues_markup;
                        $issues_rendered = true;
                      } else if ($has_survey_data) {
                        print $survey_markup;
                        $survey_rendered = true;
                      } else if ($has_indicator || strlen($indicator)>0 || strlen($indicator_other)>0) {
                        print $indicator_markup;
                        $indicator_rendered = true;
                      }
                    print '</div>';
                  }
                ?>
            </div>
            
            <?php
                $should_render_survey = $has_survey_data && !$survey_rendered;
                $should_render_indicator = ($has_indicator || strlen($indicator)>0 || strlen($indicator_other)>0) && !$indicator_rendered;
                $should_render_both = $should_render_survey && $should_render_indicator;
                $css_class = "large-12";
                if ($should_render_both) {
                  $css_class = "medium-6";
                }
                if ($should_render_survey || $should_render_indicator) {
                  print '<div class="row">';
                    print '<div class="columns ' . $css_class . '">';
                    if ($should_render_survey) {
                      print $survey_markup;
                      $survey_rendered = true;
                    } else {
                      print $indicator_markup;
                      $indicator_rendered = false;
                    }
                    print '</div>';
                    if ($should_render_both && !$indicator_rendered) {
                      print '<div class="columns medium-6">';
                        print $indicator_markup;
                      print '</div>';
                    }
                  print '</div>';
                }
            ?>
            <?php
              $remarks = drupal_render($content['field_remarks']);
              if (strlen($remarks)) {
                print '<div class="row"><div class="columns large-12">' . $remarks . '</div></div>';
              }
            ?>
          </div>
          
          <?php 
            $group_info = field_group_info_groups("node", $node->type, "full");
            $group_markup = array();
            foreach ($group_info as $key => $value) {
              $group_markup[$key] = eige_administrative_data_get_group_markup($value);
            }
          ?>

          <div id="eige-data-available" class="section">
            <h3 class="tab-title eige-data-available"><span><?php print t('Data available on'); ?></span></h3>
            
            <?php $group = isset($content['group_victim']) ? $content['group_victim'] : array(); ?>
            <?php print $group_markup['group_victim']['#prefix']; ?>
              <?php
                $background_info = drupal_render($group['field_victim_info']);
                $has_relation = isset($group['field_victim_relationship']) && eige_administrative_data_boolean_field_has_business_value($group['field_victim_relationship']);

                if (!($has_relation || strlen($background_info)>0)) { // no business value for this section
                  print '<div class="row"><div class="columns large-12">'. eige_administrative_data_no_section_data_markup('statistical product', $node->content['#groups']['group_victim']->label).'</div></div>';
                } else {
                  print '<div class="row">';
                    // section is visible, so we set the default values for boolean fields in case they are null so they can be properly rendered
                    eige_administrative_data_boolean_field_set_default_value($group['field_victim_relationship']);
                    
                    print '<div class="columns medium-6">';
                      $field_victim_info = field_info_instance('node', 'field_victim_info', $node->type);
                      print '<h4>'.$field_victim_info['label'].'</h4>';
                      if (!strlen($background_info)>0) {
                        print eige_administrative_data_no_sub_section_data_markup($field_victim_info['label']);
                      } else {
                        print '<div class="field field-type-text field-field-eige-ads-victim-info">';
                          $field = field_info_field('field_victim_info', $node->type);
                          $allowed_values = list_allowed_values($field);
                          $selected_values = eige_administrative_data_get_all_field_values($group['field_victim_info']);
                          print eige_administrative_data_get_options_list_markup($allowed_values, $selected_values);
                        print '</div>';
                      }
                    print '</div>';
                    print '<div class="columns medium-6">';
                      $field_rel_info = field_info_instance('node', 'field_victim_relationship', $node->type);
                      print '<h4>'.$field_rel_info['label'].'</h4>';
                      print drupal_render($group['field_victim_relationship']);
                    print '</div>';
                  print '</div>';
                }
              ?>
            <?php print $group_markup['group_victim']['#suffix']; ?>

            <?php $group = isset($content['group_perpetrator']) ? $content['group_perpetrator'] : array(); ?>
            <?php print $group_markup['group_perpetrator']['#prefix']; ?>
              <?php
                $background_info = drupal_render($group['field_perpetrator_info']);
                if (!strlen($background_info)>0) { // no business value for this section
                  print '<div class="row"><div class="columns large-12">'.  eige_administrative_data_no_section_data_markup('statistical product', $node->content['#groups']['group_perpetrator']->label).'</div></div>';
                } else {
                  print '<div class="row">';
                    print '<div class="columns large-12">';
                      $field_info = field_info_instance('node', 'field_perpetrator_info', $node->type);
                      print '<h4>'.$field_info['label'].'</h4>';
                      print '<div class="field field-type-text field-field-eige-ads-perp-info">';
                        $field = field_info_field('field_perpetrator_info', 'eige_statistical_product');
                        $allowed_values = list_allowed_values($field);
                        $selected_values = eige_administrative_data_get_all_field_values($group['field_perpetrator_info']);
                        print eige_administrative_data_get_options_list_markup($allowed_values, $selected_values);
                      print '</div>';
                    print '</div>';
                  print '</div>';
                }
              ?>
            <?php print $group_markup['group_perpetrator']['#suffix']; ?>

            <?php $group = isset($content['group_incident']) ? $content['group_incident'] : array(); ?>
            <?php print $group_markup['group_incident']['#prefix']; ?>
              <?php
                $is_incident = isset($group['field_incident']) && eige_administrative_data_boolean_field_has_business_value($group['field_incident']);
                $incident_description_other = drupal_render($group['field_incident_other']);
                if (!($is_incident || strlen($incident_description_other)>0)) { // no business value for this section
                  print '<div class="row"><div class="columns large-12">'.  eige_administrative_data_no_section_data_markup('statistical product', $node->content['#groups']['group_incident']->label).'</div></div>';
                } else {
                  print '<div class="row">';
                    print '<div class="columns large-12">';
                      $field_info = field_info_instance('node', 'field_incident', $node->type);
                      print '<h4>'.$field_info['label'].'</h4>';
                      print drupal_render($group['field_incident']);
                      print $incident_description_other;
                    print '</div>';
                  print '</div>';
                }
              ?>
            <?php print $group_markup['group_incident']['#suffix']; ?>

            <?php $group = isset($content['group_criminal_statistics']) ? $content['group_criminal_statistics'] : array(); ?>
            <?php print $group_markup['group_criminal_statistics']['#prefix']; ?>
              <?php
                $has_data = isset($group['field_criminal_statistics_data']) && eige_administrative_data_boolean_field_has_business_value($group['field_criminal_statistics_data']);
                $data_other = drupal_render($group['field_criminal_data_info']);
                if (!($has_data || strlen($data_other)>0)) { // no business value for this section
                  print '<div class="row"><div class="columns large-12">'.  eige_administrative_data_no_section_data_markup('statistical product', $node->content['#groups']['group_criminal_statistics']->label).'</div></div>';
                } else {
                  print '<div class="row">';
                    print '<div class="columns large-12">';
                      $field_info = field_info_instance('node', 'field_criminal_statistics_data', $node->type);
                      print '<h4>'.$field_info['label'].'</h4>';
                      print drupal_render($group['field_criminal_statistics_data']);
                      print $data_other;
                    print '</div>';
                  print '</div>';
                }
              ?>
            <?php print $group_markup['group_criminal_statistics']['#suffix']; ?>

          </div>

          <div id="eige-characteristics" class="section">
            <h3 class="tab-title eige-characteristics"><span><?php print $node->content['#groups']['group_characteristics']->label; ?></span></h3>
            
            <?php $group = isset($content['group_characteristics']) ? $content['group_characteristics'] : array(); ?>
            
            <?php
              print '<div class="row">';
                print '<div class="columns medium-6">';
                  $field_ref_info = field_info_instance('node', 'field_chars_reference_period', $node->type);
                  print '<h4>'.$field_ref_info['label'].'</h4>';
                  $period = drupal_render($group['field_chars_reference_period']);
                  $period_info = drupal_render($group['field_chars_ref_period_info']);
                  if (!(strlen($period)>0 || strlen($period_info)>0)) {
                    print eige_administrative_data_no_field_data_markup();
                  } else {
                    print $period;
                    print $period_info;
                  }
                print '</div>';
                print '<div class="columns medium-6">';
                  $field_frequency_info = field_info_instance('node', 'field_chars_frequency_text', $node->type);
                  print '<h4>'.$field_frequency_info['label'].'</h4>';
                  $frequency = drupal_render($group['field_chars_frequency_text']);
                  $frequency_info = drupal_render($group['field_chars_frequency_remarks']);
                  if (!(strlen($frequency)>0 || strlen($frequency_info)>0)) {
                    print eige_administrative_data_no_field_data_markup();
                  } else {
                    print $frequency;
                    print $frequency_info;
                  }
                print '</div>';
              print '</div>';

              print '<div class="row">';
                print '<div class="columns large-12">';
                  $field_info = field_info_instance('node', 'field_chars_validation', $node->type);
                  print '<h4>'.$field_info['label'].'</h4>';
                  $has_validation = isset($group['field_chars_validation']) && eige_administrative_data_boolean_field_has_business_value($group['field_chars_validation']);
                  $validation_info = drupal_render($group['field_chars_validation_info']);
                  if (!($has_validation || strlen($validation_info)>0)) {
                    print eige_administrative_data_no_field_data_markup();
                  } else {
                    print drupal_render($group['field_chars_validation']);
                    print $validation_info;
                  }
                print '</div>';
              print '</div>';
              
              
              print '<div class="row">';
                print '<div class="columns large-12">';
                  $field_info = field_info_instance('node', 'field_chars_compilation', $node->type);
                  print '<h4>'.$field_info['label'].'</h4>';
                  $compilation = drupal_render($group['field_chars_compilation']);
                  if (!strlen($compilation)>0) {
                    print eige_administrative_data_no_field_data_markup();
                  } else {
                    print $compilation;
                  }
                print '</div>';
              print '</div>';
              
              print '<div class="row">';
                print '<div class="columns large-12">';
                  $field_info = field_info_instance('node', 'field_chars_quality_exists', $node->type);
                  print '<h4>'.$field_info['label'].'</h4>';
                  $quality = drupal_render($group['field_chars_quality_exists']);
                  $quality_info = drupal_render($group['field_chars_quality_info']);
                  if (!(strlen($quality)>0 || strlen($quality_info)>0)) {
                    print eige_administrative_data_no_field_data_markup();
                  } else {
                    print $quality;
                    print $quality_info;
                  }
                print '</div>';
              print '</div>';
              
              print '<div class="row">';
                print '<div class="columns large-12">';
                  $field_accuracy_info = field_info_instance('node', 'field_chars_accuracy', $node->type);
                  print '<h4>'.$field_accuracy_info['label'].'</h4>';
                  $accuracy = drupal_render($group['field_chars_accuracy']);
                  if (!strlen($accuracy)>0) {
                    print eige_administrative_data_no_field_data_markup();
                  } else {
                    print $accuracy;
                  }
                print '</div>';
              print '</div>';
              
              print '<div class="row">';
                print '<div class="columns large-12">';
                  $field_reliability_info = field_info_instance('node', 'field_chars_reliability', $node->type);
                  print '<h4>'.$field_reliability_info['label'].'</h4>';
                  $reliability = drupal_render($group['field_chars_reliability']);
                  if (!strlen($reliability)>0) {
                    print eige_administrative_data_no_field_data_markup();
                  } else {
                    print $reliability;
                  }
                print '</div>';
              print '</div>';

              print '<div class="row">';
                print '<div class="columns large-12">';
                  $field_timeliness_info = field_info_instance('node', 'field_chars_timeliness', $node->type);
                  print '<h4>'.$field_timeliness_info['label'].'</h4>';
                  $timeliness = drupal_render($group['field_chars_timeliness']);
                  if (!strlen($timeliness)>0) {
                    print eige_administrative_data_no_field_data_markup();
                  } else {
                    print $timeliness;
                  }
                print '</div>';
              print '</div>';
              
              
              print '<div class="row">';
                print '<div class="columns medium-6">';
                  $field_comparability_info = field_info_instance('node', 'field_chars_comparability', $node->type);
                  print '<h4>'.$field_comparability_info['label'].'</h4>';
                  $comparability = drupal_render($group['field_chars_comparability']);
                  $comparability_info = drupal_render($group['field_chars_compare_remarks']);
                  if (!(strlen($comparability)>0 || strlen($comparability_info)>0)) {
                    print eige_administrative_data_no_field_data_markup();
                  } else {
                    print '<div class="field field-type-text field-field-eige-sp-comparability">';
                      $field = field_info_field('field_chars_comparability', 'eige_statistical_product');
                      $allowed_values = list_allowed_values($field);
                      $selected_values = eige_administrative_data_get_all_field_values($group['field_chars_comparability']);
                      print eige_administrative_data_get_options_list_markup($allowed_values, $selected_values);
                    print '</div>';
                    print $comparability_info;
                  }
                print '</div>';
                print '<div class="columns medium-6">';
                  $field_developments_info = field_info_instance('node', 'field_chars_developments', $node->type);
                  print '<h4>'.$field_developments_info['label'].'</h4>';
                  $development = drupal_render($group['field_chars_developments']);
                  if (!strlen($development)>0) {
                    print eige_administrative_data_no_field_data_markup();
                  } else {
                    print $development;
                  }
                print '</div>';
              print '</div>';
              
              
              print '<div class="row">';
                print '<div class="columns large-12">';
                  $field_info = field_info_instance('node', 'field_chars_external_link', $node->type);
                  print '<h4>'.$field_info['label'].'</h4>';
                  $has_links = isset($group['field_chars_external_link']) && eige_administrative_data_boolean_field_has_business_value($group['field_chars_external_link']);
                  $external_links = drupal_render($group['field_chars_external_link_info']);
                  if (!($has_links || strlen($external_links)>0)) {
                    print eige_administrative_data_no_field_data_markup();
                  } else {
                    print drupal_render($group['field_chars_external_link']);
                    print $external_links;
                  }
                print '</div>';
              print '</div>';

              $remarks = drupal_render($group['field_chars_remarks']);
              if ($remarks) {
                print '<div class="row"><div class="columns large-12">' . $remarks . '</div></div>';
              }
            ?>
          </div>
          
          <?php print drupal_render($content['field_general_remarks']); ?>

        </div>
      </div>

    </div>

    <div class="group-right large-3 small-12">

      <?php print drupal_render($content['group_about']); ?>

      <?php 
        $country_name = $node->field_country['und'][0]['safe_value'];
        $country_iso = $node->field_country['und'][0]['iso2'];
        $country_url = strtolower(str_replace(" ", "-", $country_name));
      ?>
      <div class="eige-ads-country-link country_<?php print $country_iso; ?> field-group-div">
        <a href="/gender-based-violence/administrative-data-sources/country/<?php print $country_url; ?>">
          <span><?php print t("More on ") . '<strong>' . $country_name . '</strong>'; ?></span>
        </a>
      </div>

    </div>

  </div>

  <div class="row">
    <div class="group-footer large-9 small-12">
      <?php print drupal_render($content['group_related_content']); ?>
    </div>
  </div>

</div>

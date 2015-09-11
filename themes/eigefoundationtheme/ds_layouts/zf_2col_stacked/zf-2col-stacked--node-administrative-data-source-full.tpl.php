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
<div id="node-<?php print $node->nid; ?>" class="node<?php if ($sticky) { print ' sticky'; } ?><?php if (!$status) { print ' node-unpublished'; } ?> clear-block zf-2col-stacked node-administrative-data-source view-mode-full row">
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

          <div class="eige-ad-intro row">

            <div class="eige-ad-violence-types columns medium-6">
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
              <?php print drupal_render($content['field_violence_remarks']); ?>
            </div>

            <div class="eige-ad-data-purpose columns medium-6">
              <?php
              $data_purpose = drupal_render($content['field_purpose_of_data_collection']);
              $other_purpose = drupal_render($content['field_other_purpose']);
              if (strlen($data_purpose)>0 || strlen($other_purpose)>0) {
                print $data_purpose;
                print $other_purpose;
              } else {
                $field_info = field_info_instance('node', 'field_purpose_of_data_collection', $node->type);
                print '<div class="field field-type-text field-field-eige-ads-data-purpose">
                <div class="field-label">'.$field_info['label'].'</div>'
                .eige_administrative_data_no_field_data_markup().
                '</div>';
              }
              ?>
            </div>
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
              $background_info_other = drupal_render($group['field_victim_info_other']);
              $remarks = drupal_render($group['field_victim_remarks']);
              $has_relation = isset($group['field_victim_relationship']) && eige_administrative_data_boolean_field_has_business_value($group['field_victim_relationship']);
              $has_repetition = isset($group['field_victim_repetition']) && eige_administrative_data_boolean_field_has_business_value($group['field_victim_repetition']);
              if (!(strlen($background_info)>0 || strlen($background_info_other)>0 || strlen($remarks)>0 || $has_relation || $has_repetition)) { // no business value for this section
                print '<div class="row"><div class="columns large-12">'.  eige_administrative_data_no_section_data_markup('administrative data source', $node->content['#groups']['group_victim']->label).'</div></div>';
              } else {
                print '<div class="row">';
                  // section is visible, so we set the default values for boolean fields in case they are null so they can be properly rendered
                  eige_administrative_data_boolean_field_set_default_value($group['field_victim_relationship']);
                  eige_administrative_data_boolean_field_set_default_value($group['field_victim_repetition']);

                  print '<div class="columns medium-6">';
                    $field_info = field_info_instance('node', 'field_victim_info', $node->type);
                    print '<h4>'.$field_info['label'].'</h4>';
                    if (!(strlen($background_info)>0 || strlen($background_info_other)>0)) {
                      print eige_administrative_data_no_sub_section_data_markup($field_info['label']);
                    } else {
                      print '<div class="field field-type-text field-field-eige-ads-victim-info">';
                        $field = field_info_field('field_victim_info');
                        $allowed_values = list_allowed_values($field);
                        $selected_values = eige_administrative_data_get_all_field_values($group['field_victim_info']);
                        print eige_administrative_data_get_options_list_markup($allowed_values, $selected_values);
                      print '</div>';
                      if (strlen($background_info_other)>0) {
                        print $background_info_other;
                      }
                    }
                  print '</div>';
                  print '<div class="columns medium-6">';
                    $field_ref_info = field_info_instance('node', 'field_victim_relationship', $node->type); 
                    $field_repetition_info = field_info_instance('node', 'field_victim_repetition', $node->type);
                    print '<h4>'.$field_ref_info['label'].'</h4>';
                    print drupal_render($group['field_victim_relationship']);
                    print drupal_render($group['field_victim_relation_type']);
                    print '<h4>'.$field_repetition_info['label'].'</h4>';
                    print drupal_render($group['field_victim_repetition']);
                  print '</div>';
                print '</div>';
                if (strlen($remarks)>0) {
                  print '<div class="row"><div class="columns large-12">'.$remarks.'</div></div>';
                }
              }
              ?>
            <?php print $group_markup['group_victim']['#suffix']; ?>

            
            <?php $group = isset($content['group_perpetrator']) ? $content['group_perpetrator'] : array(); ?>
            <?php print $group_markup['group_perpetrator']['#prefix']; ?>
              <?php
              $background_info = drupal_render($group['field_perpetrator_info']);
              $background_info_other = drupal_render($group['field_perpetrator_info_other']);
              $remarks = drupal_render($group['field_perpetrator_remarks']);
              $has_relation = isset($group['field_perpetrator_relationship']) && eige_administrative_data_boolean_field_has_business_value($group['field_perpetrator_relationship']);
              $has_reoffending = isset($group['field_perpetrator_reoffending']) && eige_administrative_data_boolean_field_has_business_value($group['field_perpetrator_reoffending']);
              if (!(strlen($background_info)>0 || strlen($background_info_other)>0 || strlen($remarks)>0 || $has_relation || $has_reoffending)) { // no business value for this section
                print '<div class="row"><div class="columns large-12">'.  eige_administrative_data_no_section_data_markup('administrative data source', $node->content['#groups']['group_perpetrator']->label).'</div></div>';
              } else {
                print '<div class="row">';
                  // section is visible, so we set the default values for boolean fields in case they are null so they can be properly rendered
                  eige_administrative_data_boolean_field_set_default_value($group['field_perpetrator_relationship']);
                  eige_administrative_data_boolean_field_set_default_value($group['field_perpetrator_reoffending']);
                  
                  print '<div class="columns medium-6">';
                    $field_info = field_info_instance('node', 'field_perpetrator_info', $node->type);
                    print '<h4>'.$field_info['label'].'</h4>';
                    if (!(strlen($background_info)>0 || strlen($background_info_other)>0)) {
                      print eige_administrative_data_no_sub_section_data_markup($field_info['label']);
                    } else {
                      print '<div class="field field-type-text field-field-eige-ads-perp-info">';
                        $field = field_info_field('field_perpetrator_info', $node->type);
                        $allowed_values = list_allowed_values($field);
                        $selected_values = eige_administrative_data_get_all_field_values($group['field_perpetrator_info']);
                        print eige_administrative_data_get_options_list_markup($allowed_values, $selected_values);
                      print '</div>';
                      if (strlen($background_info_other)>0) {
                        print $background_info_other;
                      }
                    }
                  print '</div>';
                  print '<div class="columns medium-6">';
                    $field_relationship_info = field_info_instance('node', 'field_perpetrator_relationship', $node->type);
                    $field_reoffending_info = field_info_instance('node', 'field_perpetrator_reoffending', $node->type);
                    print '<h4>'.$field_relationship_info['label'].'</h4>';
                    print drupal_render($group['field_perpetrator_relationship']);
                    print drupal_render($group['field_perpetrator_rel_info']);
                    print '<h4>'.$field_reoffending_info['label'].'</h4>';
                    print drupal_render($group['field_perpetrator_reoffending']);
                  print '</div>';
                print '</div>';
                if (strlen($remarks)>0) {
                  print '<div class="row"><div class="columns large-12">'.$remarks.'</div></div>';
                }
              }
              ?>
            <?php print $group_markup['group_perpetrator']['#suffix']; ?>

            
            <?php $group = isset($content['group_witness']) ? $content['group_witness'] : array(); ?>
            <?php print $group_markup['group_witness']['#prefix']; ?>
              <?php
              $background_info = drupal_render($group['field_witness_info']);
              $background_info_other = drupal_render($group['field_witness_info_other']);
              $remarks = drupal_render($group['field_witness_remarks']);
              $has_relation = isset($group['field_witness_relationship']) && eige_administrative_data_boolean_field_has_business_value($group['field_witness_relationship']);
              $has_incident_description = isset($group['field_witness_description']) && eige_administrative_data_boolean_field_has_business_value($group['field_witness_description']);
              $has_children_witnessing = isset($group['field_witness_children']) && eige_administrative_data_boolean_field_has_business_value($group['field_witness_children']);
              if (!(strlen($background_info)>0 || strlen($background_info_other)>0 || strlen($remarks)>0 || $has_relation || $has_incident_description || $has_children_witnessing)) { // no business value for this section
                print '<div class="row"><div class="columns large-12">'.  eige_administrative_data_no_section_data_markup('administrative data source', $node->content['#groups']['group_witness']->label).'</div></div>';
              } else {
                print '<div class="row">';
                  // section is visible, so we set the default values for boolean fields in case they are null so they can be properly rendered
                  eige_administrative_data_boolean_field_set_default_value($group['field_witness_relationship']);
                  eige_administrative_data_boolean_field_set_default_value($group['field_witness_description']);
                  eige_administrative_data_boolean_field_set_default_value($group['field_witness_children']);
                  
                  print '<div class="columns medium-6">';
                    $field_info = field_info_instance('node', 'field_witness_info', $node->type);
                    print '<h4>'.$field_info['label'].'</h4>';
                    if (!(strlen($background_info)>0 || strlen($background_info_other)>0)) {
                      print eige_administrative_data_no_sub_section_data_markup($field_info['label']);
                    } else {
                      print '<div class="field field-type-text field-field-eige-ads-wit-info">';
                        $field = field_info_field('field_witness_info', $node->type);
                        $allowed_values = list_allowed_values($field);
                        $selected_values = eige_administrative_data_get_all_field_values($group['field_witness_info']);
                        print eige_administrative_data_get_options_list_markup($allowed_values, $selected_values);
                      print '</div>';
                      if (strlen($background_info_other)>0) {
                        print $background_info_other;
                      }
                    }
                  print '</div>';
                  print '<div class="columns medium-6">';
                    $field_relationship_info = field_info_instance('node', 'field_witness_relationship', $node->type);
                    $field_witness_info = field_info_instance('node', 'field_witness_description', $node->type);
                    $field_children_info = field_info_instance('node', 'field_witness_children', $node->type);
                    print '<h4>'.$field_relationship_info['label'].'</h4>';
                    print drupal_render($group['field_witness_relationship']);
                    print '<h4>'.$field_witness_info['label'].'</h4>';
                    print drupal_render($group['field_witness_description']);
                    print '<h4>'.$field_children_info['label'].'</h4>';
                    print drupal_render($group['field_witness_children']);
                  print '</div>';
                print '</div>';
                if (strlen($remarks)>0) {
                  print '<div class="row"><div class="columns large-12">'.$remarks.'</div></div>';
                }
              }
              ?>
            <?php print $group_markup['group_witness']['#suffix']; ?>
            
            <?php $group = isset($content['group_incident']) ? $content['group_incident'] : array(); ?>
            <?php print $group_markup['group_incident']['#prefix']; ?>
              <?php
              $codes = drupal_render($group['field_incident_code_system']);
              $code_remarks = drupal_render($group['field_incident_code_remarks']);
              $incident_description = drupal_render($group['field_incident_description']);
              $incident_description_other = drupal_render($group['field_incident_description_other']);
              $has_protection_order = isset($group['field_incident_protection']) && eige_administrative_data_boolean_field_has_business_value($group['field_incident_protection']);
              $has_civil_justice = isset($group['field_incident_justice_data']) && eige_administrative_data_boolean_field_has_business_value($group['field_incident_justice_data']);
              $resources = drupal_render($group['field_incident_resources']);
              $resources_other = drupal_render($group['field_incident_other_resources']);
              $remarks = drupal_render($group['field_incident_remarks']);
              $code_system_used = (strlen($codes)>0);
              if ($code_system_used) { // at least one option is selected
                $selected_value = eige_administrative_data_sanitize_literal($group['field_incident_code_system']['#items'][0]['value']);
                if ($selected_value=="no_information_available") {
                  $code_system_used = false;
                }
              }
              $is_section_visible = ($code_system_used || strlen($code_remarks)>0 || strlen($incident_description)>0 || strlen($incident_description_other)>0 ||
                $has_protection_order || $has_civil_justice || strlen($resources)>0 || strlen($resources_other)>0 || strlen($remarks)>0);

              if (!$is_section_visible) { // no business value for this section
                print '<div class="row"><div class="columns large-12">'.  eige_administrative_data_no_section_data_markup('administrative data source', $node->content['#groups']['group_incident']->label).'</div></div>';
              } else {
                print '<div class="row">';
                // section is visible, so we set the default values for boolean fields in case they are null so they can be properly rendered
                eige_administrative_data_boolean_field_set_default_value($group['field_incident_protection']);
                eige_administrative_data_boolean_field_set_default_value($group['field_incident_justice_data']);
                
                  print '<div class="columns medium-6">';
                    // code system used subsection
                    $field_codes_info = field_info_instance('node', 'field_incident_code_system', $node->type);
                    print '<h4>'.$field_codes_info['label'].'</h4>';
                    if (!($code_system_used || strlen($code_remarks)>0)) {
                      print eige_administrative_data_no_field_data_markup();
                    } else {
                      if (!$code_system_used) {
                        print eige_administrative_data_no_field_data_markup();
                      } else {
                        print '<div class="field field-type-text field-field-incident-code-system">';
                          $field = field_info_field('field_incident_code_system');
                          $allowed_values = list_allowed_values($field);
                          $selected_values = eige_administrative_data_get_all_field_values($group['field_incident_code_system']);
                          print eige_administrative_data_get_options_list_markup($allowed_values, $selected_values, false);
                        print '</div>';
                      }
                      if (strlen($code_remarks)>0) {
                        print $code_remarks;
                      }
                    }
                  print '</div>';
                  print '<div class="columns medium-6">';
                    // description of the incident subsection
                    $field_info = field_info_instance('node', 'field_incident_description', $node->type);
                    print '<h4>'.$field_info['label'].'</h4>';
                    if (!(strlen($incident_description)>0 || strlen($incident_description_other)>0)) {
                      print eige_administrative_data_no_sub_section_data_markup($field_info['label']);
                    } else {
                      print '<div class="field field-type-text field-field-eige-ads-inc-description">';
                        $field = field_info_field('field_incident_description', $node->type);
                        $allowed_values = list_allowed_values($field);
                        $selected_values = eige_administrative_data_get_all_field_values($group['field_incident_description']);
                        print eige_administrative_data_get_options_list_markup($allowed_values, $selected_values);
                      print '</div>';
                      if (strlen($incident_description_other)>0) {
                        print $incident_description_other;
                      }
                    }
                  print '</div>';
                print '</div>';

                print '<div class="row">';
                  print '<div class="columns medium-6">';
                    $field_protection_info = field_info_instance('node', 'field_incident_protection', $node->type);
                    $field_justice_info = field_info_instance('node', 'field_incident_justice_data', $node->type);
                    print '<h4>'.$field_protection_info['label'].'</h4>';
                    print drupal_render($group['field_incident_protection']);
                    print drupal_render($group['field_incident_orders']);
                    print '<h4>'.$field_justice_info['label'].'</h4>';
                    print drupal_render($group['field_incident_justice_data']);
                    print drupal_render($group['field_incident_justice_info']);
                  print '</div>';
                  print '<div class="columns medium-6">';
                    $field_resources_info = field_info_instance('node', 'field_incident_resources', $node->type);
                    print '<h4>'.$field_resources_info['label'].'</h4>';
                    if (!(strlen($resources)>0 || strlen($resources_other)>0)) {
                      print eige_administrative_data_no_sub_section_data_markup($field_resources_info['label']);
                    } else {
                      print '<div class="field field-type-text field-field-eige-ads-inc-resources">';
                      $field = field_info_field('field_incident_resources', $node->type);
                      $allowed_values = list_allowed_values($field);
                      $selected_values = eige_administrative_data_get_all_field_values($group['field_incident_resources']);
                      print eige_administrative_data_get_options_list_markup($allowed_values, $selected_values);
                      print '</div>';
                      if (strlen($resources_other)>0) {
                        print $resources_other;
                      }
                    }
                  print '</div>';
                print '</div>';
                if (strlen($remarks)>0) {
                  print '<div class="row"><div class="columns large-12">'.$remarks.'</div></div>';
                }
              }
              ?>
            <?php print $group_markup['group_incident']['#suffix']; ?>
            
            <?php $group = isset($content['group_prosecution_process']) ? $content['group_prosecution_process'] : array(); ?>
            <?php print $group_markup['group_prosecution_process']['#prefix']; ?>
              <?php
              $stages = drupal_render($group['field_prosecution_stages']);
              $stages_remarks = drupal_render($group['field_prosec_stages_other']);
              $defendant = drupal_render($group['field_prosecution_defendant']);
              $defendant_other = drupal_render($group['field_prosec_defendant_other']);
              $has_average_time = isset($group['field_prosecution_avg_time']) && eige_administrative_data_boolean_field_has_business_value($group['field_prosecution_avg_time'], 0);
              $remarks = drupal_render($group['field_prosecution_remarks']);

              $is_section_visible = (strlen($stages)>0 || strlen($stages_remarks)>0 || strlen($defendant)>0 ||
                strlen($defendant_other)>0 || $has_average_time || strlen($remarks)>0);

              if (!$is_section_visible) { // no business value for this section
                print '<div class="row"><div class="columns large-12">' . eige_administrative_data_no_section_data_markup('administrative data source', $node->content['#groups']['group_prosecution_process']->label).'</div></div>';
              } else {
                print '<div class="row">';
                  // section is visible, so we set the default values for boolean fields in case they are null so they can be properly rendered
                  eige_administrative_data_boolean_field_set_default_value($group['field_prosecution_avg_time']);

                  print '<div class="columns medium-6">';
                    $field_stages_info = field_info_instance('node', 'field_prosecution_stages', $node->type);
                    print '<h4>' .$field_stages_info['label'].'</h4>';
                    if (!(strlen($stages)>0 || strlen($stages_remarks)>0)) {
                      print eige_administrative_data_no_sub_section_data_markup($field_stages_info['label']);
                    } else {
                      print '<div class="field field-type-text field-field-eige-ads-pp-stages">';
                        $field = field_info_field('field_prosecution_stages', $node->type);
                        $allowed_values = list_allowed_values($field);
                        $selected_values = eige_administrative_data_get_all_field_values($group['field_prosecution_stages']);
                        print eige_administrative_data_get_options_list_markup($allowed_values, $selected_values);
                      print '</div>';
                      if (strlen($background_info_other)>0) {
                        print $stages_remarks;
                      }
                    }
                  print '</div>';

                  print '<div class="columns medium-6">';
                    $field_defendant_info = field_info_instance('node', 'field_prosecution_defendant', $node->type);
                    $field_time_info = field_info_instance('node', 'field_prosecution_avg_time', $node->type);
                    print '<h4>'.$field_defendant_info['label'].'</h4>';
                    if (!(strlen($defendant)>0 || strlen($defendant_other)>0)) {
                      print eige_administrative_data_no_sub_section_data_markup($field_defendant_info['label']);
                    } else {
                      print '<div class="field field-type-text field-field-eige-ads-pp-defendant">';
                        $field = field_info_field('field_prosecution_defendant', $node->type);
                        $allowed_values = list_allowed_values($field);
                        $selected_values = eige_administrative_data_get_all_field_values($group['field_prosecution_defendant']);
                        print eige_administrative_data_get_options_list_markup($allowed_values, $selected_values);
                      print '</div>';
                      if (strlen($defendant_other)>0) {
                        print $defendant_other;
                      }
                    }
                    print '<h4>'.$field_time_info['label'].'</h4>';
                    print drupal_render($group['field_prosecution_avg_time']);
                  print '</div>';
                print '</div>';
                if (strlen($remarks)>0) {
                  print '<div class="row"><div class="columns large-12">'.$remarks.'</div></div>';
                }
              }
              ?>
            <?php print $group_markup['group_prosecution_process']['#suffix']; ?>
            
            <?php $group = isset($content['group_outcomes']) ? $content['group_outcomes'] : array(); ?>
            <?php print $group_markup['group_outcomes']['#prefix']; ?>
              <?php
              $has_cases_arrested = isset($group['field_outcomes_arrest_cases']) && eige_administrative_data_boolean_field_has_business_value($group['field_outcomes_arrest_cases'], 0);
              $has_many_offenses = isset($group['field_outcomes_many_offenses']) && eige_administrative_data_boolean_field_has_business_value($group['field_outcomes_many_offenses'], 0);
              $has_list_offenses = isset($group['field_outcomes_list_offenses']) && eige_administrative_data_boolean_field_has_business_value($group['field_outcomes_list_offenses'], 0);
              $has_probation = isset($group['field_outcomes_probation']) && eige_administrative_data_boolean_field_has_business_value($group['field_outcomes_probation'], 0);
              $has_bail = isset($group['field_outcomes_bail_remand']) && eige_administrative_data_boolean_field_has_business_value($group['field_outcomes_bail_remand'], 0);
              $has_prisons = isset($group['field_outcomes_prisons']) && eige_administrative_data_boolean_field_has_business_value($group['field_outcomes_prisons'], 0);
              $has_victim_died = isset($group['field_outcomes_death']) && eige_administrative_data_boolean_field_has_business_value($group['field_outcomes_death'], 0);
              $other_outcome = drupal_render($group['field_outcomes_perp_other']);
              $remarks = drupal_render($group['field_outcomes_remarks']);

              $is_section_visible = (strlen($other_outcome)>0 || strlen($remarks)>0 ||
               $has_cases_arrested || $has_many_offenses || $has_list_offenses ||
               $has_probation || $has_bail || $has_prisons || $has_victim_died);

              if (!$is_section_visible) { // no business value for this section
                print '<div class="row"><div class="columns large-12">'.  eige_administrative_data_no_section_data_markup('administrative data source', $node->content['#groups']['group_outcomes']->label).'</div></div>';
              } else {
                // section is visible, so we set the default values for boolean fields in case they are null so they can be properly rendered
                // these two fields will always be visible and displaying default values
                eige_administrative_data_boolean_field_set_default_value($group['field_outcomes_arrest_cases']);
                eige_administrative_data_boolean_field_set_default_value($group['field_outcomes_death']);

                // recalculate the other boolean fields, without the additional empty option, in order to determine whether they should be displayed or not
                $has_many_offenses = isset($group['field_outcomes_many_offenses']) && eige_administrative_data_boolean_field_has_business_value($group['field_outcomes_many_offenses']);
                $has_list_offenses = isset($group['field_outcomes_list_offenses']) && eige_administrative_data_boolean_field_has_business_value($group['field_outcomes_list_offenses']);
                $has_probation = isset($group['field_outcomes_probation']) && eige_administrative_data_boolean_field_has_business_value($group['field_outcomes_probation']);
                $has_bail = isset($group['field_outcomes_bail_remand']) && eige_administrative_data_boolean_field_has_business_value($group['field_outcomes_bail_remand']);
                $has_prisons = isset($group['field_outcomes_prisons']) && eige_administrative_data_boolean_field_has_business_value($group['field_outcomes_prisons']);

                print '<h4 class="sub-section"><th colspan="2">'.t('Perpetrator').'</h4>';
                print '<div class="row">';
                  print '<div class="columns large-12">';
                    $field_info = field_info_instance('node', 'field_outcomes_arrest_cases', $node->type);
                    print '<h5>' . $field_info['label'] . '</h5>';
                    print drupal_render($group['field_outcomes_arrest_cases']);
                  print '</div>';
                print '</div>';
                if ($has_many_offenses) {
                print '<div class="row">';
                  print '<div class="columns large-12">';
                    $field_info = field_info_instance('node', 'field_outcomes_many_offenses', $node->type);
                    print '<h5>' . $field_info['label'] . '</h5>';
                    print drupal_render($group['field_outcomes_many_offenses']);
                  print '</div>';
                print '</div>';
                }
                if ($has_list_offenses) {
                print '<div class="row">';
                  print '<div class="columns large-12">';
                    $field_info = field_info_instance('node', 'field_outcomes_list_offenses', $node->type);
                    print '<h5>' . $field_info['label'] . '</h5>';
                    print drupal_render($group['field_outcomes_list_offenses']);
                    print drupal_render($group['field_outcomes_offenses_remarks']);
                  print '</div>';
                print '</div>';
                }
                if ($has_probation) {
                print '<div class="row">';
                  print '<div class="columns large-12">';
                    $field_info = field_info_instance('node', 'field_outcomes_probation', $node->type);
                    print '<h5>' . $field_info['label'] . '</h5>';
                    print drupal_render($group['field_outcomes_probation']);
                  print '</div>';
                print '</div>';
                }
                if ($has_bail) {
                print '<div class="row">';
                  print '<div class="columns large-12">';
                    $field_info = field_info_instance('node', 'field_outcomes_bail_remand', $node->type);
                    print '<h5>' . $field_info['label'] . '</h5>';
                    print drupal_render($group['field_outcomes_bail_remand']);
                    print drupal_render($group['field_outcomes_bail_remarks']);
                  print '</div>';
                print '</div>';
                }
                if ($has_prisons) {
                print '<div class="row">';
                  print '<div class="columns large-12">';
                    $field_info = field_info_instance('node', 'field_outcomes_prisons', $node->type);
                    print '<h5>' . $field_info['label'] . '</h5>';
                    print drupal_render($group['field_outcomes_prisons']);
                    print drupal_render($group['field_outcomes_prisons_remarks']);
                  print '</div>';
                print '</div>';
                }
                if (strlen($other_outcome)>0) {
                print '<div class="row">';
                  print '<div class="columns large-12">';
                    $field_info = field_info_instance('node', 'field_outcomes_perp_other', $node->type);
                    print '<h5>' . $field_info['label'] . '</h5>';
                    print $other_outcome;
                  print '</div>';
                print '</div>';
                }
                print '<h4 class="sub-section"><th colspan="2">'.t('Victim').'</h4>';
                print '<div class="row">';
                  print '<div class="columns large-12">';
                    $field_info = field_info_instance('node', 'field_outcomes_death', $node->type);
                    print '<h5>' . $field_info['label'] . '</h5>';
                    print drupal_render($group['field_outcomes_death']);
                  print '</div>';
                print '</div>';
                if (strlen($remarks)>0) {
                  print '<div class="row"><div class="columns large-12">'.$remarks.'</div></div>';
                }
              }
              ?>
            <?php print $group_markup['group_outcomes']['#suffix']; ?>

          </div>

          <div id="eige-characteristics" class="section">
            <h3 class="tab-title eige-characteristics"><span><?php print $node->content['#groups']['group_characteristics']->label; ?></span></h3>
            
            <?php $group = isset($content['group_characteristics']) ? $content['group_characteristics'] : array(); ?>
            
            <?php
            print '<div class="row">';
              print '<div class="columns medium-6">';
                $field_storage_info = field_info_instance('node', 'field_chars_storage_system', $node->type);
                print '<h4>' . $field_storage_info['label'] . '</h4>';
                $storage = drupal_render($group['field_chars_storage_system']);
                $storage_other = drupal_render($group['field_chars_storage_other']);
                if (!(strlen($storage)>0 || strlen($storage_other)>0)) {
                  print eige_administrative_data_no_field_data_markup();
                } else {
                  print '<div class="field field-type-text field-field-eige-ads-chars-storage">';
                    $field = field_info_field('field_chars_storage_system', $node->type);
                    $allowed_values = list_allowed_values($field);
                    $selected_values = eige_administrative_data_get_all_field_values($group['field_chars_storage_system']);
                    print eige_administrative_data_get_options_list_markup($allowed_values, $selected_values);
                  print '</div>';
                  if (strlen($storage_other)>0) {
                    print $storage_other;
                  }
                }
              print '</div>';
              print '<div class="columns medium-6">';
                $field_frequency_info = field_info_instance('node', 'field_chars_frequency', $node->type);
                print '<h4>' . $field_frequency_info['label'] . '</h4>';
                $frequency = drupal_render($group['field_chars_frequency']);
                if (!strlen($frequency)>0) {
                  print eige_administrative_data_no_field_data_markup();
                } else {
                  print $frequency;
                  print drupal_render($group['field_chars_frequency_remarks']);
                }
              print '</div>';
            print '</div>';
            
            print '<div class="row">';
              print '<div class="columns large-12">';
                $field_assurance_info = field_info_instance('node', 'field_chars_quality_assurance', $node->type);
                print '<h4>' . $field_assurance_info['label'] . '</h4>';
                $quality = drupal_render($group['field_chars_quality_assurance']);
                if (!strlen($quality)>0) {
                  print eige_administrative_data_no_field_data_markup();
                } else {
                  print $quality;
                }
              print '</div>';
            print '</div>';
            
            print '<div class="row">';
              print '<div class="columns medium-6">';
                $field_comparability_info = field_info_instance('node', 'field_chars_comparability', $node->type);
                print '<h4>' . $field_comparability_info['label'] . '</h4>';
                $comparability = drupal_render($group['field_chars_comparability']);
                $comparability_other = drupal_render($group['field_chars_compare_remarks']);
                if (!(strlen($comparability)>0 || strlen($comparability_other)>0)) {
                  print eige_administrative_data_no_field_data_markup();
                } else {
                  print '<div class="field field-type-text field-field-eige-ads-chars-compare">';
                    $field = field_info_field('field_chars_comparability', $node->type);
                    $allowed_values = list_allowed_values($field);
                    $selected_values = eige_administrative_data_get_all_field_values($group['field_chars_comparability']);
                    print eige_administrative_data_get_options_list_markup($allowed_values, $selected_values);
                  print '</div>';
                  if (strlen($comparability_other)>0) {
                    print $comparability_other;
                  }
                }
              print '</div>';
              print '<div class="columns medium-6">';
                $field_timeliness_info = field_info_instance('node', 'field_chars_timeliness', $node->type);
                print '<h4>' . $field_timeliness_info['label'] . '</h4>';
                $timeliness = drupal_render($group['field_chars_timeliness']);
                if (!strlen($timeliness)>0) {
                  print eige_administrative_data_no_field_data_markup();
                } else {
                  print $timeliness;
                  print drupal_render($group['field_chars_timeliness_info']);
                }
              print '</div>';
            print '</div>';

            print '<div class="row">';
              print '<div class="columns large-12">';
                $field_developments_info = field_info_instance('node', 'field_chars_developments', $node->type);
                print '<h4>' . $field_developments_info['label'] . '</h4>';
                $quality = drupal_render($group['field_chars_developments']);
                if (!strlen($quality)>0) {
                  print eige_administrative_data_no_field_data_markup();
                } else {
                  print $quality;
                }
              print '</div>';
            print '</div>';
            
            print '<div class="row">';
              print '<div class="columns medium-6">';
                print '<h4>' . t('Relation with third parties') . '</h4>';
                $has_relation = isset($group['field_chars_reported']) && eige_administrative_data_boolean_field_has_business_value($group['field_chars_reported']);
                $usage = drupal_render($group['field_chars_usage']);
                if (!($has_relation || strlen($usage)>0)) {
                  print eige_administrative_data_no_field_data_markup();
                } else {
                  $field_reported_info = field_info_instance('node', 'field_chars_reported', $node->type);
                  print '<div class="field field-name-field-chars-reported field-label-above field-wrapper"><div class="field-label">' . $field_reported_info['label'] . '</div></div>';
                  print drupal_render($group['field_chars_reported']);
                  print drupal_render($group['field_chars_organisation']);
                  print $usage;
                  print drupal_render($group['field_chars_usage_info']);
                }
              print '</div>';
              print '<div class="columns medium-6">';
                $field_reporter_info = field_info_instance('node', 'field_chars_reporter', $node->type);
                print '<h4>' . $field_reporter_info['label'] . '</h4>';
                $reporter = drupal_render($group['field_chars_reporter']);
                $reporter_other = drupal_render($group['field_chars_reporter_other']);
                if (!(strlen($reporter)>0 || strlen($reporter_other)>0)) {
                  print eige_administrative_data_no_field_data_markup();
                } else {
                  print '<div class="field field-type-text field-field-eige-ads-chars-reporter">';
                    $field = field_info_field('field_chars_reporter', $node->type);
                    $allowed_values = list_allowed_values($field);
                    $selected_values = eige_administrative_data_get_all_field_values($group['field_chars_reporter']);
                    print eige_administrative_data_get_options_list_markup($allowed_values, $selected_values);
                  print '</div>';
                  print $reporter_other;
                }
              print '</div>';
            print '</div>';
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

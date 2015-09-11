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
<div id="node-<?php print $node->nid; ?>" class="node<?php if ($sticky) { print ' sticky'; } ?><?php if (!$status) { print ' node-unpublished'; } ?> clear-block zf-2col-stacked node-statistics-on-sexual-violence view-mode-full row">
  <?php
    node_build_content($node);
  ?>
  <div class="row">
    <div class="group-left large-9 small-12">

      <?php print drupal_render($content['content_type']); ?>
      <?php print drupal_render($content['title_field']); ?>
      <?php print drupal_render($content['group_metadata']); ?>

      <div class="content clear-block node-wrapper">
        <div id="node-main-content">

          <?php
            $statistical_metadata = array();
            $statistical_metadata_labels = array();
            if (isset($content['group_statistics']['field_reported_cases']['#items']) && count($content['group_statistics']['field_reported_cases']['#items'])>0) {
              $value = $content['group_statistics']['field_reported_cases']['#items'][0]['value'];
              if ($value) {
                $statistical_metadata['reported_cases'] = (int)$value;
                $statistical_metadata_labels['reported_cases'] = $content['group_statistics']['field_reported_cases']['#title'];
              }
            }
            if (isset($content['group_statistics']['field_prosecutions_court_cases']['#items']) && count($content['group_statistics']['field_prosecutions_court_cases']['#items'])>0) {
              $value = $content['group_statistics']['field_prosecutions_court_cases']['#items'][0]['value'];
              if ($value) {
                $statistical_metadata['court_cases'] = (int)$value;
                $statistical_metadata_labels['court_cases'] = $content['group_statistics']['field_prosecutions_court_cases']['#title'];
              }
            }
            if (isset($content['group_statistics']['field_convictions']['#items']) && count($content['group_statistics']['field_convictions']['#items'])>0) {
              $value = $content['group_statistics']['field_convictions']['#items'][0]['value'];
              if ($value) {
                $statistical_metadata['convictions'] = (int)$value;
                $statistical_metadata_labels['convictions'] = $content['group_statistics']['field_convictions']['#title'];
              }
            }
            if (count($statistical_metadata)>0) {
              $sorted_statistical_metadata = $statistical_metadata;
              arsort($sorted_statistical_metadata);
              $percentages_and_css_classes = array();
              $index = 0;
              $max_value;
              foreach ($sorted_statistical_metadata as $key=>$value) {
                if ($index == 0) {
                  // since array is sorted, the first element is the highest one
                  $percentages_and_css_classes[$key] = array("percentage" => "60", 'css_class' => 'first'); // calc(100% * 0.6)
                  $max_value = $value;
                } else {
                  if ($index==1) {
                    $percentage = "40"; // calc(66.6% * 0.6) - because the max percentage is 60 and not 100
                    $css_class = "second";
                  } else {
                    $percentage = "20"; // calc(33.3% * 0.6) - because the max percentage is 60 and not 100
                    $css_class = "third";
                  }
                  $percentages_and_css_classes[$key] = array("percentage"=> $percentage, 'css_class' => $css_class);
                }
                $index++;
              }
              print '<div class="node-diagram"><dl>';
              foreach ($statistical_metadata as $key=>$value) {
                print '<dt>'.$statistical_metadata_labels[$key].'</dt>';
                print '<dd style="width:'.$percentages_and_css_classes[$key]['percentage'].'% !important" class="'.$percentages_and_css_classes[$key]['css_class'].'">'.$value.'</dd>';
              }
              print '</dl></div>';
            }
          ?>
          
          <?php 
            $group_info = field_group_info_groups("node", $node->type, "full");
            $group_markup = array();
            foreach ($group_info as $key => $value) {
              $group_markup[$key] = eige_administrative_data_get_group_markup($value);
            }
          ?>

          <div id="eige-additional-data" class="section">
            <?php $group = isset($content['group_additional_data']) ? $content['group_additional_data'] : array(); ?>
            <?php print $group_markup['group_additional_data']['#prefix']; ?>
              
              <?php
                print '<div class="row">';
                  print '<div class="columns large-12">';
                    $field_info = field_info_instance("node", "field_on_victims_disaggregated", $node->type);
                    print '<h4>'.$field_info['label'].'</h4>';
                    $has_victim_data = isset($group['field_on_victims_disaggregated']) && eige_administrative_data_boolean_field_has_business_value($group['field_on_victims_disaggregated']);
                    if (!$has_victim_data) {
                      print eige_administrative_data_no_field_data_markup();
                    } else {
                      print drupal_render($group['field_on_victims_disaggregated']);
                      print drupal_render($group['field_female_victims']);
                      print drupal_render($group['field_male_victims']);
                      print drupal_render($group['field_victim_remarks']);
                    }
                  print '</div>';
                print '</div>';

                print '<div class="row">';
                  print '<div class="columns large-12">';
                    $field_info = field_info_instance("node", "field_on_perpetrator_disaggregat", $node->type);
                    print '<h4>'.$field_info['label'].'</h4>';
                    $has_perpetrator_data = isset($group['field_on_perpetrator_disaggregat']) && eige_administrative_data_boolean_field_has_business_value($group['field_on_perpetrator_disaggregat']);
                    if (!$has_perpetrator_data) {
                      print eige_administrative_data_no_field_data_markup();
                    } else {
                      print drupal_render($group['field_on_perpetrator_disaggregat']);
                      print drupal_render($group['field_female_perpetrator']);
                      print drupal_render($group['field_male_perpetrator']);
                      print drupal_render($group['field_perp_remarks']);
                    }
                  print '</div>';
                print '</div>';

                print '<div class="row">';
                  print '<div class="columns large-12">';
                    $field_info = field_info_instance("node", "field_relationship_victim_perp", $node->type);
                    print '<h4>'.$field_info['label'].'</h4>';
                    $has_relation_data = isset($group['field_relationship_victim_perp']) && eige_administrative_data_boolean_field_has_business_value($group['field_relationship_victim_perp']);
                    if (!$has_relation_data) {
                      print eige_administrative_data_no_field_data_markup();
                    } else {
                      print drupal_render($group['field_relationship_victim_perp']);
                      print '<div class="relation-results">';
                        print drupal_render($group['field_partner_ex']);
                        print drupal_render($group['field_family_member']);
                        print drupal_render($group['field_other_known']);
                        print drupal_render($group['field_stranger']);
                      print '</div>';
                      print drupal_render($group['field_remarks']);
                    }
                  print '</div>';
                print '</div>';

                print '<div class="row">';
                  print '<div class="columns large-12">';
                    $field_info = field_info_instance("node", "field_context_sexual_violence", $node->type);
                    print '<h4>'.$field_info['label'].'</h4>';
                    $has_sexual_violence_data = isset($group['field_context_sexual_violence']) && eige_administrative_data_boolean_field_has_business_value($group['field_context_sexual_violence']);
                    if (!$has_sexual_violence_data) {
                      print eige_administrative_data_no_field_data_markup();
                    } else {
                      print drupal_render($group['field_context_sexual_violence']);
                    }
                  print '</div>';
                print '</div>';
              ?>
            <?php print $group_markup['group_additional_data']['#suffix']; ?>
          
            <?php print drupal_render($content['field_general_remarks']); ?>
          </div>

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

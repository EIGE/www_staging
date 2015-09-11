<?php
/**
 * @file
 * eige_base.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function eige_base_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Accessibility links';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'accessibility_links';
  $fe_block_boxes->body = '<div class="accessibility-link accessibility-link-font-increase"><a class="js-acessibility" href="javascript:;" id="accessibility-font-increase" title="Increase text size">Increase text size</a></div>

<div class="accessibility-link accessibility-link-font-decrease"><a class="js-acessibility" href="javascript:;" id="accessibility-font-decrease" title="Decrease text size">Decrease text size</a></div>

<div class="accessibility-link accessibility-link-contrast"><a class="js-acessibility" href="javascript:;" id="accessibility-contrast" title="Change contrast">Change contrast</a></div>
';

  $export['accessibility_links'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'EuroGender logo';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'enge_logo';
  $fe_block_boxes->body = '            <div id="enge-logo" class="top-links-image">
              <a href=\'<?php echo variable_get("eige_enge_website_link", "");?>\' title="EuroGender network">EuroGender network</a>
            </div>';

  $export['enge_logo'] = $fe_block_boxes;

  return $export;
}

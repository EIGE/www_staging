<?php
/**
 * @file
 * Default theme implementation for displaying the Lexicon overview.
 *
 * This template renders a the Lexicon overview.
 *
 * Available variables:
 * - $lexicon_overview: Lexicon overview object.
 *    - $lexicon_overview->voc_name: vocabulary name.
 *    - $lexicon_overview->description: vocabulary description.
 *    - $lexicon_overview->introduction: introduction text for Lexicon.
 *    - $lexicon_overview->go_to_top_link: Optional "go-to-top" link information
 *      in named array containing go_to_top_link["name"],
 *      go_to_top_link["path"], go_to_top_link["fragment"], and
 *      go_to_top_link["attributes"].
 * - $lexicon_alphabar: Lexicon alphabar as rendered by
 *   lexicon-alphabar.tpl.php.
 * - $lexicon_overview_sections: Lexicon overview sections as rendered by
 *   lexicon-overview-section.tpl.php.
 *
 */
?>

<div id="lexicon-page">
  <div id="<?php print $lexicon_overview->voc_name ?>" class="row">
    <div class="lexicon-main large-11 columns">
      <?php if (isset($lexicon_overview->description)) : ?>
        <div class="lexicon-description">
          <?php print $lexicon_overview->description; ?>
        </div>
      <?php endif;?>
      <?php if (isset($lexicon_overview->introduction)) : ?>
        <div class="lexicon-introduction">
          <?php print $lexicon_overview->introduction; ?>
        </div>
      <?php endif;?>
      <div class="lexicon-list">
        <?php foreach ($lexicon_overview_sections as $section) : ?>
          <div class="lexicon-section">
            <?php print $section; ?>
            <?php if (isset($lexicon_overview->go_to_top_link)) : ?>
              <p>
                <?php print l($lexicon_overview->go_to_top_link["name"], '#', array(
                  'fragment' => $lexicon_overview->go_to_top_link["fragment"],
                  'attributes' => $lexicon_overview->go_to_top_link["attributes"],
                  'external' => TRUE,
                )); ?>
              </p>
            <?php endif; ?>
          </div>
        <?php endforeach; ?>
      </div>
    </div>
    <div class="lexicon-sidebar large-1 columns">
      <div class="lexicon-alphabar">
        <?php print $lexicon_alphabar ?>
      </div>
    </div>
  </div>
</div>

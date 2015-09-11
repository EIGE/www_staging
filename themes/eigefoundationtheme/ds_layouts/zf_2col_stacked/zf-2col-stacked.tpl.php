<?php
/**
 * @file
 * Template for Zurb Foundation Two column stacked Display Suite layout.
 */
?>
<?php 

  // make sure, that when no actual content exists within group-right,
  // the markup for the right group is not printed at all, plus the other groups
  // print the correct classes for full width
  $left_classes = ' large-12 small-12';
  $footer_classes = ' large-12 small-12';
  $right_classes = '';

  if (strlen($right)>0) {
    $left_classes = ' large-9 small-12';
    $right_classes = ' large-3 small-12';
    $footer_classes = ' large-9 small-12';
  }

?>
<<?php print $layout_wrapper; print $layout_attributes; ?> class="zf-2col-stacked <?php print $classes;?>">

  <?php if (isset($title_suffix['contextual_links'])): ?>
    <?php print render($title_suffix['contextual_links']); ?>
  <?php endif; ?>

  <div class="row">
    <?php if (!empty($header)): ?>
      <<?php print $header_wrapper ?> class="group-header<?php print $header_classes; ?>">
      <?php print $header; ?>
      </<?php print $header_wrapper ?>>
    <?php endif; ?>
  </div>

  <div class="row">
    <<?php print $left_wrapper ?> class="group-left<?php print $left_classes; ?>">
    <?php print $left; ?>
    </<?php print $left_wrapper ?>>

    <?php if (strlen($right)>0) { ?>
      <<?php print $right_wrapper ?> class="group-right<?php print $right_classes; ?>">
      <?php print $right; ?>
      </<?php print $right_wrapper ?>>
    <?php } ?>
  </div>

  <div class="row">
    <?php if (!empty($footer)): ?>
      <<?php print $footer_wrapper ?> class="group-footer<?php print $footer_classes; ?>">
      <?php print $footer; ?>
      </<?php print $footer_wrapper ?>>
    <?php endif; ?>
  </div>

</<?php print $layout_wrapper ?>>

<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>

<?php
/**
 * Variables:
 * - $id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 */
?>
<?php !empty($css_id) ? print '<div id="' . $css_id . '">'  : ''; ?>
<div class="row">
    <div class="medium-6 columns"><?php print $content['first']; ?></div>
    <div class="medium-6 columns"><?php print $content['second']; ?></div>
</div>
<?php !empty($css_id) ? print '</div>'  : ''; ?>

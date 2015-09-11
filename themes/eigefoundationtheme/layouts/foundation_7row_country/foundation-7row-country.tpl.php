<?php
/**
 * Variables:
 * - $id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 */
?>
<?php !empty($css_id) ? print '<div id="' . $css_id . '">'  : ''; ?>
<div class="row">
    <div class="large-8 columns">
        <?php print $content['first_left']; ?>
    </div>
    <div class="large-4 columns">
        <?php print $content['first_right']; ?>
    </div>
</div>


<div class="row">
    <div class="large-8 columns">
        <?php print $content['second_left']; ?>
    </div>
    <div class="large-4 columns">
        <?php print $content['second_right']; ?>
    </div>
</div>


<div class="row">
    <div class="large-8 columns">
        <?php print $content['third_left']; ?>
    </div>
    <div class="large-4 columns">
        <?php print $content['third_right']; ?>
    </div>
</div>


<div class="row">
    <div class="large-8 columns">
        <?php print $content['fourth_left']; ?>
    </div>
    <div class="large-4 columns">
        <?php print $content['fourth_right']; ?>
    </div>
    <div class="large-12 columns"><?php print $content['fourth_second']; ?></div>
</div>

<div class="row">
    <div class="large-12 columns"><?php print $content['fifth']; ?></div>
</div>

<div class="row">
    <div class="large-12 columns"><?php print $content['sixth']; ?></div>
</div>
<div class="row">
    <div class="large-12 columns"><?php print $content['seventh']; ?></div>
</div>
<?php !empty($css_id) ? print '</div>'  : ''; ?>

<?php

/**
 * @file
 * Default theme implementation to display a printer-friendly version page.
 *
 * This file is akin to Drupal's page.tpl.php template. The contents being
 * displayed are all included in the $content variable, while the rest of the
 * template focuses on positioning and theming the other page elements.
 *
 * All the variables available in the page.tpl.php template should also be
 * available in this template. In addition to those, the following variables
 * defined by the print module(s) are available:
 *
 * Arguments to the theme call:
 * - $node: The node object. For node content, this is a normal node object.
 *   For system-generated pages, this contains usually only the title, path
 *   and content elements.
 * - $format: The output format being used ('html' for the Web version, 'mail'
 *   for the send by email, 'pdf' for the PDF version, etc.).
 * - $expand_css: TRUE if the CSS used in the file should be provided as text
 *   instead of a list of @include directives.
 * - $message: The message included in the send by email version with the
 *   text provided by the sender of the email.
 *
 * Variables created in the preprocess stage:
 * - $print_logo: the image tag with the configured logo image.
 * - $content: the rendered HTML of the node content.
 * - $scripts: the HTML used to include the JavaScript files in the page head.
 * - $footer_scripts: the HTML  to include the JavaScript files in the page
 *   footer.
 * - $sourceurl_enabled: TRUE if the source URL infromation should be
 *   displayed.
 * - $url: absolute URL of the original source page.
 * - $source_url: absolute URL of the original source page, either as an alias
 *   or as a system path, as configured by the user.
 * - $cid: comment ID of the node being displayed.
 * - $print_title: the title of the page.
 * - $head: HTML contents of the head tag, provided by drupal_get_html_head().
 * - $robots_meta: meta tag with the configured robots directives.
 * - $css: the syle tags contaning the list of include directives or the full
 *   text of the files for inline CSS use.
 * - $sendtoprinter: depending on configuration, this is the script tag
 *   including the JavaScript to send the page to the printer and to close the
 *   window afterwards.
 *
 * print[--format][--node--content-type[--nodeid]].tpl.php
 *
 * The following suggestions can be used:
 * 1. print--format--node--content-type--nodeid.tpl.php
 * 2. print--format--node--content-type.tpl.php
 * 3. print--format.tpl.php
 * 4. print--node--content-type--nodeid.tpl.php
 * 5. print--node--content-type.tpl.php
 * 6. print.tpl.php
 *
 * Where format is the ouput format being used, content-type is the node's
 * content type and nodeid is the node's identifier (nid).
 *
 * @see print_preprocess_print()
 * @see theme_print_published
 * @see theme_print_breadcrumb
 * @see theme_print_footer
 * @see theme_print_sourceurl
 * @see theme_print_url_list
 * @see page.tpl.php
 * @ingroup print
 */

//Body field
$bodyItem = current($node->body);
$bodyValue = $bodyItem[0]['value'];
//Native Body field
if (isset($node->field_body_in_native_language[LANGUAGE_NONE][0])) {
  $nativeBody = $node->field_body_in_native_language[LANGUAGE_NONE][0]['value'];	
}
//Native Language field
$nativeLanguageValue = '';
if (isset($node->field_native_language[LANGUAGE_NONE][0])) {
  $nativeLanguageTerm = taxonomy_term_load($node->field_native_language[LANGUAGE_NONE][0]['tid']);
  $nativeLanguageValue = $nativeLanguageTerm->name;	
}
//Country field
if (isset($node->field_country[LANGUAGE_NONE][0])) {
  $countryName = $node->field_country[LANGUAGE_NONE][0]['safe_value'];	
}
//Age field
$age = $node->field_age[LANGUAGE_NONE][0]['value'];
$ageClass = _title_to_css_class(_age_to_class($age), ' gender_story_topic_');
//Sex field
$sexTerm = taxonomy_term_load($node->field_sex[LANGUAGE_NONE][0]['tid']);
$sexName = $sexTerm->name;
$sexClass = _title_to_css_class($sexName, ' gender_story_topic_');
//Primary Topic Category Field
$primaryTopicCategoryTerm = taxonomy_term_load($node->field_primary_topic_category[LANGUAGE_NONE][0]['tid']);
$primaryTopicCategoryName = $primaryTopicCategoryTerm->name;
$primaryTopicClass = _title_to_css_class($primaryTopicCategoryName, ' _ gender_story_topic_');
$avatar_classes = '"group-avatar-wrapper field-group-div' . $primaryTopicClass . $ageClass . $sexClass. '"';
//Key Actors field
$keyActors = null;
if (isset($node->field_key_actors['en'][0])) {
  $keyActors = $node->field_key_actors['en'][0]['value'];
}
//Primary Topic Category markup
$primaryTopicCategory = '<div class="taxonomy-term-reference '. $primaryTopicClass .'"">'.$primaryTopicCategoryName.'</div>';

//Other Topic Categories markup
$otherTopicCategoriesMarkup = '';
foreach ($node->field_other_topic_categories[LANGUAGE_NONE] as $index => $term) {
	$tid = $term['tid'];
	$topicCategoryTerm = taxonomy_term_load($tid);
	$topicCategoryName = $topicCategoryTerm->name;
	$topicCategoryClass = _title_to_css_class($topicCategoryName, ' _ gender_story_topic_');
	$otherTopicCategoriesMarkup .= '<div class="taxonomy-term-reference '.$topicCategoryClass. '">' .$topicCategoryName .'</div>';

}
//Other Topics markup
$otherTopicsMarkup = '';
foreach ($node->field_other_topics[LANGUAGE_NONE] as $index => $term) {
	$tid = $term['tid'];
	$topicTerm = taxonomy_term_load($tid);
	$topicName = $topicTerm->name;
	$otherTopicsMarkup .= '<div class="taxonomy-term-reference">'.$topicName.'</div>';
}
//Year markup
$yearMarkup = null;
foreach ($node->field_year[LANGUAGE_NONE] as $index => $yearItem) {
	$yearMarkup.= '<span class="date-display-single" property="dc:date" datatype="xsd:dateTime" content="'.$yearItem['value'].'">'.substr($yearItem['value'],0,4).'</span>';
}
global $base_url;
?>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML+RDFa 1.0//EN"
  "http://www.w3.org/MarkUp/DTD/xhtml-rdfa-1.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="<?php print $language->language; ?>" version="XHTML+RDFa 1.0" dir="<?php print $language->dir; ?>">
  <head>
    <?php print $head; ?>
    <base href='<?php print $url ?>' />
    <title><?php print $print_title; ?></title>
    <?php print $scripts; ?>
    <?php if (isset($sendtoprinter)) print $sendtoprinter; ?>
    <?php print $robots_meta; ?>
    <?php if (theme_get_setting('toggle_favicon')): ?>
      <link rel='shortcut icon' href='<?php print theme_get_setting('favicon') ?>' type='image/x-icon' />
    <?php endif; ?>
    <link type="text/css" rel="stylesheet" media="screen" href="<?php print $base_url; ?>/sites/all/themes/eigefoundationtheme/css/app.css" />
    <link type="text/css" rel="stylesheet" media="screen" href="<?php print $base_url; ?>/sites/all/themes/eigefoundationtheme/css/foundationtheme.css" />
    <?php print $css; ?>

  </head>

  <body class='html not-front logged-in two-sidebars page-node page-node- page-node-19506 node-type-gender-story i18n-en lang-en section-more-areas admin-menu lightbox-processed'>
  <div role="document" class="page">
  <img class="logo" typeof="foaf:Image" src="http://eige.new.one/sites/all/themes/eigefoundationtheme/logo.png" alt="EIGE logo" title="EIGE Home">
  <main role="main" class=" row l-main">
  <div class="large-9 large-push-2 small-push-0 main columns">
  <div class="eige-main">
  <div class="not-front node node-gender-story view-mode-full row">
  <div class = "row">
    <div class='group-right large-4 small-12'>
	  <div class="group-story-info field-group-div">
	    <div class=<?php print($avatar_classes); ?>>
		  <div class="field field-name-content-type field-type-ds field-label-hidden field-wrapper">
		  <p> My personal story </p>
		  </div>
		  <div class="field field-name-field-country field-type-country field-label-hidden field-wrapper"><?php if(isset($countryName)) print($countryName); ?> </div>
		  <div class="field field-name-field-age field-type-number-integer field-label-hidden field-wrapper"><? if(isset($age)) print ($age); ?> </div>
		  <div class="field field-name-field-sex field-type-taxonomy-term-reference field-label-hidden field-wrapper clearfix">
		    <div class="taxonomy-term-reference"><? print ($sexName); ?></div>
		  </div>
		</div>
		<div class="field field-name-field-primary-topic-category field-type-taxonomy-term-reference field-label-above field-wrapper clearfix">
		  <a>
		  <div class="field-label">Primary Topic: </div>
		   <?php print($primaryTopicCategory); ?>
		  </a>
		</div>
		<div class="field field-name-field-other-topic-categories field-type-taxonomy-term-reference field-label-above field-wrapper clearfix">
		  <div class="field-label">Topics: </div>
		  <?php print($otherTopicCategoriesMarkup); ?>
		</div>
		<div class="field field-name-field-key-actors field-type-text field-label-above field-wrapper">
		  <?php if ($keyActors): ?>
		  <div  class="field-label">Key actors:&nbsp;</div><?php print($keyActors); ?>
		  <?php endif; ?>
		</div>
		<?php if ($yearMarkup): ?>
		<div class="field field-name-field-year field-type-datetime field-label-inline clearfix clearfix field-wrapper">
		  <div  class="field-label">Year:&nbsp;</div><?php print($yearMarkup); ?>
		</div>
		<?php endif; ?>
		<div class="field field-name-field-other-topics field-type-taxonomy-term-reference field-label-above field-wrapper clearfix">
		<?php print($otherTopicsMarkup); ?>
		</div>
	  </div>
	</div>
 	<div class='group-left large-8 small-12'>
	  <div class = "body field">
	  <?php if ($nativeLanguageValue): ?>	
      <h2 class="field-field-eige-story-body-label"><?php print t('Read this story in English') ?></h2>
      <?php endif; ?>
	    <?php print($bodyValue); ?>
	  </div>
	  <style>
	   .field-name-field-body-in-native-language {
	   	display:block !important;
	   }
	  </style>
	  <?php if ($nativeLanguageValue): ?>
	  <div class="field field-name-field-body-in-native-language field-type-text-long fiel-label-hidden field-wrapper">
	  <h2 class="field-field-eige-story-native-body-label"><?php print t('Read this story in ') . $nativeLanguageValue ?></h2>
        <?php print($nativeBody); ?>
      </div>
      <?php endif; ?>
	</div> 	
  </div>
  </div>
  </div>
  </div>
  </main>
</div>
</body>
</html>

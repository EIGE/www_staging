<?php

/**
 * @file
 * Default theme implementation to format the simplenews newsletter footer.
 *
 * Copy this file in your theme directory to create a custom themed footer.
 * Rename it to simplenews-newsletter-footer--[tid].tpl.php to override it for a
 * newsletter using the newsletter term's id.
 *
 * @todo Update the available variables.
 * Available variables:
 * - $build: Array as expected by render()
 * - $build['#node']: The $node object
 * - $language: language code
 * - $key: email key [node|test]
 * - $format: newsletter format [plain|html]
 * - $unsubscribe_text: unsubscribe text
 * - $test_message: test message warning message
 * - $simplenews_theme: path to the configured simplenews theme
 *
 * Available tokens:
 * - [simplenews-subscriber:unsubscribe-url]: unsubscribe url to be used as link
 *
 * Other available tokens can be found on the node edit form when token.module
 * is installed.
 *
 * @see template_preprocess_simplenews_newsletter_footer()
 */
?>

<?php if (!$opt_out_hidden): ?>
  <?php if ($format == 'html'): ?>
    <p class="newsletter-footer"><a href="[simplenews-subscriber:unsubscribe-url]"><?php print $unsubscribe_text ?></a></p>
    <div class="social-links">
	  <div class="social-link social-link-enge"><a href="http://eurogender.eige.europa.eu/">Visit the ENGE Website</a></div>
	  <div class="social-link social-link-facebook"><a href="http://www.facebook.com/eige.europa.eu">Follow us on Facebook</a></div>
	  <div class="social-link social-link-twitter"><a href="http://twitter.com/eurogender">Follow us on Twitter</a></div>
	  <div class="social-link social-link-youtube"><a href="http://www.youtube.com/eurogender">Follow us on Youtube</a></div>
	</div>
  <?php else: ?>
  -- <?php print $format; print $unsubscribe_text ?>: [simplenews-subscriber:unsubscribe-url]
  <?php endif ?>
<?php endif; ?>

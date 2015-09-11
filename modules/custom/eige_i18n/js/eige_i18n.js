(function ($, Drupal, window, document) {
  
  // EIGEDR-16: admin menu links should NOT contain the language prefix (both front end and back-end)
  function fixAdminMenuLinks() {
    if (!$('#admin-menu').length) {return;}
    if (typeof Drupal.settings.enabled_language_codes === 'undefined') return;
    $("#admin-menu").find("a").once('', function() {
      var possibleLocalizedHref = $(this).attr("href");
      var defaultLanguageHref = possibleLocalizedHref;
      for (var i=0;i<Drupal.settings.enabled_language_codes.length;i++) {
        var regex = new RegExp('/'+Drupal.settings.enabled_language_codes[i]+'/');
        defaultLanguageHref = defaultLanguageHref.replace(regex, '/');
      }
      $(this).attr("href", defaultLanguageHref);
    });
  }
  
  $(function() {
    fixAdminMenuLinks();
  });
  
})(jQuery, Drupal, this, this.document);
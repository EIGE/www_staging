(function($, Drupal) {

  Drupal.behaviors.eigefoundationtheme = {
    attach: // attach functions run on page load AND on Drupal.attachBehaviors()
      function applyEigeBehaviours(context, settings) {
        applyAdvancedPolicyCycleForm();
      }
  };

  function applyAdvancedPolicyCycleForm() {
    if ($("#advanced-page-node-form").length) {
      $("#edit-field-simple-policy-cycle-und").unbind().click(function() {
        $("#edit-field-define-elements").toggle();
        $("#edit-field-define-tools").toggle();
        $("#edit-field-plan-tools").toggle();
        $("#edit-field-plan-elements").toggle();
        $("#edit-field-act-tools").toggle();
        $("#edit-field-act-elements").toggle();
        $("#edit-field-check-tools").toggle();
        $("#edit-field-check-elements").toggle();
      });
    }
  }

})(jQuery, Drupal);
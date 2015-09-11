(function() {
"use strict";

app.views.Error = Backbone.View.extend({
	initialize: function() {
		this.listenTo(Backbone, 'error', this.render);
	},
	render: function(error) {
		if (!error) {
			alert(app.p.t('errors.generic'));
			return;
		}
		if (error.status===0 && error.statusText==="timeout") {
			alert(app.p.t('errors.ajax_timeout'));
			return;
		}
		if (error.status===0 && error.statusText==="error") {
			alert(app.p.t('errors.ajax_connection_error'));
			return;
		}
		if (error.status===500) {
			alert(app.p.t('errors.ajax_500', {message: error.statusText, status: error.status}));
			return;
		}
		if (error.status) {
			alert(app.p.t('errors.ajax_generic', {message: error.statusText, status: error.status}));
			return;
		}
		alert(app.p.t('errors.generic'));
		return this;
	}
});

})();
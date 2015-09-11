(function($) {
"use strict";


app.controllers.about = {
	createView: function() {
		this.view = new app.views.About({
			controller: this
		});
		this.fetchDataAndRenderContent();
		Backbone.trigger('title', app.p.t('about.title'));
		Backbone.trigger('view:rendered');
		return this.view;
	},
	fetchDataAndRenderContent: function() {
		var that = this;
		
		that.view.appendSpinner();
		if (that.contentRequest && that.contentRequest.abort) that.contentRequest.abort(); // cancel possible previous pending ajax request
		that.contentRequest = $.ajax({
			url: app.root + '/json/page' + app.root + '/about-content'
		});
		
		$.when(that.contentRequest).done(function(content) {
			delete that.contentRequest;
			that.view.removeSpinner();
			that.view.renderContent(content);
		}).fail(function(e) {
			that.view.removeSpinner();
			if (e.status===200) {
				// no data in drupal. do nothing
				return;
			}
			if (e.status===0) {
				// probably aborted previous ajax. do nothing
				return;
			}
			// communication error
			Backbone.trigger('error', e);
		});
	}	
};

})(window.jQuery);

(function($) {
"use strict";

app.views.About = Backbone.View.extend({
	initialize: function(options) {
		this.controller = options.controller;
		this.render();
	},
	events: {
		'click .main-wrapper a.more': 'expand'
	},
	expand: function(e) {
		e.preventDefault();
		$(e.currentTarget).hide().next('div.expandable').slideDown();
	},
	render: function() {
		this.$el.html(app.templates.About());
		return this;
	},
	renderContent: function(content) {
		if (content && content.body && content.body.en && content.body.en[0]) {
			this.$('.main-wrapper').html(content.body.en[0].safe_value);
			this.enhanceContent();
		}
	},
	enhanceContent: function() {
		this.$('.main-wrapper hr.more').each(function() {
			$(this)
				.nextAll()                             // everything that comes after the separator
				.wrapAll('<div class="expandable" />') // should be wrapped
				.parent()                              // select wrapper
				.hide()                                // and hide it
				.end().end()                           // go back to separator
				.replaceWith('<a href="#" data-bypass class="more">' + _.escape(app.p.t('misc.read_more')) + '</a>'); // replace it with the "more" link
		});
	},
	appendSpinner: function() {
		this.removeSpinner();
		this.spinner = new app.views.SmallSpinner();
		this.registerChild(this.spinner);
		this.$('.main-wrapper').append(this.spinner.el);
	},
	removeSpinner: function() {
		if (this.spinner) {
			this.spinner.close();
		}
	}
});


})(window.jQuery);

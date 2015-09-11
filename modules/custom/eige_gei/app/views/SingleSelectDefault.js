(function($) {
"use strict";

app.views.SingleSelectDefault = Backbone.View.extend({
	initialize: function() {
		this.render();
	},
	tagName: 'div',
	className: 'SingleSelectDefault',
	render: function() {
		this.$el.html(app.templates.SingleSelectDefault(this.model));
		return this;
	},
	events: {
		'change': 'optionsChanged'
	},
	optionsChanged: function () {
		this.model.select(this.$('select').val());
	}
});


})(window.jQuery);


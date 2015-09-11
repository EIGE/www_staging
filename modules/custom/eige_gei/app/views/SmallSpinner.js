(function() {
"use strict";

app.views.SmallSpinner = Backbone.View.extend({
	tagName: 'div',
	className: 'spinner',
	initialize: function () {
		this.render();
	},
	render: function () {
		this.$el.html(app.templates.SmallSpinner()).hide().delay(200).fadeIn(100);
		return this;
	}
});

})();
(function($) {
"use strict";

app.views.MultipleSelectDefault = Backbone.View.extend({
	initialize: function() {
		this.render();
	},
	tagName: 'div',
	className: 'multipleSelectDefault',
	render: function() {
		this.$el.html(app.templates.MultipleSelectDefault(this.model));
		return this;
	},
	events: {
		'change': 'optionsChanged'
	},
	optionsChanged: function () {
		var that = this;
		this.$('select option').each(function() {
			var $option = $(this);
			if ($option.is(':selected')) {
				that.model.select($option.val());
			} else {
				that.model.deselect($option.val());
			}
		});
		this.model.trigger('change');
	}
});


})(window.jQuery);


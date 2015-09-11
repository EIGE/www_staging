(function($) {
"use strict";

app.views.MultipleSelectEmulated = Backbone.View.extend({
	initialize: function() {
		this.render();
		this.$label = this.$('label.main');
		this.$collapsible = this.$('div.collapsible');
		
		this.hide();
		this.listenTo(Backbone, 'MultipleSelectEmulated:hide', this.hide);
	},
	tagName: 'div',
	className: 'MultipleSelectEmulated',
	render: function() {
		this.$el.html(app.templates.MultipleSelectEmulated(this.model));
		return this;
	},
	events: {
		'click button': 'optionsChanged',
		'click label.main': 'headerClicked'
	},
	headerClicked: function(e) {
		e.preventDefault();
		if (this.$label.is('.collapsed')) {
			this.show();
		} else {
			this.hide();
		}
	},
	hide: function() {
		this.$label.removeClass('expanded').addClass('collapsed');
		this.$collapsible.hide();
	},
	show: function() {
		Backbone.trigger('MultipleSelectEmulated:hide'); // hide other selects possibly on screen right now
		this.$label.removeClass('collapsed').addClass('expanded');
		this.$collapsible.slideDown(100);
	
	},
	optionsChanged: function () {
		var that = this;
		this.$('input').each(function() {
			var $option = $(this);
			if ($option.is(':checked')) {
				that.model.select($option.val());
			} else {
				that.model.deselect($option.val());
			}
		});
		this.model.trigger('change');
	}
});


})(window.jQuery);


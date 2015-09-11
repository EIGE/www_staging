(function($) {
"use strict";

app.views.SingleSelectEmulated = Backbone.View.extend({
	initialize: function() {
		this.render();
		this.$label = this.$('label.main');
		this.$collapsible = this.$('div.collapsible');
		
		this.hide();
		this.listenTo(Backbone, 'SingleSelectEmulated:hide', this.hide);
	},
	tagName: 'div',
	className: 'SingleSelectEmulated',
	render: function() {
		this.$el.html(app.templates.SingleSelectEmulated(this.model));
		return this;
	},
	events: {
		'change': 'optionsChanged',
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
		Backbone.trigger('SingleSelectEmulated:hide'); // hide other selects possibly on screen right now
		this.$label.removeClass('collapsed').addClass('expanded');
		this.$collapsible.slideDown(100);
	
	},
	optionsChanged: function () {
		this.model.select(this.$('input:checked').val());
	}
});


})(window.jQuery);


(function() {
"use strict";

app.views.Tooltip = Backbone.View.extend({
	initialize: function(options) {
		this.render();
		this.$leftArrow = this.$('.arrow.left');
		this.$rightArrow = this.$('.arrow.right');
		
		this.leftArrowTarget = {x: -20, y: 30, opposite: false, shown: this.$leftArrow, hidden: this.$rightArrow};
		this.rightArrowTarget = {x:  20, y: 30, opposite: true, shown: this.$rightArrow, hidden: this.$leftArrow};
		
		this.hide();
		
		this.listenTo(Backbone, 'Tooltip:hide', this.hide);
		this.listenTo(Backbone, 'Tooltip:show', this.show);
		this.listenTo(Backbone, 'Tooltip:pointTo', this.pointTo);
	},
	tagName: 'div',
	className: 'Tooltip',
	hide: function() {
		this.$el.hide();
	},
	show: function(data) {
		if (data.width) {
			this.$el.css('width', data.width);
			this.$rightArrow.css('left', data.width);
		}
		this.arrowTarget = data.left < window.innerWidth / 2 ?
			this.leftArrowTarget:
			this.rightArrowTarget;
		this.arrowTarget.shown.show();
		this.arrowTarget.hidden.hide();

		this.$('.content').html(data.html);
		this.$el.show();
	},
	pointTo: function(data) {
		this.$el.css({
			top: data.top - this.arrowTarget.y,
			left: data.left - this.arrowTarget.x - (this.arrowTarget.opposite && this.$el.width())
		});
	},
	render: function() {
		this.$el.html(app.templates.Tooltip());
		return this;
	}
});


})();

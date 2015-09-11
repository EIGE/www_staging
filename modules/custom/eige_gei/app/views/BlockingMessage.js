(function($) {
"use strict";

app.views.BlockingMessage = Backbone.View.extend({
	initialize: function() {
		this.listenTo(Backbone, 'block', this.block);
		this.listenTo(Backbone, 'unblock', this.unblock);
		this.render();
		this.unblock(); // start hidden
	},
	tagName: 'div',
	className: 'BlockingMessage',
	render: function() {
		this.$el.html(app.templates.BlockingMessage());
		return this;
	},
	events: {
		'click': 'unblock'
	},
	block: function(message) {
		console.log('BlockingMessage block');
		this.$('.content').text(message).css('margin-top', $(window).height()/2 - 50 + 'px');
		this.$el.show();
		return this;
	},
	unblock: function() {
		console.log('BlockingMessage unblock');
		this.$el.hide();
		return this;
	}
});

})(window.jQuery);

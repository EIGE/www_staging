(function($) {
"use strict";

function Controller(view) {
	return {
		loadContentAndRender: function(areaId) {
			this.area = view.areas.get(areaId);
			if (!this.area) return;

			var that = this;
			this.area.fetch({
				success: function() { 
					view.renderContent(that.area);
				}
			});
		}
	}
}

app.views.Area = Backbone.View.extend({
	template: _.template(document.getElementById("template-area").innerHTML),
	initialize: function(options) {
		console.log('initializing area');
		this.breadcrumb = options.breadcrumb;
		this.areas = options.areas;
		this.controller = new Controller(this);
	},
	renderContent: function(area) {
		console.log('rendering area');
		Backbone.trigger('title', {title: area.get('title')});

		this.breadcrumb
			.clear()
			.setElementAt(0, {url: app.root, title: app.p.t('index.breadcrumb')})
			.done();

		this.$el.html(this.template({area: area}));
		// make all content links external
		this.$('.content a').each(function() {
			$(this).attr('target', '_blank').addClass('external');
		});
		Backbone.trigger('view:rendered');
		return this;
	}
});

})(window.jQuery);

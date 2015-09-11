(function() {
"use strict";

var Area = Backbone.View.extend({
	template: _.template(document.getElementById("template-index-area").innerHTML),
	tagName: 'li',
	events: {
		'click a.area': 'clickArea'
	},
	clickArea: function(e) {
		e.preventDefault();
		if (!this.model.hasIndicators()) return; // no toggle for area without indicators
		this.$li.toggleClass('expanded').toggleClass('collapsed');
		this.$indicators.slideToggle();
	},
	render: function() {
		this.$el.html(this.template({area: this.model}));
		this.$label = this.$('a.area');
		this.$li = this.$label.parent();
		this.$indicators = this.$('ul');
		this.$indicators.hide();
		this.$li.addClass('collapsed');
		return this;
	}
});



app.views.Index = Backbone.View.extend({
	template: _.template(document.getElementById("template-index").innerHTML),
	initialize: function(options) {
		console.log('initializing index');
		this.breadcrumb = options.breadcrumb;
		this.areas = options.areas;
	},
	render: function() {
		console.log('rendering index');
		Backbone.trigger('title', {title: app.p.t('index.title')});
		this.breadcrumb.clear().done();
		this.$el.html(this.template());
		var $areas = this.$('ul.areas');
		this.areas.each(function(area) {
			var areaView = new Area({model: area});
			$areas.append(areaView.render().el);
		});
		// make all content links external
		this.$('.content a').each(function() {
			$(this).attr('target', '_blank').addClass('external');
		});
		Backbone.trigger('view:rendered');
		return this;
	}
});


})();

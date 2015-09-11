(function($) {
"use strict";

app.views.MultiHorizontalBarGraph = Backbone.View.extend({
	initialize: function(options) {
		this.graphsData = options.graphsData;
		this.render();
	},
	tagName: 'div',
	className: 'multiHorizontalBarGraph',
	events: {
		'click a.selector': 'clickSelector',
		'click ul a': 'clickSelection'
	},
	clickSelector: function(e) {
		e.preventDefault();
		this.$('ul').toggle();
		this.$('a.selector').toggleClass('expanded collapsed');
	},
	clickSelection: function(e) {
		e.preventDefault();
		var year = e.currentTarget.getAttribute('data-year'),
		    url = e.currentTarget.getAttribute('href');
		this.$('ul').hide();
		$(e.currentTarget).parent().addClass('selected').siblings().removeClass('selected');
		this.$('.tab.tab_' + year).show().siblings('.tab').hide();
		this.$('a.selector').html(year);
		this.$('a.selector').toggleClass('expanded collapsed');
		this.trigger('change:year', {year: year, url: url});
	},
	render: function() {
		this.$el.html(app.templates.MultiHorizontalBarGraph({graphsData: this.graphsData}));
		for (var i=0; i<this.graphsData.data.length; i++) {
			var graph = new app.views.HorizontalBarGraph({graphData: this.graphsData.data[i]});
			this.registerChild(graph);
			this.$('.tab.tab_' + this.graphsData.data[i].year).append(graph.el);
		}
		return this;
	},
	animate: function(time) {
		var animatables = this.getChildren();
		for(var i = 0; i<animatables.length; i++) {
			if (animatables[i].animate) animatables[i].animate(time);
		}
	}
});


})(window.jQuery);

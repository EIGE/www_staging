(function() {
"use strict";

app.views.Index = Backbone.View.extend({
	initialize: function(options) {
		this.controller = options.controller;
		this.yearNavigator = options.yearNavigator;

		this.render();
		
		var yearNavigatorView = new app.views.YearNavigator({model: this.yearNavigator});
		this.registerChild(yearNavigatorView);
		this.$('header.view .wrapper').append(yearNavigatorView.el);
		
		var yearCountryNavigatorView = new app.views.YearCountryNavigator({model: this.yearNavigator});
		this.registerChild(yearCountryNavigatorView);
		this.$('header.view .wrapper').append(yearCountryNavigatorView.el);
		
		var largeCyclicGraph = new app.views.LargeCyclicGraph({graphData: options.largeCyclicGraphData});
		this.registerChild(largeCyclicGraph);
		this.$('section.graph').append(largeCyclicGraph.el);

		var largeCyclicGraphExporterButton = new app.views.GraphExporterButton({
			target: largeCyclicGraph.$('svg'),
			filename: 'index-' + this.yearNavigator.getSelectedYear() + '-' + this.yearNavigator.getSelectedCountryKey()
		});
		this.registerChild(largeCyclicGraphExporterButton);
		largeCyclicGraph.$el.append(largeCyclicGraphExporterButton.el).addClass('exportable');

		// keep reference for animation
		this.horizontalBarGraph = new app.views.HorizontalBarGraph({graphData: options.horizontalBarGraphData});
		this.registerChild(this.horizontalBarGraph);
		this.$('section.data').append(this.horizontalBarGraph.el);
		
		for(var i=0; i<options.smallCyclicGraphsData.length; i++) {
			var smallCyclicGraph = new app.views.SmallCyclicGraph({graphData: options.smallCyclicGraphsData[i]});
			this.registerChild(smallCyclicGraph);
			this.$('section.data').append(smallCyclicGraph.el);
		}
		
		var dataGraphExporterButton = new app.views.GraphExporterButton({
			target: this.$('section.data'),
			filename: 'index-domains-' + this.yearNavigator.getSelectedYear() + '-' + this.yearNavigator.getSelectedCountryKey()
		});
		this.registerChild(dataGraphExporterButton);
		this.$('section.data').append(dataGraphExporterButton.el).addClass('exportable');

		this.startAnimation();
	},
	startAnimation: function() {
		var that = this,
		    startTime = Date.now(),
		    smallCyclicGraphs = _.filter(that.getChildren(), function(view) { return view instanceof app.views.SmallCyclicGraph; });
		function animate() {
			window.requestAnimationFrame(animate);
			for(var i = 0; i<smallCyclicGraphs.length; i++) {
				if (smallCyclicGraphs[i].animate) smallCyclicGraphs[i].animate(Date.now() - startTime - i*75);
			}
			if (that.horizontalBarGraph.animate) that.horizontalBarGraph.animate(Date.now() - startTime);
		}
		window.requestAnimationFrame(animate);
	},
	render: function() {
		this.$el.html(app.templates.Index({
			yearNavigator: this.yearNavigator,
			defaultYear: this.controller.defaultYear,
			year: this.yearNavigator.getSelectedYear(),
			country: this.yearNavigator.getSelectedCountryKey(),
		})).addClass(this.yearNavigator.getCssClass());
		return this;
	}
});


})();

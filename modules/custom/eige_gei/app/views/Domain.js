(function($) {
"use strict";

app.views.Domain = Backbone.View.extend({
	initialize: function(options) {
		this.controller = options.controller;
		this.yearNavigator = options.yearNavigator;

		this.render();
		
		if (options.visibilities.yearNavigator) {
			var yearNavigatorView = new app.views.YearNavigator({model: this.yearNavigator});
			this.registerChild(yearNavigatorView);
			this.$('header.view .wrapper').append(yearNavigatorView.el);
			
			var yearCountryNavigatorView = new app.views.YearCountryNavigator({model: this.yearNavigator});
			this.registerChild(yearCountryNavigatorView);
			this.$('header.view .wrapper').append(yearCountryNavigatorView.el);
		}
		
		if (options.largeCyclicGraphData) {
			var largeCyclicGraph = new app.views.LargeCyclicGraph({graphData: options.largeCyclicGraphData});
			this.registerChild(largeCyclicGraph);
			this.$('section.graph').append(largeCyclicGraph.el);

			var largeCyclicGraphExporterButton = new app.views.GraphExporterButton({
				target: largeCyclicGraph.$('svg'),
				filename: 'domain-' + this.yearNavigator.getSelectedYear() + '-' + (this.yearNavigator.getSelectedSubdomain()?app.p.t('tree.' + this.yearNavigator.getSelectedSubdomain().key):this.yearNavigator.getSelectedDomain().key) + '-' + this.yearNavigator.getSelectedCountryKey()
			});
			this.registerChild(largeCyclicGraphExporterButton);
			largeCyclicGraph.$el.append(largeCyclicGraphExporterButton.el).addClass('exportable');
		} else {
			var domainNoData = new app.views.DomainNoData({yearNavigator: this.yearNavigator});
			this.registerChild(domainNoData);
			this.$('section.graph').append(domainNoData.el);
		}
		
		if (options.smallCyclicGraphData) {
			var smallCyclicGraph = new app.views.SmallCyclicGraph({graphData: options.smallCyclicGraphData});
			this.registerChild(smallCyclicGraph);
			this.$('section.data').append(smallCyclicGraph.el);
		}
		
		if (options.horizontalBarGraphData) {
			var horizontalBarGraph = new app.views.HorizontalBarGraph({graphData: options.horizontalBarGraphData});
			this.registerChild(horizontalBarGraph);
			this.$('section.data').append(horizontalBarGraph.el);
		}

		if (options.horizontalBarGraphsData) {
			for(var i=0; i<options.horizontalBarGraphsData.length; i++) {
				var horizontalBarGraph = new app.views.HorizontalBarGraph({graphData: options.horizontalBarGraphsData[i]});
				this.registerChild(horizontalBarGraph);
				this.$('section.data').append(horizontalBarGraph.el);
			}
		}
		
		if (options.variableGraphsData && options.variableGraphsData.length) {
			for(var i=0; i<options.variableGraphsData.length; i++) {
				var multiRowHorizontalBarGraph = new app.views.MultiRowHorizontalBarGraph({graphData: options.variableGraphsData[i]});
				this.registerChild(multiRowHorizontalBarGraph);
				this.$('section.data').append(multiRowHorizontalBarGraph.el);
			}
			var legend = new app.views.MultiRowHorizontalBarGraphLegend({graphData: options.variableGraphsData[0], domain: this.controller.domain.key});
			this.registerChild(legend);
			this.$('section.data').append(legend.el);
		}
		
		var dataGraphExporterButton = new app.views.GraphExporterButton({
			target: this.$('section.data'),
			filename: 'domain-data-' + this.yearNavigator.getSelectedYear() + '-' + (this.yearNavigator.getSelectedSubdomain()?app.p.t('tree.' + this.yearNavigator.getSelectedSubdomain().key):this.yearNavigator.getSelectedDomain().key) + '-' + this.yearNavigator.getSelectedCountryKey()
		});
		this.registerChild(dataGraphExporterButton);
		this.$('section.data').append(dataGraphExporterButton.el).addClass('exportable');
		
		if (options.lineTrendGraphData) {
			var lineTrendGraph = new app.views.LineTrendGraph({graphData: options.lineTrendGraphData});
			this.registerChild(lineTrendGraph);
			this.$('section.extra div.graphs').append(lineTrendGraph.el);
		}

		if (options.countriesBarGraphData) {
			var countriesBarGraph = new app.views.CountriesBarGraph({graphData: options.countriesBarGraphData});
			this.registerChild(countriesBarGraph);
			this.$('section.extra div.graphs').append(countriesBarGraph.el);
		}



		this.startAnimation();
	},
	startAnimation: function() {
		var that = this,
		    startTime = Date.now(),
		    animatables = that.getChildren();
		function animate() {
			window.requestAnimationFrame(animate);
			for(var i = 0; i<animatables.length; i++) {
				if (animatables[i].animate) animatables[i].animate(Date.now() - startTime - i*100);
			}
		}
		window.requestAnimationFrame(animate);
	},
	appendSpinner: function() {
		if (this.spinner) {
			this.spinner.close();
		}
		this.spinner = new app.views.SmallSpinner();
		this.registerChild(this.spinner);
		this.$('section.extra div.content').append(this.spinner.el);
	},
	removeSpinner: function() {
		if (this.spinner) {
			this.spinner.close();
		}
	},
	render: function() {
		this.$el.html(app.templates.Domain({
			yearNavigator: this.yearNavigator,
			year: this.yearNavigator.getSelectedYear(),
			country: this.yearNavigator.getSelectedCountryKey(),
			domain: this.yearNavigator.getSelectedDomain(),
			subdomain: this.yearNavigator.getSelectedSubdomain()
		})).addClass(this.yearNavigator.getCssClass());
		return this;
	},
	renderContent: function(content) {
		this.$('section.extra div.content').append(content);
	},
	rendered: function() {
		console.log('attaching window resize handler');
		$(window).on('resize orientationChange', this.handleResize);
		this.handleResize(true);
	},
	handleResize: function(firstRun) {
		// make sure the header fits next to the graph
		var $h3 = $('#gei header.view h3');
		if (firstRun===true) {
			$h3.css('white-space', 'nowrap'); // so the measurement is correct
			$h3.data('initialFontSize', parseInt($h3.css('font-size')));
			$h3.data('initialWidth', $h3.outerWidth());
		}
		var graphWidth = $('#gei header.view div.yearNavigatorGraph').outerWidth();
		if (!$('#gei header.view div.yearNavigatorGraph').is(':visible')) {
			graphWidth = $('#gei header.view div.yearCountryNavigator .graph').outerWidth();
		}
		var totalWidth = $('#gei header.view .wrapper').width();
		$h3.css('font-size', Math.min($h3.data('initialFontSize'), $h3.data('initialFontSize') * (totalWidth - graphWidth - 15) / $h3.data('initialWidth'))+ 'px');
	},
	remove: function() {
		console.log('removing window resize handler');
		$(window).off('resize orientationChange', this.handleResize);
		Backbone.View.prototype.remove.call(this);
	}
});

})(window.jQuery);


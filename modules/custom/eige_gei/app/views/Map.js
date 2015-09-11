(function() {
"use strict";

app.views.Map = Backbone.View.extend({
	initialize: function(options) {
		this.controller = options.controller;
		this.yearNavigator = options.yearNavigator;
		this.yearsSingleSelect = options.yearsSingleSelect;
		this.domainsSingleSelect = options.domainsSingleSelect;
		this.listenTo(this.yearsSingleSelect, 'change', this.navigationChanged);
		this.listenTo(this.domainsSingleSelect, 'change', this.navigationChanged);

		this.render();
		
		var yearsSingleSelectView = app.isMobile?
			new app.views.SingleSelectDefault({model: this.yearsSingleSelect}):
			new app.views.SingleSelectEmulated({model: this.yearsSingleSelect});
		this.registerChild(yearsSingleSelectView);
		this.$('header.view .controls .years').append(yearsSingleSelectView.el);

		var domainsSingleSelectView = app.isMobile?
			new app.views.SingleSelectDefault({model: this.domainsSingleSelect}):
			new app.views.SingleSelectEmulated({model: this.domainsSingleSelect});
		this.registerChild(domainsSingleSelectView);
		this.$('header.view .controls .domains').append(domainsSingleSelectView.el);

		if (!app.isMobile) {
			this.$('header.view .controls .columns').append('&nbsp;'); // to make foundation grid work since SingleSelectEmulated is absolute positioned
		}

		var mapView = new app.views.MapGraph({graphData: options.mapGraphData});
		this.registerChild(mapView);
		this.$('section.graph').append(mapView.el);

		var mapViewGraphExporterButton = new app.views.GraphExporterButton({
			target: mapView.$('svg'),
			filename: 'map-' + this.yearNavigator.getSelectedYear() + '-' + this.yearNavigator.getSelectedCountryKey()
		});
		this.registerChild(mapViewGraphExporterButton);
		mapView.$el.append(mapViewGraphExporterButton.el).addClass('exportable');

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
			filename: 'map-domains-' + this.yearNavigator.getSelectedYear() + '-' + this.yearNavigator.getSelectedCountryKey()
		});
		this.registerChild(dataGraphExporterButton);
		this.$('section.data').append(dataGraphExporterButton.el).addClass('exportable');

		this.startAnimation();
	},
	navigationChanged: function() {
		this.yearNavigator.selectYear(this.yearsSingleSelect.getSelectedOption());
		this.yearNavigator.selectDomainStrict(this.domainsSingleSelect.getSelectedOption());
		app.router.navigate(this.yearNavigator.getUrl().substr(app.root.length), {trigger: true});
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
		this.$el.html(app.templates.Map({
			yearNavigator: this.yearNavigator,
			year: this.yearNavigator.getSelectedYear(),
			country: this.yearNavigator.getSelectedCountryKey(),
		})).addClass(this.yearNavigator.getCssClass());
		return this;
	}
});


})();

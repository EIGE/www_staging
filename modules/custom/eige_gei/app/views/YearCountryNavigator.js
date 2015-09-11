(function($) {
"use strict";

app.views.YearCountryNavigator = Backbone.View.extend({
	initialize: function() {
		this.render();
	},
	tagName: 'div',
	className: 'yearCountryNavigator',
	render: function() {
		this.$el.html(app.templates.YearCountryNavigator(this.model));

		var smallCyclicGraph = new app.views.SmallCyclicGraph({graphData: this.model.getSmallCyclicGraphsData()});
		this.registerChild(smallCyclicGraph);
		this.$('div.graph').append(smallCyclicGraph.el);
		smallCyclicGraph.finishAnimation();

		return this;
	},
	events: {
		'change .controls .years select': 'yearChanged',
		'change .controls .countries select': 'countryChanged'
	},
	yearChanged: function (e) {
		this.model.selectYear($(e.currentTarget).val());
		app.router.navigate(this.model.getUrl().substr(app.root.length), {trigger: true});
	},
	countryChanged: function (e) {
		this.model.selectCountry($(e.currentTarget).val());
		app.router.navigate(this.model.getUrl().substr(app.root.length), {trigger: true});
	}
});


})(window.jQuery);


(function() {
"use strict";

app.views.MultiRowHorizontalBarGraphLegend = Backbone.View.extend({
	initialize: function(options) {
		this.data = options.graphData;
		this.data.suffixes = _.uniq(_.pluck(this.data.rows, 'suffix'));
		this.data.domain = options.domain;
		this.data.hasSource = app.strings.MultiRowHorizontalBarGraphLegend.source[this.data.domain]; // look it up directly from app.strings because polyglot lib doesn't provide such a functionality
		this.render();
	},
	tagName: 'div',
	className: 'multiRowHorizontalBarGraphLegend',
	render: function() {
		this.$el.html(app.templates.MultiRowHorizontalBarGraphLegend(this.data));
		return this;
	}
});


})();

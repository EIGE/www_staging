(function() {
"use strict";

app.views.NoData = Backbone.View.extend({
	tagName: 'p',
	className: 'no-data',
	initialize: function (options) {
		this.options = options;
		this.render();
	},
	render: function () {
		this.$el.html(app.p.t('NoData.domain_year_text', {'domain': app.p.t('tree.' + this.options.domain), 'year': this.options.year}));
		return this;
	}
});

})();
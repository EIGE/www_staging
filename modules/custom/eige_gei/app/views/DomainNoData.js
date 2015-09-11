(function($) {
"use strict";

app.views.DomainNoData = Backbone.View.extend({
	initialize: function(options) {
		this.yearNavigator = options.yearNavigator;
		this.templateName = 'Domain' + this.capitalizeDomainKey(this.yearNavigator.getSelectedDomain().key) + 'NoData';
		this.render();
	},
	tagName: 'div',
	className: 'no-data',
	capitalizeDomainKey: function(domainKey) {
		return domainKey
			.replace(/-/g, ' ')
			.replace(/\w\S*/g, function(txt){return txt.charAt(0).toUpperCase() + txt.substr(1).toLowerCase();}) // http://stackoverflow.com/a/4878800/72478
			.replace(/ /g, '');
	},
	render: function() {
		var countries = [];
		app.collections.countries.each(function(country) {
			countries.push({
				key: country.id,
				link: app.router.getDomainUrl(this.yearNavigator.getSelectedYear(), this.yearNavigator.getSelectedDomain().key, null, country.id)
			});
		}, this);
		this.$el.html(app.templates[this.templateName]({
			domain: this.yearNavigator.getSelectedDomain(),
			year: this.yearNavigator.getSelectedYear(),
			countries: countries
		}));
		return this;
	}
});

})(window.jQuery);


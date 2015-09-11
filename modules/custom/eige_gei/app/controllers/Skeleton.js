(function() {
"use strict";


app.controllers.skeleton = {
	initialize: function() {
		app.collections.countries = new app.collections.Countries(app.data.countries);
		app.controllers.index.initialize();
		app.controllers.country.initialize();
		app.controllers.domain.initialize();
		app.controllers.map.initialize();
		app.controllers.countriesComparison.initialize();
		
		this.defaultYear = app.controllers.index.yearNavigator.getSelectedYear();
	},
	createView: function(rootElementSelector) {
		var countries = [];
		_.each(_.pluck(app.collections.countries.where({type: 'country'}), 'id'), function(countryKey) {
			countries.push({
				key: countryKey,
				link: app.router.getCountryUrl(this.defaultYear, countryKey)
			});
		}, this);
		var domains = [];
		_.each(app.data.tree, function(domain) {
			domains.push({
				key: domain.key,
				link: app.router.getDomainUrl(this.defaultYear, domain.key),
				type: domain.type
			});
		}, this);
		this.view = new app.views.Skeleton({
			controller: this,
			el: rootElementSelector,
			mainMenu: new app.models.MainMenu({
				defaultYear: this.defaultYear,
				countries: countries,
				domains: domains
			})
		});
	},
	navigationLinkClicked: function(link) {
		var href = link.getAttribute('href') ||
		           link.getAttribute('xlink:href'); // svg link
		if (href.indexOf('http')===0) return; // do not treat external links as backbone navigation urls
		app.router.navigate(href.substr(app.root.length), {trigger: true});
	},
	renderIndex: function(key, year, country) {
		this.renderSubView(key, app.controllers.index.createView(year, country));
	},
	renderCountry: function(key, year, country) {
		this.renderSubView(key, app.controllers.country.createView(year, country));
	},
	renderDomain: function(key, year, domain, subdomainIndex, country) {
		this.renderSubView(key, app.controllers.domain.createView(year, domain, subdomainIndex, country));
	},
	renderMap: function(key, year, country, domain) {
		this.renderSubView(key, app.controllers.map.createView(year, country, domain));
	},
	renderAbout: function(key) {
		this.renderSubView(key, app.controllers.about.createView());
	},
	renderPolicies: function(key) {
		this.renderSubView(key, app.controllers.policies.createView());
	},
	renderCountriesComparison: function(key) {
		this.renderSubView(key, app.controllers.countriesComparison.createView());
	},
	renderSubView: function(key, view) {
		// cleanup old view
		if (this.oldView) {
			this.oldView.close();
		}

		// keep track of new view
		this.oldView = view;

		// render new view
		this.view.renderSubView(view, key);
		
		// call view.rendered() if it exists
		if (view.rendered) view.rendered();
	}
};

})();

(function() {
"use strict";

app.Router = Backbone.Router.extend({
	routes: {
		'about': 'about',
		'policies': 'policies',
		'countries-comparison': 'countriesComparison',
		'*catchall': 'index' // http://stackoverflow.com/a/11237261/72478
	},
	initialize: function() {
		this.route(/^$/, 'index');
		this.route(/^([1-2][0-9][0-9][0-9])$/, 'index');
		this.route(/^([1-2][0-9][0-9][0-9])\/([A-Z]+)$/, 'index');

		this.route(/^([1-2][0-9][0-9][0-9])\/country\/([A-Z]+)$/, 'country');

		this.route(/^([1-2][0-9][0-9][0-9])\/domain\/([a-z]+)$/, 'domain');
		this.route(/^([1-2][0-9][0-9][0-9])\/domain\/([a-z]+)\/([A-Z]+)$/, 'domain');

		this.route(/^([1-2][0-9][0-9][0-9])\/domain\/([a-z]+)\/([1-9])$/, 'subdomain');
		this.route(/^([1-2][0-9][0-9][0-9])\/domain\/([a-z]+)\/([1-9])\/([A-Z]+)$/, 'subdomain');

		this.route(/^([1-2][0-9][0-9][0-9])\/map$/, 'map');
		this.route(/^([1-2][0-9][0-9][0-9])\/map\/([A-Z]+)$/, 'map');
		this.route(/^([1-2][0-9][0-9][0-9])\/map\/()domain\/([a-z]+)$/, 'map');
		this.route(/^([1-2][0-9][0-9][0-9])\/map\/([A-Z]+)\/domain\/([a-z]+)$/, 'map');
	},
	getUrl: function(elements) {
		return _.compact(elements).join('/');
	},
	filterCountry: function(country) {
		return country==='EU-28'?null:country;
	},
	index: function(year, country) {
		app.controllers.skeleton.renderIndex('index', year, country);
	},
	getIndexUrl: function(year, country) {
		return this.getUrl([app.root, year, this.filterCountry(country)]);
	},
	country: function(year, country) {
		app.controllers.skeleton.renderCountry('country', year, country);
	},
	getCountryUrl: function(year, country) {
		return this.getUrl([app.root, year, 'country', this.filterCountry(country)]);
	},
	getCountryUrlPlain: function(year, country) {
		return this.getUrl([          year, 'country', this.filterCountry(country)]);
	},
	domain: function(year, domain, country) {
		app.controllers.skeleton.renderDomain('domain', year, domain, null, country);
	},
	subdomain: function(year, domain, subdomainIndex, country) {
		app.controllers.skeleton.renderDomain('domain', year, domain, subdomainIndex, country);
	},
	getDomainUrl: function(year, domain, subdomainIndex, country) {
		return this.getUrl([app.root, year, 'domain', domain, subdomainIndex, this.filterCountry(country)]);
	},
	map: function(year, country, domain) {
		app.controllers.skeleton.renderMap('map', year, country, domain);
	},
	getMapUrl: function(year, country, domain, subdomainIndex) {
		return domain?
			this.getUrl([app.root, year, 'map', this.filterCountry(country), 'domain', domain, subdomainIndex]):
			this.getUrl([app.root, year, 'map', this.filterCountry(country)]);
	},
	about: function() {
		app.controllers.skeleton.renderAbout('about');
	},
	policies: function() {
		app.controllers.skeleton.renderPolicies('policies');
	},
	countriesComparison: function() {
		app.controllers.skeleton.renderCountriesComparison('countries-comparison');
	}
});

})();
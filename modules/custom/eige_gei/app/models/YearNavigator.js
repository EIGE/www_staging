(function() {
"use strict";

/**
 * Responsible for the year navigation component of the app which, in addition
 * to year, it needs to track the selected country and domain.
 *
 */
app.models.YearNavigator = Backbone.Model.extend({
	defaults: {
		availableYears: [],       // array
		availableCountries: null, // collection
		availableDomains: [],     // array
		selectedYear: null,
		selectedCountryKey: null,
		selectedDomain: null,
		selectedSubdomain: null,
		selectedSubdomainIndex: null,
		context: null,            // page on which the navigator renders (in order to adapt urls)
		graphData: null
	},
	initialize: function() {
		this.set('availableYears', this.get('availableYears').sort(), {silent: true});
		if (this.get('availableYears') && this.get('availableYears').length) {
			this._selectMaxYear();
		}
	},
	getAvailableYears: function() {
		return this.get('availableYears');
	},
	getAvailableYearsReverse: function() {
		return _.clone(this.get('availableYears')).reverse();
	},
	isSelectedYear: function(year) {
		return this.get('selectedYear')==year;
	},
	getSelectedYear: function() {
		return this.get('selectedYear');
	},
	selectYear: function(year) {
		if (!_.contains(this.get('availableYears'), year)) {
			this._selectMaxYear();
		} else {
			this.set('selectedYear', year, {silent: true});
		}
		return this;
	},
	getMinYear: function() {
		return this.get('availableYears')[0];
	},
	getMaxYear: function() {
		return this.get('availableYears').slice(-1).pop();
	},
	_selectMaxYear: function() {
		this.set('selectedYear', this.getMaxYear(), {silent: true});
		return this;
	},
	getPreviousYear: function(year) {
		var index = _.indexOf(this.getAvailableYears(), year);
		return index>0?this.getAvailableYears()[index-1]:null;
	},
	getAvailableCountries: function() {
		return this.get('availableCountries');
	},
	getSelectedCountryKey: function() {
		return this.get('selectedCountryKey');
	},
	selectCountry: function(countryKey) {
		if (!this.get('availableCountries').get(countryKey)) {
			this.set('selectedCountryKey', this.getFirstCountryKey(), {silent: true});
		} else {
			this.set('selectedCountryKey', countryKey, {silent: true});
		}
		return this;
	},
	getFirstCountryKey: function() {
		return this.get('availableCountries').at(0).id;
	},
	isOnFirstCountry: function() {
		return this.getSelectedCountryKey()===this.getFirstCountryKey();
	},
	getSelectedDomain: function() {
		return this.get('selectedDomain');
	},
	selectDomain: function(domainKey) {
		return this._selectDomain(domainKey, this.getFirstDomain());
	},
	selectDomainStrict: function(domainKey) {
		return this._selectDomain(domainKey, null);
	},
	_selectDomain: function(domainKey, domainNotFoundValue) {
		var domain = _.findWhere(this.get('availableDomains'), {'key': domainKey});
		this.set('selectedDomain', domain?domain:domainNotFoundValue, {silent: true});
		return this;
	},
	selectSubdomain: function(subdomainIndex) {
		var selectedSubdomain = this.getSelectedDomain().subdomains?this.getSelectedDomain().subdomains[subdomainIndex-1]:null;
		this.set('selectedSubdomainIndex', selectedSubdomain?subdomainIndex:null, {silent: true});
		this.set('selectedSubdomain', selectedSubdomain, {silent: true});
		return this;
	},
	getSelectedSubdomainIndex: function() {
		return this.get('selectedSubdomainIndex');
	},
	getSelectedSubdomain: function() {
		return this.get('selectedSubdomain');
	},
	getFirstDomain: function() {
		return this.get('availableDomains')[0];
	},
	getFirstDomainKey: function() {
		return this.getFirstDomain().key;
	},
	getUrl: function() {
		return this.getUrlForYear(this.getSelectedYear());
	},
	getUrlForYear: function(year) {
		if (this.get('context')==='index')   return app.router.getIndexUrl(year, this.getSelectedCountryKey());
		if (this.get('context')==='country') return app.router.getCountryUrl(year, this.getSelectedCountryKey());
		if (this.get('context')==='domain')  return app.router.getDomainUrl(year, this.getSelectedDomain().key, this.getSelectedSubdomainIndex(), this.getSelectedCountryKey());
		if (this.get('context')==='map')     return app.router.getMapUrl(year, this.getSelectedCountryKey(), this.getSelectedDomain()?this.getSelectedDomain().key:null, this.getSelectedSubdomainIndex());
	},
	setGraphData: function(graphData) {
		this.set('graphData', graphData, {silent: true});
		return this;
	},
	getGraphData: function() {
		return this.get('graphData');
	},
	getCssClass: function() {
		var classes = [];
		if (this.getSelectedYear()) {
			classes.push('year year_' + this.getSelectedYear());
		}
		if (this.getSelectedDomain()) {
			classes.push('domain domain_' + this.getSelectedDomain().key);
		}
		if (this.getSelectedSubdomain()) {
			classes.push('subdomain subdomain_' + this.getSelectedSubdomain().key);
		}
		if (this.getSelectedCountryKey()) {
			classes.push('country country_' + this.getSelectedCountryKey());
		}
		return classes.join(' ');
	},
	getSmallCyclicGraphsData: function() {
		var data = this.get('graphData'),
		    year = this.getSelectedYear(),
		    eu28 = this.getFirstCountryKey(),
		    secondaryValueRequired = this.getSelectedCountryKey()!=eu28;
		return {
			color: data.color,
			maxValue: data.maxValue,
			mainValue: data.mainValues[year],
			secondaryValue: secondaryValueRequired?data.secondaryValues[year]:null
		};
	}
});

})();

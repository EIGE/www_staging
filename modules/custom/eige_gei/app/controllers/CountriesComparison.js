(function($) {
"use strict";

app.controllers.countriesComparison = {
	initialize: function() {
		var CountriesCollection = Backbone.Collection.extend({
			model: app.models.Country,
			localStorage: new Backbone.LocalStorage("countries-comparison")
		});
		this.countries = new CountriesCollection();
		this.countries.fetch();
		if (this.countries.isEmpty()) {
			this.addCountry('EU-28');
		}
		
		this.yearNavigator = new app.models.YearNavigator({availableYears: _.keys(app.data.treedata)});
		this.defaultYear = this.yearNavigator.getSelectedYear();
		
		this.countriesMultipleSelect = new app.models.MultipleSelect({
			label: app.p.t('misc.countries'),
			options: app.collections.countries.models,
			selectedOptions: this.countries.pluck('key'),
			optionsTranslationPrefix: 'countries.long.'
		});
		
		this.domainsMultipleSelect = new app.models.MultipleSelect({
			label: app.p.t('misc.domains'),
			options: _.where(app.data.tree, {type: 'main'}),
			selectedOptions: _.pluck(_.where(app.data.tree, {type: 'main'}), 'key'),
			optionsTranslationPrefix: 'tree.'
		});
		
		var that = this;		
		Backbone.Events.listenTo(Backbone, 'country:compare:add', function(e) { that.addCountry(e && e.country) });
		Backbone.Events.listenTo(Backbone, 'country:compare:remove', function(e) { that.removeCountry(e && e.country) });

		Backbone.Events.listenTo(this.countriesMultipleSelect, 'change', function(e) { that.syncCountries(); that.render(); });
		Backbone.Events.listenTo(this.domainsMultipleSelect, 'change', function(e) { that.render(); });
	},
	addCountry: function(countryKey) {
		var country = app.collections.countries.findWhere({key: countryKey});
		if (!country) return;
		if (this.countries.findWhere({key: countryKey})) return;
		console.log('adding country for comparison: ' + countryKey);
		var countryClone = country.clone();
		this.countries.add(countryClone);
		countryClone.save();
		if (this.countriesMultipleSelect) this.countriesMultipleSelect.select(countryKey);
	},
	removeCountry: function(countryKey) {
		var country = this.countries.get(countryKey);
		if (!country) return;
		console.log('removing country for comparison: ' + countryKey);
		country.destroy();
		if (this.countriesMultipleSelect) this.countriesMultipleSelect.deselect(countryKey);
	},
	syncCountries: function() {
		console.log('syncing countries from selector to page\'s countries');
		var that = this;
		_.each(this.countriesMultipleSelect.get('options'), function(option) {
			if (that.countriesMultipleSelect.isSelected(option.id)) {
				that.addCountry(option.id);
			} else {
				that.removeCountry(option.id);
			}
		});
	},
	render: function() {
		app.router.countriesComparison();
	},
	createView: function() {
		this.view = new app.views.CountriesComparison({
			controller: this,
			countriesMultipleSelect: this.countriesMultipleSelect,
			domainsMultipleSelect: this.domainsMultipleSelect,
			countriesComparisonPanelsData: this.calculateCountriesComparisonPanelsData()
		});
		
		var selectedCountriesSummary = this.getSelectedCountriesSummary();
		Backbone.trigger('title', app.p.t('CountriesComparison.title') + (selectedCountriesSummary?': ' + selectedCountriesSummary:''))
		Backbone.trigger('view:rendered');
		return this.view;
	},
	getSelectedCountriesSummary: function(separator) {
		return _.without(this.countries.pluck('key'), 'EU-28').join(separator||', ');
	},
	getAllCountriesSummary: function(separator) {
		return this.countries.pluck('key').join(separator||', ');
	},
	calculateCountriesComparisonPanelsData: function() {
		var selectedYear = this.defaultYear,
		    availableYears = _.clone(this.yearNavigator.getAvailableYears()).reverse(),
		    result = [],
		    domainPool = app.data.tree,
		    dataPool = app.data.treedata;
		for(var i=0; i<availableYears.length; i++) {
			var year = availableYears[i];
			var yearResult = {
				year: year,
				panels: []
			}
			var selectedDomainKeys = this.domainsMultipleSelect.get('selectedOptions');
			for(var j=0; j<selectedDomainKeys.length; j++) {
				var domain = _.find(domainPool, {key: selectedDomainKeys[j]});
				var countries = [];
				this.countries.each(function(country) {
					countries.push({
						key: country.id,
						value: dataPool[year][domain.key][country.id]
					});
				});
				var panel = {
					domain: domain.key,
					maxValue: domain.maxValue,
					color: domain.color,
					expanded: true,
					countries: countries,
					panels: []
				};
				yearResult.panels.push(panel);
				if (domain.subdomains && domain.subdomains.length) {
					for(var k=0; k<domain.subdomains.length; k++) {
						var subdomainKey = domain.key + (k + 1);
						var countries = [];
						this.countries.each(function(country) {
							countries.push({
								key: country.id,
								value: dataPool[year][subdomainKey][country.id]
							});
						});
						panel.panels.push({
							domain: subdomainKey,
							maxValue: domain.maxValue,
							color: domain.color,
							expanded: false,
							countries: countries
						});
					}
				}
			}
			result.push(yearResult);
		}
		return result;
	}
};

})(window.jQuery);

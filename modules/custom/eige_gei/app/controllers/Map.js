(function() {
"use strict";

app.controllers.map = {
	initialize: function() {
		this.yearNavigator = new app.models.YearNavigator({
			availableYears: _.keys(app.data.treedata),
			availableCountries: app.collections.countries,
			availableDomains: app.data.tree,
			context: 'map'
		});
	},
	createView: function(year, country, domain) {
		this.yearNavigator.selectYear(year).selectCountry(country).selectDomainStrict(domain);
		
		this.yearsSingleSelect = new app.models.SingleSelect({
			label: app.p.t('misc.years'),
			options: _.map(this.yearNavigator.getAvailableYearsReverse(), function(year) { return {id: year} } ),
			selectedOption: this.yearNavigator.getSelectedYear()
		});
		
		var domains = [];
		domains.push({id: 'index'});
		_.each(this.yearNavigator.get('availableDomains'), function(domain) {
			if (domain.type==='main') {
				domains.push({id: domain.key});
			}
		});
		this.domainsSingleSelect = new app.models.SingleSelect({
			label: app.p.t('misc.domains'),
			optionsTranslationPrefix: 'tree.',
			options: domains,
			selectedOption: this.yearNavigator.getSelectedDomain()?this.yearNavigator.getSelectedDomain().key:domains[0].id
		});

		this.view = new app.views.Map({
			controller: this,
			yearNavigator: this.yearNavigator,
			yearsSingleSelect: this.yearsSingleSelect,
			domainsSingleSelect: this.domainsSingleSelect,
			mapGraphData: this.calculateMapGraphData(),
			horizontalBarGraphData: this.calculateHorizontalBarGraphData(),
			smallCyclicGraphsData: this.calculateSmallCyclicGraphsData()
		});
		Backbone.trigger('title', [this.yearNavigator.getSelectedYear(), app.p.t('map.title'), app.p.t('countries.long.' + this.yearNavigator.getSelectedCountryKey())]);
		Backbone.trigger('view:rendered');
		return this.view;
	},
	calculateMapGraphData: function() {
		var selectedYear = this.yearNavigator.getSelectedYear(),
		    selectedCountry = this.yearNavigator.getSelectedCountryKey(),
		    selectedDomain = this.yearNavigator.getSelectedDomain(),
		    dataPool = app.data.treedata[selectedYear][selectedDomain?selectedDomain.key:'index'],
		    data = {
		    	selectedCountry: selectedCountry,
		    	color: selectedDomain?selectedDomain.color:'#763A82', // default purple
		    	maxValue: 100,
		    	euAverageValue: dataPool[this.yearNavigator.getFirstCountryKey()],
		    	euAverageCaption: this.yearNavigator.getFirstCountryKey(),
		    	countries: []
		    };
		_.each(dataPool, function(value, country) {
			data.countries.push({
				code: country,
				value: value,
				link: app.router.getMapUrl(selectedYear, country, selectedDomain?selectedDomain.key:null)
			});
		});
		return data;
	},
	calculateSmallCyclicGraphsData: function() {
		var selectedYear = this.yearNavigator.getSelectedYear(),
		    previousYear = this.yearNavigator.getPreviousYear(selectedYear),
		    selectedCountry = this.yearNavigator.getSelectedCountryKey(),
		    tree = app.data.tree,
		    dataPool = app.data.treedata[selectedYear],
		    data = [],
		    secondaryCountry = this.yearNavigator.getFirstCountryKey(),
		    sameCountry = selectedCountry==secondaryCountry;
		_.each(tree, function(domain) {
			var graphData = _.extend(_.clone(domain), {
				title: app.p.t('tree.' + domain.key),
				link: app.router.getDomainUrl(selectedYear, domain.key, null, selectedCountry),
				mainValue: dataPool[domain.key]?dataPool[domain.key][selectedCountry]:null,
				secondaryValue: sameCountry?null:dataPool[domain.key]?dataPool[domain.key][secondaryCountry]:null
			});
			if (domain.type==='main') {
				graphData.diff =  app.data.utils.findDiff(selectedYear, previousYear, domain.key, selectedCountry);
			}
			if (domain.textValues && _.isFinite(graphData.mainValue)) {
				graphData.mainValueCaption = app.p.t('domain.' + domain.key + '.caption_' + graphData.mainValue);
				graphData.mainValueExplanation = app.p.t('domain.' + domain.key + '.explanation_' + graphData.mainValue);
			}
			if (domain.textValues && _.isFinite(graphData.secondaryValue)) {
				graphData.secondaryValueCaption = app.p.t('domain.' + domain.key + '.caption_' + graphData.secondaryValue);
				graphData.secondaryValueExplanation = app.p.t('domain.' + domain.key + '.explanation_' + graphData.secondaryValue);
			}
			data.push(graphData);
		});
		return data;
	},
	calculateHorizontalBarGraphData: function() {
		var selectedYear = this.yearNavigator.getSelectedYear(),
		    selectedCountry = this.yearNavigator.getSelectedCountryKey(),
		    dataPool = app.data.treedata[selectedYear]['index'],
		    secondaryCountry = this.yearNavigator.getFirstCountryKey(),
		    sameCountry = selectedCountry==secondaryCountry;
		return {
			mainValue: dataPool[selectedCountry],
			mainCaption: selectedCountry,
			oneRow: sameCountry,
			secondaryValue: sameCountry?null:dataPool[secondaryCountry],
			secondaryCaption: sameCountry?null:secondaryCountry
		};
	}
};

})();

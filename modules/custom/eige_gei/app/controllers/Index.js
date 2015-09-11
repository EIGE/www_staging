(function() {
"use strict";

app.controllers.index = {
	initialize: function() {
		this.yearNavigator = new app.models.YearNavigator({availableYears: _.keys(app.data.treedata), availableCountries: app.collections.countries, context: 'index'});
		
		this.defaultYear = this.yearNavigator.getSelectedYear();
	},
	createView: function(year, country) {
		this.yearNavigator.selectYear(year).selectCountry(country).setGraphData(this.calculateYearNavigatorGraphData());

		this.view = new app.views.Index({
			controller: this,
			yearNavigator: this.yearNavigator,
			largeCyclicGraphData: this.calculateLargeCyclicGraphData(),
			horizontalBarGraphData: this.calculateHorizontalBarGraphData(),
			smallCyclicGraphsData: this.calculateSmallCyclicGraphsData()
		});
		Backbone.trigger('title', [this.yearNavigator.getSelectedYear(), app.p.t('index.title'), app.p.t('countries.long.' + this.yearNavigator.getSelectedCountryKey())]);
		Backbone.trigger('view:rendered');
		return this.view;
	},
	calculateLargeCyclicGraphData: function() {
		var selectedYear = this.yearNavigator.getSelectedYear(),
		    selectedCountry = this.yearNavigator.getSelectedCountryKey(),
		    firstCountry = this.yearNavigator.getFirstCountryKey(),
		    dataPool = app.data.treedata[selectedYear]['index'],
		    data = {
		    	color: '#763A82', // default purple
		    	maxValue: 100,
		    	countries: []
		    };
		this.yearNavigator.getAvailableCountries().each(function(country) {
			data.countries.push({
				key: country.id,
				type: country.get('type'),
				title: app.p.t('countries.long.' + country.id),
				shortTitle: country.id,
				value: dataPool[country.id],
				innerLink: app.router.getIndexUrl(selectedYear, country.id),
				outerLink: country.id===firstCountry?app.router.getIndexUrl(selectedYear, country.id):app.router.getCountryUrl(selectedYear, country.id),
				selected: country.id===selectedCountry
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
	},
	calculateYearNavigatorGraphData: function() {
		var selectedCountry = this.yearNavigator.getSelectedCountryKey(),
		    availableYears = this.yearNavigator.getAvailableYears(),
		    dataPool = app.data.treedata,
		    eu28 = this.yearNavigator.getFirstCountryKey(),
		    mainValues = [],
		    secondaryValues = [];
		for(var i=0; i<availableYears.length; i++) {
			var year = availableYears[i];
			mainValues[year] = dataPool[year]['index'][selectedCountry];
			secondaryValues[year] = dataPool[year]['index'][eu28];
		}
		return {
			color: '#763A82', // default purple
			country: selectedCountry,
			maxValue: 100,
			mainValues: mainValues,
			secondaryValues: secondaryValues
		};
	}
};

})();

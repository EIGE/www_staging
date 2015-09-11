(function($) {
"use strict";

app.controllers.domain = {
	initialize: function() {
		this.yearNavigator = new app.models.YearNavigator({
			availableYears: _.keys(app.data.treedata),
			availableCountries: app.collections.countries,
			availableDomains: app.data.tree,
			context: 'domain'
		});
	},
	createView: function(year, domain, subdomainIndex, country) {
		this.yearNavigator.selectYear(year).selectDomain(domain).selectSubdomain(subdomainIndex).selectCountry(country);
		this.domain = this.yearNavigator.getSelectedDomain();
		this.subdomain = this.yearNavigator.getSelectedSubdomain();
		var visibilities = {};
		visibilities.yearNavigator = this.domain.dissalowComparisonWithPreviousYears!=true;
		
		if (!this.subdomain) {
			this.view = new app.views.Domain({
				controller: this,
				yearNavigator: this.yearNavigator.setGraphData(this.calculateYearNavigatorGraphData()),
				largeCyclicGraphData: this.calculateLargeCyclicGraphData(),
				smallCyclicGraphData: this.calculateSmallCyclicGraphData(),
				horizontalBarGraphsData: this.calculateHorizontalBarGraphsData(),
				lineTrendGraphData: this.calculateLineTrendGraphData(),
				countriesBarGraphData: this.calculateCountriesBarGraphData(),
				variableGraphsData: this.calculateVariableGraphsData(),
				visibilities: visibilities
			});
		} else {
			this.view = new app.views.Domain({
				controller: this,
				yearNavigator: this.yearNavigator.setGraphData(this.calculateYearNavigatorGraphData()),
				largeCyclicGraphData: this.calculateLargeCyclicGraphData(),
				horizontalBarGraphData: this.calculateHorizontalBarGraphData(),
				lineTrendGraphData: this.calculateLineTrendGraphData(),
				countriesBarGraphData: this.calculateCountriesBarGraphData(),
				variableGraphsData: this.calculateVariableGraphsData(),
				visibilities: visibilities
			});
		}
		this.fetchDataAndRenderContent();

		Backbone.trigger('title', [
			this.yearNavigator.getSelectedYear(),
			app.p.t('tree.' + this.domain.key),
			this.subdomain?app.p.t('tree.' + this.subdomain.key):null,
			app.p.t('countries.long.' + this.yearNavigator.getSelectedCountryKey())
		]);
		Backbone.trigger('view:rendered');
		return this.view;
	},
	storeInCache: function(data) {
		this.cache = {
			locale: app.locale,
			domain: this.domain.key,
			data: data
		};
	},
	getFromCache: function() {
		if (this.cache && this.cache.locale===app.locale && this.cache.domain===this.domain.key) {
			return this.cache.data;
		}
		return null;
	},
	fetchDataAndRenderContent: function() {
		var that = this;
		
		that.view.appendSpinner();
		if (that.contentRequest && that.contentRequest.abort) that.contentRequest.abort(); // cancel possible previous pending ajax request
		that.contentRequest = that.getFromCache() || $.ajax({
			url: app.root + '/json/domain/' + app.p.t('tree.' + this.domain.key)
		});
		
		$.when(that.contentRequest).done(function(content) {
			delete that.contentRequest;
			that.storeInCache(content);
			that.view.removeSpinner();
			that.view.renderContent(content);
		}).fail(function(e) {
			that.view.removeSpinner();
			if (e.status===200) {
				// no data in drupal. do nothing
				return;
			}
			if (e.status===0) {
				// probably aborted previous ajax. do nothing
				return;
			}
			// communication error
			Backbone.trigger('error', e);
		});
	},
	calculateLargeCyclicGraphData: function() {
		var selectedYear = this.yearNavigator.getSelectedYear(),
		    selectedCountry = this.yearNavigator.getSelectedCountryKey(),
		    selectedDomain = this.domain,
		    selectedSubdomainIndex = this.yearNavigator.getSelectedSubdomainIndex(),
		    selectedSubdomain = this.subdomain?this.subdomain.key:null,
		    dataPool = app.data.treedata[selectedYear][selectedSubdomain?selectedSubdomain:selectedDomain.key],
		    data = {
		    	color: this.domain.color,
		    	maxValue: this.domain.maxValue,
		    	countries: []
		    };
		if (!dataPool) return null;
		this.yearNavigator.getAvailableCountries().each(function(country) {
			data.countries.push({
				key: country.id,
				type: country.get('type'),
				title: app.p.t('countries.long.' + country.id),
				shortTitle: country.id,
				value: dataPool[country.id],
				valueCaption: selectedDomain.textValues && dataPool[country.id]?app.p.t('domain.' + selectedDomain.key + '.caption_' + dataPool[country.id]):null,
				valueExplanation: selectedDomain.textValues && dataPool[country.id]?app.p.t('domain.' + selectedDomain.key + '.explanation_' + dataPool[country.id]):null,
				innerLink: app.router.getDomainUrl(selectedYear, selectedDomain.key, selectedSubdomainIndex, country.id),
				outerLink: app.router.getCountryUrl(selectedYear, country.id),
				selected: country.id===selectedCountry
			});
		});
		return data;
	},
	calculateSmallCyclicGraphData: function() {
		var selectedYear = this.yearNavigator.getSelectedYear(),
		    previousYear = this.yearNavigator.getPreviousYear(selectedYear),
		    selectedCountry = this.yearNavigator.getSelectedCountryKey(),
		    selectedDomain = this.yearNavigator.getSelectedDomain(),
		    selectedDomainKey = selectedDomain.key,
		    dataPool = app.data.treedata[selectedYear][selectedDomainKey],
		    secondaryCountry = this.yearNavigator.getFirstCountryKey(),
		    sameCountry = selectedCountry==secondaryCountry;
		if (!dataPool) return null;
		var graphData = _.extend(_.clone(this.domain), {
			diff: app.data.utils.findDiff(selectedYear, previousYear, selectedDomainKey, selectedCountry),
			mainValue: dataPool[selectedCountry]?dataPool[selectedCountry]:null,
			secondaryValue: sameCountry?null:dataPool[secondaryCountry]?dataPool[secondaryCountry]:null,
			secondaryCaption: sameCountry?null:dataPool[secondaryCountry]?secondaryCountry:null,
			title: app.p.t('tree.' + selectedDomainKey)
		});
		if (selectedDomain.textValues && _.isFinite(graphData.mainValue)) {
			graphData.mainValueCaption = app.p.t('domain.' + selectedDomain.key + '.caption_' + graphData.mainValue);
			graphData.mainValueExplanation = app.p.t('domain.' + selectedDomain.key + '.explanation_' + graphData.mainValue);
		}
		if (selectedDomain.textValues && _.isFinite(graphData.secondaryValue)) {
			graphData.secondaryValueCaption = app.p.t('domain.' + selectedDomain.key + '.caption_' + graphData.secondaryValue);
			graphData.secondaryValueExplanation = app.p.t('domain.' + selectedDomain.key + '.explanation_' + graphData.secondaryValue);
		}
		return graphData;
	},
	calculateYearNavigatorGraphData: function() {
		var selectedCountry = this.yearNavigator.getSelectedCountryKey(),
		    selectedDomain = this.yearNavigator.getSelectedDomain().key,
		    availableYears = this.yearNavigator.getAvailableYears(),
		    dataPool = app.data.treedata,
		    eu28 = this.yearNavigator.getFirstCountryKey(),
		    mainValues = [],
		    secondaryValues = [];
		for(var i=0; i<availableYears.length; i++) {
			var year = availableYears[i];
			if (dataPool[year][selectedDomain]) mainValues[year] = dataPool[year][selectedDomain][selectedCountry];
			if (dataPool[year][selectedDomain]) secondaryValues[year] = dataPool[year][selectedDomain][eu28];
		}
		return {
			color: this.domain.color,
			country: selectedCountry,
			maxValue: this.domain.maxValue,
			mainValues: mainValues,
			secondaryValues: secondaryValues
		};
	},
	calculateHorizontalBarGraphsData: function() {
		var selectedYear = this.yearNavigator.getSelectedYear(),
		    selectedCountry = this.yearNavigator.getSelectedCountryKey(),
		    dataPool = app.data.treedata[selectedYear],
		    that = this,
		    secondaryCountry = this.yearNavigator.getFirstCountryKey(),
		    sameCountry = selectedCountry==secondaryCountry;
		if (!that.domain.subdomains) return [];
		var graphsData = [];
		for(var i=0; i<that.domain.subdomains.length; i++) {
			var subdomain = that.domain.subdomains[i];
			graphsData.push({
				mainValue: dataPool[subdomain.key][selectedCountry],
				mainCaption: selectedCountry,
				oneRow: sameCountry,
				secondaryValue: sameCountry?null:dataPool[subdomain.key][secondaryCountry],
				secondaryCaption: sameCountry?null:secondaryCountry,
				title: app.p.t('tree.' + subdomain.key),
				color: that.domain.color,
				link: app.router.getDomainUrl(selectedYear, that.domain.key, i + 1, selectedCountry)
			});
		}
		return graphsData;
	},
	calculateHorizontalBarGraphData: function() {
		var selectedYear = this.yearNavigator.getSelectedYear(),
		    selectedCountry = this.yearNavigator.getSelectedCountryKey(),
		    dataPool = app.data.treedata[selectedYear],
		    that = this,
		    secondaryCountry = this.yearNavigator.getFirstCountryKey(),
		    sameCountry = selectedCountry==secondaryCountry;
		return {
			mainValue: dataPool[this.subdomain.key][selectedCountry],
			mainCaption: selectedCountry,
			oneRow: sameCountry,
			secondaryValue: sameCountry?null:dataPool[this.subdomain.key][secondaryCountry],
			secondaryCaption: sameCountry?null:secondaryCountry,
			title: app.p.t('tree.' + this.subdomain.key),
			color: that.domain.color
		};
	},
	calculateVariableGraphsData: function() {
		var selectedYear = this.yearNavigator.getSelectedYear(),
		    selectedCountry = this.yearNavigator.getSelectedCountryKey(),
		    dataPool = app.data.treedata[selectedYear],
		    that = this,
		    secondaryCountry = this.yearNavigator.getFirstCountryKey(),
		    sameCountry = selectedCountry==secondaryCountry,
		    variables = (this.subdomain || this.domain).variables,
		    graphsData = [];
		if (!variables) return [];
		for(var i=0; i<variables.length; i++) {
			var rows = [];
			if (!sameCountry) {
				addRowFor(variables[i], 'w', selectedCountry, true);
				addRowFor(variables[i], 'w', secondaryCountry, false);
				addRowFor(variables[i], 'm', selectedCountry, true);
				addRowFor(variables[i], 'm', secondaryCountry, false);
			} else {
				addRowFor(variables[i], 'w', selectedCountry, false);
				addRowFor(variables[i], 'm', selectedCountry, false);
			}
			if (rows.length===0) continue;
			graphsData.push({
				title: app.p.t('tree.' + variables[i].key),
				rows: rows,
				maxValue: getMaxValueFor(variables[i], ['w', 'm']),
				secondary: sameCountry
			});
		}
		function addRowFor(variable, suffix, country, mainValue) {
			if (!dataPool[variable.key + suffix]) return; // to deal with variables without data (NGEI-2 no "M" for violence)
			rows.push({
				caption: country + '-' + app.p.t('misc.sex.abbr.' + suffix),
				value: dataPool[variable.key + suffix][country],
				suffix: suffix,
				mainValue: mainValue
			});
		}
		function getMaxValueFor(variable, suffixes) {
			var maxValues = [];
			for(var i=0; i<suffixes.length; i++) {
				maxValues.push(Math.max(
					that.domain.maxValue,
					_.max(_.values(dataPool[variable.key + suffixes[i]]))
				));
			}
			return _.max(maxValues);
		}
		return graphsData;
	},
	calculateLineTrendGraphData: function() {
		var selectedCountry = this.yearNavigator.getSelectedCountryKey(),
		    dataPool = app.data.treedata,
		    that = this,
		    atLeastOneNotNull = false;
		var graphData = {
			domain: that.domain,
			country: selectedCountry,
			maxValue: that.domain.maxValue,
			countries: []		
		};
		app.collections.countries.each(function(country) {
			graphData.countries.push({
				country: country.id,
				values: _.mapObject(dataPool, function(value, key) { 
					var result = value[that.domain.key]?value[that.domain.key][country.id]:null;
					if (result!==null) atLeastOneNotNull=true;
					return result;
				})
			});
		});
		if (!atLeastOneNotNull) return null;
		return graphData;
	},
	calculateCountriesBarGraphData: function() {
		var selectedYear = this.yearNavigator.getSelectedYear(),
		    selectedDomain = this.yearNavigator.getSelectedDomain().key,
		    dataPool = app.data.treedata[selectedYear][selectedDomain],
		    firstCountry = this.yearNavigator.getFirstCountryKey(),
		    that = this;
		if (!dataPool) return null;
		var graphData = {
			maxValue: that.domain.maxValue,
			maxValueForColor: _.max(dataPool, function(stringNumber) { return Number(stringNumber)}),
			minValueForColor: _.min(dataPool, function(stringNumber) { return Number(stringNumber)}),
			color: this.domain.color,
			firstCountryValue: dataPool[firstCountry],
			domain: that.domain,
			year: that.yearNavigator.getSelectedYear(),
			countries: []
		};
		app.collections.countries.each(function(country) {
			if (country.id===firstCountry) return true; // continue
			graphData.countries.push({
				country: country.id,
				value: dataPool[country.id]
			});
		});
		return graphData;
	}
};

})(window.jQuery);

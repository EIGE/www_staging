(function($) {
"use strict";

app.controllers.country = {
	contentRequests: {},
	searchFormAndResultsBlockId: 'policy_initiatives_search|block_1', // drupal view_id|block_id
	initialize: function() {
		this.yearNavigator = new app.models.YearNavigator({availableYears: _.keys(app.data.treedata), availableCountries: app.collections.countries, context: 'country'});
	},
	createView: function(year, country) {
		this.yearNavigator.selectYear(year).selectCountry(country);
		this.tabsMenu = new app.models.CountryTabsMenu({items: ['trends', 'domains', 'policy', 'context_data']});

		this.countryDomainsDataPanels = this.calculateCountryDomainsDataPanels();
		this.view = new app.views.Country({
			controller: this,
			countryTrendsGraphData: this.calculateCountryTrendsGraphsData(),
			countryTrendsGraphFilter: new app.models.CountryTrendsGraphFilter({domains: app.data.tree}),
			horizontalGraphsForAllYears: this.calculateHorizontalGraphsForAllYears(),
			countryDomainsDataPanels: this.countryDomainsDataPanels
		});
		this.fetchAndRenderContent();
		this.fetchAndRenderPolicy();
		Backbone.trigger('title', [this.yearNavigator.getSelectedYear(), app.p.t('countries.long.' + this.yearNavigator.getSelectedCountryKey())]);
		Backbone.trigger('view:rendered');
		return this.view;
	},
	fetchAndRenderContent: function() {
		this.fetchDataAndRunCallback(
			app.root + '/json/page' + app.root + '/country/' + app.p.t('countries.drupal.' + this.yearNavigator.getSelectedCountryKey()) + '-content',
			'context',
			this.view.renderContent
		);
	},
	fetchAndRenderPolicy: function() {
		this.fetchDataAndRunCallback(
			app.root + '/json/block/' + this.searchFormAndResultsBlockId + '?c[]=' + app.collections.countries.get(this.yearNavigator.getSelectedCountryKey()).getDrupalKey(),
			'policy',
			this.view.renderPolicy
		);
	},
	fetchAndRenderMorePolicyResults: function(params) {
		this.fetchDataAndRunCallback(
			app.root + '/json/block/' + this.searchFormAndResultsBlockId + '?' + params,
			'policy',
			this.view.renderMorePolicyResults
		);
	},
	fetchDataAndRunCallback: function(url, contentId, callback) {
		var that = this;
		
		that.view.appendSpinner(contentId);
		if (that.contentRequests[contentId] && that.contentRequests[contentId].abort) that.contentRequests[contentId].abort();    // cancel possible previous pending ajax request
		that.contentRequests[contentId] = $.ajax({
			url: url
		});
		
		$.when(that.contentRequests[contentId]).done(function(content) {
			delete that.contentRequests[contentId];
			that.view.removeSpinner(contentId);
			callback.apply(that.view, [content]); // call the callback directly on the view, passing the result content
		}).fail(function(e) {
			that.view.removeSpinner(contentId);
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
	changedYear: function(e) {
		Backbone.history.navigate(e.url);
		Backbone.history.trigger('route');
		if (this.countryDomainsDataPanels) {
			for (var i=0; i<this.countryDomainsDataPanels.length; i++) {
				this.countryDomainsDataPanels[i].set('selectedYear', e.year);
			}
		}
	},
	calculateCountryTrendsGraphsData: function() {
		var selectedCountry = this.yearNavigator.getSelectedCountryKey(),
		    eu28 = this.yearNavigator.getFirstCountryKey(),
		    availableYears = this.yearNavigator.getAvailableYears(),
		    dataPool = app.data.treedata;
		var graphData = [];
		collectDataFor("index", 100, '#763A82', // default purple
			function(year) { return dataPool[year]['index'][selectedCountry]; },
			function(year) { return dataPool[year]['index'][eu28]; }
		);
		collectDataFor("average", 100, '#999999',
			function(year) { return dataPool[year]['index'][eu28]; },
			null
		);
		for(var i=0; i<app.data.tree.length; i++) {
			var domain = app.data.tree[i];
			if (domain.type==='satellite') continue;
			collectDataFor(domain.key, domain.maxValue, domain.color,
				function(year) { return dataPool[year][domain.key]?dataPool[year][domain.key][selectedCountry]:null; },
				function(year) { return dataPool[year][domain.key]?dataPool[year][domain.key][eu28]:null; }
			);
		}
		function collectDataFor(key, maxValue, color, countryDataCollector, euAverageDataCollector) {
			var lineData = {
				key: key,
				countryData: [],
				maxValue: maxValue,                                        
				euAverageData: [],                                         // used for tooltip
				color: color,                                              // used for tooltip
				selectedCountry: selectedCountry,                          // used for tooltip
				euAverageCountry: euAverageDataCollector===null?null:eu28  // used for tooltip
			};
			for(var i=0; i<availableYears.length; i++) {
				var year = availableYears[i];
				lineData.countryData[year] = countryDataCollector(year);
				lineData.euAverageData[year] = euAverageDataCollector===null?null:euAverageDataCollector(year);
			}
			graphData.push(lineData);
		}
		return graphData;
	},
	calculateHorizontalGraphsForAllYears: function() {
		var selectedCountry = this.yearNavigator.getSelectedCountryKey(),
		    index = 'index',
		    eu28 = this.yearNavigator.getFirstCountryKey(),
		    availableYears = this.yearNavigator.getAvailableYears(),
		    dataPool = app.data.treedata,
		    graphsData = {
		    	selectedYear: this.yearNavigator.getSelectedYear(),
		    	data: []
		    };
		for(var i=0; i<availableYears.length; i++) {
			var year = availableYears[i];
			graphsData.data.push({
				year: year,
				mainCaption: selectedCountry,
				mainValue: dataPool[year][index][selectedCountry],
				secondaryCaption: eu28,
				secondaryValue: dataPool[year][index][eu28],
				linkUrl: app.router.getCountryUrlPlain(year, selectedCountry)
			});
		}
		graphsData.data.reverse();
		return graphsData;
	},
	calculateCountryDomainsDataPanels: function() {
		var selectedCountry = this.yearNavigator.getSelectedCountryKey(),
		    selectedYear = this.yearNavigator.getSelectedYear(),
		    eu28 = this.yearNavigator.getFirstCountryKey(),
		    availableYears = this.yearNavigator.getAvailableYears(),
		    result = [];
		for(var i=0; i<app.data.tree.length; i++) {
			var domain = app.data.tree[i];
			var model = new Backbone.Model();
			result.push(model);

			model.set('domain', domain.key);
			model.set('expanded', true);
			model.set('availableYears', availableYears);
			model.set('availableYearsReverse', _.clone(availableYears).reverse());
			model.set('selectedYear', selectedYear);
			var yearData = {};
			model.set('yearData', yearData);
			for(var j=0; j<availableYears.length; j++) {
				var year = availableYears[j];
				yearData[year] = {
					domainGraphData: calculateDomainGraphData(domain, year),
					subdomainsGraphData: [],
					variablesGraphData: [] // can host variables for multiple subdomains or variables for the 1 domain
				};
				if (domain.type==='main') {
					yearData[year].diff = app.data.utils.findDiff(year, this.yearNavigator.getPreviousYear(year), domain.key, selectedCountry);
				}
				if (domain.subdomains) {
					for (var k=0; k<domain.subdomains.length; k++) {
						yearData[year].subdomainsGraphData.push(calculateSubdomainGraphData(domain.subdomains[k], year));
						yearData[year].variablesGraphData.push(calculateVariableGraphsData(domain, domain.subdomains[k].variables, year));
					}
				} else {
					yearData[year].variablesGraphData.push(calculateVariableGraphsData(domain, domain.variables, year));
				}
			}
		}
		function calculateDomainGraphData(domain, year) {
			var dataPool = app.data.treedata[year][domain.key];
			if (!dataPool) return null;
			var graphData = _.extend(_.clone(domain), {
				mainValue: dataPool[selectedCountry]?dataPool[selectedCountry]:null,
				secondaryValue: dataPool[eu28]?dataPool[eu28]:null,
				secondaryCaption: dataPool[eu28]?eu28:null
			});
			if (domain.textValues && _.isFinite(graphData.mainValue)) {
				graphData.mainValueCaption = app.p.t('domain.' + domain.key + '.caption_' + graphData.mainValue);
				graphData.mainValueExplanation = app.p.t('domain.' + domain.key + '.explanation_' + graphData.mainValue);
			}
			if (domain.textValues && _.isFinite(graphData.secondaryValue)) {
				graphData.secondaryValueCaption = app.p.t('domain.' + domain.key + '.caption_' + graphData.secondaryValue);
				graphData.secondaryValueExplanation = app.p.t('domain.' + domain.key + '.explanation_' + graphData.secondaryValue);
			}
			return graphData;
		}
		function calculateSubdomainGraphData(subdomain, year) {
			var dataPool = app.data.treedata[year][subdomain.key];
			if (!dataPool) return null;
			return {
				mainValue: dataPool[selectedCountry]?dataPool[selectedCountry]:null,
				mainCaption: selectedCountry,
				secondaryValue: dataPool[eu28]?dataPool[eu28]:null,
				secondaryCaption: dataPool[eu28]?eu28:null,
				oneRow: selectedCountry===eu28,
				title: app.p.t('tree.' + subdomain.key),
				color: domain.color
			};
		}
		function calculateVariableGraphsData(domain, variables, year) {
			var dataPool = app.data.treedata[year],
			    graphsData = [];
			if (!variables) return [];
			for(var i=0; i<variables.length; i++) {
				var rows = [];
				addRowFor(variables[i], 'w', selectedCountry, true);
				addRowFor(variables[i], 'w', eu28, false);
				addRowFor(variables[i], 'm', selectedCountry, true);
				addRowFor(variables[i], 'm', eu28, false);
				if (rows.length===0) continue;
				graphsData.push({
					title: app.p.t('tree.' + variables[i].key),
					rows: rows,
					maxValue: getMaxValueFor(variables[i], ['w', 'm'])
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
						domain.maxValue,
						_.max(_.values(dataPool[variable.key + suffixes[i]]))
					));
				}
				return _.max(maxValues);
			}
			return graphsData;
		}
		return result;
	}
	
};


})(window.jQuery);

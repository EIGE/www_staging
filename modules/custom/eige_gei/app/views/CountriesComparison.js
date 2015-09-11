(function($) {
"use strict";

app.views.CountriesComparison = Backbone.View.extend({
	initialize: function(options) {
		this.controller = options.controller;
		this.years = _.pluck(options.countriesComparisonPanelsData, 'year');
		this.render();
		
		var countriesMultipleSelect = app.isMobile?
			new app.views.MultipleSelectDefault({model: options.countriesMultipleSelect}):
			new app.views.MultipleSelectEmulated({model: options.countriesMultipleSelect});
		this.registerChild(countriesMultipleSelect);
		this.$('header.view .controls .countries').append(countriesMultipleSelect.el);

		var domainsMultipleSelect = app.isMobile?
			new app.views.MultipleSelectDefault({model: options.domainsMultipleSelect}):
			new app.views.MultipleSelectEmulated({model: options.domainsMultipleSelect});
		this.registerChild(domainsMultipleSelect);
		this.$('header.view .controls .domains').append(domainsMultipleSelect.el);
		
		if (!app.isMobile) {
			this.$('header.view .controls .columns').append('&nbsp;'); // to make foundation grid work since MultipleSelectEmulated is absolute positioned
		}

		for(var i=0; i<options.countriesComparisonPanelsData.length; i++) {
			var countriesComparisonPanelsData = options.countriesComparisonPanelsData[i],
			    year = countriesComparisonPanelsData.year,
			    panels = countriesComparisonPanelsData.panels;
			for(var j=0; j<panels.length; j++) {
				var panel = new app.views.CountriesComparisonPanel({data: panels[j]});
				this.registerChild(panel);
				this.$('div.data div.year.year_' + year).append(panel.el);
			}
			
			var countriesComparisonPanelExporterButton = new app.views.GraphExporterButton({
				target: this.$('div.data div.year.year_' + year),
				filename: 'comparison-' + year + '-' + this.controller.getAllCountriesSummary('-')
			});
			this.registerChild(countriesComparisonPanelExporterButton);
			this.$('div.data div.year.year_' + year).append(countriesComparisonPanelExporterButton.el).addClass('exportable');
		}

		this.showPanelForYear(this.controller.defaultYear);
	},
	events: {
		'click .navigation .years a': 'yearClicked'
	},
	yearClicked: function(e) {
		e.preventDefault();
		this.showPanelForYear(e.currentTarget.getAttribute('data-year'));
	},
	showPanelForYear: function(year) {
		this.$('div.data div.year.year_' + year).show().siblings('div.year').hide();
		this.$('div.navigation ul.years li a[data-year=' + year + ']').parent().addClass('selected').siblings().removeClass('selected');
	},
	render: function() {
		this.$el.html(app.templates.CountriesComparison({
			countries: this.controller.countries,
			selectedCountriesSummary: this.controller.getSelectedCountriesSummary(),
			years: this.years
		}));
		return this;
	}
});


})(window.jQuery);

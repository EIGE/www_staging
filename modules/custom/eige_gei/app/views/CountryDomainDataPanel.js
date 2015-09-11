(function() {
"use strict";

app.views.CountryDomainDataPanel = Backbone.View.extend({
	initialize: function(options) {
		this.render();
		
		for (var i=0; i<this.model.get('availableYears').length; i++) {
			var year = this.model.get('availableYears')[i],
			    yearData = this.model.get('yearData')[year];
			if (!yearData) continue; // not possible but anyway
			if (yearData.domainGraphData) {
				var domainGraph = new app.views.SmallCyclicGraph({graphData: yearData.domainGraphData});
				this.registerChild(domainGraph);
				this.$('.year.year_' + year + ' .domain').append(domainGraph.el);
				domainGraph.finishAnimation();
			}
			for (var j=0; j<yearData.subdomainsGraphData.length; j++) {
				var subdomainGraph = new app.views.HorizontalBarGraph({graphData: yearData.subdomainsGraphData[j]});
				this.registerChild(subdomainGraph);
				this.$('section.data').append(subdomainGraph.el);
				this.$('.year.year_' + year + ' .subdomain').eq(j).append(subdomainGraph.el);
				subdomainGraph.finishAnimation();
			}
			for(var j=0; j<yearData.variablesGraphData.length; j++) {
				for(var k=0; k<yearData.variablesGraphData[j].length; k++) {
					var variablesGraph = new app.views.MultiRowHorizontalBarGraph({graphData: yearData.variablesGraphData[j][k]});
					this.registerChild(variablesGraph);
					this.$('.year.year_' + year + ' .variables').eq(j).append(variablesGraph.el);
					variablesGraph.finishAnimation();
				}
				if (yearData.variablesGraphData[j].length===0) {
					var noData = new app.views.NoData({domain: this.model.get('domain'), year: year});
					this.registerChild(noData);
					this.$('.year.year_' + year + ' .variables').eq(j).append(noData.el);
				}
			}
		}
		
		this.listenTo(this.model, 'change:expanded', this.expandedChanged);
		this.listenTo(this.model, 'change:selectedYear', this.selectedYearChanged);
		this.expandedInitialSetup();
		this.selectedYearChanged();
	},
	events: {
		'click header a': 'headerClicked',
		'click div.data ul.years a': 'yearClicked'
	},
	headerClicked: function(e) {
		e.preventDefault();
		this.model.set('expanded', !this.model.get('expanded'));
	},
	expandedInitialSetup: function() {
		this.$('header h3').css('margin-top', '0');
		this.$('div.data').css('margin-bottom', '0');
		if (this.model.get('expanded')) {
			this.$('div.data').show();
			this.$el.addClass('expanded');
		} else {
			this.$('div.data').hide();
			this.$el.addClass('collapsed');
		}
	},
	expandedChanged: function() {
		if (this.model.get('expanded')) {
			this.$('div.data').slideDown();
			this.$el.removeClass('collapsed').addClass('expanded');
		} else {
			this.$('div.data').slideUp();
			this.$el.removeClass('expanded').addClass('collapsed');
		}
	},
	yearClicked: function(e) {
		e.preventDefault();
		this.model.set('selectedYear', e.currentTarget.getAttribute('data-year'));
	},
	selectedYearChanged: function() {
		var year = this.model.get('selectedYear');
		this.$('div.data div.year.year_' + year).show().siblings('div.year').hide();
		this.$('ul.years li a[data-year=' + year + ']').parent().addClass('selected').siblings().removeClass('selected');
		this.$('h4').removeClass().addClass('diff_' + this.model.get('yearData')[year].diff);
	},
	tagName: 'div',
	className: 'countryDomainDataPanel',
	render: function() {
		this.$el.html(app.templates.CountryDomainDataPanel(this.model.attributes)).addClass('expandable domain_' + this.model.get('domain'));
		return this;
	}
});


})();

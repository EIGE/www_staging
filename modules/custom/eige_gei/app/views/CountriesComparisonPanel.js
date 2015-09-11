(function() {
"use strict";

app.views.CountriesComparisonPanel = Backbone.View.extend({
	initialize: function(options) {
		this.data = options.data;
		this.render();
		this.expandedInitialSetup();
		
		var $graph = this.$('.graph');
		
		if (this.data.panels && this.data.panels.length) {
			for(var i=0; i<this.data.panels.length; i++) {
				var panel = new app.views.CountriesComparisonPanel({data: this.data.panels[i]});
				this.registerChild(panel);
				$graph.append(panel.el);
			}
		}
	},
	events: {
		'click header h4 a': 'headerClicked'
	},
	headerClicked: function(e) {
		e.preventDefault();
		if (this.$header.find('a').get(0)!==e.target) return;
		this.data.expanded = !this.data.expanded;
		this.expandedChanged();
	},
	expandedInitialSetup: function() {
		this.$header = this.$('header');
		this.$expandable = this.$('div.graph');
		if (this.data.expanded) {
			this.$expandable.show();
			this.$el.addClass('expanded');
		} else {
			this.$expandable.hide();
			this.$el.addClass('collapsed');
		}
	},
	expandedChanged: function() {
		if (this.data.expanded) {
			this.$expandable.slideDown();
			this.$el.removeClass('collapsed').addClass('expanded');
		} else {
			this.$expandable.slideUp();
			this.$el.removeClass('expanded').addClass('collapsed');
		}
	},
	tagName: 'div',
	className: 'countriesComparisonPanel',
	render: function() {
		this.$el.html(app.templates.CountriesComparisonPanel(this.data))
			.addClass('domain domain_' + this.data.domain)
			.find('.svgPlaceholder').replaceWith(this.generateGraphHtml());
		return this;
	},
	generateGraphHtml: function() {
		var data = this.data,
		    svgWidth = 800,
		    barHeight = 35,
		    axisHeight = 28,
		    axisWidth = 10,
		    svgHeight = data.countries.length * barHeight + axisHeight,
		    countryWidth = 200,
		    maxBarWidth = svgWidth - countryWidth - axisWidth,
		    minValue = 1,
		    maxValue = data.maxValue,
		    elements = [];

		elements.push('<svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 ' + svgWidth + ' ' + svgHeight + '">');

		// x axis
		elements.push('<g class="axisX">');
		elements.push('<text class="min" x="' + countryWidth + '" y="' + svgHeight + '">' + _.escape(minValue) + '</text>');
		elements.push('<text class="max" x="' + svgWidth + '" y="' + svgHeight + '">' + _.escape(maxValue) + '</text>');
		elements.push('</g>');
		
		// y axis left
		elements.push('<g class="axisY">');
		elements.push('<line x1="' + (svgWidth - axisWidth/2) + '" y1="0" x2="' + (svgWidth - axisWidth/2) + '" y2="' + (svgHeight - axisHeight) + '"></line>');
		elements.push('</g>');
		
		// countries
		for(var i=0; i<data.countries.length; i++) {
			var country = data.countries[i],
			    y = barHeight * i + barHeight/2,
			    value = country.value,
			    barWidth = countryWidth + maxBarWidth * value / maxValue,
			    color = app.utils.shadeColor2(data.color, -1 * value/maxValue + 0.5),
			    valueClass = value/maxValue<0.2?'external':'internal';
			elements.push('<g class="country country_' + country.key + '">');
			elements.push('<line class="bar" x1="' + countryWidth + '" y1="' + y + '" x2="' + barWidth + '" y2="' + y + '" stroke="' + color + '" stroke-width="' + barHeight*0.975 + '"></line>');
			elements.push('<text class="caption" x="0" y="' + y + '">' + _.escape(app.p.t('countries.long.' + country.key)) + '</text>');
			elements.push('<text class="value ' + valueClass + '" x="' + barWidth + '" y="' + y + '">&#160;' + _.escape(value) + '&#160;</text>');
			elements.push('</g>');
		
		}
		
		elements.push('</svg>');
		return elements.join('\n');
	}
});


})();

(function() {
"use strict";

app.views.CountriesBarGraph = Backbone.View.extend({
	initialize: function(options) {
		this.data = options.graphData;
		this.render();
	},
	tagName: 'div',
	className: 'countriesBarGraph',
	events: {
		'click a.info': 'infoClick'
	},
	infoClick: function(e) {
		e.preventDefault();
		this.$info.fadeToggle(100);
	},
	render: function() {
		this.$el.html(app.templates.CountriesBarGraph(this.data))
			.find('.svgPlaceholder').replaceWith(this.generateGraphHtml());
		this.$('div.info').hide();
		this.$('svg g.country:not(.current) g.countryData').hide();
		this.$info = this.$('div.info');
		return this;
	},
	generateGraphHtml: function() {
		var data = this.data,
		    svgWidth = 200,
		    svgHeight = 140,
		    leftPadding = 15,
		    rightPadding = 4,
		    bottomPadding = 0,
		    valueHeight = 15,
		    countryCaptionHeight = 15,
		    barsRegionHeight = svgHeight - bottomPadding - countryCaptionHeight - valueHeight,
		    barsRegionWidth = svgWidth - leftPadding - rightPadding,
		    buttonsRegionWidth = svgWidth - leftPadding - rightPadding,
		    elements = [];

		elements.push('<svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 ' + svgWidth + ' ' + svgHeight + '">');
		
		// countries
		for(var i=0; i<data.countries.length; i++) {
			var country = data.countries[i],
			    width = barsRegionWidth/data.countries.length,
			    height = country.value / data.maxValue * barsRegionHeight,
			    color = app.utils.shadeColor2(data.color, (country.value-data.minValueForColor)/(data.maxValueForColor-data.minValueForColor)*-0.5+0.25), // shade from -0.25 to +0.25
			    centerX = leftPadding + width * i + width/2;

			// invisible button area, with line and country caption
			elements.push('<g class="country">');

			elements.push('<rect class="button" x="' + (centerX-width/2) + '" y1="0" width="' + width + '" height="' + svgHeight + '"></rect>');
			elements.push('<line class="value" x1="' + centerX + '" y1="' + (svgHeight - bottomPadding - countryCaptionHeight) + '" x2="' + centerX + '" y2="' + (svgHeight - bottomPadding - countryCaptionHeight - height) + '" style="stroke-width: ' + width + 'px; stroke: ' + color + '"></line>');
			elements.push('<text class="caption" transform="translate(' + (centerX + 1) + ' ' + (svgHeight - bottomPadding - countryCaptionHeight + 2) + ') rotate(-90)">' + _.escape(country.country) + '</text>');
			elements.push('<text class="value" transform="translate(' + (centerX + 1) + ' ' + (svgHeight - bottomPadding - countryCaptionHeight - height - 2) + ') rotate(-90)">' + _.escape(country.value) + '</text>');

			elements.push('</g>');
		}
		elements.push('<g class="axisY">');
		elements.push('<text x="' + (leftPadding*0.8) + '" y="' + valueHeight + '">' + _.escape(data.maxValue) + '</text>');
		elements.push('<text x="' + (leftPadding*0.8) + '" y="' + (barsRegionHeight + valueHeight) + '">1</text>');
		elements.push('</g>');

		// EU-28
		var height = data.firstCountryValue / data.maxValue * barsRegionHeight;
		elements.push('<line class="average" x1="' + leftPadding + '" y1="' + (svgHeight - countryCaptionHeight - bottomPadding - height) + '" x2="' + (svgWidth - rightPadding) + '" y2="' + (svgHeight - countryCaptionHeight - bottomPadding - height) + '"></line>');

		elements.push('</svg>');
		return elements.join('\n');
	}
});


})();

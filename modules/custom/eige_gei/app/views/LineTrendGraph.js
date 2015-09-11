(function($) {
"use strict";

app.views.LineTrendGraph = Backbone.View.extend({
	initialize: function(options) {
		this.data = options.graphData;
		this.render();
	},
	tagName: 'div',
	className: 'lineTrendGraph',
	events: {
		'mouseenter svg g.country:not(.current) g.countryButton': 'countryShow',
		'mouseleave svg g.country:not(.current) g.countryButton': 'countryHide',
		'click a.info': 'infoClick'
	},
	countryShow: function(e) {
		var $group = $(e.currentTarget).parents('g.country'),
		    $data = $group.find('g.countryData');
		$data.show();
	},
	countryHide: function(e) {
		var $group = $(e.currentTarget).parents('g.country'),
		    $data = $group.find('g.countryData');
		$data.fadeOut(100);
	},
	infoClick: function(e) {
		e.preventDefault();
		this.$info.fadeToggle(100);
	},
	render: function() {
		this.$el.html(app.templates.LineTrendGraph(this.data))
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
		    rightPadding = 10,
		    bottomPadding = 5,
		    topPadding = 5,
		    countryButtonHeight = 10,
		    countryCaptionHeight = 20,
		    dotSize = 3,
		    yearsHeight = 15,
		    linesCaptionWidth = 25,
		    linesRegionHeight = svgHeight - bottomPadding - countryButtonHeight - countryCaptionHeight - yearsHeight - topPadding,
		    linesRegionWidth = svgWidth - leftPadding - rightPadding - linesCaptionWidth,
		    buttonsRegionWidth = svgWidth - leftPadding - rightPadding,
		    elements = [];

		elements.push('<svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 ' + svgWidth + ' ' + svgHeight + '">');
		
		// countries
		for(var i=0; i<data.countries.length; i++) {
			var country = data.countries[i],
			    width = buttonsRegionWidth/data.countries.length,
			    centerX = leftPadding + width * i + width/2;

			// invisible button area, with line and country caption
			elements.push('<g class="country' + (country.country===data.country?' current':'') + '">');

			elements.push('<g class="countryButton">');
			elements.push('<rect x="' + (centerX-width/2) + '" y1="0" width="' + width + '" height="' + svgHeight + '"></rect>');
			elements.push('<line x1="' + centerX + '" y1="' + (svgHeight - bottomPadding - countryButtonHeight) + '" x2="' + centerX + '" y2="' + (svgHeight - bottomPadding) + '"></line>');
			elements.push('<text transform="translate(' + centerX + ' ' + (svgHeight - bottomPadding - countryButtonHeight - 2) + ') rotate(-90)">' + _.escape(country.country) + '</text>');
			elements.push('</g>');

			// line chart and country caption
			var years = _.keys(country.values),
			    maxYear = _.max(years),
			    minYear = _.min(years),
			    yearsRange = maxYear - minYear,
			    centersX = [],
			    centersY = [];
			for(var j=0; j<years.length; j++) {
				var year = years[j];
				centersX.push(linesRegionWidth / yearsRange * (year - minYear) + dotSize / 2 + leftPadding);
				centersY.push(country.values[year]===null?null:topPadding + linesRegionHeight - linesRegionHeight / data.maxValue * country.values[year]);
			}
			elements.push('<g class="countryData">');
			var lastCenterY = null;
			for(var j=0; j<years.length; j++) {
				if (centersY[j]===null) continue;
				lastCenterY = centersY[j];
				elements.push('<circle class="dot" cx="' + centersX[j] + '" cy="' + centersY[j] + '" r="' + dotSize + '"></circle>');
				if (j===0 || centersY[j-1]===null) continue;
				elements.push('<line class="connector" x1="' + centersX[j-1] + '" y1="' + centersY[j-1] + '" x2="' + centersX[j] + '" y2="' + centersY[j] + '"></line>');
			}
			if (country.country!==data.country) {
				elements.push('<text class="caption" x="' + (svgWidth - linesCaptionWidth) + '" y="' + lastCenterY + '">' + _.escape(country.country) + '</text>');
			}
			elements.push('</g>');
			
			elements.push('</g>');
		}
		elements.push('<g class="axisX">');
		for(var j=0; j<years.length; j++) {
			var year = years[j];
			elements.push('<text class="year" x="' + centersX[j] + '" y="' + (svgHeight - bottomPadding - countryButtonHeight - countryCaptionHeight - yearsHeight*0.5) + '">' + _.escape(year) + '</text>');
		}
		elements.push('</g>');
		elements.push('<g class="axisY">');
		elements.push('<text x="' + (leftPadding*0.6) + '" y="' + topPadding + '">' + _.escape(data.maxValue) + '</text>');
		elements.push('<text x="' + (leftPadding*0.6) + '" y="' + (svgHeight - bottomPadding - countryButtonHeight - countryCaptionHeight - yearsHeight) + '">1</text>');
		elements.push('</g>');
		elements.push('</svg>');
		return elements.join('\n');
	}
});


})(window.jQuery);

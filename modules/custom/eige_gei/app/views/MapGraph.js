(function($) {
"use strict";

app.views.MapGraph = Backbone.View.extend({
	initialize: function(options) {
		this.graphData = options.graphData;
		this.render();
	},
	tagName: 'div',
	className: 'mapGraph',
	events: {
		'mouseenter g.country.withData': 'mouseEnterCountry',
		'mousemove g.country.withData': 'mouseMoveCountry',
		'mouseleave g.country.withData': 'mouseLeaveCountry'
	},
	mouseEnterCountry: function(e) {
		var country = e.currentTarget.getAttribute('data:country'),
		    countryCaption = app.p.t('countries.long.' + country),
		    countryData = _.findWhere(this.graphData.countries, {code: country});
		var smallCyclicGraph = new app.views.SmallCyclicGraph({graphData: {
			mainValue: countryData.value,
			secondaryValue: this.graphData.euAverageValue,
			secondaryCaption: this.graphData.euAverageCaption,
			maxValue: this.graphData.maxValue,
			color: this.graphData.color
		}});
		smallCyclicGraph.finishAnimation().close(); // we don't need this any more, just its html
		Backbone.trigger('Tooltip:show', {top: e.clientY, left: e.clientX, width: '150px', html: app.templates.TooltipSimpleTemplate({title: countryCaption, html: smallCyclicGraph.el.outerHTML})});
	},
	mouseMoveCountry: function(e) {
		Backbone.trigger('Tooltip:pointTo', {top: e.clientY, left: e.clientX});
	},
	mouseLeaveCountry: function(e) {
		Backbone.trigger('Tooltip:hide');
	},	
	render: function() {
		this.$el.html(app.templates.MapGraph())
			.find('.svgPlaceholder').replaceWith(this.generateGraphHtml());
		return this;
	},
	generateGraphHtml: function() {
		var scale = 1,
		    mapDataWidth = 996,
		    mapDataHeight = 740,
		    svgWidth = mapDataWidth*scale,
		    svgHeight = mapDataHeight*scale,
		    axisPadding = 10,
		    axisWidth = 10,
		    axisHeight = svgHeight - axisPadding * 2,
		    data = this.graphData,
		    axisMin = Number(_.min(_.pluck(data.countries, 'value'), function(stringNumber) { return Number(stringNumber); })),
		    axisMax = Number(_.max(_.pluck(data.countries, 'value'), function(stringNumber) { return Number(stringNumber); })),
		    lines = 5,
		    elements = [];
		function translate(point) {
			return [svgWidth/mapDataWidth*point[0], svgHeight/mapDataHeight*point[1]];
		}
		function getColor(value) {
			return app.utils.shadeColor2(data.color, (value-axisMin)/(axisMax-axisMin)*-0.5+0.25); // shade from -0.25 to +0.25
		}
		
		elements.push('<svg xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:data="http://extra.data/" viewBox="0 0 ' + svgWidth + ' ' + svgHeight + '">');
		
		for(var i=0; i<app.data.map.length; i++) {
			var country = app.data.map[i],
			    countryData = _.findWhere(data.countries, {code: country.code});
			
			if (countryData && countryData.value) {
				elements.push('<a xlink:href="' + _.escape(countryData.link) + '">');
				elements.push('<g class="country country-' + countryData.code + ' withData' + (country.code===data.selectedCountry?' selected':'') + '" data:country="' + country.code + '" style="fill: ' + getColor(countryData.value) + '" stroke="' + getColor(countryData.value) + '">');
			} else {
				elements.push('<g class="country country-' + country.code + '">');
			}

			for(var j=0; j<country.shapes.length; j++) {
				var shape = country.shapes[j];
				
				elements.push('<polygon points="' + _.map(shape, function(point) {
					return translate(point)
				}).join(' ') + '" />');
			}
			if (country.center) {
				var center = translate(country.center.point);
				elements.push('<text x="' + center[0] + '" y="' + center[1] + '">' + _.escape(country.code) + '</text>');
			}
			elements.push('</g>');
			if (countryData && countryData.value) {
				elements.push('</a>');
			}
		}
		
		for(var i=0; i<lines; i++) {
			elements.push('<rect class="axis" x="' + (axisPadding + 0.5) + '" y="' + (axisPadding + axisHeight - (axisHeight/lines*(i+1)) + 0.5) + '" width="' + axisWidth + '" height="' + (axisHeight/lines) + '" style="fill: ' + getColor((axisMax-axisMin)/lines*i+axisMin) + '" />');
		}
		for(var i=0; i<lines+1; i++) {
			elements.push('<text class="axis" x="' + (axisPadding + axisWidth + 5) + '" y="' + (5 + axisPadding + axisHeight - (axisHeight/lines*i)) + '">' + ((axisMax-axisMin)/lines*i+axisMin).toFixed(0) + '</text>');
		}
		elements.push('</svg>');
		return elements.join('\n');
	}
});


})(window.jQuery);

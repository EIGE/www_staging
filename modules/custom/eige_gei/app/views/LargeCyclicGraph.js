(function() {
"use strict";

app.views.LargeCyclicGraph = Backbone.View.extend({
	initialize: function(options) {
		this.data = options.graphData;
		this.render();
	},
	tagName: 'div',
	className: 'largeCyclicGraph',
	render: function() {
		this.$el.html(this.generateGraphHtml());
		return this;
	},
	generateGraphHtml: function() {
		var data = this.data,
		    svgWidth = 500, svgHeight = svgWidth,
		    halfSize = svgWidth / 2,
		    center = svgWidth / 2,
		    border = 5,
		    graphRadius = svgWidth / 2 - border,
		    countryStripeHeight = 20,
		    scaleRadius = graphRadius - countryStripeHeight,
		    centerSize = 50,
		    scaleSize = graphRadius - countryStripeHeight - centerSize,
		    circles = 16,
		    countriesLength = data.countries.length,
		    countryRotation = 360 / countriesLength,
		    halfCountryWidth = Math.tan(Math.PI/countriesLength)*halfSize, // trigonometry, baby...
		    ballSize = 3,
		    graphId = 'gei-graph-' + this.cid,
		    elements = [];

		elements.push('<svg xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" viewBox="0 0 ' + svgWidth + ' ' + svgHeight + '">');
		elements.push('<defs>');
		elements.push('<clipPath id="' + graphId + '-outer-clip"><circle cx="0" cy="' + center + '" r="' + graphRadius + '" /></clipPath>');
		elements.push('<clipPath id="' + graphId + '-inner-clip"><circle cx="0" cy="' + center + '" r="' + scaleRadius + '" /></clipPath>');
		elements.push('</defs>');
		
		// background
		elements.push('<circle cx="' + center + '" cy="' + center + '" r="' + graphRadius + '" class="header" />');
		elements.push('<circle cx="' + center + '" cy="' + center + '" r="' + scaleRadius + '" class="body" />');
		for(var i = 1; i<=circles; i++) {
			var radius = scaleSize/circles * i + centerSize;
			elements.push('<circle cx="' + center + '" cy="' + center + '" r="' + radius + '" class="scale" />');
		}
		
		// countries
		for(var i = 0; i < data.countries.length; i++) {
			var country = data.countries[i],
			    rotation = i*countryRotation,
			    flip = rotation > 90 && rotation < 270,
			    scaleY = center - centerSize - (country.value * scaleSize / data.maxValue),
			    clipY = country.value * scaleSize / data.maxValue + centerSize,
			    valueOffsetY = country.value>data.maxValue*.9?13:-13;
			elements.push('<a xlink:href="' + (country.selected?country.outerLink:country.innerLink) + '">');
			elements.push('<g id="slice-' + country.key + '" clip-path="url(#' + graphId + '-outer-clip)" transform="rotate(' + rotation + ' 250 250) translate(250 0)" class="slice ' + country.type + (country.selected?' selected':'') + '">');
			elements.push('<path clip-path="url(#' + graphId + '-inner-clip)" d="M -' + halfCountryWidth + ' 0 L ' + halfCountryWidth + ' 0 L 0 ' + center + ' Z" class="slice ' + country.type + (i%2?' zebra':'') + '"/>');
			elements.push('<text transform="translate(0 ' + (flip?border+countryStripeHeight*1.4:0) + ') rotate(' + (flip?180:0) + ') translate(0 ' + (border+countryStripeHeight*0.6) + ')" font-size="10px">' + _.escape(country.shortTitle) + '</text>');
			if (country.selected) {
				elements.push('<path clip-path="url(#' + graphId + '-inner-clip)" d="M -' + halfCountryWidth + ' 0 L ' + halfCountryWidth + ' 0 L 0 ' + center + ' Z" class="selected background" style="fill: ' + app.utils.shadeColor2(data.color, +0.2) + '"></path>');
				elements.push('<path clip-path="url(#' + graphId + '-value-clip)" d="M -' + halfCountryWidth + ' 0 L ' + halfCountryWidth + ' 0 L 0 ' + center + ' Z" class="selected value" style="fill: ' + data.color + '"></path>');
				elements.push('<defs>');
				elements.push('<clipPath id="' + graphId + '-value-clip"><circle cx="0" cy="' + center + '" r="' + clipY + '" /></clipPath>');
				elements.push('</defs>');
			}
			if (country.value>0) {
				elements.push('<circle cx="0" cy="' + scaleY + '" r="' + ballSize + '" style="fill: ' + data.color + '"></circle>');
				if (country.valueCaption) {
					// no text value shown
				} else {
					elements.push('<text class="value" font-size="9px" transform="translate(0 ' + (scaleY+valueOffsetY) + ') rotate(' + -rotation + ')">' + country.value + '</text>');
				}
			}
			elements.push('</g>');
			elements.push('</a>');
		}
		
		// selected center
		var selected = _.findWhere(data.countries, {selected: true});
		if (selected.outerLink) elements.push('<a xlink:href="' + selected.outerLink + '">');
		elements.push('<circle cx="' + center + '" cy="' + center + '" r="' + centerSize + '" class="center" />');
		if (selected.value!==null) {
			if (selected.valueCaption) {
				elements.push('<text x="' + center + '" y="' +  center + '" dy="-.5em" class="selected valueCaption" font-size="0.8em"><title>' + _.escape(selected.valueExplanation) + '</title>' + _.escape(selected.valueCaption) + '</text>');
			} else {
				elements.push('<text x="' + center + '" y="' +  center + '" dy="-.5em" class="selected value" font-size="1.7em">' + _.escape(selected.value) + '</text>');
			}
		}
		var titleTokens = selected.title.split(' ');
		for(var i = 0; i<titleTokens.length; i++) {
			var offset = selected.value!==null?1:0;
			elements.push('<text x="' + center + '" y="' +  center + '" dy="' + (-0.5 + i+offset) + 'em" class="selected country tokens' + titleTokens.length + ' token' + (i+1) + '" font-size="1em">' + _.escape(titleTokens[i]) + '</text>');
		}
		if (selected.outerLink) elements.push('</a>');
		elements.push('</svg>');
		return elements.join('\n');
	}
});


})();

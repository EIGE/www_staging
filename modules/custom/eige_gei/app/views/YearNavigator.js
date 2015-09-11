(function() {
"use strict";

app.views.YearNavigator = Backbone.View.extend({
	initialize: function() {
		this.render();
	},
	tagName: 'div',
	className: 'yearNavigatorGraph',
	render: function() {
		console.log('rendering year navigator');
		this.$el.html(this.generateGraphHtml());
		return this;
	},
	generateGraphHtml: function() {
		var model = this.model,
		    data = model.getGraphData(),
		    svgWidth = 400,
		    svgHeight = 135,
		    countryLabelRegionWidth = 45,
		    selectedRegionHeight = 5,
		    yearRegionHeight = 20,
		    valuesPadding = 10,
		    ballsRegionHeight = svgHeight - yearRegionHeight - selectedRegionHeight - valuesPadding,
		    ballsRegionWidth = svgWidth - countryLabelRegionWidth,
		    ballRegionWidth = 60,
		    largeBallDiameter = 25,
		    arcWidth = 5,
		    smallBallDiameter = 10,
		    horizontalCenters = [],
		    verticalCenters = [],
		    elements = [],
		    availableYears = model.getAvailableYears();
		
		elements.push('<svg xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" viewBox="0 0 ' + svgWidth + ' ' + svgHeight + '">');

		// label
		elements.push('<text class="country" x="' + countryLabelRegionWidth/2 + '" y="' + svgHeight/2 + '">' + _.escape(data.country) + '</text>');

		// calculation of horizontal centers of each navigator "button" (group of bullet, year, selected tab)
		var horizontalCentersRange = ballsRegionWidth - ballRegionWidth;
		var yearsRange = model.getMaxYear() - model.getMinYear();
		var minYear = model.getMinYear();
		for(var i=0; i<availableYears.length; i++) {
			var year = availableYears[i];
			horizontalCenters.push(horizontalCentersRange / yearsRange * (year - minYear) + ballRegionWidth / 2 + countryLabelRegionWidth);
		}
		// calculation of vertical centers of each navigator "button" (bullet)
		var verticalCentersRange = ballsRegionHeight - largeBallDiameter * 2;
		var values = _.values(data.mainValues);
		var valuesRange = _.max(values) - _.min(values);
		var minValue = _.min(values);
		for(var i=0; i<availableYears.length; i++) {
			var value = values[i];
			if (valuesRange>0) {
				verticalCenters.push(ballsRegionHeight - verticalCentersRange / valuesRange * (value - minValue) - largeBallDiameter + valuesPadding/2);
			} else {
				verticalCenters.push(ballsRegionHeight/2);
			}
		}
		
		// connecting lines outside (behind) buttons
		for(var i=1; i<availableYears.length; i++) {
			elements.push('<line class="connector" x1="' + horizontalCenters[i-1] + '" y1="' + verticalCenters[i-1] + '" x2="' + horizontalCenters[i] + '" y2="' + verticalCenters[i] + '"></line>');
		}

		// clickable areas
		for(var i=0; i<availableYears.length; i++) {
			var year = availableYears[i],
			    horizontalCenter = horizontalCenters[i],
			    verticalCenter = verticalCenters[i],
			    value = values[i];
			
			elements.push('<a xlink:href="' + model.getUrlForYear(year) + '">');
			if (value) elements.push('<title>' + _.escape(year + ': ' + data.country + ' ' + value) + '</title>');
			elements.push('<g class="button' + (model.isSelectedYear(year)?' selected':'') + '">');
			
			// selected area
			if (model.isSelectedYear(year)) {
				elements.push('<circle class="dot" cx="' + horizontalCenter + '" cy="' + verticalCenter + '" r="' + largeBallDiameter + '" style="fill: ' + app.utils.shadeColor2(data.color, 0.3) + '"></circle>');
				if (value) elements.push('<text class="value" x="' + horizontalCenter + '" y="' + verticalCenter + '">' + _.escape(values[i]) + '</text>');
				if (value) elements.push('<path class="value" stroke-width="' + arcWidth + '" d="' + app.utils.describeSvgArc(horizontalCenter, verticalCenter, largeBallDiameter - arcWidth/2, 0, Math.min(359.99, values[i]*360/data.maxValue)) + '" style="stroke: ' + app.utils.shadeColor2(data.color, -0.2) + '"></path>');
			} else {
				elements.push('<circle class="dot" cx="' + horizontalCenter + '" cy="' + verticalCenter + '" r="' + smallBallDiameter + '" style="fill: ' + app.utils.shadeColor2(data.color, 0.3) + '"></circle>');
			}
			elements.push('<rect class="button" x="' + (horizontalCenter - ballRegionWidth/2) + '" y="0" width="' + ballRegionWidth + '" height="' + svgHeight + '"></rect>');
			elements.push('<text class="year" x="' + horizontalCenter + '" y="' + (ballsRegionHeight + valuesPadding + yearRegionHeight / 2) + '">' + _.escape(year) + '</text>');
			elements.push('<rect class="tab" x="' + (horizontalCenter - ballRegionWidth/2) + '" y="' + (svgHeight - selectedRegionHeight) + '" width="' + ballRegionWidth + '" height="' + selectedRegionHeight + '"></rect>');
			
			elements.push('</g>');
			elements.push('</a>');
		}

		elements.push('</svg>');
		return elements.join('\n');
	}	
});


})();


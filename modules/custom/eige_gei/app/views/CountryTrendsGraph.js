(function() {
"use strict";

app.views.CountryTrendsGraph = Backbone.View.extend({
	initialize: function(options) {
		this.data = options.graphData;
		this.filter = options.filter;
		this.listenTo(this.filter, 'change', this.updateFilter);
		this.render();
		this.updateFilter();
	},
	tagName: 'div',
	className: 'countryTrendsGraph',
	events: {
		'click ul.filters a': 'click',
		'mouseenter circle.dot': 'mouseEnterDot',
		'mousemove circle.dot': 'mouseMoveDot',
		'mouseleave circle.dot': 'mouseLeaveDot'
	},
	click: function(e) {
		e.preventDefault();
		this.filter.toggle(e.currentTarget.hash.substr(1));
	},
	mouseEnterDot: function(e) {
		var year = e.currentTarget.getAttribute('data:year'),
		    trend = e.currentTarget.getAttribute('data:trend'),
		    trendCaption = _.findWhere(app.data.tree, {key: trend})?app.p.t('tree.' + trend):app.p.t('CountryTrendsGraph.' + trend),
		    trendLineData = _.findWhere(this.data, {key: trend});
		var smallCyclicGraph = new app.views.SmallCyclicGraph({graphData: {
			mainValue: trendLineData.countryData[year],
			secondaryValue: trendLineData.euAverageData[year],
			secondaryCaption: trendLineData.euAverageCountry,
			maxValue: trendLineData.maxValue,
			color: trendLineData.color
		}});
		smallCyclicGraph.finishAnimation().close(); // we don't need this any more, just its html
		Backbone.trigger('Tooltip:show', {top: e.clientY, left: e.clientX, width: '160px', html: app.templates.TooltipSimpleTemplate({title: trendCaption, year: year, html: smallCyclicGraph.el.outerHTML})});
	},
	mouseMoveDot: function(e) {
		Backbone.trigger('Tooltip:pointTo', {top: e.clientY, left: e.clientX});
	},
	mouseLeaveDot: function(e) {
		Backbone.trigger('Tooltip:hide');
	},
	updateFilter: function() {
		console.log('updating filters');
		var that = this;
		_.each(this.filter.keys(), function(key) {
			if (_.isBoolean(that.filter.get(key))) {
				that.$('ul.filters li.' + key).toggleClass('selected', that.filter.get(key));
				that.$('svg g.trend.' + key).toggle(that.filter.get(key));
			}
		});
	},
	render: function() {
		this.$el.html(app.templates.CountryTrendsGraph({filter: this.filter}))
			.find('.svgPlaceholder').replaceWith(this.generateGraphHtml());
		return this;
	},
	generateGraphHtml: function() {
		var data = this.data,
		    svgWidth = 750,
		    svgHeight = 400,
		    leftPadding = 75,
		    rightPadding = 75,
		    bottomPadding = 45,
		    topPadding = 15,
		    dotSize = 7,
		    lines = 5,
		    yearsHeight = 20,
		    linesRegionHeight = svgHeight - bottomPadding - topPadding,
		    linesRegionWidth = svgWidth - leftPadding - rightPadding,
		    elements = [];

		elements.push('<svg xmlns="http://www.w3.org/2000/svg" xmlns:data="http://extra.data/" viewBox="0 0 ' + svgWidth + ' ' + svgHeight + '">');

		var years = _.keys(data[0].countryData),
		    maxYear = _.max(years),
		    minYear = _.min(years),
		    yearsRange = maxYear - minYear,
		    centersX = [];
		
		for(var i=0; i<years.length; i++) {
			var year = years[i];
			centersX.push(linesRegionWidth / yearsRange * (year - minYear) + leftPadding);
		}
		
		// x axis
		elements.push('<g class="axisX">');
		for(var i=0; i<years.length; i++) {
			var year = years[i];
			elements.push('<text x="' + centersX[i] + '" y="' + (svgHeight - bottomPadding/2) + '">' + _.escape(year) + '</text>');
		}
		elements.push('</g>');
		
		// y axis left
		elements.push('<g class="axisY">');
		for(var i=0; i<=lines; i++) {
			var y = svgHeight - bottomPadding - i*(linesRegionHeight/lines);
			elements.push('<line x1="' + (leftPadding*0.8) + '" y1="' + y + '" x2="' + (svgWidth - rightPadding/2) + '" y2="' + y + '"></line>');
		}
		elements.push('<text x="' + (leftPadding*0.5) + '" y="' + (svgHeight - bottomPadding) + '">1</text>');
		elements.push('<text x="' + (leftPadding*0.5) + '" y="' + (svgHeight - bottomPadding - linesRegionHeight) + '">' + _.escape(data[0].maxValue) + '</text>');
		elements.push('</g>');
				
		// lines
		for(var i=0; i<data.length; i++) {
			var dots = data[i];
		
			elements.push('<g class="trend ' + dots.key + '">');
			for(var j=0; j<years.length; j++) {
				var value = dots.countryData[years[j]],
				    previousY = y,
				    y = value===null?null:svgHeight - bottomPadding - (linesRegionHeight/dots.maxValue*value);
				if (value===null) continue;
				elements.push('<circle class="dot" cx="' + centersX[j] + '" cy="' + y + '" r="' + dotSize + '" data:year="' + years[j] + '" data:trend="' + dots.key + '"></circle>');
				if (j===0 || previousY===null) continue;
				elements.push('<line class="connector" x1="' + (centersX[j-1] + dotSize) + '" y1="' + previousY + '" x2="' + (centersX[j] - dotSize) + '" y2="' + y + '"></line>'); // we make the connecting line shorter according to the dotsize in order for the dot to correctly and fully hover (i.e not trigger mouseleave while on the dot over a connector line)
			}
			elements.push('</g>');
			
		}
		
		elements.push('</svg>');
		return elements.join('\n');
	}
});


})();

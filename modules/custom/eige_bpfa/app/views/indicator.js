(function($) {
"use strict";

function Controller(view) {
	return {
		chartTypes: ['map', 'table', 'bar', 'column'],
		chartTypesWithFilters: ['map', 'bar', 'column'],
		processDataAndRenderContent: function() {
			if (_.contains(this.chartTypesWithFilters, this.chartType)) {
				this.handleFilter();
			}
			view.processDataAndRenderContent(this.area, this.indicator, this.report, this.chartType, this.chartTypes, this.filters, this.filterKey);
		},
		handleFilter: function() {
			console.log('filtering');
			if (!this.report) return;
			
			var filterKeyTokens = (this.filterKey||'').split('-');

			this.filters = [];
			var headers = this.report.get('headers').clone();

			// remove countries
			headers.remove(headers.findWhere({'value': 'Countries'}));

			// periods
			var periods = headers.filter(function(header) {
				return header.isNumeric();
			});
			headers.remove(periods);
			var periodFilterValues = [];
			_.each(periods, function(period, index) {
				periodFilterValues.push(new app.models.DataFilterValue({title: period.get('value'), index: index}));
			});
			this.filters.push(new app.models.DataFilterGroup({title: app.p.t('report.filters.period'), values: periodFilterValues, selected: filterKeyTokens[0]||0}));

			// remaining filters
			var that = this;
			headers.each(function(header, headerIndex) {
				var filterValues = [];
				var uniqueReportValues = _.uniq(that.report.get('data').pluck(header.get('value')));
				_.each(uniqueReportValues, function(value, index) {
					filterValues.push(new app.models.DataFilterValue({title: value, index: index}));
				});
				that.filters.push(new app.models.DataFilterGroup({
					title: header.get('value'),
					values: filterValues,
					selected: filterKeyTokens[headerIndex+1]||0
				}));
			});
			
			// keep track of selected filters
			var selectedFilterIndexes = [];
			_.each(this.filters, function(filterGroup, index) {
				selectedFilterIndexes.push(filterGroup.get('selected'));
			});

			// set filter urls
			_.each(this.filters, function(filterGroup, index) {
				_.each(filterGroup.get('values'), function(filterValue) {
					var filterUrlPart = selectedFilterIndexes.slice(); // clone
					filterUrlPart[index] = filterValue.get('index');
					filterValue.set('url', app.root + that.area.getUrlPart() + that.indicator.getUrlPart() + that.report.getUrlPart() + '/' + that.chartType + '/filter/' + filterUrlPart.join('-'));
				});
			});
			
			// collect filter criteria from filters to apply on collection
			var dataFilterObject = {};
			_.each(this.filters, function(filterGroup, index) {
				dataFilterObject[filterGroup.get('title')] = filterGroup.get('values')[filterGroup.get('selected')].get('title');
			});
			
			this.report.filterFor(dataFilterObject);
		},
		loadContentAndRender: function(areaId, indicatorId, reportId, chartType, filterKey) {
			var previousChartType = this.chartType;
			this.chartType = this.chartTypes.indexOf(chartType)>=0?chartType:this.chartTypes[0]; // default table for no or bad chart type
			this.changedChartType = previousChartType!==this.chartType;
			this.filterKey = filterKey;

			if (this.area && this.area.id===areaId &&
			    this.indicator && this.indicator.id===indicatorId &&
			    this.report && this.report.id===reportId) {
				this.processDataAndRenderContent();
				return;
			}
			
			this.area = view.areas.get(areaId);
			if (!this.area) return; // bad url
			
			this.indicator = this.area.get('indicators').get(Number(indicatorId));
			if (!this.indicator) return; // bad url, do nothing
			
			var that = this;
			this.indicator.fetch({
				success: function() {
					that.report = that.indicator.get('reports').get(reportId) || that.indicator.get('reports').at(0); // get selected report or first report
					if (!that.report) {
						that.processDataAndRenderContent();
					} else {
						that.report.fetch({
							success: function() {
								that.processDataAndRenderContent();
							}
						});
					}
				}
			});
		}
	}
}

app.views.Indicator = Backbone.View.extend({
	template: _.template(document.getElementById("template-indicator").innerHTML),
	templateFilters: _.template(document.getElementById("template-indicator-filters").innerHTML),
	templateTable: _.template(document.getElementById("template-indicator-table").innerHTML),
	templateMap: _.template(document.getElementById("template-indicator-map").innerHTML),
	templateBar: _.template(document.getElementById("template-indicator-bar").innerHTML),
	templateColumn: _.template(document.getElementById("template-indicator-column").innerHTML),
	initialize: function(options) {
		console.log('initializing indicator');
		this.breadcrumb = options.breadcrumb;
		this.areas = options.areas;
		this.controller = new Controller(this);
	},
	events: {
		'click #bpfa-filters a.label': 'labelClick',
		'click #bpfa-reports h3 a': 'reportNavigationClick'
	},
	labelClick: function(e) {
		e.preventDefault();
		this.toggleFilter($(e.currentTarget).parent('.bpfa-filter'));
	},
	toggleFilter: function(filterElement) {
		var $allOtherFilters = $(filterElement).siblings('.bpfa-filter');
		$allOtherFilters.each(function() {
			var $filterLabel = $(this).find('a.label');
			var $filterValues = $(this).find('ul');
			$filterLabel.removeClass('expanded').addClass('collapsed');
			$filterValues.hide();
		});
		var $filterLabel = $(filterElement).find('a.label');
		var $filterValues = $(filterElement).find('ul');
		$filterLabel.toggleClass('collapsed').toggleClass('expanded');
		$filterValues.slideToggle(200);
	},
	reportNavigationClick: function(e) {
		e.preventDefault();
		toggleReportLinks($(e.currentTarget));
		function toggleReportLinks($reportLink) {
			var $reports = $reportLink.parent().next('ul');
			$reportLink.parent().toggleClass('collapsed').toggleClass('expanded');
			$reports.slideToggle(200);
		}
	},
	processDataAndRenderContent: function(area, indicator, report, chartType, chartTypes, filters, filterKey) {
		console.log('rendering area');
		Backbone.trigger('title', {title: area.get('title'), subtitle: indicator.get('title')});

		this.breadcrumb
			.clear()
			.setElementAt(0, {url: app.root, title: app.p.t('index.breadcrumb')})
			.setElementAt(1, {url: app.root + area.getUrlPart(), title: area.get('title')})
			.done();

		this.$el.html(this.template({
			area: area,
			indicator: indicator,
			report: report,
			selectedChartType: chartType,
			chartTypes: chartTypes,
			filters: filters,
			filterKey: filterKey,
			templateFilters: this.templateFilters,
			templateTable: this.templateTable,
			templateMap: this.templateMap,
			templateBar: this.templateBar,
			templateColumn: this.templateColumn
		}));
		// make all content links external
		this.$('.content a').each(function() {
			$(this).attr('target', '_blank').addClass('external');
		});
		this['rendered' + chartType.charAt(0).toUpperCase() + chartType.slice(1)]();
		Backbone.trigger('view:rendered');
		return this;
	},
	renderedTable: function() {
		groupTable(this.$('table tbody tr'), 'td:not(.number)');
		
		function groupTable($rows, tdSelector) {
			var $rowSpans = [];
			$rows.each(function(rowIndex, row) {
				$(row).find('td').each(function(cellIndex, td) {
					var $td = $(td);
					$(td).addClass('row-' + rowIndex); // marker class for later usage
					
					if (!$td.is(tdSelector)) return true;
					
					if ($rowSpans[cellIndex]==null) {
						$rowSpans[cellIndex] = $td;
						return true; // continue
					}
					if ($td.text()==$rowSpans[cellIndex].text()) {
						if (!$rowSpans[cellIndex].is('[rowspan]')) {
							$rowSpans[cellIndex].attr('rowspan', '2')
								.addClass('row-' + rowIndex); // marker class for later usage
						} else {
							$rowSpans[cellIndex].attr('rowspan', Number($rowSpans[cellIndex].attr('rowspan')) + 1)
								.addClass('row-' + rowIndex); // marker class for later usage
						}
						$td.remove();
					} else {
						$rowSpans[cellIndex] = $td;
					}
				});
			});
		}
		
		var previousTd = null;
		this.$('table tbody').on('mouseover', 'td', function(e) {
			var td = e.target;
			applyHoverStyle(findTdsForTarget(td));
			previousTd = td;
		});
		this.$('table tbody').on('mouseout', 'td', function(e) {
			var td = e.target;
			removeHoverStyle(findTdsForTarget(td));
		});
		var that = this;
		function findTdsForTarget(td) {
			var classes = (td.getAttribute('class')||'').split(' ');
			var targetClasses = [];
			// use marker class for discovering related tds
			for(var i = 0; i<classes.length; i++) {
				if (classes[i].match(/^row\-/)) targetClasses.push(classes[i]);
			}
			if (targetClasses.length==0) return [];
			var selector = 'table tbody td.' + targetClasses.join(', table tbody td.');
			return that.$(selector);
		}
		function applyHoverStyle($elems) {
			$elems.addClass('hover');
		}
		function removeHoverStyle($elems) {
			$elems.removeClass('hover');
		}
		
		this.$('table').stickyTableHeaders();

	},
	renderedMap: function() {
		var svgContainer = this.$('.svg-container')[0],
		    svgContent = svgContainer.innerHTML,
		    scale = 0.8,
		    mapDataWidth = 950,
		    mapDataHeight = 740,
		    svgWidth = mapDataWidth*scale,
		    svgHeight = mapDataHeight*scale,
		    axisPadding = 50,
		    axisWidth = 10,
		    axisHeight = svgHeight - axisPadding * 2,
		    data = this.controller.report.get('filteredDataForPeriod'),
		    axisMin = _.min(_.pluck(data, 'value')),
		    axisMax = _.max(_.pluck(data, 'value')),
		    minColor = [137, 120, 239],
		    maxColor = [ 51, 35, 117],
		    lines = 10,
		    elements = [];

		function translate(point) {
			return [svgWidth/mapDataWidth*point[0], svgHeight/mapDataHeight*point[1]];
		}
		function getColor(value) {
			function mix(value, position) {
				var range = axisMax - axisMin;
				value = value - axisMin;
				return Math.round(value/range * (maxColor[position]-minColor[position]) + minColor[position]);
			}
			return 'rgb(' + [mix(value, 0), mix(value, 1), mix(value, 2)].join(',') + ')';
		}
		
		elements.push('<svg viewBox="0 0 ' + svgWidth + ' ' + svgHeight + '">');
		elements.push(svgContent);
		
		for(var i=0; i<app.data.map.length; i++) {
			var country = app.data.map[i],
			    countryData = _.findWhere(data, {country: country.name});

			if (countryData && countryData.value) {
				elements.push('<g class="country country-' + country.code + ' withData" style="fill: ' + getColor(countryData.value) + '">');
				elements.push('<title>' + _.escape(countryData.country + ': ' + countryData.value + '%') + '</title>');
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
		}
		
		for(var i=0; i<lines; i++) {
			elements.push('<rect class="axis" x="' + (axisPadding + 0.5) + '" y="' + (axisPadding + axisHeight - (axisHeight/lines*(i+1)) + 0.5) + '" width="' + axisWidth + '" height="' + (axisHeight/lines) + '" style="fill: ' + getColor((axisMax-axisMin)/lines*i+axisMin) + '" />');
		}
		for(var i=0; i<lines+1; i++) {
			elements.push('<text class="axis" x="' + (axisPadding + axisWidth + 5) + '" y="' + (5 + axisPadding + axisHeight - (axisHeight/lines*i)) + '">' + ((axisMax-axisMin)/lines*i+axisMin).toFixed(2) + '</text>');
		}
		elements.push('</svg>');
		svgContainer.innerHTML = elements.join('\n');
	},
	renderedBar: function() {
		var svgContainer = this.$('.svg-container')[0],
		    svgContent = svgContainer.innerHTML,
		    countryHeight = 20,
		    countryWidth = 150,
		    axisPadding = 40,
		    borderSize = 5,
		    width = 700,
		    data = this.controller.report.get('filteredDataForPeriod'),
		    height = axisPadding + data.length * countryHeight + borderSize * 2,
		    barWidth = width - countryWidth - axisPadding - borderSize * 2,
		    xAxisMin = 0,
		    cap = 10,
		    xAxisMax = Math.ceil(_.max(_.pluck(data, 'value'))/cap)*cap, // best value between 20, 40, 60, 80, 100
		    minColor = [137, 120, 239],
		    maxColor = [ 51, 35, 117],
		    lines = 5,
		    elements = [];

		function getColor(value) {
			function mix(value, position) {
				var range = xAxisMax;
				return Math.round(value/range * (maxColor[position]-minColor[position]) + minColor[position]);
			}
			return 'rgb(' + [mix(value, 0), mix(value, 1), mix(value, 2)].join(',') + ')';
		}
		elements.push('<svg viewBox="0 0 ' + width + ' ' + height + '">');
		elements.push(svgContent);

		// axis
		elements.push('<text class="axis" x="' + (countryWidth + axisPadding + barWidth/2) + '" y="' + (height-axisPadding/3) + '">' + app.p.t('report.graphs.percentage') + '</text>');
		elements.push('<text class="axis" transform="translate(30,' + (height/2) + ')rotate(-90)">' + app.p.t('report.graphs.countries') + '</text>');

		// border and lines
		elements.push('<line x1="' + (countryWidth+axisPadding) + '" y1="' + (height-axisPadding) + '" x2="' + (countryWidth+axisPadding+barWidth) + '" y2="' + (height-axisPadding) + '" style="stroke:black; stroke-width:0.3" />');
		for(var i=0; i<=lines; i++) {
			var x = countryWidth+axisPadding+barWidth/lines*i+.5,
			    value = xAxisMax*i/lines;
			if (i>0) elements.push('<line class="scale" x1="' + x + '" y1="0" x2="' + x + '" y2="' + (height-axisPadding) + '" />');
			elements.push('<text class="axis" x="' + x + '" y="' + (height-axisPadding+borderSize*2+2) + '">' + _.escape(value) + '</text>');
		}

		// countries and data
		_.each(data, function(dataElement, i) {
			elements.push('<text class="country" x="' + (countryWidth+axisPadding - 5) + '" y="' + (i*countryHeight+countryHeight/2+borderSize) + '">' + _.escape(dataElement.country) + '</text>');
			var title = '<title>' + _.escape(dataElement.country + ': ' + dataElement.value + '%') + '</title>';
			if (dataElement.value>0) {
				var width = barWidth*dataElement.value/xAxisMax,
				    position = width>30?'in':'out',
				    offset = width>30?-13:13;
				elements.push('<rect class="bpfa-bar" x="' + (countryWidth+axisPadding+.5) + '" y="' + (i*countryHeight+3+.5+borderSize) + '" width="' + width + '" height="' + (countryHeight-3) + '" fill="' + getColor(dataElement.value) +'">' + title + '</rect>');
				elements.push('<text class="bpfa-value ' + position + '" x="' + (countryWidth+axisPadding+barWidth*dataElement.value/xAxisMax+offset) + '" y="' + (i*countryHeight+borderSize+countryHeight*0.75) + '" fill="' + getColor(dataElement.value) +'">' + dataElement.value + '%</text>');
			}
		});
		elements.push('</svg>');
		svgContainer.innerHTML = elements.join('\n');

		if (this.controller.changedChartType) {
			this.$('svg rect.bpfa-bar').each(function(i) {
				var width = $(this).attr('width');
				$(this).attr('width', 0).delay(i*30).animate({svgWidth: width});
			});
			this.$('svg text.bpfa-value').each(function(i) {
				$(this).hide().delay(300+i*30).fadeIn();
			});
		}
	},
	renderedColumn: function() {
		var svgContainer = this.$('.svg-container')[0],
		    svgContent = svgContainer.innerHTML,
		    data = this.controller.report.get('filteredDataForPeriod'),
		    svgWidth = 700, svgHeight = 400,
		    labelThickness = 20,
		    topPadding = 5, rightPadding = 10, leftPadding = labelThickness + labelThickness, bottomPadding = 160,
		    graphWidth = svgWidth - (leftPadding + rightPadding),
		    graphHeight = svgHeight - (topPadding + bottomPadding),
		    graphBorderPadding = 5,
		    countryHeight = bottomPadding - labelThickness,
		    countryWidth = graphWidth / data.length,
		    xAxisMin = 0,
		    cap = 10,
		    yAxisMax = Math.ceil(_.max(_.pluck(data, 'value'))/cap)*cap, // best value between 20, 40, 60, 80, 100
		    minColor = [137, 120, 239],
		    maxColor = [ 51, 35, 117],
		    lines = 5,
		    elements = [];

		function getColor(value) {
			function mix(value, position) {
				var range = yAxisMax;
				return Math.round(value/range * (maxColor[position]-minColor[position]) + minColor[position]);
			}
			return 'rgb(' + [mix(value, 0), mix(value, 1), mix(value, 2)].join(',') + ')';
		}

		elements.push('<svg viewBox="0 0 ' + svgWidth + ' ' + svgHeight + '">');
		elements.push(svgContent);

		// axis
		elements.push('<text class="axis" x="' + (leftPadding + graphWidth/2) + '" y="' + (svgHeight - labelThickness) + '">' + app.p.t('report.graphs.countries') + '</text>');
		elements.push('<text class="axis" transform="translate(' + labelThickness*.8 + ',' + (topPadding + graphHeight/2) + ')rotate(-90)">' + app.p.t('report.graphs.percentage') + '</text>');

		// border and lines
		for(var i=0; i<=lines; i++) {
			var y = topPadding + graphHeight/lines*i+.5,
			    value = yAxisMax - yAxisMax*i/lines;
			if (i>0 && i<lines) elements.push('<line class="scale" x1="' + (leftPadding - graphBorderPadding) + '" y1="' + y + '" x2="' + (svgWidth - rightPadding + graphBorderPadding) + '" y2="' + y + '" />');
			elements.push('<text class="axis" x="' + (leftPadding*.7) + '" y="' + (y+labelThickness/3) + '">' + _.escape(value) + '</text>');
		}
		elements.push('<line x1="' + (leftPadding - graphBorderPadding +.5) + '" y1="' + topPadding + '" x2="' + (leftPadding - graphBorderPadding) + '" y2="' + (topPadding+graphHeight) + '" style="stroke:black; stroke-width:0.3" />');
		elements.push('<line x1="' + (svgWidth - graphBorderPadding +.5) + '" y1="' + topPadding + '" x2="' + (svgWidth - graphBorderPadding) + '" y2="' + (topPadding+graphHeight) + '" style="stroke:black; stroke-width:0.3" />');

		// countries and data
		_.each(data, function(dataElement, i) {
			elements.push('<text class="country" transform="translate(' + (leftPadding + labelThickness/2 + countryWidth * i) + ',' + (topPadding + graphHeight + 3) + ') rotate(-90)">' + _.escape(dataElement.country) + '</text>');
			var title = '<title>' + _.escape(dataElement.country + ': ' + dataElement.value + '%') + '</title>';
			if (dataElement.value>0) {
				var height = graphHeight*dataElement.value/yAxisMax,
				    position = height>30?'in':'out',
				    offset = height>30?-15:15;
				elements.push('<rect class="bpfa-column" x="' + (leftPadding + countryWidth*i+.5) + '" y="' + (topPadding + graphHeight-height + .5) + '" width="' + (countryWidth-3) + '" height="' + height + '" fill="' + getColor(dataElement.value) +'">' + title + '</rect>');
				elements.push('<text transform="translate(' + (leftPadding + countryWidth*i+countryWidth*0.55) + ' ' + (topPadding + graphHeight - height - offset) + ') rotate(-90)" class="bpfa-value ' + position + '">' + dataElement.value + '%</text>');
			}
		});
		elements.push('</svg>');
		svgContainer.innerHTML = elements.join('\n');

		if (this.controller.changedChartType) {
			this.$('svg rect.bpfa-column').each(function(i) {
				var height = $(this).attr('height'),
				    y = $(this).attr('y');
				$(this).attr('height', 0).attr('y', topPadding + graphHeight + .5).delay(i*30).animate({svgHeight: height, svgY: y});
			});
			this.$('svg text.bpfa-value').each(function(i) {
				$(this).hide().delay(300+i*30).fadeIn();
			});
		}
	}
});

})(window.jQuery);

(function() {
"use strict";

app.views.HorizontalBarGraph = Backbone.View.extend({
	initialize: function(options) {
		this.data = _.extend({
			link: null,
			title: null
		}, options.graphData);
		this.render();
	},
	tagName: 'div',
	className: 'horizontalBarGraph',
	animateDuration: 500,
	animate: function(time) {
		// if negative time is passed from caller then it denotes delay to start animation
		if (time>=0) {
			this.$mainValueBar.attr("width", this.getMainValueBarWidth(Math.min(time, this.animateDuration)));
		}

		// fade in the text once (remove the variable to fade only once)
		if (time>400 && this.$mainValue) {
			this.$mainValue.fadeIn(200);
			delete this.$mainValue;
		}
		// on animation end delete the animation variables and function in order to stop animation
		if (time>this.animateDuration) {
			this.animate = undefined;
			delete this.animateDuration;
		}
	},
	finishAnimation: function() {
		this.animate(this.animateDuration);
	},
	render: function() {
		this.$el.html(app.templates.HorizontalBarGraph(this.data))
			.find('.svgPlaceholder').replaceWith(this.generateGraphHtml());
		this.$mainValueBar = this.$('rect.mainValue').attr('width', '0');
		this.$mainValue = this.$('text.mainValue').hide();
		return this;
	},
	generateGraphHtml: function() {
		var data = this.data,
		    svgWidth = data.svgWidth || 250,
		    bottomAxisSize = 20,
		    leftAxisSize = 60,
		    mainBarHeight = 24,
		    secondaryBarHeight = 14,
		    barWidth = svgWidth - leftAxisSize,
		    endMarkerWidth = 4,
		    svgHeight = mainBarHeight + (data.oneRow?0:secondaryBarHeight) + bottomAxisSize,
		    elements = [],
		    that = this;
		
		elements.push('<svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 ' + svgWidth + ' ' + svgHeight + '">');

		// main value
		if (!_.isNull(data.mainValue)) {
			// define and expose this closure which provides the width of the main value based on time
			this.getMainValueBarWidth = function(time) {
				return app.utils.easeOutQuad(time, that.animateDuration, 0, data.mainValue / 100 * barWidth);
			}

			var width = data.mainValue / 100 * barWidth,
			    textClass = width>11?"in":"out";
			elements.push('<rect class="mainValue" x="' + leftAxisSize + '" y="0" width="' + width + '" height="' + mainBarHeight + '" style="fill: ' + data.color + '"></rect>');
			elements.push('<text class="mainCaption" x="' + (leftAxisSize - 4) + '" y="' + (mainBarHeight*0.55) + '">' + _.escape(data.mainCaption) + '</text>');
			elements.push('<text class="mainValue ' + textClass + '" x="' + (leftAxisSize+width) + '" y="' + (mainBarHeight*0.55) + '">&#160;' + _.escape(data.mainValue)+ '&#160;</text>');
		}
		// secondary value
		if (!_.isNull(data.secondaryValue)) {
			var width = data.secondaryValue / 100 * barWidth,
			    textClass = width>11?"in":"out";
			elements.push('<rect class="secondaryValue" x="' + leftAxisSize + '" y="' + mainBarHeight + '" width="' + width + '" height="' + secondaryBarHeight + '"></rect>');
			elements.push('<text class="secondaryCaption" x="' + (leftAxisSize - 4) + '" y="' + (mainBarHeight + secondaryBarHeight*0.55) + '">' + _.escape(data.secondaryCaption) + '</text>');
			elements.push('<text class="secondaryValue ' + textClass + '" x="' + (leftAxisSize+width) + '" y="' + (mainBarHeight + secondaryBarHeight*0.55) + '">&#160;' + _.escape(data.secondaryValue)+ '&#160;</text>');
		}
		// bottom axis
		elements.push('<text class="bottomAxis start" x="' + leftAxisSize + '" y="' + (svgHeight - bottomAxisSize/2) + '">1</text>');
		elements.push('<text class="bottomAxis end" x="' + svgWidth + '" y="' + (svgHeight - bottomAxisSize/2) + '">100</text>');
		elements.push('<rect class="endMarker" x="' + (svgWidth - endMarkerWidth)+ '" y="0" width="' + endMarkerWidth + '" height="' + (svgHeight - bottomAxisSize) + '">100</rect>');
		
		elements.push('</svg>');
		return elements.join('\n');	
	}
});


})();

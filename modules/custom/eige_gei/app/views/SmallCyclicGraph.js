(function() {
"use strict";

app.views.SmallCyclicGraph = Backbone.View.extend({
	initialize: function(options) {
		this.data = _.extend({
			link: null,
			title: null,
			diff: null,
			secondaryValue: null,
			secondaryCaption: null,
			secondaryValueCaption: null,
			secondaryValueExplanation: null
		}, options.graphData);
		this.render();
	},
	tagName: 'div',
	className: 'smallCyclicGraph',
	animateDuration: 500,
	animate: function(time) {
		// if negative time is passed from caller then it denotes delay to start animation
		if (time>=0) {
			this.$mainValueBar.attr("d", this.getMainValueBarArc(Math.min(time, this.animateDuration)));
		}
		// fade in the text once (remove the variable to fade only once)
		if (time>250 && this.$mainValue) {
			this.$mainValue.fadeIn(300);
			delete this.$mainValue;
		}
		// on animation end delete the animation variables and function in order to stop animation
		if (time>this.animateDuration) {
			this.animate = undefined;
			delete this.animateDuration;
		}
	},
	finishAnimation: function() {
		this.$mainValueBar.attr("d", this.getMainValueBarArc(this.animateDuration));
		this.$mainValue.show();
		delete this.$mainValue;
		this.animate = undefined;
		delete this.animateDuration;
		return this;
	},
	render: function() {
		this.$el.html(app.templates.SmallCyclicGraph(this.data))
			.addClass('domain_' + this.data.key)
			.addClass('domain_type_' + this.data.type)
			.find('.svgPlaceholder').replaceWith(this.generateGraphHtml());
		this.$mainValueBar = this.$('path.mainValueBar');
		this.$mainValue = this.$('text.mainValue').hide();
		return this;
	},
	generateGraphHtml: function() {
		var data = this.data,
		    svgWidth = 100, svgHeight = svgWidth,
		    center = svgWidth / 2,
		    barSize = 8,
		    backgroundRadius = center - barSize,
		    hollowBackgroundRadius = center - barSize - barSize,
		    mainBarRadius = backgroundRadius - barSize/2,
		    secondaryBarRadius = backgroundRadius + barSize/2,
		    elements = [],
		    that = this;
		
		// define and expose this closure which provides the radius of the main value based on time
		this.getMainValueBarArc = function(time) {
			return app.utils.describeSvgArc(center, center, mainBarRadius, 0, app.utils.easeOutQuad(time, that.animateDuration, 0, Math.min(359.99, data.mainValue*360/data.maxValue))); // do not render a 0 to 360 degree arc because it cancels itself out rendering nothing
		};

		elements.push('<svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 ' + svgWidth + ' ' + svgHeight + '">');

		// background
		elements.push('<circle cx="' + center + '" cy="' + center + '" r="' + backgroundRadius + '" class="background" style="fill: ' + app.utils.shadeColor2(data.color, 0.3) + '" />');
		
		// hollow background
		if (data.hollow) {
			elements.push('<circle cx="' + center + '" cy="' + center + '" r="' + hollowBackgroundRadius + '" class="hollowBackground" />');
		}
		
		// main value
		if (!_.isNull(data.mainValue)) {
			elements.push('<path class="mainValueBar" fill="none" stroke="' + data.color + '" stroke-width="' + barSize + '" d="' + this.getMainValueBarArc(0) + '" />');
			if (data.mainValueCaption) {
				elements.push('<text class="mainValueCaption" x="' + center + '" y="' + center + '"><title>"' + _.escape(data.mainValueExplanation) + '"</title>' + _.escape(data.mainValueCaption) + '</text>');
			} else {
				elements.push('<text class="mainValue" x="' + center + '" y="' + center + '">' + data.mainValue+ '</text>');
			}
		}
		// secondary value
		if (!_.isNull(data.secondaryValue)) {
			elements.push('<path class="secondaryValueBar" fill="none" stroke-width="' + barSize + '" d="' + app.utils.describeSvgArc(center, center, secondaryBarRadius, 0, Math.min(359.99, data.secondaryValue*360/data.maxValue)) + '" />');
		}
		elements.push('</svg>');
		return elements.join('\n');
	}
});


})();

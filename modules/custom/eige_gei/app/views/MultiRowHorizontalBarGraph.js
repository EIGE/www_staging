(function() {
"use strict";

app.views.MultiRowHorizontalBarGraph = Backbone.View.extend({
	initialize: function(options) {
		this.data = options.graphData;
		this.render();
	},
	tagName: 'div',
	className: 'multiRowHorizontalBarGraph',
	animateDuration: 500,
	animate: function(time) {
		var that = this;
		// if negative time is passed from caller then it denotes delay to start animation
		if (time>=0) {
			this.$animatableRows.each(function(i) {
				this.setAttribute('x2', that.getLineEndPosition(i*2, Math.min(time, that.animateDuration))); // i * 2 to maintain correct index for width calculation, because the animatable rows are half of the total rows
			});
		}
		// fade in the text once (remove the variable to fade only once)
		if (time>400 && this.$animatableValues) {
			this.$animatableValues.fadeIn(200);
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
		this.$el.html(app.templates.MultiRowHorizontalBarGraph(this.data))
			.find('.svgPlaceholder').replaceWith(this.generateGraphHtml());
		var that = this;
		this.$animatableRows = this.$('g.main line.value').each(function(i) {
			this.setAttribute('x2', that.getLineEndPosition(i, 0));
		});
		this.$animatableValues = this.$('g.main text.value').hide();
		return this;
	},
	generateGraphHtml: function() {
		var data = this.data,
		    svgWidth = 250,
		    leftAxisSize = 60,
		    barHeight = 20,
		    barWidth = svgWidth - leftAxisSize,
		    svgHeight = data.rows.length * (barHeight),
		    elements = [],
		    that = this;
		
		elements.push('<svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 ' + svgWidth + ' ' + svgHeight + '">');

		// define and expose this closure which provides the width of the value based on time
		this.getLineEndPosition = function(index, time) {
			return app.utils.easeOutQuad(time, that.animateDuration, 0, data.rows[index].value / data.maxValue * barWidth) + leftAxisSize;
		}
		
		for(var i=0; i<data.rows.length; i++) {
			var row = data.rows[i],
			    width = row.value / data.maxValue * barWidth,
			    centerY = barHeight * 0.5 + barHeight * i,
			    textClass = width>20?"in":"out";
			elements.push('<g class="row suffix_' + row.suffix + ' ' + (row.mainValue?'main':'secondary') + ' ' + (data.secondary?'secondaryOnly':'') + '">');
			elements.push('<text class="caption" x="' + (leftAxisSize - 4) + '" y="' + (centerY+barHeight*0.05) + '">' + _.escape(row.caption) + '</text>');
			elements.push('<line class="value" x1="' + leftAxisSize + '" y1="' + centerY + '" x2="' + this.getLineEndPosition(i, this.animateDuration) + '" y2="' + centerY + '"></line>');
			elements.push('<text class="value ' + textClass + '" x="' + (leftAxisSize+width) + '" y="' + (centerY+barHeight*0.05) + '">&#160;' + _.escape(row.value)+ '&#160;</text>');
			elements.push('</g>');
		}
		
		elements.push('</svg>');
		return elements.join('\n');	
	}
});


})();

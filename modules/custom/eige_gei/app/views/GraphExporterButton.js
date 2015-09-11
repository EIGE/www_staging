(function($) {
"use strict";

app.views.GraphExporterButton = Backbone.View.extend({
	initialize: function(options) {
		this.target = options.target;
		this.filename = options.filename;
		this.render();
	},
	tagName: 'div',
	className: 'GraphExporterButton',
	events: {
		'click a': 'exportClicked'
	},
	exportClicked: function(e) {
		e.preventDefault();
		Backbone.trigger('block', app.p.t('misc.export.wait'));
		
		var that = this;

		// wait a bit before starting in order to make sure the blocking message has appeared.
		setTimeout(function() {
			if (that.target.is('svg')) that.exportSvgToPng();
			if (!that.target.is('svg')) that.exportHtmlToPng();
		}, 50);
	},
	exportSvgToPng: function() {
		var svg = this.target.get(0),
		    $svg = this.target;
		console.log('will convert svg ' + svg);
		this.inlineCss($svg);
		var canvas = this.convertToCanvas(svg);
		Backbone.trigger('unblock');
		this.serveCanvas(canvas);
	},
	exportHtmlToPng: function() {
		// we use html2canvas to export the html to canvas.
		// it is very problematic with svgs (which are probably contained in the html)
		// so we first temporarilly convert all svgs to canvas and convert.
		// after the conversion, we remove the generated canvases and reshow the original svgs.
		var $html = this.target,
		    that = this,
		    svgs = [],
		    canvases = [];
		$html.find('svg:visible').each(function() {
			var $svg = $(this);
			that.inlineCss($svg);
			that.$el.hide(); // hide the export button so it doesn't get rendered in the canvas
			var canvas = that.convertToCanvas(this);
			$svg.hide();
			$svg.after(canvas);
			svgs.push($svg);
			canvases.push(canvas);
		});
		this.inlineCss($html);
		html2canvas($html[0], {
			logging: true,
			height: $html.outerHeight(),
			background: 'white',
			onrendered: function(canvas) {
				Backbone.trigger('unblock');
				that.serveCanvas(canvas);
				for(var i=0; i<svgs.length; i++) svgs[i].show();
				for(var i=0; i<canvases.length; i++) canvases[i].remove();
				that.$el.show(); // restore button
			}
		});
	},
	convertToCanvas: function(svg) {
		var $svg = $(svg);
		var svgMarkup = svg.outerHTML.replace(/&nbsp;/g, ' ');
		var canvas = $('<canvas width="' + $svg.width() + '" height="' + $svg.height() + '"></canvas>')[0];
		canvg(canvas, svgMarkup, {ignoreMouse: true, ignoreAnimation: true});
		this.solidifyBackground(canvas);
		return canvas;
	},
	solidifyBackground: function(canvas) {
		var context = canvas.getContext("2d");
		context.globalCompositeOperation = "destination-over";
		context.fillStyle = "white";
		context.fillRect(0, 0, canvas.width, canvas.height);
	},
	serveCanvas: function(canvas) {
		var link = $('<a style="display: none" href="data:' + canvas.toDataURL("image/png") + '" download="' + new Date().format('yyyy-mm-dd') + '-' + app.utils.sanitize(this.filename) + '.png">Save</a>')[0];
		// firefox needs the link attached on the document in order to be clickable
		document.body.appendChild(link);
		link.click();
		document.body.removeChild(link);
	},
	inlineCss: function($elem) {
		var css = 'fill,stroke,strokeWidth,strokeDasharray,opacity,fontSize,dominantBaseline,textAnchor,fontWeight'.split(',');
		$elem.find('*').each(function() {
			var $elem = jQuery(this);
			for(var i=0; i<css.length; i++) {
				$elem.css(css[i], $elem.css(css[i]));	
			}
		});
	},
	render: function() {
		this.$el.html(app.templates.GraphExporterButton());
		return this;
	}
});

})(window.jQuery);


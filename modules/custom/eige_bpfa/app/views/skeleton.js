(function($) {
"use strict";

app.views.Skeleton = Backbone.View.extend({
	el: '#bpfa',
	template: _.template(document.getElementById("template-skeleton").innerHTML),
	initialize: function(options) {
		var that = this;
		console.log('skeleton init');
		this.listenTo(app.router, 'routing', this.routingTo);

		this.handleNavigationLinks();		
		this.handleScrollingLinks();
		
		this.render();
		
		var breadcrumb = new app.models.Breadcrumb();
		app.views.breadcrumb = new app.views.Breadcrumb({el: this.$('#bpfa-breadcrumb'), model: breadcrumb});
		
		app.views.index = new app.views.Index({el: this.$('#bpfa-view'), breadcrumb: breadcrumb, areas: options.areas}).undelegateEvents(); // undelegate events. router will decide which view's events are delegated on views which share divs
		app.views.area = new app.views.Area({el: this.$('#bpfa-view'), breadcrumb: breadcrumb, areas: options.areas}).undelegateEvents(); // same as above
		app.views.indicator = new app.views.Indicator({el: this.$('#bpfa-view'), breadcrumb: breadcrumb, areas: options.areas}).undelegateEvents(); // same as above

	},
	handleNavigationLinks: function() {
		// hook application buttons http://stackoverflow.com/a/10922015/72478
		this.$el.on('click', 'a:not([data-bypass])', function (e) {
			var href = $(this).attr('href');
			if (href.indexOf('http')===0) return; // do not treat external links as backbone navigation urls
			href=href.substr(app.root.length);
			e.preventDefault();
			app.router.navigate(href, true);
		});
	},
	handleScrollingLinks: function() {
		var that = this;
	
		function scrollTo($elem, speed) {
			if ($elem.length===0) return; // invalid element
			$("html, body").animate({
				scrollTop: $elem.offset().top
			}, speed || 250);
		}

		function scrollToTop(speed) {
			scrollTo(that.$el, speed || 125);
		}
		
		this.$el.on('click', 'a[data-scroll]', function(e) {
			if (!history.pushState) {
				e.preventDefault();
				return; // anchors only work with push state urls
			}
			var elementIdWithHash = this.href.substring(this.href.indexOf('#'));
			scrollTo($(elementIdWithHash));
		});
		
		this.listenTo(Backbone, 'view:rendered', function() {
			if (!history.pushState) return; // anchors only work with push state urls
			
			// catches initial page render via views which care to trigger 'done' on Backbone when their render ends
			// we use this to handle (scroll) anchors on URL
			if (window.location.hash.length>1) {
				scrollTo($(window.location.hash));
			} else {
				scrollToTop();
			}
		});
	},
	render: function() {
		this.$el.html(this.template());
		return this;
	},
	routingTo: function(event) {
		this.el.setAttribute('class', event.view);
	}
});

})(window.jQuery);
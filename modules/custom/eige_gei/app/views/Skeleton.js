(function($) {
"use strict";

app.views.Skeleton = Backbone.View.extend({
	initialize: function(options) {
		this.controller = options.controller;
		this.mainMenu = options.mainMenu;
		this.render();
		this.$('header.main .wrapper').append(new app.views.MainMenu({model: this.mainMenu}).el);
		this.$el.append(new app.views.BlockingMessage().el);
		this.$el.append(new app.views.Tooltip().el);

		this.handleScrollingLinks();
		
		// track backbone history changes with google analytics
		this.listenToOnce(Backbone.history, 'route', function() {
			// for the first route only (initial page load, by listening to route once) we do nothing related to ga. because ga tracking has already happened from the server side generated page.
			// afterwards, start listening for every route and track it.
			// we do that trick for 2 reasons:
			// 1) to avoid double tracking the initial page load (once from the generated html and once from this code)
			// 2) to use the already configured ga (e.g property id, anonymizeIp, cookie settings etc) which is present from the server side generated page which was rendered from the drupal module. this is a better solution than disabling ga for the GEI url and doing all the configuration on the client side
			this.listenTo(Backbone.history, 'route', function() {
				if (window.ga) {
					console.log('google analytics tracking');
					ga('set', 'location', Backbone.history.location.toString());
					ga('send', 'pageview');
				}
			});
		});
	},
	events: {
		'click a:not([data-bypass])': 'navigationLinkClicked'
	},
	navigationLinkClicked: function(e) {
		e.preventDefault();
		this.controller.navigationLinkClicked(e.currentTarget);
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
				// temp disable auto scrolling // scrollToTop();
			}
		});
		
		this.listenTo(Backbone, 'scrollTo', function(selector, speed) {
			scrollTo(this.$(selector), speed);
		});
	},
	render: function() {
		this.$el.html(app.templates.Skeleton());
		return this;
	},
	renderSubView: function(view, key) {
		this.mainMenu.select(key);
		this.el.setAttribute('class', key);
		this.$('#gei-view').append(view.el);
	}
});

})(window.jQuery);
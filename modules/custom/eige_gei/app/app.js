(function($) {
"use strict";

window.app = {
	views: {},
	controllers: {},
	models: {},
	collections: {},
	templates: {},
	isMobile: window.orientation!==undefined, // https://stackoverflow.com/q/13816043/72478
	run: function(root, rootFiles, rootElementSelector) {
		console.log('app running', root, rootFiles, rootElementSelector);
		
		// paths config
		this.host = window.location.origin + '/';
		this.root = root;
		this.rootFiles = rootFiles;
		
		// locale
		app.locale = app.strings.locale;
		
		// init and expose polyglot
		this.p = new Polyglot({
			locale: app.strings.locale,
			phrases: app.strings
		});
		
		// load all templates
		$(rootElementSelector).siblings('script[type="text/template"]').each(function() {
			app.templates[$(this).data('id')] = _.template(this.innerHTML);
		});

		// instantiate misc views which do not relate to the dom
		new app.views.Error();
		new app.views.Title();

		// start main router		
		app.router = new app.Router();

		// start and render skeleton (app) view
		app.controllers.skeleton.initialize();
		app.controllers.skeleton.createView(rootElementSelector);
		
		// gei is a backbone application hooked on a specific URL via a HOOK_menu in the drupal module which boostraps it.
		// we need to mark a parent menu item as active.
		// doing this via the drupal module menu_position worked well, but it also displayed the sidebar.
		// hiding the sidebar via css was possible, but altering the large-10 (instead of large-12) foundation classes for the
		// main wrapper didn't seem right.
		// so we decided to mark the active menu link via javascript. works well.
		$('#main-menu-links li a.eige_menu_link_gender_statistics').addClass('active-trail');

		// start router - starts everything. initial page load view will be run
		Backbone.history.start({pushState: true, root: this.root});
	}
};

})(window.jQuery);

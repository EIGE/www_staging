var app = app || {};
(function() {
"use strict";

$.extend(app, {
	isMobile: /Android|webOS|iPhone|iPad|iPod|BlackBerry/i.test(navigator.userAgent),
	isLocal: document.location.protocol == "file:",
	_production: false,
	views: {},
	models: {},
	collections: {},
	run: function(root, ajaxRoot) {
		console.log('app running');
		
		// paths config
		this.root = root;
		this.ajaxRoot = ajaxRoot;
		
		// locale
		app.locale = app.strings.locale;
		
		// init and expose polyglot
		this.p = new Polyglot({
			locale: app.strings.locale,
			phrases: app.strings
		});
		delete app.strings;

		// statically defined data
		var areas = new app.collections.Areas(app.data.tree);
		
		// instantiate misc views which do not relate to the dom
		app.views.error = new app.views.Error();
		app.views.title = new app.views.Title();

		// start and render skeleton (app) view
		app.views.skeleton = new app.views.Skeleton({areas: areas});
		
		// start router - starts everything. initial page load view will be run
		Backbone.history.start({pushState: true, root: app.root});
	}
});

})();

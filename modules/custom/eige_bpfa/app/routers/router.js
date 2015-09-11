(function() {
"use strict";

var Router = Backbone.Router.extend({
	routes: {
		'': 'index',
		'*catchall': 'index' // http://stackoverflow.com/a/11237261/72478
	},
	initialize: function() {
		this.route(/^area\/([1-9][0-9]*)$/, 'area');
		this.route(/^area\/([1-9][0-9]*)\/indicator\/([1-9][0-9]*)$/, 'indicator');
		this.route(/^area\/([1-9][0-9]*)\/indicator\/([1-9][0-9]*)\/report\/([1-9][0-9]*)$/, 'indicator');
		this.route(/^area\/([1-9][0-9]*)\/indicator\/([1-9][0-9]*)\/report\/([1-9][0-9]*)\/([a-z]+)$/, 'indicator');
		this.route(/^area\/([1-9][0-9]*)\/indicator\/([1-9][0-9]*)\/report\/([1-9][0-9]*)\/([a-z]+)\/filter\/([0-9-]+)$/, 'indicator');
	},
	routeTo: function(viewName) {
		console.log('routing to ' + viewName);
		this.trigger('routing:' + viewName); // custom event, called early in order for menu and other listeners to quickly be notified and fix their state before the view render
		this.trigger('routing', {view: viewName}); // custom event as above, with view on options
		this.trackAndCleanPrevious(app.views[viewName]); // keep track of current view and cleanup listeners of previous view
		app.views[viewName].render();
	},
	index: function() {
		this.routeTo('index');
	},
	area: function(areaId) {
		app.views.area.controller.loadContentAndRender(Number(areaId));
		this.routeTo('area');
	},
	indicator: function(areaId, indicatorId, reportId, chartType, filter) {
		app.views.indicator.controller.loadContentAndRender(Number(areaId), Number(indicatorId), Number(reportId), chartType, filter);
		this.routeTo('indicator');
	},
	trackAndCleanPrevious: function(view) { // http://stackoverflow.com/a/9139131/72478
		if (this.currentView) {
			this.currentView.undelegateEvents();
		}
		this.currentView = view;
		view.delegateEvents();
	},
	navigateTo: function(element) {
		this.navigate(element.getAttribute('href').substr(app.root.length), true);
	}
});

app.router = new Router();

})();
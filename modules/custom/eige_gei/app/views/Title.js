(function() {
"use strict";

app.views.Title = Backbone.View.extend({
	initialize: function() {
		this.listenTo(Backbone, 'title', this.render);
	},
	render: function(data) {
		console.log('setting title');
		var elements = [app.p.t('website_title_short'), app.p.t('title_long')];
		if (data && !_.isArray(data)) {
			elements.push(data);
		}
		if (data && _.isArray(data)) {
			elements = _.union(elements, _.compact(data));
		}
		document.title = elements.reverse().join(' | ');
		return this;
	}
});

})();
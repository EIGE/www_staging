(function() {
"use strict";

app.views.Title = Backbone.View.extend({
	initialize: function() {
		this.listenTo(Backbone, 'title', this.render);
	},
	render: function(data) {
		console.log('setting title');
		var documentTitle = app.p.t('title_short');
		if (data.title) {
			documentTitle = data.title + ' | ' + documentTitle;
		}
		if (data.subtitle) {
			documentTitle = data.subtitle + ' | ' + documentTitle;
		}
		document.title = documentTitle;
		return this;
	}
});

})();
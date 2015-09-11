(function() {
"use strict";

app.models.Indicator = Backbone.Model.extend({
	url: function() {
		return app.ajaxRoot + 'app/data/indicator-' + this.get('id') + '.json.js';
	},
	initialize: function() {
		this.listenTo(this, 'change:reports', function() {
			if (this.get('reports') instanceof Array) {
				this.set('reports', new app.collections.Reports(this.get('reports')), {silent: true});
			}
		});
	},
	hasReports: function() {
		return !this.get('reports').isEmpty();
	},
	hasOneReport: function() {
		return this.get('reports').length===1;
	},
	hasMoreThanOneReport: function() {
		return this.get('reports').length>1;
	},
	getUrlPart: function() {
		return '/indicator/' + this.get('id');
	}
});

})();

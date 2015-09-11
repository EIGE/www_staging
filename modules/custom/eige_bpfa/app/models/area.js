(function() {
"use strict";

app.models.Area = Backbone.Model.extend({
	url: function() {
		return app.ajaxRoot + 'app/data/area-' + this.get('id') + '.json.js';
	},
	initialize: function() {
		if (this.get('indicators') instanceof Array) {
			this.set('indicators', new app.collections.Indicators(this.get('indicators')), {silent: true});
		}
	},
	hasIndicators: function() {
		return !this.get('indicators').isEmpty();
	},
	getUrlPart: function() {
		return '/area/' + this.get('id');
	}
});

})();

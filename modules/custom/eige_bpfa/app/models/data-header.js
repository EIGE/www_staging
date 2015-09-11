(function() {
"use strict";

app.models.DataHeader = Backbone.Model.extend({
	initialize: function(value) {
		this.set('value', value);
	},
	isNumeric: function() {
		if (this.get('value')===undefined || this.get('value')===null) return false;
		return this.get('value').match(/^[12][0-9][0-9][0-9]/)!==null;
	}
});

})();

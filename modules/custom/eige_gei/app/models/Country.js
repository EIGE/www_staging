(function() {
"use strict";

app.models.Country = Backbone.Model.extend({
	idAttribute: 'key',
	getDrupalKey: function() {
		return this.get('drupalKey')?this.get('drupalKey'):this.id;
	}
});

})();

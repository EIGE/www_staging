(function() {
"use strict";

app.models.DataFilterValue = Backbone.Model.extend({
	isSelected: function() {
		return this.get('selected')
	}
});

})();

(function() {
"use strict";

app.models.MainMenu = Backbone.Model.extend({
	defaults: {
		selectedItem: ''
	},
	getSelected: function() {
		return this.get('selectedItem');
	},
	select: function(item) {
		this.set('selectedItem', item);
	}
});

})();

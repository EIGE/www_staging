(function() {
"use strict";

app.models.CountryTabsMenu = Backbone.Model.extend({
	defaults: {
		selectedItem: null,
		items: []
	},
	initialize: function() {
		this.select(this.getItems()[0]);
	},
	getSelected: function() {
		return this.get('selectedItem');
	},
	isSelected: function(item) {
		return this.getSelected()===item;
	},
	getItems: function() {
		return this.get('items');
	},
	select: function(item) {
		this.set('selectedItem',
			_.contains(this.getItems(), item)?
			item:
			this.getItems()[0]
			);
	}
});

})();

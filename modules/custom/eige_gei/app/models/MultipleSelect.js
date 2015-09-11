(function() {
"use strict";

app.models.MultipleSelect = Backbone.Model.extend({
	defaults: {
		label: '',
		optionsTranslationPrefix: null,
		options: [],        // array of models
		selectedOptions: [] // array of model keys
	},
	isSelected: function(optionKey) {
		return _.contains(this.get('selectedOptions'), optionKey);
	},
	select: function(optionKey) {
		if (!this.isSelected(optionKey)) {
			this.get('selectedOptions').push(optionKey);
		}
	},
	deselect: function(optionKey) {
		if (this.isSelected(optionKey)) {
			this.get('selectedOptions').splice(this.get('selectedOptions').indexOf(optionKey), 1);
		}
	}
});

})();

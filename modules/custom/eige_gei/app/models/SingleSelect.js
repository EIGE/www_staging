(function() {
"use strict";

app.models.SingleSelect = Backbone.Model.extend({
	defaults: {
		label: '',
		optionsTranslationPrefix: null,
		options: [],        // array of models or objects
		selectedOption: null
	},
	isSelected: function(optionKey) {
		return this.get('selectedOption')===optionKey;
	},
	select: function(optionKey) {
		this.set('selectedOption', optionKey);
	},
	getSelectedOption: function() {
		return this.get('selectedOption');
	}
});

})();

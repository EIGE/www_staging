(function() {
"use strict";

app.models.Breadcrumb = Backbone.Model.extend({
	defaults: {
		elements: []
	},
	clear: function() {
		this.set('elements', [], {silent: true});
		return this;
	},
	setElements: function(elements) {
		this.set('elements', elements, {silent: true});
		return this;
	},
	setElementAt: function(index, element) {
		this.get('elements')[index] = element; // direct set is already silent
		return this;
	},
	done: function() {
		this.trigger('change');
	}
});

})();

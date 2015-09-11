(function() {
"use strict";

app.models.DataFilterGroup = Backbone.Model.extend({
	initialize: function() {
		if (typeof this.get('selected') !== 'number') {
			this.set('selected', Number(this.get('selected')));
		}
		if (this.get('selected')<0) {
			this.set('selected', 0);
		}
		if (this.get('selected')>=this.get('values').length) {
			this.set('selected', this.get('values').length-1);
		}
	}
});

})();

(function() {
"use strict";

app.models.Report = Backbone.Model.extend({
	url: function() {
		return app.ajaxRoot + 'app/data/report-' + this.get('id') + '.json.js';
	},
	initialize: function() {
		this.listenTo(this, 'change:data', function() {
			if (this.get('data') instanceof Array) {
				this.set('data', new app.collections.DataElements(this.get('data')), {silent: true});
			}
		});
		this.listenTo(this, 'change:headers', function() {
			if (this.get('headers') instanceof Array) {
				this.set('headers', new app.collections.DataHeaders(this.get('headers')), {silent: true});
			}
		});
	},
	getUrlPart: function() {
		return '/report/' + this.get('id');
	},
	filterFor: function(dataFilterObject) {
		var period = dataFilterObject.Period; // filter Period is not a filter but a selection on which key to use for values
		delete dataFilterObject.Period;
		
		this.set('filteredData', new app.collections.DataElements(this.get('data').where(dataFilterObject)));

		var filteredDataForPeriod = [];
		this.get('filteredData').each(function(data) {
			filteredDataForPeriod.push({country: data.get('Countries'), value: data.get(period)});
		});
		this.set('filteredDataForPeriod', filteredDataForPeriod);
	}
});

})();

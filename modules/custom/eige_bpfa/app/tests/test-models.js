(function() {
"use strict";

function getIndicatorJson() {
	return 	{
		"id": 23,
		"reports": [
			{
				"id": 627,
				"title": "Name of Report 1",
				"data_source": "03-Dec-2014",
				"notes": "Eurostat, LFS (lfsa_ipga)",
				"data_file": ": data are not available; age group 16-64; Inactivity has been defined as the percentage of persons, who are classified neither as employed nor as unemployed in the labour market. Employed persons are all persons who worked at least one hour for pay or profit during the reference week or were temporarily absent from such work. Unemployed persons are all persons who were not employed during the reference week and had actively sought work during the past four weeks and were ready to begin working immediately within two weeks."
			}
		]
	};
}

var REPORTS_CONVERSION_EVENT = 'change:reports';


QUnit.test("indicator reports conversion to collection", function(assert) {
	var indicator = new app.models.Indicator(getIndicatorJson());

	assert.notOk(indicator.get('reports') instanceof Backbone.Collection);
	assert.ok(indicator.get('reports') instanceof Array);

	indicator.trigger(REPORTS_CONVERSION_EVENT); // backbone's events are synchronous, thus the following assertions work immediately
	
	assert.ok(indicator.get('reports') instanceof Backbone.Collection);
	assert.notOk(indicator.get('reports') instanceof Array);

	indicator.trigger(REPORTS_CONVERSION_EVENT); // sync again
	
	assert.ok(indicator.get('reports') instanceof Backbone.Collection);
	assert.notOk(indicator.get('reports') instanceof Array);
});

QUnit.test("indicator report methods", function(assert) {
	var indicator = new app.models.Indicator(getIndicatorJson());

	indicator.trigger(REPORTS_CONVERSION_EVENT);

	assert.ok(indicator.hasOneReport());
	assert.ok(indicator.hasReports());
});

QUnit.test("indicator report data header methods", function(assert) {

	assert.notOk(new app.models.DataHeader(undefined).isNumeric());
	assert.notOk(new app.models.DataHeader(null).isNumeric());
	assert.notOk(new app.models.DataHeader("").isNumeric());

	assert.notOk(new app.models.DataHeader("foo").isNumeric());
	assert.notOk(new app.models.DataHeader("foo231").isNumeric());
	assert.notOk(new app.models.DataHeader("john smith").isNumeric());

	assert.ok(new app.models.DataHeader("2000").isNumeric());
	assert.ok(new app.models.DataHeader("2000d").isNumeric());
	assert.ok(new app.models.DataHeader("1999").isNumeric());
});

QUnit.test("model urls contain their ids", function(assert) {
	assert.ok(new app.models.Area({id: 123}).getUrlPart().indexOf('123')>=0);
	assert.ok(new app.models.Indicator({id: 123}).getUrlPart().indexOf('123')>=0);
	assert.ok(new app.models.Report({id: 123}).getUrlPart().indexOf('123')>=0);
});


})();
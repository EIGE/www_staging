(function() {
"use strict";

app.data.utils = {
	/* returns "more", "less", "same" or "not_available" */
	findDiff: function(year, previousYear, domain, country) {
		if (!previousYear) return "not_available"; // no previous year
		var value = app.data.treedata[year][domain]?app.data.treedata[year][domain][country]:0;
		var previousValue = app.data.treedata[previousYear][domain]?app.data.treedata[previousYear][domain][country]:0;
		return value==previousValue?"same":value>previousValue?"more":"less";
	}
};

})();

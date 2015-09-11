(function() {
"use strict";

app.models.CountryTrendsGraphFilter = Backbone.Model.extend({
	defaults: {
		index: true,
		average: true,
		all: false
	},
	initialize: function() {
		var that = this;
		_.each(this.get('domains'), function(domain) {
			that.set(domain.key, false, {trigger: false});
		});
		this.set('domainKeys', _.pluck(this.get('domains'), 'key'), {trigger: false});
	},
	isSelected: function(item) {
		return this.get(item);
	},
	getDomains: function() {
		return this.get('domainKeys');
	},
	isClickable: function(item) {
		var domain = _.findWhere(this.get('domains'), {key: item});
		return domain?
			domain.type!=='satellite':
			true;
	},
	toggle: function(item) {
		var that = this;
		if (this.has(item)) {
			this.set(item, !this.get(item));

			// if "all" was clicked then adapt domains as necessary
			if (item==='all') {
				_.each(this.getDomains(), function(domain) {
					if (that.isClickable(domain)) {
						that.set(domain, that.get(item), {trigger: false});
					}
				});
			}

			// if a domain was clicked adapt "all" as necessary
			if (_.contains(this.getDomains(), item)) {
				var allDomainsEnabled = true;
				_.each(this.getDomains(), function(domain) {
					if (!that.get(domain)) allDomainsEnabled = false;
				});
				that.set('all', allDomainsEnabled, {trigger: false});
			}
		}
	}
});

})();

(function() {
"use strict";

app.views.MainMenu = Backbone.View.extend({
	initialize: function() {
		this.listenTo(this.model, 'change', this.render);
	},
	tagName: 'nav',
	events: {
		'click li.countries a': 'countriesMenuClicked',
		'click li.domains a': 'domainsMenuClicked',
		'click li.countries li a': 'subMenuItemClicked',
		'click li.domains li a': 'subMenuItemClicked',
		'click a.toggler': 'togglerClicked'
	},
	countriesMenuClicked: function(e) {
		e.preventDefault();
		this.$countriesLink.toggleClass('expanded collapsed');
		this.$countriesList.slideToggle(100);
		this.hideDomains();
	},
	hideCountries: function() {
		this.$countriesList.hide();
		this.$countriesLink.removeClass('expanded').addClass('collapsed');
	},
	domainsMenuClicked: function(e) {
		e.preventDefault();
		this.$domainsLink.toggleClass('expanded collapsed');
		this.$domainsList.slideToggle(100);
		this.hideCountries();
	},
	hideDomains: function() {
		this.$domainsList.hide();
		this.$domainsLink.removeClass('expanded').addClass('collapsed');
	},
	subMenuItemClicked: function() {
		this.$('ul.main,a.toggler').removeClass('expanded').addClass('collapsed');
	},
	togglerClicked: function(e) {
		this.$('ul.main,a.toggler').toggleClass('collapsed expanded');
		e.preventDefault();
	},
	render: function() {
		console.log('rendering menu');
		this.$el.html(app.templates.MainMenu(this.model.attributes));
		this.$countriesList = this.$('li.countries ul');
		this.$countriesLink = this.$('li.countries');
		this.$domainsList = this.$('li.domains ul');
		this.$domainsLink = this.$('li.domains');
		this.hideCountries();
		this.hideDomains();
		this.$('ul.main,a.toggler').addClass('collapsed');
		return this;
	}
});


})();

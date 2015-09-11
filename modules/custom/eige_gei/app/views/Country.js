(function($) {
"use strict";

app.views.Country = Backbone.View.extend({
	spinners: {},
	initialize: function(options) {
		this.controller = options.controller;
		this.listenTo(this.controller.tabsMenu, 'change', this.updateTabsMenu);
		this.render();

		this.updateTabsMenu();
		
		var countryTrendsGraph = new app.views.CountryTrendsGraph({
			graphData: options.countryTrendsGraphData, filter: options.countryTrendsGraphFilter
		});
		this.registerChild(countryTrendsGraph);
		this.$('section.tab.tab_trends div.visualization').append(countryTrendsGraph.el);

		var countryTrendsGraphExporterButton = new app.views.GraphExporterButton({
			target: countryTrendsGraph.$('svg'),
			filename: 'country-trends-' + this.controller.yearNavigator.getSelectedCountryKey()
		});
		this.registerChild(countryTrendsGraphExporterButton);
		countryTrendsGraph.$el.append(countryTrendsGraphExporterButton.el).addClass('exportable');

		// horizontal bar graph		
		for(var i=0; i<options.horizontalGraphsForAllYears.data.length; i++) {
			options.horizontalGraphsForAllYears.data[i].svgWidth = 500;
		}
		var horizontalGraphsForAllYears = new app.views.MultiHorizontalBarGraph({graphsData: options.horizontalGraphsForAllYears});
		this.registerChild(horizontalGraphsForAllYears);
		this.$('section.tab.tab_trends div.bar').append(horizontalGraphsForAllYears.el);
		this.listenTo(horizontalGraphsForAllYears, 'change:year', _.bind(this.controller.changedYear, this.controller));
		
		// domains
		for(var i=0; i<options.countryDomainsDataPanels.length; i++) {
			var panel = new app.views.CountryDomainDataPanel({model: options.countryDomainsDataPanels[i]});
			this.registerChild(panel);
			this.$('section.tab.tab_trends div.domains').append(panel.el);

			var panelGraphExporterButton = new app.views.GraphExporterButton({
				target: panel.$('div.data'),
				filename: 'country-domain-' + this.controller.yearNavigator.getSelectedCountryKey() + '-' + options.countryDomainsDataPanels[i].get('domain')
			});
			this.registerChild(panelGraphExporterButton);
			panel.$('div.data').append(panelGraphExporterButton.el).addClass('exportable');
		}
		
		this.startAnimation();
	},
	startAnimation: function() {
		var that = this,
		    startTime = Date.now(),
		    animatables = that.getChildren();
		function animate() {
			window.requestAnimationFrame(animate);
			for(var i = 0; i<animatables.length; i++) {
				if (animatables[i].animate) animatables[i].animate(Date.now() - startTime - i*100);
			}
		}
		window.requestAnimationFrame(animate);
	},
	events: {
		'click header li.compare a': 'compareClicked',
		'click ul.tabs li a': 'clickTab',
		'click .tab.tab_policy ul.pager a': 'clickMoreLink',
		'click .tab.tab_policy .views-row.expandable': 'toggleRow'
	},
	clickTab: function(e) {
		e.preventDefault();
		var tab = e.currentTarget.hash.substr(1);
		this.controller.tabsMenu.select(tab);
		// the domains tab is not a tab but an anchor link to a specific place on the first tab
		if (tab==='domains') {
			Backbone.trigger('scrollTo', 'section.tab_domains div.domains');
		}
	},
	compareClicked: function(e) {
		e.preventDefault();
		Backbone.trigger('country:compare:add', {country: this.controller.yearNavigator.getSelectedCountryKey()});
		app.router.navigate('countries-comparison', {trigger: true});
	},
	clickMoreLink: function(e) {
		e.preventDefault();
		this.$('.tab.tab_policy div.item-list').remove();
		this.controller.fetchAndRenderMorePolicyResults(e.currentTarget.getAttribute('data-link'));
	},
	render: function() {
		this.$el.html(app.templates.Country({
			country: this.controller.yearNavigator.getSelectedCountryKey(),
			tabsMenu: this.controller.tabsMenu
		})).addClass(this.controller.yearNavigator.getCssClass());
		return this;
	},
	renderContent: function(content) {
		if (content.field_gei_country_url.und) {
			this.$('header li.report').show().find('a').attr('href', app.host + content.field_gei_country_url.und[0].url);
		}
		if (content.field_gei_country_context.und) {
			this.$('section.tab.tab_context_data').html(content.field_gei_country_context.und[0].value);
		}
	},
	renderPolicy: function(policy) {
		var $policy = this.applyCollapse(this.convertLinks($(policy).find('div.view-filters').remove().end()));
		this.$('.tab.tab_policy').html($policy);
	},
	renderMorePolicyResults: function(content) {
		var $content = this.applyCollapse(this.convertLinks($(content)));
		this.$('.tab.tab_policy .view-content').append($content.find('.view-content .views-row')); // new rows
		this.$('.tab.tab_policy .view').append($content.find('.item-list')); // paginator
	},
	updateTabsMenu: function() {
		console.log('updating tabs menu');
		this.$('.tabs li').removeClass('selected').filter('.tab_' + this.controller.tabsMenu.getSelected()).addClass('selected');
		this.$('section.tab').hide().filter('.tab_' + this.controller.tabsMenu.getSelected()).show();
	},
	convertLinks: function($content) {
		return $content.find('a').each(function() {
			var link = $(this).attr('href').split('?')[1];
			$(this).attr('data-bypass', '').attr('href', '#').attr('data-link', link);
		}).end();
	},
	applyCollapse: function($content) {
		$content.find('.views-row').addClass('expandable collapsed').find('.text-secondary').hide();
		return $content;
	},
	toggleRow: function(e) {
		e.preventDefault();
		$(e.currentTarget).toggleClass('collapsed expanded').find('.text-secondary').slideToggle(100);
	},
	appendSpinner: function(id) {
		this.removeSpinner(id);
		this.spinners[id] = new app.views.SmallSpinner();
		this.registerChildren(this.spinners[id]);
		if (id==='context') this.$('.tab.tab_context_data').append(this.spinners[id].el);
		if (id==='policy') this.$('.tab.tab_policy').append(this.spinners[id].el);
	},
	removeSpinner: function(id) {
		if (this.spinners[id]) {
			this.spinners[id].close();
		}
	}
});

})(window.jQuery);

(function($) {
"use strict";

app.views.Policies = Backbone.View.extend({
	initialize: function(options) {
		this.controller = options.controller;
		this.render();
	},
	events: {
		'click .views-exposed-widget > label.clickable': 'clickSearchLabel',
		'submit header form': 'submitSearchForm',
		'click div.view-content a': 'clickResultsLink',
		'click ul.pager a': 'clickMoreLink',
		'click .main-wrapper .views-row.expandable': 'toggleRow',
		'click': 'clickAnywhere'
	},
	render: function() {
		this.$el.html(app.templates.Policies());
		return this;
	},
	renderFrontpageContent: function(searchContent, indexContent) {
		this.$('header .wrapper').append(this.extractForm(searchContent));
		this.$form = this.$('header form');
		this.$('.main-wrapper').html(this.extractIndex(indexContent));
	},
	renderSearchResultsContent: function(content) {
		this.$('.main-wrapper').html(this.extractFullResultsStructure(content));
	},
	appendSearchResultsContent: function(content) {
		this.$('.main-wrapper .item-list').remove(); // paginator
		var $content = this.applyCollapse(this.applyCollapse(this.convertLinks($(content))));
		this.$('.main-wrapper .view-content').append($content.find('.view-content .views-row')); // new rows
		this.$('.main-wrapper .view').append($content.find('.item-list')); // paginator
	},
	extractForm: function(searchContent) {
		var $searchContent = $(searchContent).find('form');
	
		$searchContent.find('#edit-dt-wrapper').remove(); // wtf dropdown
		$searchContent.find('#edit-df-wrapper').remove(); // wtf dropdown
		$searchContent.find('.views-exposed-widget.views-reset-button').remove(); // clear all button not implemented
		
		$searchContent.find('.views-exposed-widget:not(.views-widget-filter-populate)').each(function() {
			$(this).find('label').addClass('clickable collapsed');
			$(this).find('.views-widget').addClass('expandable').hide();
		});
		
		$searchContent.find('label[for=edit-t]').attr('for', 'edit-t2'); // to avoid collision with main search of drupal
		$searchContent.find('input#edit-t').attr('id', 'edit-t2');       // to avoid collision with main search of drupal
		
		$searchContent.find('#edit-t-wrapper, .views-submit-button').wrapAll('<div class="wrapper" />'); // for css
		
		return $searchContent;
	},
	extractIndex: function(searchContent) {
		return this.convertLinks($(searchContent));
	},
	extractFullResultsStructure: function(resultsContent) {
		return this.applyCollapse(this.convertLinks($(resultsContent).find('div.view-filters').remove().end()));
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
	clickSearchLabel: function(e) {
		e.preventDefault();
		// hide all others
		$(e.currentTarget).parents('.views-exposed-widget').siblings('.views-exposed-widget').find('label.clickable').removeClass('expanded').addClass('collapsed').end().find('.views-widget.expandable').hide();
		// toggle this
		$(e.currentTarget).toggleClass('expanded collapsed').next('.views-widget').toggle();
	},
	clickAnywhere: function(e) {
		// collapse filters unless the click was on label or an filter checkbox
		if ($(e.target).is('label.clickable, input[type=checkbox]')) return;
		this.$('.views-exposed-widget').find('label.clickable').removeClass('expanded').addClass('collapsed').end().find('.views-widget.expandable').hide();
	},
	submitSearchForm: function(e) {
		e.preventDefault();
		this.controller.fetchSearchResultsAndRenderContent(this.$form.serialize());
	},
	clickResultsLink: function(e) {
		e.preventDefault();
		this.controller.fetchSearchResultsAndRenderContent(e.currentTarget.getAttribute('data-link'));
	},
	clickMoreLink: function(e) {
		e.preventDefault();
		this.$('div.item-list').remove();
		this.controller.fetchSearchResultsAndAppendContent(e.currentTarget.getAttribute('data-link'));
	},
	toggleRow: function(e) {
		e.preventDefault();
		$(e.currentTarget).toggleClass('collapsed expanded').find('.text-secondary').slideToggle(100);
	},
	showSpinner: function(spinnerRemovesContent) {
		this.removeSpinner();
		this.spinner = new app.views.SmallSpinner();
		this.registerChild(this.spinner);
		if (spinnerRemovesContent) {
			this.$('.main-wrapper').html(this.spinner.el);
		} else {
			this.$('.main-wrapper').append(this.spinner.el);
		}
	},
	removeSpinner: function() {
		if (this.spinner) {
			this.spinner.close();
		}
	}
});


})(window.jQuery);

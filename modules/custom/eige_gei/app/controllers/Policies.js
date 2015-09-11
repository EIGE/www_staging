(function($) {
"use strict";

app.controllers.policies = {
	frontpageBlockId: 'policy_initiatives|block_1',                   // drupal view_id|block_id
	searchFormAndResultsBlockId: 'policy_initiatives_search|block_1', // drupal view_id|block_id
	createView: function() {
		this.view = new app.views.Policies({
			controller: this
		});
		this.fetchFrontPageAndSearchFormAndRenderContent();
		Backbone.trigger('title', app.p.t('policies.title'));
		Backbone.trigger('view:rendered');
		return this.view;
	},
	fetchFrontPageAndSearchFormAndRenderContent: function() {
		this.fetchDataAndRunCallback([this.searchFormAndResultsBlockId, this.frontpageBlockId], null, true, this.renderFrontpageContent);
	},
	renderFrontpageContent: function(content) {
		this.view.renderFrontpageContent(content[0], content[1]);
	},
	fetchSearchResultsAndRenderContent: function(params) {
		this.fetchDataAndRunCallback([this.searchFormAndResultsBlockId], params, true, this.renderSearchResultsContent);
	},
	renderSearchResultsContent: function(content) {
		this.view.renderSearchResultsContent(content);
	},
	fetchSearchResultsAndAppendContent: function(params) {
		this.fetchDataAndRunCallback([this.searchFormAndResultsBlockId], params, false, this.appendSearchResultsContent);
	},
	appendSearchResultsContent: function(content) {
		this.view.appendSearchResultsContent(content);
	},
	fetchDataAndRunCallback: function(ids, params, spinnerRemovesContent, callback) {
		var that = this;
		
		that.view.showSpinner(spinnerRemovesContent);
		if (that.contentRequest && that.contentRequest.abort) that.contentRequest.abort(); // cancel possible previous pending ajax request
		that.contentRequest = $.ajax({
			url: app.root + '/json/block' + (ids.length>1?'s':'') + '/' + ids.join('/'),
			data: params
		});
		
		$.when(that.contentRequest).done(function(content) {
			delete that.contentRequest;
			that.view.removeSpinner();
			callback.apply(that, [content]); // call the callback on this controller, passing the result content
		}).fail(function(e) {
			that.view.removeSpinner();
			if (e.status===200) {
				// no domain description in . do nothing
				return;
			}
			if (e.status===0) {
				// probably aborted previous ajax. do nothing
				return;
			}
			// communication error
			Backbone.trigger('error', e);
		});
	}	
};

})(window.jQuery);

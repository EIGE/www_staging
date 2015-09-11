(function() {
"use strict";

app.views.Breadcrumb = Backbone.View.extend({
	template: _.template(document.getElementById("template-breadcrumb").innerHTML),
	initialize: function() {
		this.listenTo(this.model, 'change', this.render);
	},
	render: function() {
		console.log('rendering breadcrumb');
		this.$el.html(this.template({elements: this.model.get('elements')}));
		return this;
	}
});


})();

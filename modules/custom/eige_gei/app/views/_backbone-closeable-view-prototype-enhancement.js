(function() {
"use strict";

Backbone.View.prototype.getChildren = function() {
	if (typeof this.children === 'undefined') {
		this.children = [];
	}
	return this.children;
}

Backbone.View.prototype.registerChild = function(child) {
	this.getChildren().push(child);
}
Backbone.View.prototype.registerChildren = function(children) {
	for(var i=0; i<children.length; i++) {
		this.getChildren().push(children[i]);
	}
}
Backbone.View.prototype.close = function() {
	for(var i=0; i<this.getChildren().length; i++) {
		if (this.children[i]) this.children[i].close();
	}
	this.unbind();
	this.remove();
}



})();
(function() {
"use strict";


QUnit.test("sanitize", function(assert) {
	assert.equal('', app.utils.sanitize(null));
	assert.equal('', app.utils.sanitize(NaN));
	assert.equal('', app.utils.sanitize(undefined));
	assert.equal('', app.utils.sanitize(''));
	assert.equal('john', app.utils.sanitize('john'));
	assert.equal('john', app.utils.sanitize('JoHn'));
	assert.equal('john-test', app.utils.sanitize('john test'));
	assert.equal('john-test', app.utils.sanitize('John Test'));
	assert.equal('1234567890abc-', app.utils.sanitize('1234567890abc-!@#$%^&*()_+='));
});


})();

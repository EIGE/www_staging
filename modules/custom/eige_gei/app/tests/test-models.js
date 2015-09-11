(function() {
"use strict";


QUnit.test("YearNavigator getAvailableYears with sorting", function(assert) {
	assert.deepEqual([], new app.models.YearNavigator().getAvailableYears());
	assert.deepEqual([], new app.models.YearNavigator({availableYears: []}).getAvailableYears());

	assert.deepEqual([1], new app.models.YearNavigator({availableYears: [1]}).getAvailableYears());
	assert.deepEqual([1,1], new app.models.YearNavigator({availableYears: [1,1]}).getAvailableYears());

	assert.deepEqual([1999,2000,2010], new app.models.YearNavigator({availableYears: [1999,2010,2000]}).getAvailableYears());
	assert.deepEqual([1,2,3,4,5,6,7,8,9], new app.models.YearNavigator({availableYears: [1,2,3,4,5,6,9,8,7]}).getAvailableYears());
});

QUnit.test("YearNavigator selectYear and getSelectedYear", function(assert) {
	assert.equal(2000, new app.models.YearNavigator({availableYears: [1999,2010,2000]}).selectYear(2000).getSelectedYear());

	// selects max
	assert.equal(2010, new app.models.YearNavigator({availableYears: [1999,2010,2000]}).selectYear(11).getSelectedYear());
	assert.equal(2010, new app.models.YearNavigator({availableYears: [1999,2010,2000]}).selectYear('lol').getSelectedYear());
	assert.equal(2010, new app.models.YearNavigator({availableYears: [1999,2010,2000]}).selectYear(null).getSelectedYear());
});

QUnit.test("YearNavigator isSelectedYear", function(assert) {
	assert.ok(new app.models.YearNavigator({availableYears: [1999,2010,2000]}).selectYear(2000).isSelectedYear(2000));
	assert.ok(new app.models.YearNavigator({availableYears: [1999,2010,2000]}).selectYear(null).isSelectedYear(2010));
});

QUnit.test("YearNavigator getMinYear getMaxYear", function(assert) {
	assert.equal(1999, new app.models.YearNavigator({availableYears: [1999,2010,2000]}).getMinYear());
	assert.equal(2010, new app.models.YearNavigator({availableYears: [2010]}).getMinYear());

	assert.equal(2010, new app.models.YearNavigator({availableYears: [1999,2010,2000]}).getMaxYear());
	assert.equal(2010, new app.models.YearNavigator({availableYears: [2010]}).getMaxYear());
});

QUnit.test("YearNavigator _selectMaxYear (private method testing - test may be removed)", function(assert) {
	assert.equal(2010, new app.models.YearNavigator({availableYears: [1999,2010,2000]})._selectMaxYear().getSelectedYear());
	assert.equal(123, new app.models.YearNavigator({availableYears: [123]})._selectMaxYear().getSelectedYear());
	assert.equal(undefined, new app.models.YearNavigator({availableYears: []})._selectMaxYear().getSelectedYear());
});

QUnit.test("YearNavigator getPreviousYear", function(assert) {
	assert.equal(2000, new app.models.YearNavigator({availableYears: [1999,2010,2000]}).getPreviousYear(2010));
	assert.equal(1999, new app.models.YearNavigator({availableYears: [1999,2010,2000]}).getPreviousYear(2000));
	assert.equal(undefined, new app.models.YearNavigator({availableYears: [1999,2010,2000]}).getPreviousYear(1999));
});

QUnit.test("YearNavigator selectCountry getSelectedCountryKey", function(assert) {
	var countries = new app.collections.Countries(app.data.countries);
	var firstCountryKey = countries.at(0).id;
	
	assert.equal(firstCountryKey, new app.models.YearNavigator({availableCountries: countries}).selectCountry('').getSelectedCountryKey());
	assert.equal(firstCountryKey, new app.models.YearNavigator({availableCountries: countries}).selectCountry(null).getSelectedCountryKey());
	assert.equal(firstCountryKey, new app.models.YearNavigator({availableCountries: countries}).selectCountry(' ').getSelectedCountryKey());
	assert.equal(firstCountryKey, new app.models.YearNavigator({availableCountries: countries}).selectCountry('test').getSelectedCountryKey());

	assert.equal('IT', new app.models.YearNavigator({availableCountries: countries}).selectCountry('IT').getSelectedCountryKey());
});

QUnit.test("YearNavigator getAvailableCountries", function(assert) {
	var countries = new app.collections.Countries(app.data.countries);
	
	assert.equal(countries, new app.models.YearNavigator({availableCountries: countries}).getAvailableCountries());

});

QUnit.test("YearNavigator getUrl", function(assert) {
	var countries = new app.collections.Countries(app.data.countries);
	var years = [1999, 2010, 2000];
	var domains = [
		{key: 'work', subdomains: [
			{key: 'work1'},
			{key: 'work2'}
		]},
		{key: 'money', subdomains: [
			{key: 'money1'},
			{key: 'money2'}
		]},
		{key: 'foo1'},
		{key: 'foo2', subdomains: null},
		{key: 'foo3', subdomains: []}
	];

	
	function navigator() {
		return new app.models.YearNavigator({availableYears: years, availableCountries: countries, availableDomains: domains});
	}
	
	app.root = 'root';
	
	assert.equal('root/1', navigator().set('context', 'index').getUrlForYear(1));
	assert.equal('root/1', navigator().set('context', 'index').selectCountry('EU-28').getUrlForYear(1));
	assert.equal('root/1/EL', navigator().set('context', 'index').selectCountry('EL').getUrlForYear(1));

	assert.equal('root/2000/country', navigator().set('context', 'country').getUrlForYear(2000));
	assert.equal('root/2000/country/EL', navigator().set('context', 'country').selectCountry('EL').getUrlForYear(2000));

	assert.equal('root/2000/domain/money', navigator().set('context', 'domain').selectDomain('money').getUrlForYear(2000));
	assert.equal('root/2000/domain/money/EL', navigator().set('context', 'domain').selectDomain('money').selectCountry('EL').getUrlForYear(2000));

	assert.equal('root/2000/map', navigator().set('context', 'map').getUrlForYear(2000));
	assert.equal('root/2000/map/EL', navigator().set('context', 'map').selectCountry('EL').getUrlForYear(2000));

	// subdomain selection corner cases
	assert.equal('root/2000/domain/money', navigator().set('context', 'domain').selectDomain('money').selectSubdomain().getUrlForYear(2000));
	assert.equal('root/2000/domain/money', navigator().set('context', 'domain').selectDomain('money').selectSubdomain('').getUrlForYear(2000));
	assert.equal('root/2000/domain/money', navigator().set('context', 'domain').selectDomain('money').selectSubdomain(null).getUrlForYear(2000));
	assert.equal('root/2000/domain/money', navigator().set('context', 'domain').selectDomain('money').selectSubdomain('lol').getUrlForYear(2000));

	// subdomain selection
	assert.equal('root/2000/domain/money', navigator().set('context', 'domain').selectDomain('money').selectSubdomain('0').getUrlForYear(2000));
	assert.equal('root/2000/domain/money/1', navigator().set('context', 'domain').selectDomain('money').selectSubdomain('1').getUrlForYear(2000));
	assert.equal('root/2000/domain/money/2', navigator().set('context', 'domain').selectDomain('money').selectSubdomain('2').getUrlForYear(2000));
	assert.equal('root/2000/domain/money', navigator().set('context', 'domain').selectDomain('money').selectSubdomain('3').getUrlForYear(2000));

	// subdomain selection for domain without subdomains
	assert.equal('root/2000/domain/foo1', navigator().set('context', 'domain').selectDomain('foo1').selectSubdomain('1').getUrlForYear(2000));
	assert.equal('root/2000/domain/foo1', navigator().set('context', 'domain').selectDomain('foo1').selectSubdomain('test').getUrlForYear(2000));
	assert.equal('root/2000/domain/foo2', navigator().set('context', 'domain').selectDomain('foo2').selectSubdomain('1').getUrlForYear(2000));
	assert.equal('root/2000/domain/foo2', navigator().set('context', 'domain').selectDomain('foo2').selectSubdomain('test').getUrlForYear(2000));
	assert.equal('root/2000/domain/foo3', navigator().set('context', 'domain').selectDomain('foo3').selectSubdomain('1').getUrlForYear(2000));
	assert.equal('root/2000/domain/foo3', navigator().set('context', 'domain').selectDomain('foo3').selectSubdomain('test').getUrlForYear(2000));

});


QUnit.test("YearNavigator selectDomain and getSelectedDomain", function(assert) {
	var domains = [{key: 'foo'}, {key: 'bar'}];
	
	assert.equal('foo', new app.models.YearNavigator({availableDomains: domains}).selectDomain('').getSelectedDomain().key);
	assert.equal('foo', new app.models.YearNavigator({availableDomains: domains}).selectDomain(null).getSelectedDomain().key);
	assert.equal('foo', new app.models.YearNavigator({availableDomains: domains}).selectDomain().getSelectedDomain().key);
	assert.equal('foo', new app.models.YearNavigator({availableDomains: domains}).selectDomain('LOL').getSelectedDomain().key);
	assert.equal('foo', new app.models.YearNavigator({availableDomains: domains}).selectDomain('foo').getSelectedDomain().key);
	assert.equal('bar', new app.models.YearNavigator({availableDomains: domains}).selectDomain('bar').getSelectedDomain().key);
	
	assert.equal(null, new app.models.YearNavigator({availableDomains: domains}).selectDomainStrict('').getSelectedDomain());
	assert.equal(null, new app.models.YearNavigator({availableDomains: domains}).selectDomainStrict(null).getSelectedDomain());
	assert.equal(null, new app.models.YearNavigator({availableDomains: domains}).selectDomainStrict().getSelectedDomain());
	assert.equal(null, new app.models.YearNavigator({availableDomains: domains}).selectDomainStrict('LOL').getSelectedDomain());
	assert.equal('foo', new app.models.YearNavigator({availableDomains: domains}).selectDomainStrict('foo').getSelectedDomain().key);
	assert.equal('bar', new app.models.YearNavigator({availableDomains: domains}).selectDomainStrict('bar').getSelectedDomain().key);
	
});


QUnit.test("YearNavigator getSelectedSubdomain", function(assert) {
	var domains = [
		{key: 'work', subdomains: [
			{key: 'work1'},
			{key: 'work2'}
		]},
		{key: 'money', subdomains: [
			{key: 'money1'},
			{key: 'money2'}
		]},
		{key: 'foo1'},
		{key: 'foo2', subdomains: null},
		{key: 'foo3', subdomains: []}
	];
	
	assert.equal('work1', new app.models.YearNavigator({availableDomains: domains}).selectDomain('work').selectSubdomain(1).getSelectedSubdomain().key);
	assert.equal('work2', new app.models.YearNavigator({availableDomains: domains}).selectDomain('work').selectSubdomain(2).getSelectedSubdomain().key);

	// corner cases
	assert.notOk(new app.models.YearNavigator({availableDomains: domains}).selectDomain('work').selectSubdomain(0).getSelectedSubdomain());
	assert.notOk(new app.models.YearNavigator({availableDomains: domains}).selectDomain('work').selectSubdomain(10).getSelectedSubdomain());
	assert.notOk(new app.models.YearNavigator({availableDomains: domains}).selectDomain('work').selectSubdomain(null).getSelectedSubdomain());
	assert.notOk(new app.models.YearNavigator({availableDomains: domains}).selectDomain('work').selectSubdomain().getSelectedSubdomain());
	assert.notOk(new app.models.YearNavigator({availableDomains: domains}).selectDomain('work').selectSubdomain('').getSelectedSubdomain());
	assert.notOk(new app.models.YearNavigator({availableDomains: domains}).selectDomain('work').selectSubdomain('whatever').getSelectedSubdomain());

});

QUnit.test("CountryTabsMenu", function(assert) {
	var menu = new app.models.CountryTabsMenu({items: ['foo', 'bar', 'test']});
	
	assert.equal('foo,bar,test', menu.getItems().join(','));

	assert.equal('foo', menu.getSelected());
	assert.ok(menu.isSelected('foo'));
	
	menu.select('whatever');
	assert.equal('foo', menu.getSelected());
	assert.ok(menu.isSelected('foo'));

	menu.select('');
	assert.equal('foo', menu.getSelected());
	assert.ok(menu.isSelected('foo'));

	menu.select(null);
	assert.equal('foo', menu.getSelected());
	assert.ok(menu.isSelected('foo'));

	menu.select('foo');
	assert.equal('foo', menu.getSelected());
	assert.ok(menu.isSelected('foo'));

	menu.select('bar');
	assert.equal('bar', menu.getSelected());
	assert.ok(menu.isSelected('bar'));

	menu.select('test');
	assert.equal('test', menu.getSelected());
	assert.ok(menu.isSelected('test'));

});

QUnit.test("CountryTrendsGraphFilter", function(assert) {
	var filter = new app.models.CountryTrendsGraphFilter({domains: [{key: 'foo'}, {key: 'bar'}, {key: 'test'}]});

	assert.ok(filter.has('foo'));
	assert.ok(filter.has('bar'));
	assert.ok(filter.has('test'));
	assert.notOk(filter.has('whatever'));
	
	assert.notOk(filter.get('foo'));
	filter.toggle('foo');
	assert.ok(filter.get('foo'));
	
	// all special value
	filter.toggle('all');
	assert.ok(filter.get('all'));
	assert.ok(filter.get('foo'));
	assert.ok(filter.get('bar'));
	assert.ok(filter.get('test'));
	
	filter.toggle('all');
	assert.notOk(filter.get('all'));
	assert.notOk(filter.get('foo'));
	assert.notOk(filter.get('bar'));
	assert.notOk(filter.get('test'));

	filter.toggle('all');
	assert.ok(filter.get('all'));
	assert.ok(filter.get('foo'));
	assert.ok(filter.get('bar'));
	assert.ok(filter.get('test'));
	
	// unclick one = toggle "all"
	filter.toggle('foo');
	assert.notOk(filter.get('all'));
	assert.notOk(filter.get('foo'));
	assert.ok(filter.get('bar'));
	assert.ok(filter.get('test'));

	filter.toggle('bar');
	filter.toggle('test');
	assert.notOk(filter.get('all'));
	assert.notOk(filter.get('foo'));
	assert.notOk(filter.get('bar'));
	assert.notOk(filter.get('test'));


	// click all = toggle "all"
	filter.toggle('bar');
	filter.toggle('foo');
	filter.toggle('test');
	assert.ok(filter.get('all'));
	assert.ok(filter.get('foo'));
	assert.ok(filter.get('bar'));
	assert.ok(filter.get('test'));
	

	var filter = new app.models.CountryTrendsGraphFilter({domains: [{key: 'foo', type: 'main'}, {key: 'bar', type: 'main'}, {key: 'test', type: 'satellite'}]});
	
	// is clickable
	assert.ok(filter.isClickable('all'));
	assert.ok(filter.isClickable('foo'));
	assert.ok(filter.isClickable('bar'));
	assert.notOk(filter.isClickable('test'));
	
	// all special value
	filter.toggle('all');
	assert.ok(filter.get('all'));
	assert.ok(filter.get('foo'));
	assert.ok(filter.get('bar'));
	assert.notOk(filter.get('test'));
	

});

QUnit.test("MultipleSelect", function(assert) {
	var a = new Backbone.Model({id: 'a', name: 'aaaa'});
	var b = new Backbone.Model({id: 'b', name: 'bbbb'});
	var c = new Backbone.Model({id: 'c', name: 'cccc'});

	var select = new app.models.MultipleSelect({options: [a, b, c]});
	
	assert.notOk(select.isSelected('a'));
	assert.notOk(select.isSelected('b'));
	assert.notOk(select.isSelected('c'));
	
	select.select('a');
	assert.ok(select.isSelected('a'));
	assert.notOk(select.isSelected('b'));
	assert.notOk(select.isSelected('c'));
	
	select.select('b');
	select.select('c');
	assert.ok(select.isSelected('a'));
	assert.ok(select.isSelected('b'));
	assert.ok(select.isSelected('c'));
	
	select.deselect('a');
	assert.notOk(select.isSelected('a'));
	assert.ok(select.isSelected('b'));
	assert.ok(select.isSelected('c'));
	
	select.deselect('b');
	select.deselect('c');
	assert.notOk(select.isSelected('a'));
	assert.notOk(select.isSelected('b'));
	assert.notOk(select.isSelected('c'));
	
});

QUnit.test("SingleSelect", function(assert) {
	var a = new Backbone.Model({id: 'a', name: 'aaaa'});
	var b = new Backbone.Model({id: 'b', name: 'bbbb'});
	var c = new Backbone.Model({id: 'c', name: 'cccc'});

	var select = new app.models.SingleSelect({options: [a, b, c]});
	
	assert.notOk(select.isSelected('a'));
	assert.notOk(select.isSelected('b'));
	assert.notOk(select.isSelected('c'));
	
	select.select('a');
	assert.equal('a', select.getSelectedOption());
	assert.ok(select.isSelected('a'));
	assert.notOk(select.isSelected('b'));
	assert.notOk(select.isSelected('c'));
	
	select.select('b');
	assert.equal('b', select.getSelectedOption());
	assert.notOk(select.isSelected('a'));
	assert.ok(select.isSelected('b'));
	assert.notOk(select.isSelected('c'));
	
});

})();

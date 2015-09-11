(function() {
"use strict";

app.data = app.data || {};
app.data.tree =
[
	{key: 'work', color: '#4285F3', type: 'main', maxValue: 100, subdomains: [
		{key: 'work1', variables: [
			{key: 'work11'},
			{key: 'work12'}
		]},
		{key: 'work2', variables: [
			{key: 'work21'},
			{key: 'work22'},
			{key: 'work23'}
		]}
	]},
	{key: 'money', color: '#E39206', type: 'main', maxValue: 100, subdomains: [
		{key: 'money1', variables: [
			{key: 'money11'},
			{key: 'money12'}
		]},
		{key: 'money2', variables: [
			{key: 'money21'},
			{key: 'money22'}
		]}
	]},
	{key: 'knowledge', color: '#7eaa00', type: 'main', maxValue: 100, subdomains: [
		{key: 'knowledge1', variables: [
			{key: 'knowledge11'},
			{key: 'knowledge12'}
		]},
		{key: 'knowledge2', variables: [
			{key: 'knowledge21'}
		]}
	]},
	{key: 'time', color: '#F0592A', type: 'main', maxValue: 100, subdomains: [
		{key: 'time1', variables: [
			{key: 'time11'},
			{key: 'time12'}
		]},
		{key: 'time2', variables: [
			{key: 'time21'},
			{key: 'time22'}
		]}
	]},
	{key: 'power', color: '#aa0029', type: 'main', maxValue: 100, subdomains: [
		{key: 'power1', variables: [
			{key: 'power11'},
			{key: 'power12'},
			{key: 'power13'}
		]},
		{key: 'power2', variables: [
			{key: 'power21'},
			{key: 'power22'}
		]}
	]},
	{key: 'health', color: '#AA007E', type: 'main', maxValue: 100, subdomains: [
		{key: 'health1', variables: [
			{key: 'health11'},
			{key: 'health12'},
			{key: 'health13'}
		]},
		{key: 'health2', variables: [
			{key: 'health21'},
			{key: 'health22'}
		]}
	]},
	{key: 'intersecting-inequalities', color: '#95634D', type: 'satellite', maxValue: 100, hollow: true, variables: [
		{key: 'intersecting-inequalities01'},
		{key: 'intersecting-inequalities02'},
		{key: 'intersecting-inequalities03'},
		{key: 'intersecting-inequalities04'},
		{key: 'intersecting-inequalities05'},
		{key: 'intersecting-inequalities06'}
	]},
	{key: 'violence', color: '#95634D', type: 'satellite', maxValue: 3, dissalowComparisonWithPreviousYears: true, textValues: true, variables: [
		{key: 'violence11'},
		{key: 'violence12'},
		{key: 'violence13'},
		{key: 'violence14'},
		{key: 'violence21'},
		{key: 'violence22'}
	]}
];

})();
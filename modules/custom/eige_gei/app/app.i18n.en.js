(function() {
"use strict";

app.strings = {
	locale: "en",
	errors: {
		ajax_500: "Could not communicate with server. Please try again.\nError message was: %{message} (%{status})",
		ajax_generic: "Could not communicate with server. Please try again.\nError message was: %{message} (%{status})",
		ajax_timeout: "Communication with server timed out. Please check your internet connection and try again.",
		ajax_connection_error: "Communication with server could not be established. Please check your internet connection and try again.",
		generic: "An error has occured. Please try again."
	},
	loading: "Loading...",
	title_short: "GEI",
	title_long: "Gender Equality Index",
	website_title_short: "EIGE",
	website_title_long: "European Institute for Gender Equality",
	countries: {
		long: {
			'EU-28': 'European Union',
			BE: 'Belgium',
			BG: 'Bulgaria',
			CZ: 'Czech Republic',
			DK: 'Denmark',
			DE: 'Germany',
			EE: 'Estonia',
			IE: 'Ireland',
			EL: 'Greece',
			ES: 'Spain',
			FR: 'France',
			HR: 'Croatia',
			IT: 'Italy',
			CY: 'Cyprus',
			LV: 'Latvia',
			LT: 'Lithuania',
			LU: 'Luxembourg',
			HU: 'Hungary',
			MT: 'Malta',
			NL: 'Netherlands',
			AT: 'Austria',
			PL: 'Poland',
			PT: 'Portugal',
			RO: 'Romania',
			SI: 'Slovenia',
			SK: 'Slovakia',
			FI: 'Finland',
			SE: 'Sweden',
			UK: 'United Kingdom'
		},
		drupal: {
			BE: 'belgium',
			BG: 'bulgaria',
			CZ: 'czech-republic',
			DK: 'denmark',
			DE: 'germany',
			EE: 'estonia',
			IE: 'ireland',
			EL: 'greece',
			ES: 'spain',
			FR: 'france',
			HR: 'croatia',
			IT: 'italy',
			CY: 'cyprus',
			LV: 'latvia',
			LT: 'lithuania',
			LU: 'luxembourg',
			HU: 'hungary',
			MT: 'malta',
			NL: 'netherlands',
			AT: 'austria',
			PL: 'poland',
			PT: 'portugal',
			RO: 'romania',
			SI: 'slovenia',
			SK: 'slovakia',
			FI: 'finland',
			SE: 'sweden',
			UK: 'united-kingdom'
		}
	},
	tree: {
		"work1": "Participation",
		"work2": "Segregation and quality of work",
		"work": "Work",
		"money1": "Financial resources",
		"money2": "Economic situation",
		"money": "Money",
		"knowledge1": "Attainment and segregation",
		"knowledge2": "Lifelong learning",
		"knowledge": "Knowledge",
		"time1": "Care",
		"time2": "Social",
		"time": "Time",
		"power1": "Political",
		"power2": "Economic",
		"power": "Power",
		"health1": "Status",
		"health2": "Access",
		"health": "Health",
		"index": "Gender Equality Index",
		"violence1": "Violence since the age of 15",
		"violence2": "Violence in the past 12 months prior to the interview",
		"violence": "Violence",
		"intersecting-inequalities": "Intersecting Inequalities",
		"work11": "FTE employment (%)",
		"work12": "Duration of working life (years)",
		"work21": "Sectoral segregation (%)",
		"work22": "Flexible personal/family arrangements (%)",
		"work23": "Work intensity (%)",
		"money11": "Earnings (PPS)",
		"money12": "Income (PPS)",
		"money21": "Not at-risk-of-poverty (%)",
		"money22": "Income distribution S20/S80 (%)",
		"knowledge11": "Graduates in tertiary education (%)",
		"knowledge12": "Segregation in education (%)",
		"knowledge21": "Lifelong learning (%)",
		"time11": "Childcare activities (%)",
		"time12": "Domestic activities (%)",
		"time21": "Sport, culture and leisure activities (%)",
		"time22": "Volunteering and charitable activities (%)",
		"power11": "Ministerial representation (%)",
		"power12": "Parliamentary representation (%)",
		"power13": "Regional assemblies representation (%)",
		"power21": "Members of boards (%)",
		"power22": "Members of Central Bank (%)",
		"health11": "Self-perceived health (%)",
		"health12": "Life expectancy (years)",
		"health13": "Healthy life years (years)",
		"health21": "Unmet medical needs (%)",
		"health22": "Unmet dental needs (%)",
		"intersecting-inequalities01": "Foreign born (%)",
		"intersecting-inequalities02": "National born (%)",
		"intersecting-inequalities03": "Older workers (%)",
		"intersecting-inequalities04": "Younger workers (%)",
		"intersecting-inequalities05": "Lone parents/carers (%)",
		"intersecting-inequalities06": "Single person (%)",
		"violence11": "Physical violence by a partner since the age of 15 (%)",
		"violence12": "Sexual violence by a partner since the age of 15 (%)",
		"violence13": "Sexual violence by a non-partner since the age of 15 (%)",
		"violence14": "Psychological violence by a partner since the age of 15 (%)",
		"violence21": "Physical violence by a partner in the 12 months prior to the interview (%)",
		"violence22": "Sexual violence by a partner in the 12 months prior to the interview (%)",
		"violence23": "Sexual violence by a non-partner in the 12 months prior to the interview (%)"
	},
	nav: {
		index: 'Index',
		map: 'EU Map',
		countries: 'Countries',
		domains: 'Domains',
		policies: 'Policies',
		countries_comparison: 'Countries Comparison',
		about: 'About'
	},
	index: {
		title: 'Index',
		header_html: 'Index <span>%{year}</span>',
		about: {
			title: 'About Gender Equality Index',
			description_html: '<p>The Gender Equality Index assesses the impact of gender equality policies in the European Union and by Member States over time. It is built around six core domains - work, money, knowledge, time, power and health – and two satellite domains: violence against women and intersecting inequalities and it is based on EU policy priorities.</p>'
		},
		map: {
			title: 'View the Map'
		},
		downloads: {
			title: 'Downloads/Resources',
			report_title: 'Gender Equality Index Report - Measuring gender equality in the European Union 2005-2012',
			report_target: '/rdc/eige-publications/gender-equality-index-2015-measuring-gender-equality-european-union-2005-2012-report',
			scores_title: 'Gender Equality Index 2005, 2010, 2012',
			scores_target: 'app/content/gender-equality-index-2005-2010-2012.xlsx'
		}
	},
	country: {
		title: 'Country',
		header_html: '%{country}',
		year_header_html: '%{country} <span>%{year}</span>',
		report_link: 'Country profile report',
		compare: 'Compare',
		menu: {
			trends_html: '<span class="trivial">2005-2012 </span>Trends',
			domains_html: 'Breakdown<span class="trivial"> by Domain</span>',
			policy_html: '<span class="trivial">Main </span>Policy Initiatives',
			context_data_html: '<span class="trivial">Country </span>Context Data'
		},
		domains: 'Domains'
	},
	domain: {
		header_html: '%{domain} <span>%{year}</span>',
		subheader: 'More for %{domain}',
		empty: {
			violence: 'There are no data for violence for %{year}.',
			intersecting_inequalities: 'The satellite domain of Intersecting Inequalities does not have domain and sub-domain scores for %{year}. The indicators selected for the domain consist of proxies that provide information on the multi-faceted issue of intersecting inequalities.',
			select_country: 'Select a country'
		},
		violence: {
			caption_1: 'Above EU avg.',
			explanation_1: 'Higher levels of disclosed violence than in the EU overall',
			caption_2: 'EU average',
			explanation_2: 'The levels of disclosed violence are close to the EU score',
			caption_3: 'Below EU avg.',
			explanation_3: 'Lower levels of disclosed violence than in the EU overall'
		}
	},
	subdomain: {
		header_html: '<em>%{domain}</em> %{subdomain} <span>%{year}</span>'
	},
	map: {
		title: 'Map',
		header_html: 'Map <span>%{year}</span>'
	},
	about: {
		title: 'About',
		description: 'The Gender Equality Index assesses the impact of gender equality policies in the European Union and by Member States over time. It is built around six core domains - work, money, knowledge, time, power and health – and two satellite domains: violence against women and intersecting inequalities and it is based on EU policy priorities.'
	},
	policies: {
		title: 'Policies'
	},
	CountriesComparison: {
		title: 'Countries Comparison',
		header: 'Countries Comparison'
	},
	misc: {
		menu: 'Menu',
		read_more: 'Read More',
		info: 'Info',
		order: {
			title: 'Order',
			ascending: 'Ascending',
			descending: 'Descending'
		},
		sex: {
			abbr: {
				w: 'W',
				m: 'M'
			},
			full: {
				w: 'Women',
				m: 'Men'
			}
		},
		export: {
			button: 'Export',
			wait: 'Exporting graph. Please wait...'
		},
		countries: 'Countries',
		domains: 'Domains',
		years: 'Years',
		apply: 'Apply'
	},
	LineTrendGraph: {
		title: '%{domain} Trends',
		info: 'Select a country code to view its trend for the %{domain} domain for all available years.'
	},
	CountriesBarGraph: {
		title: '%{year} %{domain} scores by country',
		info: 'All EU-28 countries\' %{domain} domain scores for %{year}.'
	},
	MultiRowHorizontalBarGraph: {
		empty: 'No data'
	},
	MultiRowHorizontalBarGraphLegend: {
		title: 'Legend',
		source: {
			violence : 'Source: FRA, EU-wide Survey on Violence against Women database'
		}
	},
	MultiHorizontalBarGraph: {
		index: 'Index'
	},
	CountryTrendsGraph: {
		title: '2005-2012 Trends',
		filters: 'Filters',
		index: 'Index',
		average: 'EU Average',
		all: 'All Domains'
	},
	NoData: {
		domain_year_text: 'There are no data for %{domain} for %{year}.'
	}
};

})();

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
	title_short: "BPfA",
	title_long: "Women and men in the EU - facts and figures",
	index: {
		title: "Index",
		breadcrumb: "Areas",
		header_html: "<p>In 1995, the Fourth World Conference on Women adopted <strong>the Beijing Declaration and Platform for Action for Equality, Development and Peace (BPfA).</strong> The BPfA is an agenda for women’s empowerment. It reaffirms the fundamental principle whereby the human rights of women and the girl child are an inalienable, integral and indivisible part of universal human rights. As an agenda for action, the BPfA seeks to promote and protect the full enjoyment of all human rights and fundamental freedoms by women throughout their lives.</p>",
		footer_html: "<p>The European Union regards equality between women and men as a fundamental principle. In December 1995, the European Council acknowledged the commitment of the European Union to the BPfA and expressed its intent to review its implementation across the Member States on a yearly basis.</p><p>Since 1999 a number of quantitative and qualitative indicators have been developed by the Presidencies of the EU Council to monitor progress towards the achievement of the goals of the BPfA. By 2013 the Council adopted the conclusions and took note of the proposed indicators in eleven out of twelve critical areas defined by the BPfA. Currently, indicators for the following area are yet to be developed: Human Rights of Women.</p>",
		view_area: "View more details..."
	},
	area: {
		description: "Description",
		objectives: "Objectives",
		when_and_how: "When & How",
		indicators: "Indicators",
		indicators_empty_html: "<p>At the current stage, the European Union has not developed indicators in this field.</p>",
		resources: "Resources"
	},
	indicator: {
		data: "Data",
		concept: "Concept",
		source: "Source",
		published: "Published",
		notes: "Notes"
	},
	report: {
		date: "Date of preparing the report",
		source: "Data source",
		notes: "Notes",
		chart: {
			type: {
				table: "Data Table",
				map: "Map",
				bar: "Bar Chart",
				column: "Column Chart"
			}
		},
		filters: {
			title: 'Filter by',
			period: 'Period',
			criteria: 'Selected criteria'
		},
		graphs: {
			countries: 'Countries',
			percentage: 'Percentage'
		}
	}
};

})();
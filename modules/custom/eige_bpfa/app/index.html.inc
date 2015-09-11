<noscript>
	<div class="no-support-message">
		<p>BPfA requires <strong>JavaScript</strong> enabled.</p>
	</div>
</noscript>

<div id="bpfa">
</div>

<script type="text/template" id="template-skeleton">
	<div class="area-header">
		<h2 class="area-title"><a href="<%-app.root%>"><%-app.p.t('title_long')%></a></h2>
		<div id="bpfa-breadcrumb">
		</div>
	</div>
	<div id="bpfa-view">
	</div>
</script>

<script type="text/template" id="template-index">
	<div class="header-content-area"><div class="content-wrapper">
		<div class="content">
			<%=app.p.t('index.header_html')%>
		</div>
		<ul class="areas">
		</ul>
		<div class="content">
			<%=app.p.t('index.footer_html')%>
		</div>
	</div></div>
</script>

<script type="text/template" id="template-index-area">
	<a class="area" href="#"><%-area.get('title')%></a>
	<a class="more" href="<%-app.root%><%-area.getUrlPart()%>"><%-app.p.t('index.view_area')%></a>
	<% if (area.hasIndicators()) { %>
		<ul class="indicators">
			<% area.get('indicators').each(function(indicator) { %>
				<li><a href="<%-app.root%><%-area.getUrlPart()%><%-indicator.getUrlPart()%>"><%=indicator.get('title')%></a></li>
			<% }) %>
		</ul>
	<% } %>
</script>

<script type="text/template" id="template-area">
	<h2><span><%-area.get('title')%></span></h2>
	<nav id="bpfa-sections">
		<ul class="button-group">
			<li><a class="small button secondary" data-bypass data-scroll href="#area-description"><%-app.p.t('area.description')%></a></li>
			<li><a class="small button secondary" data-bypass data-scroll href="#area-objectives"><%-app.p.t('area.objectives')%></a></li>
			<li><a class="small button secondary" data-bypass data-scroll href="#area-when_and_how"><%-app.p.t('area.when_and_how')%></a></li>
			<li><a class="small button secondary" data-bypass data-scroll href="#area-indicators"><%-app.p.t('area.indicators')%></a></li>
			<li><a class="small button secondary" data-bypass data-scroll href="#area-resources"><%-app.p.t('area.resources')%></a></li>
		</ul>
	</nav>
	<div class="header-content-area"><div class="content-wrapper">
		<div class="content description" id="area-description">
			<h3><%-app.p.t('area.description')%></h3>
			<%=area.get('description')%>
		</div>
		<div class="content objectives" id="area-objectives">
			<h3><%-app.p.t('area.objectives')%></h3>
			<%=area.get('objectives')%>
		</div>
		<div class="content when_and_how" id="area-when_and_how">
			<h3><%-app.p.t('area.when_and_how')%></h3>
			<%=area.get('when_and_how')%>
		</div>
		<div class="indicators" id="area-indicators">
			<h3><%-app.p.t('area.indicators')%></h3>
			<% if (area.hasIndicators()) { %>
				<ul>
					<% area.get('indicators').each(function(indicator) { %>
						<li><a href="<%-app.root%><%-area.getUrlPart()%><%-indicator.getUrlPart()%>"><%=indicator.get('title')%></a></li>
					<% }) %>
				</ul>
			<% } else { %>
				<%=app.p.t('area.indicators_empty_html')%>
			<% } %>
		</div>
		<div class="content resources" id="area-resources">
			<h3><%-app.p.t('area.resources')%></h3>
			<%=area.get('resources')%>
			<%=area.get('resources_analysis')%>
		</div>
	</div></div>
</script>

<script type="text/template" id="template-indicator">
	<h2><span><%-indicator.get('title')%></span></h2>
	<% if (indicator.hasMoreThanOneReport()) { %>
		<nav id="bpfa-reports" class="reports">
			<div class="wrapper">
				<h3 class="collapsed"><a class="report" href="#" data-bypass><%=report.get('title')%></a></h3><!-- report header. wrong class name -->
				<ul class="reports indicators" style="display: none"><!-- indicators class for styling reasons. these are not indicators -->
					<% indicator.get('reports').each(function(aReport) { %>
						<li<% if (report===aReport) { %> class="selected"<% } %>><a href="<%-app.root%><%-area.getUrlPart()%><%-indicator.getUrlPart()%><%-aReport.getUrlPart()%>"><%=aReport.get('title')%></a></li>
					<% }) %>
				</ul>
			</div>
		</nav>
	<% } %>
	<nav id="bpfa-sections">
		<ul class="button-group">
			<li><a class="small button secondary" data-bypass data-scroll href="#indicator-data"><%-app.p.t('indicator.data')%></a></li>
			<li><a class="small button secondary" data-bypass data-scroll href="#indicator-concept"><%-app.p.t('indicator.concept')%></a></li>
			<li><a class="small button secondary" data-bypass data-scroll href="#indicator-source"><%-app.p.t('indicator.source')%></a></li>
			<li><a class="small button secondary" data-bypass data-scroll href="#indicator-published"><%-app.p.t('indicator.published')%></a></li>
			<li><a class="small button secondary" data-bypass data-scroll href="#indicator-notes"><%-app.p.t('indicator.notes')%></a></li>
		</ul>
	</nav>
	<% if (report) { %>
		<nav id="bpfa-chart-types">
			<ul class="inline-list">
				<% _.each(chartTypes, function(chartType) { %>
					<li class="chart-<%-chartType%><% if (chartType===selectedChartType) { %> selected<% } %>"><a href="<%-app.root%><%-area.getUrlPart()%><%-indicator.getUrlPart()%><%-report.getUrlPart()%>/<%-chartType%><% if (filterKey) { %>/filter/<%-filterKey%><% } %>#indicator-data"><%-app.p.t('report.chart.type.' + chartType)%></a></li>
				<% }) %>
			</ul>
		</nav>
	<% } %>
	<div class="header-content-area"><div class="content-wrapper">
		<div class="data" id="indicator-data">
			<% if (report) { %>
				<div id="bpfa-chart-type-<%-selectedChartType%>">
					<% if (selectedChartType==='map') { %>
						<%= templateFilters({filters: filters}) %>
						<%= templateMap({report: report}) %>
					<% } %>
					<% if (selectedChartType==='table') { %>
						<%= templateTable({report: report}) %>
					<% } %>
					<% if (selectedChartType==='bar') { %>
						<%= templateFilters({filters: filters}) %>
						<%= templateBar({report: report}) %>
					<% } %>
					<% if (selectedChartType==='column') { %>
						<%= templateFilters({filters: filters}) %>
						<%= templateColumn({report: report}) %>
					<% } %>
				</div>
				<% if (indicator.hasMoreThanOneReport()) { %>
					<h4><%-report.get('title')%></h4>
				<% } %>
				<p class="bpfa-metadata"><span><%-app.p.t('report.date')%>:</span> <%-report.get('date')%></p>
				<p class="bpfa-metadata"><span><%-app.p.t('report.source')%>:</span> <%-report.get('source')%></p>
				<p class="bpfa-metadata"><span><%-app.p.t('report.notes')%>:</span> <%-report.get('notes')%></p>
			<% } else { %>
				<p class="bpfa-no-data"><%=indicator.get('no_data')%></p>
			<% } %>
		</div>
		<div class="content concept" id="indicator-concept">
			<h3><%-app.p.t('indicator.concept')%></h3>
			<%=indicator.get('concept')%>
		</div>
		<div class="content source" id="indicator-source">
			<h3><%-app.p.t('indicator.source')%></h3>
			<%=indicator.get('source')%>
		</div>
		<div class="content published" id="indicator-published">
			<h3><%-app.p.t('indicator.published')%></h3>
			<%=indicator.get('published')%>
		</div>
		<div class="content notes" id="indicator-notes">
			<h3><%-app.p.t('indicator.notes')%></h3>
			<%=indicator.get('notes')%>
		</div>
	</div></div>
</script>

<script type="text/template" id="template-indicator-map">
	<div class="svg-container">
	</div>
</script>

<script type="text/template" id="template-indicator-table">
	<table>
		<thead>
			<tr>
				<% report.get('headers').each(function(header) { %>
					<th<% if (header.isNumeric()) { %> class="number"<% } %>><%-header.get('value')%></th>
				<% }) %>
			</tr>
		</thead>
		<tbody>
			<% report.get('data').each(function(data) { %>
				<tr>
					<% report.get('headers').each(function(header) { %>
						<% if (header.isNumeric()) { %>
							<td class="number"><%-data.get(header.get('value'))===undefined?'':data.get(header.get('value')).toFixed(1)%></td>
						<% } else { %>
							<td><%-data.get(header.get('value'))%></td>
						<% } %>
					<% }) %>
				</tr>
			<% }) %>
		</tbody>
	</table>
</script>

<script type="text/template" id="template-indicator-bar">
	<div class="svg-container">
	</div>
</script>

<script type="text/template" id="template-indicator-column">
	<div class="svg-container">
	</div>
</script>

<script type="text/template" id="template-indicator-filters">
	<div id="bpfa-filters">
		<h4><%-app.p.t('report.filters.title')%></h4>
		<div class="filters-holder">
			<% _.each(filters, function(filter) { %>
				<div class="bpfa-filter">
					<a href="#" class="label collapsed" data-bypass><%-filter.get('title')%></a>
					<ul style="display: none">
						<% _.each(filter.get('values'), function(value) { %>
							<li<% if (value.get('index')===filter.get('selected')) { %> class="selected"<% } %>><a href="<%-value.get('url')%>#indicator-data"><%-value.get('title')%></a></li>
						<% }) %>
					</ul>
				</div>
			<% }) %>
		</div>
		<div class="filters-criteria">
			<%-app.p.t('report.filters.criteria')%>:
			<% _.each(filters, function(filter, index) { %>
				<span class="type"><%-filter.get('title')%>:</span>
				<% _.each(filter.get('values'), function(value) { %>
					<% if (value.get('index')===filter.get('selected')) { %><span class="value"><%-value.get('title')%></span><% if (index<filters.length-1) { %><span class="sep">,</span><% } %><% } %>
				<% }) %>
			<% }) %>
		</div>
	</div>
</script>

<script type="text/template" id="template-breadcrumb">
	<% _.each(elements, function(element, index) { %>
		<a href="<%-element.url%>"><%-element.title%></a>
		<span class="sep">&gt;</span>
	<% }) %>
</script>


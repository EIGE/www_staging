<noscript>
	<div class="no-support-message">
		<p>EIGE GEI requires <strong>JavaScript</strong> enabled.</p>
	</div>
</noscript>

<div id="gei">
</div>

<script type="text/template" data-id="Skeleton">
	<header class="main">
		<div class="wrapper">
			<h2><a href="<%-app.root%>"><%-app.p.t('title_long')%></a></h2>
		</div>
	</header>
	<div id="gei-view"></div>
</script>


<script type="text/template" data-id="MainMenu">
	<a href="" data-bypass class="toggler"><%-app.p.t('misc.menu')%></a>
	<ul class="main">
		<li class="index<%                if(selectedItem==='index')   { %> selected<% } %>"><a href="<%-app.root%>"><%-app.p.t('nav.index')%></a></li>
		<li class="map<%                  if(selectedItem==='map')     { %> selected<% } %>"><a href="<%-app.router.getMapUrl(defaultYear)%>"><%-app.p.t('nav.map')%></a></li>
		<li class="countries<%            if(selectedItem==='country') { %> selected<% } %>"><a href="#" data-bypass><%-app.p.t('nav.countries')%></a>
			<ul>
				<% _.each(countries, function(country) { %>
					<li><a href="<%-country.link%>"><%-app.p.t('countries.long.' + country.key)%></a></li>
				<% }) %>
			</ul>
		</li>
		<li class="domains<%              if(selectedItem==='domain')  { %> selected<% } %>"><a href="#" data-bypass><%-app.p.t('nav.domains')%></a>
			<ul>
				<% _.each(domains, function(domain) { %>
					<li class="domain_<%-domain.key%> domain_type_<%-domain.type%>"><a href="<%-domain.link%>"><%-app.p.t('tree.' + domain.key)%></a></li>
				<% }) %>
			</ul>
		</li>
		<li class="policies<%             if(selectedItem==='policies')             { %> selected<% } %>"><a href="<%-app.root%>/policies"><%-app.p.t('nav.policies')%></a></li>
	    	<li class="countries-comparison<% if(selectedItem==='countries-comparison') { %> selected<% } %>"><a href="<%-app.root%>/countries-comparison"><%-app.p.t('nav.countries_comparison')%></a></li>
		<li class="about<%                if(selectedItem==='about')                { %> selected<% } %>"><a href="<%-app.root%>/about"><%-app.p.t('nav.about')%></a></li>
	</ul>
</script>


<script type="text/template" data-id="Index">
	<header class="view">
		<div class="wrapper">
			<h3><%=app.p.t('index.header_html', {year: year})%></h3>
		</div>
	</header>
	<div class="main-wrapper">
		<section class="graph">
		</section>
		<section class="data">
			<h3>
			<% if (!yearNavigator.isOnFirstCountry()) { %><a href="<%-app.router.getCountryUrl(year, country)%>"><% } %>
			<%=app.p.t('country.year_header_html', {country: app.p.t('countries.long.' + country), year: year})%>
			<% if (!yearNavigator.isOnFirstCountry()) { %></a><% } %>
			</h3>
		</section>
	</div>
	<section class="extra">
		<div class="row">
			<div class="large-6 columns">
				<h4><%-app.p.t('index.about.title')%></h4>
				<p><%=app.p.t('index.about.description_html')%></p>
				<p><a class="button read-more" href="<%-app.root%>/about"><%-app.p.t('misc.read_more')%></a></p>
			</div>
			<div class="large-6 columns">
				<h4><%-app.p.t('index.map.title')%></h4>
				<p><a href="<%-app.router.getMapUrl(defaultYear)%>"><img src="<%-app.rootFiles%>/app/content/map.png" /></a></p>
			</div>
			<div class="downloads">
				<h4><%-app.p.t('index.downloads.title')%></h4>
					<a class="file-download file-type-publication" data-bypass href="<%-app.p.t('index.downloads.report_target')%>"><%-app.p.t('index.downloads.report_title')%></a>
					<a class="file-download file-type-xls" data-bypass href="<%-app.rootFiles%>/<%-app.p.t('index.downloads.scores_target')%>"><%-app.p.t('index.downloads.scores_title')%>
						<div class="file-meta">
							<span class="file-language">EN</span>
							<span class="file-size">(62.0 KB)</span>
						</div>
					</a>
			</div>
		</div>
	</section>
</script>

<script type="text/template" data-id="Country">
	<header class="view">
		<div class="wrapper">
			<h3><%=app.p.t('country.header_html', {country: app.p.t('countries.long.' + country)})%></h3>
			<ul class="options">
				<li class="compare"><a data-bypass href="#"><%-app.p.t('country.compare')%></a></li>
				<li class="report" style="display: none"><a data-bypass href="#"><%-app.p.t('country.report_link')%></a></li>
			</ul>
		</div>
	</header>
	<div class="main-wrapper">
		<div id="gei-sections">
			<ul class="tabs button-group">
				<% _.each(tabsMenu.getItems(), function(item) { %>
					<li class="tab_<%-item%>"><a class="small button secondary" href="#<%-item%>" data-bypass><%=app.p.t('country.menu.' + item + '_html')%></a></li>
				<% }) %>
			</ul>
		</div>
		<div id="content-wrapper">
			<section class="tab tab_trends tab_domains">
				<div class="visualization">
				</div>
				<div class="bar">
				</div>
				<div class="domains">
					<h3><%-app.p.t('country.domains')%></h3>
				</div>
			</section>
			<section class="tab tab_policy">
			</section>
			<section class="tab tab_context_data">
			</section>
		</div>
	</div>
</script>

<script type="text/template" data-id="Domain">
	<header class="view">
		<div class="wrapper">
			<% if (!subdomain) { %>
				<h3><%=app.p.t('domain.header_html', {domain: app.p.t('tree.' + domain.key), year: year})%></h3>
			<% } else { %>
				<h3><%=app.p.t('subdomain.header_html', {domain: app.p.t('tree.' + domain.key), subdomain: app.p.t('tree.' + subdomain.key), year: year})%></h3>
			<% } %>
		</div>
	</header>
	<div class="main-wrapper">
		<% if (domain.subdomains && domain.subdomains.length) { %>
			<nav class="domain-navigation">
				<ul class="domain">
					<li<% if (!subdomain) {%> class="selected"<% } %>><a href="<%-app.router.getDomainUrl(year, domain.key, null, country)%>"><%-app.p.t('tree.' + domain.key)%></a></li>
				</ul>
				<ul class="subdomains">
					<% _.each(domain.subdomains, function(item, i) { %>
						<li<% if (subdomain && subdomain.key===item.key) {%> class="selected"<% } %>><a href="<%-app.router.getDomainUrl(year, domain.key, i + 1, country)%>"><%-app.p.t('tree.' + item.key)%></a></li>
					<% }) %>
				</ul>
			</nav>
		<% } %>
		<section class="graph">
		</section>
		<section class="data">
			<h3>
			<% if (!yearNavigator.isOnFirstCountry()) { %><a href="<%-app.router.getCountryUrl(year, country)%>"><% } %>
			<%=app.p.t('country.year_header_html', {country: app.p.t('countries.long.' + country), year: year})%>
			<% if (!yearNavigator.isOnFirstCountry()) { %></a><% } %>
			</h3>
		</section>
	</div>
	<section class="extra">
		<div class="row">
			<div class="large-12 columns">
				<h4><%-app.p.t('domain.subheader', {domain: app.p.t('tree.' + domain.key)})%></h4>
			</div>
			<div class="large-8 columns content">
			</div>
			<div class="large-4 columns graphs">
			</div>
		</div>
	</section>
</script>

<script type="text/template" data-id="GraphExporterButton">
	<a href="#" data-bypass data-caption="<%-app.p.t('misc.export.button')%>"><%-app.p.t('misc.export.button')%></a>
</script>

<script type="text/template" data-id="SmallCyclicGraph">
	<% if (link) { %><a href="<%-link%>"><% } %>
	<h4<% if (diff) {%> class="diff_<%-diff%>"<% } %>><%-title%></h4>
	<span class="svgPlaceholder"></span>
	<% if (secondaryCaption && secondaryValueCaption)  { %><p><%-secondaryCaption%>: <span class="secondaryValueCaption" title="<%-secondaryValueExplanation%>"><%-secondaryValueCaption%></span></p><% } %>
	<% if (secondaryCaption && !secondaryValueCaption) { %><p><%-secondaryCaption%>: <span class="secondaryValue"><%-secondaryValue%></span></p><% } %>
	<% if (link) { %></a><% } %>
</script>

<script type="text/template" data-id="HorizontalBarGraph">
	<% if (link) { %><a href="<%-link%>"><% } %>
	<% if (title) { %><h4><%-title%></h4><% } %>
	<span class="svgPlaceholder"></span>
	<% if (link) { %></a><% } %>
</script>

<script type="text/template" data-id="MapGraph">
	<span class="svgPlaceholder"></span>
</script>

<script type="text/template" data-id="MultiHorizontalBarGraph">
	<h3><%-app.p.t('MultiHorizontalBarGraph.index')%></h3>
	<a href="#" data-bypass class="selector collapsed"><%-graphsData.selectedYear%></a>
	<ul style="display: none">
	<% _.each(graphsData.data, function(graphData) { %>
		<li<% if(graphsData.selectedYear===graphData.year) { %> class="selected"<% } %>><a href="<%-graphData.linkUrl%>" data-bypass data-year="<%-graphData.year%>"><%-graphData.year%></a></li>
	<% }) %>
	</ul>
	<% _.each(graphsData.data, function(graphData) { %>
		<div class="tab tab_<%-graphData.year%>"<% if(graphsData.selectedYear!==graphData.year) { %> style="display: none"<% } %>></div>
	<% }) %>
</script>

<script type="text/template" data-id="MultiRowHorizontalBarGraph">
	<% if (title) { %><h4><%-title%></h4><% } %>
	<% if (rows.length) { %>
		<span class="svgPlaceholder"></span>
	<% } else { %>
		<p class="no-data"><%-app.p.t('MultiRowHorizontalBarGraph.empty')%></p>
	<% } %>
</script>

<script type="text/template" data-id="MultiRowHorizontalBarGraphLegend">
	<h5><%-app.p.t('MultiRowHorizontalBarGraphLegend.title')%>:</h5>
	<% if (_.contains(suffixes, 'w')) { %>
		<p class="suffix_w"><span>&nbsp;</span><%-app.p.t('misc.sex.full.w')%></p>
	<% } %>
	<% if (_.contains(suffixes, 'm')) { %>
		<p class="suffix_m"><span>&nbsp;</span><%-app.p.t('misc.sex.full.m')%></p>
	<% } %>
	<% if (!secondary) { %>
		<p class="secondary"><span>&nbsp;</span>EU-28</p>
	<% } %>
	<% if (hasSource) { %>
		<p class="source"><%-app.p.t('MultiRowHorizontalBarGraphLegend.source.' + domain)%></p>
	<% } %>
</script>

<script type="text/template" data-id="LineTrendGraph">
	<h3><%-app.p.t('LineTrendGraph.title', {domain: app.p.t('tree.' + domain.key)})%></h3>
	<h4 class="country"><%-country%></h4>
	<a href="#" class="info" data-bypass><%-app.p.t('misc.info')%></a>
	<span class="svgPlaceholder"></span>
	<div class="info">
		<p><%-app.p.t('LineTrendGraph.info', {domain: app.p.t('tree.' + domain.key)})%></p>
	</div>
</script>

<script type="text/template" data-id="CountriesBarGraph">
	<h3><%-app.p.t('CountriesBarGraph.title', {domain: app.p.t('tree.' + domain.key), year: year})%></h3>
	<a href="#" class="info" data-bypass><%-app.p.t('misc.info')%></a>
	<span class="svgPlaceholder"></span>
	<div class="info">
		<p><%-app.p.t('CountriesBarGraph.info', {domain: app.p.t('tree.' + domain.key), year: year})%></p>
	</div>
</script>

<script type="text/template" data-id="CountryTrendsGraph">
	<div class="row">
		<div class="medium-9 columns graph">
			<h3><%-app.p.t('CountryTrendsGraph.title')%></h3>
			<span class="svgPlaceholder"></span>
		</div>
		<div class="medium-3 columns filters">
			<h3><%-app.p.t('CountryTrendsGraph.filters')%></h3>
			<ul class="filters">
				<li class="index"><a data-bypass href="#index"><%-app.p.t('CountryTrendsGraph.index')%></a></li>
				<li class="average"><a data-bypass href="#average"><%-app.p.t('CountryTrendsGraph.average')%></a></li>
				<li class="all"><a data-bypass href="#all"><%-app.p.t('CountryTrendsGraph.all')%></a></li>
				<% _.each(filter.getDomains(), function(domain) { %>
					<li class="<%-domain%> <% if (!filter.isClickable(domain)) { %>disabled<% } %>"><% if (filter.isClickable(domain)) { %><a data-bypass href="#<%-domain%>"><% } %><%-app.p.t('tree.' + domain)%><% if (filter.isClickable(domain)) { %></a><% } %></li>
				<% }) %>
			</ul>
		</div>
	</div>
</script>

<script type="text/template" data-id="CountryDomainDataPanel">
	<header>
		<h4><a href="" data-bypass><%-app.p.t('tree.' + domain)%></a></h4>
	</header>
	<div class="data row">
		<div class="columns medium-1 navigation">
			<ul class="years">
				<% _.each(availableYearsReverse, function(year, i) { %>
					<li class="year_<%-year%>"><a href="" data-bypass data-year="<%-year%>"><%-year%></a></li>
				<% }) %>
			</ul>
		</div>
		<div class="columns medium-11">
			<% _.each(availableYears, function(year) { %>
				<div class="year year_<%-year%> row">
					<div class="domain columns medium-2">
					</div>
					<div class="subdomainsAndVariables columns medium-10">
						<% if (yearData[year].subdomainsGraphData.length) { %>
							<% _.each(yearData[year].subdomainsGraphData, function(subdomainGraphData) { %>
								<div class="row">
									<div class="columns medium-6 large-4 subdomain">
									</div>
									<div class="columns medium-6 large-8 variables">
									</div>
								</div>
							<% }) %>
						<% } else { %>
							<div class="row variables">
							</div>
						<% } %>
					</div>
				</div>
			<% }) %>
		</div>
	</div>
</script>

<script type="text/template" data-id="Map">
	<header class="view">
		<div class="wrapper">
			<h3><%=app.p.t('map.header_html', {year: year})%></h3>
			<div class="row controls">
				<div class="small-6 medium-3 large-2 columns years">
				</div>
				<div class="small-6 medium-3 large-2 end columns domains">
				</div>
			</div>
		</div>
	</header>
	<div class="main-wrapper">
		<section class="graph">
		</section>
		<section class="data">
			<h3>
			<% if (!yearNavigator.isOnFirstCountry()) { %><a href="<%-app.router.getCountryUrl(year, country)%>"><% } %>
			<%=app.p.t('country.year_header_html', {country: app.p.t('countries.long.' + country), year: year})%>
			<% if (!yearNavigator.isOnFirstCountry()) { %></a><% } %>
			</h3>
		</section>
	</div>
</script>

<script type="text/template" data-id="About">
	<header class="view">
		<img src="<%-app.rootFiles%>/app/content/about-gei.png" width="1820" height="509" alt="<%-app.p.t('title_long')%>" />
		<div class="wrapper">
			<h3><%=app.p.t('about.title')%></h3>
			<h4><%=app.p.t('about.description')%></h4>
		</div>
	</header>
	<div class="main-wrapper">
	</div>
</script>

<script type="text/template" data-id="Policies">
	<header class="view">
		<div class="wrapper">
			<h3><%=app.p.t('policies.title')%></h3>
		</div>
	</header>
	<div class="main-wrapper">
	</div>
</script>

<script type="text/template" data-id="CountriesComparison">
	<header class="view">
		<div class="wrapper">
			<h3><%-app.p.t('CountriesComparison.header')%></h3>
			<div class="row controls">
				<div class="small-6 medium-3 large-2 columns countries">
				</div>
				<div class="small-6 medium-3 large-2 end columns domains">
				</div>
			</div>
		</div>
	</header>
	<div class="main-wrapper">
		<div class="row">
			<div class="columns medium-1 navigation">
				<ul class="years">
					<% _.each(years, function(year, i) { %>
						<li class="year_<%-year%>"><a href="" data-bypass data-year="<%-year%>"><%-year%></a></li>
					<% }) %>
				</ul>
			</div>
			<div class="columns medium-11 data">
				<% _.each(years, function(year) { %>
					<div class="year year_<%-year%> row">
					</div>
				<% }) %>
			</div>
		</div>
	</div>
</script>

<script type="text/template" data-id="CountriesComparisonPanel">
	<header>
		<h4><a href="" data-bypass><%-app.p.t('tree.' + domain)%></a></h4>
	</header>
	<div class="graph">
		<span class="svgPlaceholder"></span>
	</div>
</script>

<script type="text/template" data-id="SmallSpinner">
	<%-app.p.t('loading')%>
</script>

<script type="text/template" data-id="BlockingMessage">
	<div class="content"></div>
</script>

<script type="text/template" data-id="DomainViolenceNoData">
	<p><%-app.p.t('domain.empty.violence', {year: year})%></p>
</script>

<script type="text/template" data-id="DomainIntersectingInequalitiesNoData">
	<p><%-app.p.t('domain.empty.intersecting_inequalities', {year: year})%></p>
	<h4><%-app.p.t('domain.empty.select_country')%></h4>
	<ul>
		<% _.each(countries, function(country) { %>
			<li><a href="<%-country.link%>"><%-app.p.t('countries.long.' + country.key)%></a></li>
		<% }) %>
	</ul>
</script>

<script type="text/template" data-id="YearCountryNavigator">
	<div class="graph">
	</div>
	<div class="row controls">
		<div class="small-6 columns countries">
			<select>
				<% getAvailableCountries().each(function(country) { %>
					<option value="<%-country.id%>"<% if (country.id==getSelectedCountryKey()) { %> selected="selected"<% } %>><%-app.p.t('countries.long.' + country.id)%></option>
				<% }) %>
			</select>
		</div>
		<div class="small-6 columns years">
			<select>
				<% _.each(getAvailableYearsReverse(), function(year, i) { %>
					<option<% if (year==getSelectedYear()) { %> selected="selected"<% } %>><%-year%></option>
				<% }) %>
			</select>
		</div>
	</div>
</script>

<script type="text/template" data-id="MultipleSelectDefault">
	<label for="MultipleSelectDefault-<%-cid%>"><%-get('label')%></label>
	<select multiple="multiple" id="MultipleSelectDefault-<%-cid%>">
		<% _.each(get('options'), function(option) { %>
			<option value="<%-(option.key || option.id)%>"<%-isSelected((option.key || option.id))?' selected="selected"':''%>><%-(get('optionsTranslationPrefix')?app.p.t(get('optionsTranslationPrefix') + (option.key || option.id)):(option.key || option.id))%></option>
		<% }) %>
	</select>
</script>

<script type="text/template" data-id="MultipleSelectEmulated">
	<label class="main"><%-get('label')%></label>
	<div class="collapsible cols-<%-Math.ceil(get('options').length/10)%>">
		<div class="options">
			<% _.each(get('options'), function(option) { %>
				<div class="option">
					<input id="MultipleSelectEmulated-<%-cid%>-<%-(option.key || option.id)%>" type="checkbox" value="<%-(option.key || option.id)%>"<%-isSelected((option.key || option.id))?' checked="checked"':''%> />
					<label for="MultipleSelectEmulated-<%-cid%>-<%-(option.key || option.id)%>"><%-(get('optionsTranslationPrefix')?app.p.t(get('optionsTranslationPrefix') + (option.key || option.id)):(option.key || option.id))%></label>
				</div>
			<% }) %>
		</div>
		<button><%-app.p.t('misc.apply')%></button>
	</div>
</script>

<script type="text/template" data-id="SingleSelectDefault">
	<label for="SingleSelectDefault-<%-cid%>"><%-get('label')%></label>
	<select id="SingleSelectDefault-<%-cid%>">
		<% _.each(get('options'), function(option) { %>
			<option value="<%-(option.key || option.id)%>"<%-isSelected((option.key || option.id))?' selected="selected"':''%>><%-(get('optionsTranslationPrefix')?app.p.t(get('optionsTranslationPrefix') + (option.key || option.id)):(option.key || option.id))%></option>
		<% }) %>
	</select>
</script>

<script type="text/template" data-id="SingleSelectEmulated">
	<label class="main"><%-(get('optionsTranslationPrefix')?app.p.t(get('optionsTranslationPrefix') + getSelectedOption()):getSelectedOption())%></label>
	<div class="collapsible cols-<%-Math.ceil(get('options').length/10)%>">
		<div class="options">
			<% _.each(get('options'), function(option) { %>
				<div class="option">
					<input id="SingleSelectEmulated-<%-cid%>-<%-(option.key || option.id)%>" name="SingleSelectEmulated-<%-cid%>" type="radio" value="<%-(option.key || option.id)%>"<%-isSelected((option.key || option.id))?' checked="checked"':''%> />
					<label for="SingleSelectEmulated-<%-cid%>-<%-(option.key || option.id)%>"><%-(get('optionsTranslationPrefix')?app.p.t(get('optionsTranslationPrefix') + (option.key || option.id)):(option.key || option.id))%></label>
				</div>
			<% }) %>
		</div>
	</div>
</script>

<script type="text/template" data-id="Tooltip">
	<div class="content"></div>
	<div class="arrow right"></div>
	<div class="arrow left"></div>
</script>

<script type="text/template" data-id="TooltipSimpleTemplate">
	<p class="TooltipSimple"><%-title%><% if (typeof year !== 'undefined') { %> <span class="year"><%-year%></span><% } %></p>
	<%=(typeof html === 'undefined'?'':html)%>
</script>
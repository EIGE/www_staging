(function($) {
"use strict";

Drupal.behaviors.adsMap = {
	attach: function applyEigeBehaviours(context, settings) {
			if (context === window.document) { // initial page load
				run();
				return;
			}
			if (context[0] && context[0].tagName && context[0].tagName==='DIV') { // ajax search
				run();
				return;
			}
		}
};

function run() {

	var $ads = $('#ads-map-container'),
	    $map = $ads.find('.map'),
	    $eulink = $ads.find('.eu-link'),
	    $results = $ads.find('.map-results-summary'),
	    $info = $ads.find('.country-data-info');

	generateMap($map, Drupal.settings.map, Drupal.settings.ads_map_country_data);
	generateEuLink($eulink, Drupal.settings.ads_map_european_union_data);
	generateResultsSummary($results, Drupal.settings.ads_map_european_union_data);

	function generateEuLink($container, data) {
		$container.append(
			$('<h2/>', {html: 
				$('<a />', {'href': data.url, text: data.url_title})
			})
		);
	}

	function generateResultsSummary($container, data) {
		if (data.total_count===0) {
			$container.append($('<p/>', {text: data.no_results_text}));
		} else {
			$container.append($('<p/>'));
			$container.find('p')
				.append(document.createTextNode(data.label_prefix + ' '))
				.append($('<strong/>', {text: data.total_count}))
				.append(document.createTextNode(' ' + (data.total_count===1?data.label_suffix_single:data.label_suffix_plural)));
		}
	}


	function generateMap($container, mapdata, countryDataMap) {
		var scale = 0.8,
		    mapDataWidth = 950,
		    mapDataHeight = 740,
		    svgWidth = mapDataWidth*scale,
		    svgHeight = mapDataHeight*scale,
		    elements = [];

		function translate(point) {
			return [svgWidth/mapDataWidth*point[0], svgHeight/mapDataHeight*point[1]];
		}

		elements.push('<svg viewBox="0 0 ' + svgWidth + ' ' + svgHeight + '">');

		for(var i=0; i<mapdata.length; i++) {
			var country = mapdata[i],
			    countryData = countryDataMap[country.code];

			if (countryData && countryData.results && countryData.results.total_count) {
				elements.push('<g class="country country-' + country.code + ' withData" id="map-country-' + country.code + '">');
			} else {
				elements.push('<g class="country country-' + country.code + '">');
			}

			for(var j=0; j<country.shapes.length; j++) {
				var shape = country.shapes[j];

				elements.push('<polygon points="' + _.map(shape, function(point) {
					return translate(point)
				}).join(' ') + '" />');
			}
			if (country.center) {
				var center = translate(country.center.point);
				elements.push('<text x="' + center[0] + '" y="' + center[1] + '">' + _.escape(country.code) + '</text>');
			}
			elements.push('</g>');
		}

		elements.push('</svg>');
		$container.append(elements.join('\n'));
		$container.on('click', 'g.country.withData', function(e) {
			var g = e.currentTarget,
			    countryId = g.getAttribute('id').replace(/map-country-/, ''),
			    old = $container.find('g.country.selected')[0];
			clickCountry(g, old, $info, countryDataMap[countryId]);
		});
	}
	
	function clickCountry(svgCountry, oldSvgCountry, $container, data) {
		if (oldSvgCountry) {
			oldSvgCountry.setAttribute('class', oldSvgCountry.getAttribute('class').replace(/ selected/, ''));
		}
		svgCountry.setAttribute('class', svgCountry.getAttribute('class') + ' selected');
		
		$container.hide();
		if (!data) return;
		
		$container.empty();
		$container.append(
				$('<h2/>', {html: $('<a/>', {href: data.url, title: data.url_title, text: data.display_name})})
		);
		if (data.results.administrative_data_source.count) {
			$container.append(
				$('<div/>', {class: 'info eige_administrative_data_source', html: 
					$('<a/>', {
						href: data.results.administrative_data_source.url, 
						title: data.results.administrative_data_source.url_title, html: '<span class="entries"><strong>' + data.results.administrative_data_source.count + '</strong> ' + data.results.administrative_data_source.entries + '</span><strong class="title">' + data.results.administrative_data_source.label + '</strong>'
					})
				})
			);
		}
		if (data.results.statistical_product.count) {
			$container.append(
				$('<div/>', {class: 'info eige_statistical_product', html: 
					$('<a/>', {
						href: data.results.statistical_product.url, 
						title: data.results.statistical_product.url_title, html: '<span class="entries"><strong>' + data.results.statistical_product.count + '</strong> ' + data.results.statistical_product.entries + '</span><strong class="title">' + data.results.statistical_product.label + '</strong>'
					})
				})
			);
		}
		$container.fadeIn();
	}

}


})(window.jQuery);
(function($, Drupal) {
    var run_once = 0;

  Drupal.behaviors.eigefoundationtheme = {
    attach: // attach functions run on page load AND on Drupal.attachBehaviors()
      function applyEigeBehaviours(context, settings) {
        if (context == document) {
          applyStickyTocEnhancements();
          applyStickyLexiconEnhancements();
          applyLexiconToggles();
          fetchUserDataFromEurogender();
          panelizeGMNodes();
          applyADNodeEnhancements();
        }
        applyFacetUiEnhancements();
        applyW3CValidationFixes();
        applyTopBarStyling();
        applyAccessibility();
        applySearchPlaceholders();
        applyLanguageSwitcherEnhancements();
        filtersToCollapsibleCheckboxes();
        applyTopBarToggles();
        addLanguageDropdown();
        applyClassesToCountryOverviewOtherInformation();
        applyPolicyInitiativeToggles();
        applyLegalDefinitionToggles();
        applyBPfATogglesAndTitle();
        applyGenderStorySwitcher();
        applyBackToSearchResults();
      }
  };
  
  // functions that need to be run only one time
  // TODO AKZ implement alternatively with 'once', it is embedded in D7 core (http://plugins.jquery.com/once/)
  $(function() {
    applyTimeline();
    applyPolicyCycleCarousel();
    applyExternalReferencesToggles();
    applyHomePagePromoContentCarousel();
    applyContentToggle();
    applyRDCEnhancements();
    fixAdsBasicPageTitlePosition();
    fixSurveyBlockRegion();
    applySurveyBlockToggle();
  });
  
  
  function applySurveyBlockToggle() {
    if (!$("section.eige-improvement-webform-block").length) {
      return;
    }
    $("section.eige-improvement-webform-block h2").each(function() {
      $form = $(this).siblings("form");
      $form.find(".form-item").css("margin-top", 0);
      $form.hide();
      $toggler = $("<a/>").addClass("toggler").addClass("collapsed").attr("href", "#").text($(this).text());
      $(this).text("").append($toggler);
      $(this).find("a.toggler").click(function () {
        $(this).parent("h2").siblings("form").toggle(200);
        $(this).toggleClass('collapsed').toggleClass('expanded');
        return false;
      });
    });
  }
  
  // EIGEDR-577: 'Help us improve' survey block might be positioned in sidebar, 
  // but since GEI and BPfA pages do not display a sidebar, and Drupal does not allow for
  // conditionally placing a single block in multiple regions, the block will be moved to the
  function fixSurveyBlockRegion() {
    if (!($("#gei").length || $("#bpfa").length)) {
      return;
    }
    if (!$("aside.sidebar section.eige-improvement-webform-block").length) {
      return;
    }
    $surveyBlock = $("aside.sidebar section.eige-improvement-webform-block");
    $contentFooter = $("div.content-footer");
    if (!$contentFooter.length) {
      $contentFooter = $("<div/>").addClass("content-footer").appendTo(".eige-main");
    }
    $contentFooter.append($surveyBlock);
    if ($("aside.sidebar").children().length == 0) {
      $("aside.sidebar").remove();
    }
  }
  
  function applyBPfATogglesAndTitle() {
    if (!$('.section-monitoring-the-bpfa').length) {
      return;
    }
    // first take care of 'orphan' (no grouping field/label) results
    $(".section-monitoring-the-bpfa .view-content .items-list-wrapper").first().prepend('<h3>' + Drupal.settings.i18n_literals['monitoring_bpfa_no_area'] + '</h3>');
    $(".section-monitoring-the-bpfa .view-content .items-list-wrapper").first().remove().insertAfter($(".section-monitoring-the-bpfa .view-content .items-list-wrapper:last"));
    
    // second, make sure the correct markup is ensured for each area meta, and that the toggle behavior involves the meta as well
    $(".section-monitoring-the-bpfa .items-list-wrapper h3").each(function () {
      $area_url = $(this).find("div.area-url");
      $area_description = $(this).find("div.area-description");
      $toggler_content_wrapper = $("<div/>").addClass("area-results");
      if ($area_url.length) {
        $toggler_content_wrapper.append($area_url);
      }
      if ($area_description.length) {
        $toggler_content_wrapper.append($area_description);
      }
      $toggler_content_wrapper.append($(this).parent(".items-list-wrapper").find("ul.items-list"));
      $toggler_content_wrapper.insertAfter($(this));
      $toggler_content_wrapper.hide();
      
      $toggler = $("<a/>").addClass("toggler").addClass("collapsed").attr("href", "#").text($(this).text());
      $(this).text("").append($toggler);
      $(this).find("a.toggler").click(function () {
        $(this).parent("h3").next("div.area-results").toggle(200);
        $(this).toggleClass('collapsed').toggleClass('expanded');
        return false;
      });
    });
    
  }

  function applyBackToSearchResults() {
    if (typeof Drupal.settings.back_link_attributes === 'undefined') {
      return;
    }
    $(".eige-main").prepend("<a class='back-to-search-results' href='"+Drupal.settings.back_link_attributes['link']+"'>"+Drupal.settings.back_link_attributes['label']+"</a>");
  }
  // EIGEDR-415, EIGEDR-416 for basic pages that use a two-column layout, title is placed within node-content, thus any blocks in 
  // content header region appear before the page title.
  function fixAdsBasicPageTitlePosition() {
    if (!($(".page-node").length && $(".administrative-data-sources-db").length && $(".content-header").length && $(".zf-2col-stacked").length)) {
      return;
    }
    $("h1#page-title").insertBefore($(".content-header"));
  }
  
  function applyFacetUiEnhancements() {
    if (!$("div#rdc-search").length) {
      return;
    }
    
    $(".facetapi-checkbox").parent("li").removeClass("checked");
    $(".facetapi-checkbox:checked").parent("li").addClass("checked");
  }

  
  function applyRDCEnhancements() {
    if (!$("div#rdc-search").length) {
      return;
    }
    
    // if tabs are not present, then no results where found at all, 
    // thus search form should be expanded, and additional view empty text should be hidden
    if (!$("div#tabs").length) {
      $('.toggler-header').addClass("speed-fast").addClass("active");
      $("div.pane-views-empty").hide();
    } else {
      $("div.pane-views-exposed").find("form").hide();
      $('.toggler-header').addClass("speed-fast");
    }

    // TODO AKZ perhaps wrap it in .toggler-wrapper to avoid the weird interaction with the results counter
    $('.toggler-header').click(function() {
      $content = $(this).parents(".panel-pane").siblings("div.pane-views-exposed").find("form");
      if (!$content.length) {
          return false;
      }
      $content.toggle(300);
      $(this).toggleClass("active");
      return false;
    });
  }

  function applyADNodeEnhancements() {
    if (!($('body.node-type-administrative-data-source').length || $('body.node-type-statistical-product').length)) {
      return;
    }

    // implement tabs for section
    $tabs = $("<ul/>").attr("id", "section-tabs");
    $("div#node-main-content div.section h3.tab-title").each(function() {
      $tab = $("<li/>").append($("<a/>").attr("href", "#").addClass($(this).attr("class")).text($(this).text()));
      $tabs.append($tab);
      $(this).hide();
    });
    $first_section = $("div#node-main-content div.section:first");
    $first_section.before($tabs);
    $("div#node-main-content div.section").hide();
    $first_section.show();
    $tabs.find("li:first").addClass("current");

    $tabs.find("li a").click(function(){
      $parent = $(this).parent("li");
      if ($parent.hasClass("current")) {
        return false; // do nothing
      }
      var selector = $(this).attr("class").replace('tab-title ', '');
      $tabs.find("li").removeClass("current");
      $("div#node-main-content div.section").hide();
      $("div#node-main-content div#"+selector).fadeIn("slow");
      $parent.addClass("current");
      return false;
    });
    
    // hide collapsed fieldgroups
    // this is normally taken care by the fieldgroup module, but for display purposes
    // fieldgroups are manually rendered, thus the default collapsed behavior does not take place upon page loading
    
    $("div.field-group-div.collapsed").each(function() {
      $(this).find(".field-group-format-wrapper").hide();
    });
  }

  function applyGenderStorySwitcher() {
    if (!($('body.node-type-gender-story').length && $(".field-name-field-body-in-native-language").length)) {
      return;
    }
    if (typeof Drupal.settings.gender_story_languages === 'undefined') {
      return;
    }
    
    var default_language = Drupal.settings.gender_story_languages.default_language_name;
    var native_language = Drupal.settings.gender_story_languages.native_language_name;
    $english_body = $(".body");
    $native_body = $(".field-name-field-body-in-native-language");
    $language_menu = $("<ul/>").addClass("language-switch-menu").
      append( $("<li/>").addClass("current").append( $("<a/>").attr("href", "#").addClass("default").text(default_language))).
      append( $("<li/>").append( $("<a/>").attr("href", "#").addClass("native").text(native_language)));
      
    $("div.body.field").before($language_menu);
    $native_body.hide();
    $("ul.language-switch-menu a").click(function() {
      $parent = $(this).parent("li");
      if ($parent.hasClass("current")) {
        return false;
      }
      $parent.siblings("li").removeClass("current");
      $parent.addClass("current");
      switchContent($(this));
      return false;
    });

    function switchContent($anchor) {
      if ($anchor.hasClass("default")) {
        $native_body.fadeOut("fast", function() {
          $("a#language-switch-link").remove();
          $english_body.fadeIn("fast");
        });
      } else {
        $english_body.fadeOut("fast", function() {
          $("a#language-switch-link").remove();
          $native_body.fadeIn("fast");
        });
      }
    }

    $("a#language-switch-link").live("click", function() {
      $("ul.language-switch-menu li").removeClass("current");
      $("ul.language-switch-menu").find("a."+$(this).attr("class")).parent("li").addClass("current");
      switchContent($(this));
      return false;
    });

  }

  function applyStickyTocEnhancements() {
    var $nav = $('div.field-name-field-toc');
    if ($nav.length) {
      applyStickyToFooterWithScrollbars($nav);
      applyTocActiveState($nav);
      applyTocOffCanvas($nav);
    }
  }

  function applyContentToggle() {
    if (!$('.toggler-header').length) {
      return;
    }
    $('.toggler-header').each(function() {
      $content = $(this).next('.toggler-body');
      if (!$content.length) {
          return;
      }
      $wrapper = $("<div/>").addClass("toggler-wrapper").addClass("speed-fast").addClass("collapsed");
      $previousElement = $(this).prev();
      if ($previousElement.length) {
        $previousElement.after($wrapper);
      } else {
        $parent = $(this).parent();
        $parent.prepend($wrapper);
      }
      $wrapper.append($(this));
      $wrapper.append($content);
      $content.hide();
      var margin = $(this).css("margin-bottom");
      $(this).css("margin-bottom", 0);
      $wrapper.css("margin-bottom", margin);
    });
    $('.toggler-header').click(function() {
      $content = $(this).next('.toggler-body');
      if (!$content.length) {
          return false;
      }
      $wrapper = $(this).parent(".toggler-wrapper");
      if (!$wrapper.animating) {
        $wrapper.animating = true;
        $content.toggle(300, function() {
          // if the toggled content is within a carousel, then 
          // update the carousel UI in order to adjust its height
          $carousel = $(this).parents(".owl-carousel");
          if ($carousel.length) {
              var owl = $carousel.data('owlCarousel');
              owl.updateVars();
          }
        });
      }
      $(this).toggleClass("active");
      $wrapper.toggleClass("collapsed");
      $wrapper.animating = false;
      return false;
    });
  }

  function applyViewContentToggles($viewName, $contentType, $toggledField) {
    if ($($viewName).length) {
      $($viewName + ' .view-content ' + $contentType + ' ' + $toggledField).hide();
      $($viewName + ' .view-content ' + $contentType).once().click(function() {
        $(this).find($toggledField).slideToggle(200);
        $(this).toggleClass('active');
        return false;
      });
    }
  }
  
  function applyLegalDefinitionToggles() {
    applyViewContentToggles('.view-legal-definitions-in-the-eu', '.node-legal-definition', '.legal-definition-content-group');
  }

  function applyPolicyInitiativeToggles() {
    applyViewContentToggles('.view-policy-initiatives-search', '.node-gender-equality-policy', '.text-secondary');
  }

  function applyStickyLexiconEnhancements() {
    var $nav = $('div.lexicon-alphabar');
    if ($nav.length) {
      applyStickyToFooterWithScrollbars($nav);
      applyLexiconActiveState($nav);
    }
  }

  function applyTocOffCanvas($nav) {
    // initial page state:
    // div.group-left: large-9 small-12
    // div.group-footer: large-9 small-12
    // div.group-right: large-3 small-12
    // if js is not enabled, then ToC will appear at the end of the page
    // if it is enabled, we are switching to small-10 and small-2 instead, thus ToC will be on the side
    $('div.group-left').prepend('<a class="toc-toggle toc-toggle-sticky" href="#"><span>TOC</span></a>');
    $('div.group-right').addClass('group-toc').addClass('toc-expanded').find('h2').prepend('<a class="toc-toggle toc-toggle-internal" href="#"><span>TOC</span></a>');

    $('.toc-toggle-sticky').sticky({
      topSpacing: 50,
      bottomSpacing: $('.eige-footer').outerHeight() + $('footer').outerHeight() + 50,
    });
    $('.toc-toggle-sticky').toggle();

    var $toggler = $(".toc-toggle");
    $toggler.click(function() {
      toggleToc($(this), true, false);
      return false;
    });

    function toggleToc($toggler, $goToTocPosition, $animate) {
      $('div.group-right').toggle();
      $('div.group-left').toggleClass('large-9').toggleClass('large-12');
      $('div.group-footer').toggleClass('large-9').toggleClass('large-12');
      $('div.group-right').toggleClass('large-3').toggleClass('toc-collapsed').toggleClass('toc-expanded');
      $('.toc-toggle-sticky').toggle();
      // EIGEDR-253 Timeline responsiveness - UI issues in tablets. The solution is to attach one more action on the TOC expand/collapse that redraws the timeline.
      applyTimeline();
      // EIGEDR-390 Policy cycle responsiveness - UI issues in all devices
      $carousel = $(".owl-carousel");
      if ($carousel.length) {
        var owl = $carousel.data('owlCarousel');
        owl.updateVars();
      }

      if ($goToTocPosition) {
        $nav.find('li.active a').each(function(){
          var anchor = $(this).attr("href");
          var $element = $(anchor);
          if ($animate) {
            applyScrolltopAnimation($element);
          } else {
            $(window).scrollTop($element.offset().top - 100);
          }
        });
      }
    }
  }

  function applyTocActiveState($nav) {
    //no active at load
    $nav.find("li").removeClass('active');
    //apply active/current state and scrolltop animation on click
    $nav.find("a").click(function() {
      $nav.find("li").removeClass('active');
      $(this).parent("li").addClass('active');
      var anchor = $(this).attr("href");
      var $element = $(anchor);
      //if we want to highlight element h2 only and not the whole div, eg Policy Cycle div
      //$element = $element.is('div') ? $element.find('>h2') : $element;
      applyScrolltopAnimation($element);
      return false;
    });

    $(window).on('scroll', applyTocActiveStateOnScroll);

    //apply active/current state to sticky nav on scroll
    function applyTocActiveStateOnScroll() {
      var curPos = $(window).scrollTop();
      var $sections = $(
        'div.group-left h1, ' + 
        'div.group-left h2.toc-header, ' + 
        'div.group-left h3.toc-subheader, ' + 
        'div#group-timeline, ' + 
        'div#group-policy-cycle, ' + 
        'div#group-external-references, ' + 
        'div#contact-information, ' + 
        'div#downloads-wrapper, ' + 
        'div#related-content'
        );
    
      $sections.each(function() {
        var top = $(this).offset().top - 110,
        bottom = top + $(this).outerHeight();
        
        if (curPos >= top && curPos <= bottom) {
          $nav.find('li').removeClass('active');
          $sections.removeClass('active');
          $(this).addClass('active');
          $nav.find('a[href="#' + $(this).attr('id') + '"]').parent('li').addClass('active');
        }
      });
    }
  }

  function applyLexiconActiveState($nav) {
    //apply active/current state and scrolltop animation on click
    $nav.find("a").click(function() {
      $nav.find("a").removeClass('current');
      $(this).addClass('current');
      var anchor = '#' + $(this).attr("href").split('#')[1];
      var $element = $(anchor).parent('div.lexicon-section');
      applyScrolltopAnimation($element);
      return false;
    });

    $(window).on('scroll', applyLexiconActiveStateOnScroll);
    $('div.lexicon-list .lexicon-related a').mouseup(applyLexiconActiveStateOnScroll);
    
    //apply active/current state to sticky nav on scroll
    function applyLexiconActiveStateOnScroll() {
      var curPos = $(window).scrollTop();
      var pathPrefix = location.pathname.split('#')[0] + '#';
      var $sections = $('div.lexicon-list div.lexicon-section');

      $sections.each(function() {
        var top = $(this).offset().top - 110,
        bottom = top + $(this).outerHeight();
        
        if (curPos >= top && curPos <= bottom) {
          $nav.find('a').removeClass('current');
          $sections.removeClass('active');
          $(this).addClass('active');
          $nav.find('a[href="' + pathPrefix + $(this).find('h2.lexicon-letter').prev('a').attr('id') + '"]').addClass('current');
        }
      });
    }
  }

  function applyStickyToFooterWithScrollbars($sticky) {
    stickyToFooterWithScrollbars($sticky);

    $(window).resize(function() {
      $tocHeader = $sticky.find("h2:first");
      $tocElements = $sticky.find("div#toc-elements");
      //$(jQuery.browser.webkit ? "body" : "html").animate({scrollTop: 0}, "slow");
      $sticky.css('maxHeight', $(window).height());
      $tocElements.css('maxHeight', $(window).height() - $tocHeader.outerHeight());
      $sticky.sticky('update');
      $tocElements.mCustomScrollbar('update');
    });

    function stickyToFooterWithScrollbars($sticky) {
      $tocHeader = $sticky.find("h2:first");
      $tocElements = $sticky.find("div#toc-elements");
      
      //apply max height to enforce scrollbars
      $sticky.css('maxHeight', $(window).height());
      $tocElements.css('maxHeight', $(window).height() - $tocHeader.outerHeight());

      //apply sticky limited to footer
      $sticky.sticky({
        topSpacing: ($("#admin-menu").length ? $("#admin-menu").outerHeight() : 0),
        bottomSpacing: $('.eige-footer').outerHeight() + $('footer').outerHeight() + 50,
      });

      //apply scrollbars (relevant js loaded in module and template preprocess functions)
      $tocElements.mCustomScrollbar({
        theme: "minimal-dark",
        //alwaysShowScrollbar: 2,
      });
    }
  }

  function applyScrolltopAnimation($element) {
    // http://stackoverflow.com/questions/10553733/cross-browsers-jquery-animate-scrolltop
    // http://stackoverflow.com/questions/9041406/jquery-scrolltop-inconsistent-across-browsers
    // http://stackoverflow.com/questions/4880743/jquery-animate-scrolltop-on-opera-bug
    $(jQuery.browser.webkit ? "body" : "html").animate({
      scrollTop: $element.offset().top - 100
    }, "slow", highlight($element));

    function highlight($element) { //relevant js loaded in module and template preprocess functions
      $element.effect("highlight", {
        'color': '#f8f7f5'
      }, 3000);
    }
  }


  function applyLanguageSwitcherEnhancements() {
    $(".form-item-lang-dropdown-select option").each(function(){
      var language_code_name = $(this).val().toUpperCase();
      var language_original_name = $(this).text();
      $(this).text(language_code_name + " - " +language_original_name);
    });
  }

  function addLanguageDropdown() {
    if (run_once == 0) {
      run_once++;
      var language_redirect = {};

      //Drupal.settings.pathToTheme is defined in preprocess_page hook of template.php  
      //static html: location.host.length == 0

      $('.lang_dropdown_form').last().children().first().addClass('dropdown-language-parent');
      $('.lang-dropdown-select-element').last().each(function() {
        $(this).children().each(function() {
          var flag_value = $(this).attr('value');
          $('.dropdown-language-parent input').each(function() {
            var language_value = $(this).attr('name');
            if (language_value == flag_value) {
              var language_link = $(this).attr('value');
              language_redirect[language_value] = language_link;
            }
          });

        });
      });
      var ddData = [];

      $('.dropdown-language-parent').last().ddslick({
        data: ddData,
        imagePosition: "right",
        selectText: "Choose your language",
        onSelected: function(data) {
          var my_link = data['selectedData']['value'];
          window.location = language_redirect[my_link]
        }
      });

      $('.lang_dropdown_form').last().each(function() {
        $(this).children().first().addClass('dropdown-language-parent-1');
      });
    }

    $(".dd-pointer").click(function() {
      if ($(this).hasClass("dd-pointer-up")) {
        $(".dd-selected").removeClass("expanded");
      } else {
        $(".dd-selected").addClass("expanded");
      }
    });
  }

  function applyTopBarToggles() {
    $('#search-bar-toggle').click(function(){
      $('#search-bar-section').toggleClass('sbar-hidden').toggleClass('sbar-visible');
      $(this).toggleClass('active');
    });
    $('#top-bar-menus-toggle').click(function(){
      $('#top-bar-menus-section').toggleClass('tbar-hidden').toggleClass('tbar-visible');
      $(this).toggleClass('active');
    });
  }

  function applyLexiconToggles() {
    if (!$("div#lexicon-page").length) {
      return;
    }
    $("lexicon-section .group-content").addClass("collapsible").addClass("speed-fast").addClass("field-group-format");
    $('.lexicon-section dd').addClass("field-group-format-wrapper");
    $('.lexicon-section dd').hide();
    $('.lexicon-main .collapsed-list-link-wrapper').click(function(){
      $(this).parents('dt').next('dd').toggle(200);
      $(this).toggleClass('active');
      return false;
    });
  }
  
  function applyExternalReferencesToggles() {
      if (!$("body.node-type-sectoral-area").length && !$("body.node-type-advanced-page").length) {
        return;
      }
      
      $(".field-name-field-external-reference-links").hide();
      $(".field-name-field-external-reference-title").each(function() {
        $toggleLink = $("<a/>").addClass("field-external-reference-title-wrapper").addClass("collapsed").attr("href", "#");
        $wrapper = $(this).parent(".group-content");
        $wrapper.prepend($toggleLink);
        $wrapper.addClass("collapsible").addClass("speed-fast").addClass("collapsed");
        if ($(this).next("div.field-name-field-external-reference-links").find("a").length) {
          $toggleLink.addClass("has-links");
        }
        $toggleLink.append($(this));
      });
      
      $("a.field-external-reference-title-wrapper").click(function() {
        $(this).toggleClass("collapsed");
        $(this).toggleClass("expanded");
        $wrapper = $(this).parent(".group-content");
        $wrapper.toggleClass("collapsed");
        $wrapper.toggleClass("expanded");
        $(this).next("div.field-name-field-external-reference-links").toggle(200);
        return false;
      });
  }
  
  
  function applyHomePagePromoContentCarousel() {
    if (!$("body.front").length && !$("div.view-home-page-nodequeue").length) {
      return;
    }
    
    $('div.view-home-page-nodequeue div.item-list ul').owlCarousel({
      slideSpeed: 300,
      pagination: false,
      singleItem: true,
      mouseDrag: false,
      navigation: true, // Show next and prev buttons
      navigationText: ['previous', 'next'],
      // TODO AKZ image lazy loading: http://owlgraphic.com/owlcarousel/demos/lazyLoad.html
      // autoHeight: true,
    });
    
    // youtube video lazy loading
    if (!$("div.media-youtube-video").length) {
      return;
    }
    
    var videoFrames = [];
    var count = 0;
    $("div.media-youtube-video iframe").each(function() {
      $(this).parent().addClass("flex-video");
      var src = $(this).attr("src");
      var p = /.*(?:youtu.be\/|v\/|u\/\w\/|embed\/|watch\?v=)([^#\&\?]*).*/;
      var id = (src.match(p) ? RegExp.$1 : false);
      if(id !== false) {
        // The image + button overlay code.
        
        var code = '<div style="width:100%; height:100%; margin:0 auto"><a href="#" class="load-youtube-video-on-click" id="skipser-youtubevid-'+count+'"><img src="http://i.ytimg.com/vi/'+id+'/hqdefault.jpg" /><div style="background: url(\'data:image/png;base64,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\') no-repeat scroll 0 0 transparent;height: 77px;width: 77px; position:relative; margin-left:45%; margin-top:-50%;z-index:5;"></div></a></div>';
        
        $replacementDiv = $("<div/>");
        $replacementDiv.attr("id", "v" + count);
        $replacementDiv.html(code);
        $(this).parent().append($replacementDiv);
        videoFrames[count] = $(this)[0].outerHTML;
        $(this).remove();
        count++;
        
        $("a.load-youtube-video-on-click").click(function() {
          var videoIndex = $(this).attr("id");
          videoIndex = videoIndex.replace("skipser-youtubevid-", "");
          var frameCode = videoFrames[videoIndex];
          $(this).parents("div.media-youtube-video").append(frameCode);
          $(this).parent().remove();
          return false;
        });
        
      }
    });
  }

  function applyPolicyCycleCarousel() {
    if (!$("body.node-type-sectoral-area").length && !$("body.node-type-advanced-page").length) {
      return;
    }

    $group = $(".group-policy-cycle");
		
    if($group.length) {
      $group.addClass("phase-policy-cycle");

      $('.owl-carousel').owlCarousel({
        margin: 100,
        items: 1,
        itemsDesktop : [1000,1], // between 1000px and 901px
        itemsDesktopSmall : [900,1], // betweem 900px and 601px
        itemsTablet: [600,1], // between 600 and 0
        itemsMobile : false, // itemsMobile disabled - inherit from itemsTablet option
        pagination: false,
        slideSpeed: 800,
        mouseDrag: false,
        autoHeight : true,
        afterMove: function(base) {
          var currentItemIndex = this.currentItem;
          var $currentPhase = $(".policy-cycle-phase").get(currentItemIndex);
          removePhaseCssClassFromGroup($group);
          $group.addClass($($currentPhase).attr("id"));
        }
      });
      var owl = $(".owl-carousel").data('owlCarousel');
      // http://stackoverflow.com/questions/2644299/jquery-removeclass-wildcard
      function removePhaseCssClassFromGroup($group) {
        $group.removeClass(function (index, css) {
          return (css.match (/(^|\s)phase-\S+/g) || []).join(' ');
        });
      }
      
      // back button
      $(".policy-cycle-phase a.back").click(function() {
        owl.goTo(0);
        owl.updateVars();
        return false;
      });
      
      // previous/next buttons
      $("a.step").click(function() {
        var href = $(this).attr("href");
        var step = href.replace("#step-", "");
        owl.goTo(step);
        owl.updateVars();
        return false;
      });
      
      $("#define, .owl-item .header-policy-cycle .define a, #policy-cycle-tl").click(function() {
        owl.goTo(1);
        owl.updateVars();
        return false;
      });
      $("#plan, .owl-item .header-policy-cycle .plan a, #policy-cycle-tr").click(function() {
        owl.goTo(2);
        owl.updateVars();
        return false;
      });
      $("#act, .owl-item .header-policy-cycle .act a, #policy-cycle-br").click(function() {
        owl.goTo(3);
        owl.updateVars();
        return false;
      });
      $("#check, .owl-item .header-policy-cycle .check a, #policy-cycle-bl").click(function() {
        owl.goTo(4);
        owl.updateVars();
        return false;
      });
      
      // The elements and tools fields are urls but since the cycle phase image is displayed above them , the url redict was ignored.
      // Added click listener for the href to work again.
      $(".policy-cycle-elements a, .policy-cycle-tools a").click(function() {
        $new_url = $(this).attr('href');
        window.open($new_url);
      });
    }

  }

  function applyTimeline() {
    if (!$("body.node-type-sectoral-area").length && !$("body.node-type-page").length && !$("body.node-type-advanced-page").length) {
      return;
    }
    // Hidden in the case of an empty timeline.
    $(".field-name-field-timeline-events").hide();
    
    var start_date_list = [];
    $(".group-timeline .field-name-field-timeline-event-start-year .date-display-single").each(function() {
      var start_date = $(this).text();
      start_date_list[start_date_list.length] = start_date;
    });

    var end_date_list = [];
    $(".group-timeline .field-name-field-timeline-event-end-year .date-display-single").each(function() {
      var end_date = $(this).text();
      end_date_list[end_date_list.length] = end_date;
    });

    var description_text_list = [];
    $(".group-timeline .field-name-field-timeline-event-description p").each(function() {
       var description = $(this).html();
      description_text_list[description_text_list.length] = description;
    });

    var title_list = [];
    $(".group-timeline .field-name-field-timeline-event-title").each(function() {
      var event_title = $(this).text();
      title_list[title_list.length] = event_title;
    });
    
    $("<div id=\"sectoral-area-timeline\"></div>").insertAfter(".group-timeline");
    $(".group-timeline .field-collection-container").hide();
    
    if(title_list.length) {
      var storyjs_jsonp_data = {
        "timeline": {
          "type": "default",
          "date": []
        }
      }
      for (var i = title_list.length - 1; i >= 0; i--) {
        storyjs_jsonp_data.timeline.date.push({
          "headline": title_list[i],
          "startDate": start_date_list[i],
          "endDate": end_date_list[i],
          "text": description_text_list[i],
        })
      };
      
      createStoryJS({
        type: 'timeline',
        width: '100%',
        height: '600',
        source: storyjs_jsonp_data,
        embed_id: 'sectoral-area-timeline'
      });
      $("#sectoral-area-timeline").insertAfter($(".group-timeline .field-name-field-timeline-events").parent("div"));
    }
  }

  function applyW3CValidationFixes() {
    //placeholder not valid for li, so totally removed from admin-menu-search and added manually for input
    $('input.admin-menu-search').each(function() {
      $(this).attr("placeholder", $(this).attr("title"));
    });
  }

  function applyTopBarStyling() {
    $('.eige-top-bar #lang-dropdown-select-language option').each(function() {
      $(this).text($(this).val());
    });
    $(".eige-top-bar .block-menu-menu-eige-user-login-links-menu").prepend("<a class='user-top-bar' href='#'>User</a>");
    $(".eige-top-bar .block-search").prepend("<a class='search-top-bar' href='#'>Search</a>");
    $("a.user-top-bar").click(function() {
      $(".eige-top-bar .block-menu-menu-eige-user-login-links-menu .menu ").toggleClass("active");
      $(".top-bar").removeClass("expanded");
    });
    $("a.user-top-bar").blur(function() {
      $(".eige-top-bar .block-menu-menu-eige-user-login-links-menu .menu ").removeClass("active");

    });

    $("a.search-top-bar").click(function() {
      $(".eige-top-bar #search-block-form").toggleClass("active");
      $(".top-bar").removeClass("expanded");
    });
    $("a.search-top-bar").blur(function() {
      $(".eige-top-bar #search-block-form").removeClass("active");
    });

    $(".eige-top-bar #main-menu li a").each(function() {
      var $link = $(this);
      $link.parent('li').removeClass('icon-eige_' + $link.html().toLowerCase().trim().replace(/[^a-z0-9]+/gi, '_').replace(/^_+/, '').replace(/_+$/, ''));
      $link.addClass('icon-eige_' + $link.html().toLowerCase().trim().replace(/[^a-z0-9]+/gi, '_').replace(/^_+/, '').replace(/_+$/, ''));
    });
  }

  function applyAccessibility() {
    var $wrapper = $('html');
    var $accessibilityFontClass = 'accessibility-font';
    var $accessibilityContrastClass = 'accessibility-contrast';
    $('.accessibility-link').click(function(event) {
      var $link = $(this).find('a');
      if ($link.attr('id') == 'accessibility-font-increase') {
        /* font + */
        if (!($wrapper.hasClass($accessibilityFontClass))) {
          $wrapper.addClass($accessibilityFontClass);
        }
      } else if ($link.attr('id') == 'accessibility-font-decrease') {
        /* font - */
        if ($wrapper.hasClass($accessibilityFontClass)) {
          $wrapper.removeClass($accessibilityFontClass);
        }
      } else if ($link.attr('id') == 'accessibility-contrast') {
        /* contrast toggle */
        if ($wrapper.hasClass($accessibilityContrastClass)) {
          $wrapper.removeClass($accessibilityContrastClass);
        } else {
          $wrapper.addClass($accessibilityContrastClass);
        }
      };
    });
  }

  function applySearchPlaceholders() {
    $('.views-exposed-form').each(function() {
      applyPlaceholder($(this));
    });

		// http://stackoverflow.com/questions/23223526/jquery-selector-for-id-starts-with-specific-text
    $('[id^=search-block-form]').each(function() {
      applyPlaceholder($(this));
    });
		
    function applyPlaceholder($searchForm) {
      $searchInput = $searchForm.find('.form-type-textfield input');
      if ($searchInput.length) {
        $searchInput.each(function() {
          $label = $(this).prev("label");
          if (!$label.length) {
            $label = $(this).parent(".form-type-textfield").parent(".views-widget").prev("label");
          }
          if ($label.length) {
            $(this).attr("placeholder", $label.html().trim());
          }
        });
      }
    }
  }
  
  
  
  // EIGEDR-413 - 'Data available on' filter implementation
  // 6 separate filters implemented as a single on/off checkbox each, should be 
  // merged into a single mutli-checkbox filter
  function applyAdministrativeDataSearchEnhancements() {
    if (!($('.view-administrative-data-sources').length && $('#checkboxes-wrapper').length)) {
      return;
    }
    
    $('#checkboxes-wrapper').each(function() {
      $(this).removeAttr("id").attr("id", "edit-da-wrapper").removeClass("views-widget-checkboxes").addClass("views-widget-filter-data_available_on");
      $label = $("<label/>").attr("for", "edit-da").text(Drupal.settings.ads_minified_filter_labels['select_label']).attr("title", Drupal.settings.ads_max_options_message).append("<span class='label-options'>" + Drupal.settings.ads_max_options_message + "</span>").addClass("has-options");
      $(this).prepend($label);
      $checkboxes = $(this).find(".form-type-checkbox");
      $checkboxes.removeClass("form-type-checkbox").addClass("form-type-bef-checkbox");
      $checkboxes.attr("title", Drupal.settings.ads_max_options_message);
      $checkboxes.find("input").each(function() {
        $(this).removeClass("form-checkbox");
        var input_name = $(this).attr("name");
        $(this).siblings("label").text(Drupal.settings.ads_minified_filter_labels[input_name]);
        
        // due to mysql restriction of not being able to join more than 61 tables, 
        // we are forced to limit this filter that involves too many table joins 
        // into max 3 options selected
        $(this).click(function() {
          var selected_options = $checkboxes.find(":checked").length;
          if (selected_options > 3) {
            return false;
          }
        });
      });
      
      $bef_wrapper = $("<div/>").addClass("bef-checkboxes");
      $bef_wrapper.append($checkboxes);
      $bef_select_wrapper = $("<div/>").addClass("form-checkboxes").addClass("bef-select-as-checkboxes");
      $bef_select_wrapper.append($bef_wrapper);
      $form_wrapper = $("<div/>").addClass("form-item").addClass("form-type-select");
      $form_wrapper.append($bef_select_wrapper);
      $(this).find(".views-widget").append($form_wrapper);
    });
    
  }


  /**
   ** Converts checkboxes BEF filters and date select filters to enhanced collapsible checkboxes/radio filters with search results, like in D6 site.
   **/
   function filtersToCollapsibleCheckboxes() {
    // functionality only for specific views with class 'view-with-enhanced-collapsible-filters'
    if (!$('.view-with-enhanced-collapsible-filters').length) {
      return;
    }
    
    // EIGEDR-413, manipulate the 'Data available on' filters markup first, so the rest
    // of the js enhancements to be applied to this filter as well
    applyAdministrativeDataSearchEnhancements();
		
    // EIGEDR-316, EIGEDR-366 case of GEI policies view where filters are in a block, thus the markup and ajax behavior is a bit different
    if($('section.view-with-enhanced-collapsible-filters').length) {
      if (!$('section.view-with-enhanced-collapsible-filters .view-filters').length) {
        $('section.view-with-enhanced-collapsible-filters').wrapInner("<div class='view-filters'></div>");
        $('section.view-with-enhanced-collapsible-filters').wrapInner("<div class='jquery-once-block-filters-processed'></div>");
      }
      if ($('.view-filters .views-exposed-form .form-checkboxes').length == 0) {
        var $widgets = $('.view-filters .views-exposed-form-enhanced .form-checkboxes').parents('.views-exposed-widget');
        $('.view-filters .view-search-criteria .selected-terms').empty();
        $widgets.each(function() {
          var $widget = $(this);
          appendSearchCriteria($widget);
        });
      }
    }
    
    dateSelectsToBEF();
    var $widgets = $('.view-filters .views-exposed-form .form-checkboxes').parents('.views-exposed-widget');
    $exposedFormParent = $('.view-filters .views-exposed-form').parent();
    if ($exposedFormParent.find('.views-exposed-form-enhanced').length == 0) {
      $exposedFormParent.prepend('<div class="views-exposed-form-enhanced"/>');
    }
    var $maxHeight = $('view-with-enhanced-collapsible-filters').outerHeight();

    var $childrenHeight = 0; 
    $(".eige-main").children().each(function(){ 
      if (!($(this).hasClass("view") || $(this).find('div').hasClass("view"))) {
        $childrenHeight += $(this).outerHeight(); 
      };
    });

    $widgets.each(function() {
      var $widget = $(this);
      $maxHeight = Math.max($widget.find('.form-checkboxes').outerHeight() + $widget.outerHeight(), $maxHeight);

      // http://www.w3.org/TR/REC-html40/interact/scripts.html#h-18.2.3
      // "The onchange event occurs when a control loses the input focus and its value has been modified since gaining focus"
      // IE retains focus on the clicked input, so the 'change' event is not fired until the next click occurs
      // As a result, the counter is always one step behind the actual selected count
      // Solution found here: http://norman.walsh.name/2009/03/24/jQueryIE
      if ($.browser.msie) {
        $widget.find('input').click(function() {
          this.blur();
          this.focus();
        });
      }

      // EIGE-42, EIGE-44 also add view for selected checkboxes
      appendSearchCriteria($widget);

      // collapse
      applyCollapse($widgets, $widget);

      // split options into 5 columns
      //applySplit($widget, 5);

      var $options = $widget.find('.form-item.form-type-bef-checkbox');
      if ($options.length == 0) {
        $widget.remove();
      } else {
        // move them to another div
        $widget.parents('.views-exposed-form').prev('.views-exposed-form-enhanced').prepend($widget);
      }

      //set widget min width based on its content, else responsiveness issues
      expand($widget);
      $widget.css('min-width', $widget.find('.bef-checkboxes:eq(0)').outerWidth());
      collapse($widget);
    });

    if ($maxHeight > 0) {
      $totalHeight = $maxHeight + $childrenHeight + 150;
     //$('.eige-main').css('min-height', $totalHeight + 'px');
    }


    $('.views-exposed-form-enhanced .bef-checkboxes').css('maxHeight', '500px').mCustomScrollbar({
      theme: "dark",
    });

    // finalize collapse handling
    $(document).click(function(e) {
      // if clicking outside enhanced form, close all
      if ($(e.target).parents('.views-exposed-form-enhanced').length == 0) {
        collapse($widgets);
      }
    });

    function dateSelectsToBEF() {
      $('.views-widget .form-type-date-select').parents('.views-widget').each(function() {
        $dateWidget = $(this);
        $formItemSelect = $(this).find('.form-type-select');
        $befFormItemSelect = $formItemSelect.clone().empty();
        $befFormItemSelect.append('<div class="form-checkboxes bef-select-as-checkboxes"><div class="bef-checkboxes"/></div>');
        $befCheckboxes = $befFormItemSelect.find('.bef-checkboxes');

        $dateSelect = $formItemSelect.find('select');
        $dateSelectId = $dateSelect.attr('id');
        $dateSelectName = $dateSelect.attr('name');
        $dateSelect.find('option[value!=""]').each(function() {
          $option = $(this);
          $inputId = $dateSelectId + '-' + $option.val();
          $befOptionHtml = '<div class="form-item form-type-bef-checkbox form-item-' + $inputId + ($option.is(':selected') ? ' highlight' : '') + '">' + '<input type="radio" value="' + $option.val() + '" id="' + $inputId + '" name="' + $dateSelectName + '"' + ($option.is(':selected') ? ' checked="checked"' : '') + '>' + '<label for="' + $inputId + '" class="option">' + $option.val() + '</label></div>';
          $befCheckboxes.append($befOptionHtml);
        });

        $befDateWidget = $('<div class="views-widget"/>');
        $befDateWidget.append($befFormItemSelect);
        $wrapper = $dateWidget.parent();
        $wrapper.append($befDateWidget);
        $dateWidget.remove();
      });
    }

    function appendSearchCriteria($widget) {
      $selectedInputs = $widget.find('.views-widget input:checked');
      if ($selectedInputs.length) {
        if (!$('.view-filters .view-search-criteria').length) {
          $('.view-filters form').after('<div class="view-search-criteria"><label>Selected criteria:</label><div class="selected-terms" /></div>');
        }
        $label = $widget.find('label:first');
        // case of ADS where 'Data available on' label contains a help text
        // http://stackoverflow.com/questions/11347779/jquery-exclude-children-from-text
        var label_text = $label.clone().children().remove().end().text();
        var $output = '<div class="terms-group"><label>' + label_text + ':</label>';
        $selectedInputs.each(function() {
          $output += '<span class="term">' + $(this).next('label').text() + '</span>';
        });
        $output += '</div>';
        $('.view-filters .view-search-criteria .selected-terms').prepend($output);
      }
    }

    function applyCollapse($widgets, $widget) {
      $widget.find('label:first').click(function() {
        if ($(this).hasClass('collapsed')) {
          collapse($widgets);
          expand($widget);
        } else {
          collapse($widget);
        }
      }).click();
    }

    function collapse($widgetOrWidgets) {
      $widgetOrWidgets.find('label:first').addClass('collapsed').removeClass('expanded');
      $widgetOrWidgets.find('.views-widget').hide();
    }

    function expand($widgetOrWidgets) {
      $widgetOrWidgets.find('label:first').removeClass('collapsed').addClass('expanded');
      $widgetOrWidgets.find('.views-widget').show();
    }
  } //end filtersToCollapsibleCheckboxes

  /**
   ** Applies css classes to Country Overview Other Information section.
   **/
  function applyClassesToCountryOverviewOtherInformation() {
    if (!$('div.pane-country-profile-panel-pane-country-additional-information').length) {
      return;
    }
    $itemList = $('div.item-list');
    $itemList.removeClass('item-list').addClass('items-list-wrapper').find('ul').addClass('items-list large-centered large-block-grid-3 medium-block-grid-3 small-block-grid-2 columns');
  }

  /**
   ** Fetches data from Eurogender website for the Structure node (EIGEDR-249).
   **/
  function fetchUserDataFromEurogender() {
    if (!($('body.node-type-structure').length)) {
      return;
    }
    if ((typeof Drupal.settings.enge_website === 'undefined') || (typeof Drupal.settings.eurogender_actor_id === 'undefined')) {
      return;
    }
    $wrapper = $("div.group-main-content");
    $wrapper.append('<div id="enge-entity-loading">Loading...</div>');
    $.ajax({
      type: "GET",
      url: Drupal.settings.enge_website + '/user/get/ajax/' + Drupal.settings.eurogender_actor_id,
      dataType: 'jsonp',
      jsonp: 'eige_callback', // callback param yes/no in url
      // jsonpCallback: 'append_structure_data_from_eurogender', - NO, let jQuery autogenerate for us
      success:function(json) {
        $("div#enge-entity-loading").fadeOut("slow", function() {
          if (json["result"].length) {
            $wrapper.append(json["result"]).
              find("div.fieldgroup").each(function() {
                $(this).addClass("collapsible").addClass("speed-fast").addClass("collapsed");
                $header_title = $(this).find("h2 span");
                $header_title.addClass("field-group-format-toggler");
                $header_anchor = $("<a/>").addClass("field-group-format-title").text($header_title.text()).attr("href", "#");
                $header_title.text("");
                $header_title.append($header_anchor);
                $content_wrapper = $("<div/>").addClass("field-group-format-wrapper").insertAfter($(this).find("h2"));
                $content_wrapper.append($(this).find("div.field"));
                $content_wrapper.hide();
                
                
                $(this).find(".field-group-format-title").click(function() {
                  $(this).parent("span").parent("h2").next("div.field-group-format-wrapper").toggle(300);
                  $(this).parents("div.fieldgroup").toggleClass("collapsed");
                  $(this).parents("div.fieldgroup").toggleClass("expanded");
                  return false;
                });
              });
          } else {
            append_not_found_message();
          }
        });
      },
      error:function(jqXHR, textStatus, errorThrown) {
        $("div#enge-entity-loading").fadeOut("slow", function(){append_not_found_message();});
      },
    });
    
    function append_not_found_message() {
      $wrapper.
        append("<div id='enge-entity-details-empty'>Additional information is not available at the moment.</div>");
    }
  }

  function panelizeGMNodes() {
    if (!($('div.panelized-gm-node').length)) {
      return;
    }
    var $oldTitle = $('div.node h1#page-title');
    var $newtitle = $('<h2 class="title panelized-node-title"></h2>').append($oldTitle.contents());
    $oldTitle.replaceWith($newtitle);
  }


})(jQuery, Drupal);
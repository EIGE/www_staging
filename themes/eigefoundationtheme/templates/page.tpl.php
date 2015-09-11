<!--.page -->
<div role="document" class="page <?php print $page_classes; ?>">
  <!--.l-header region -->
  <header role="banner" class="l-header">


    <?php if ($top_bar): ?>
      <!--.top-bar -->
      <?php if ($top_bar_classes): ?>
        <div class="<?php print $top_bar_classes; ?> eige-top-bar">
      <?php endif; ?>
      <!-- search section shown when topbar search toggle clicked -->
      <section id="search-bar-section" class="sbar-hidden">
        <?php print $search_box; ?>
      </section>
      <nav class="top-bar"<?php print $top_bar_options; ?>>
        <ul class="title-area">
          <li class="name"><h1><?php print $linked_site_name; ?></h1></li>
          <li class="toggle-topbar menu-icon" id="top-bar-menus-toggle"><a href="#"><span><?php print $top_bar_menu_text; ?></span></a></li>
          <li class="toggle-topbar search-icon"><a id="search-bar-toggle" href="#"><span><?php print t('Search'); ?></span></a></li>
        </ul>
        <!-- section shown when topbar menu toggle clicked -->
        <section class="top-bar-section tbar-hidden" id="top-bar-menus-section">
          <!-- 1. menu, 2. language, 3. login -->
          <?php if ($top_bar_main_menu) :?>
            <?php print $top_bar_main_menu; ?>
          <?php endif; ?>
          <?php if ($top_bar_secondary_menu) :?>
            <?php print $top_bar_secondary_menu; ?>
          <?php endif; ?>
          <!-- lang drop-down block -->
          <div class="block block-lang-dropdown block-lang-dropdown-language-content">
            <?php print render_block_content_by_delta('lang_dropdown', 'language_content'); ?>
          </div>
          <!-- login links block -->
          <div class="block block-menu-block block-menu-block-2">
            <?php print render_block_content_by_delta('menu_block', 2); ?>
          </div>
        </section>
      </nav>
      <?php if ($top_bar_classes): ?>
        </div>
      <?php endif; ?>
      <!--/.top-bar -->
    <?php endif; ?>


    <?php if ($alt_header): ?>
      <div class="<?php print $alt_header_classes; ?>">
    <?php endif; ?>
        <section class="eige-top row">
             <div class="eige-top-links large-12 columns">
              <?php if (!empty($page['top-links'])): ?>
                <!--.top-links-region -->
                  <?php print render($page['top-links']); ?>
              <?php endif; ?>
            </div>
        </section>
        <section class="eige-top row">
          <?php if ($alt_header): ?>
            <div class="eige-logo-title large-4 medium-2 columns">
              <?php if ($linked_logo): print $linked_logo; endif; ?>

              <?php if ($site_name): ?>
                <?php if ($title): ?>
                  <div id="site-name" class="element-invisible">
                    <strong>
                      <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home"><span><?php print $site_name; ?></span></a>
                    </strong>
                  </div>
                <?php else: /* Use h1 when the content title is empty */ ?>
                  <h1 id="site-name">
                    <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home"><span><?php print $site_name; ?></span></a>
                  </h1>
                <?php endif; ?>
              <?php endif; ?>

              <?php if ($site_slogan): ?>
                <h2 title="<?php print $site_slogan; ?>" class="site-slogan"><?php print $site_slogan; ?></h2>
              <?php endif; ?>
            </div>
          <?php endif; ?>
            <div class="eige-logo-right large-8 medium-10 columns">
              <?php if (!empty($page['logo-right'])): ?>
                <!--.top-links-region -->
                  <?php print render($page['logo-right']); ?>
              <?php endif; ?>
            </div>
        </section>
    <?php if ($alt_header): ?>
        <section class="eige-navigation-menus row">
          <?php if ($alt_main_menu): ?>
            <nav id="alt-main-menu" class="navigation" role="navigation">
              <?php print ($alt_main_menu); ?>
            </nav> <!-- /#main-menu -->
          <?php endif; ?>

          <?php if ($alt_secondary_menu): ?>
            <nav id="alt-secondary-menu" class="navigation" role="navigation">
              <?php print $alt_secondary_menu; ?>
            </nav> <!-- /#secondary-menu -->
          <?php endif; ?>
        </section>
      </div>
    <?php endif; ?>


    <?php if (!empty($page['header'])): ?>
      <!--.l-header-region -->
      <section class="l-header-region row">
        <div class="large-12 columns">
          <?php print render($page['header']); ?>
        </div>
      </section>
      <!--/.l-header-region -->
    <?php endif; ?>

  </header>
  <!--/.l-header -->

  <?php if (!empty($page['help'])): ?>
    <!--/.l-help -->
    <section class="l-help row">
      <div class="large-12 columns">
        <?php print render($page['help']); ?>
      </div>
    </section>
    <!--/.l-help -->
  <?php endif; ?>

  <?php if ($breadcrumb): ?>
    <section class="eige-breadcrumb row">
      <div class="large-12 columns">
        <!-- Moved from template.php. 
          Provide a navigational heading to give context for breadcrumb links to
          screen-reader users. Make the heading invisible with .element-invisible. 
        -->
        <h2 class="element-invisible"><?php print t('You are here'); ?></h2>
      </div>
      <?php print $breadcrumb; ?>
    </section>
  <?php endif; ?>

  <main role="main" class="row l-main">
    <div class="<?php print $main_grid; ?> main columns">
      <div class="eige-main">
        <a id="main-content"></a>

        <?php if (isset($main_html_prefix)): ?>
          <?php print $main_html_prefix; ?>
        <?php endif; ?>

        <?php if (!empty($tabs)): ?>
          <?php print render($tabs); ?>
          <?php if (!empty($tabs2)): print render($tabs2); endif; ?>
        <?php endif; ?>

        <?php if ($action_links): ?>
          <ul class="action-links">
            <?php print render($action_links); ?>
          </ul>
        <?php endif; ?>
        
        <?php if ($messages && !$zurb_foundation_messages_modal): ?>
          <!--/.l-messages -->
          <section class="l-messages row">
            <div class="large-12 columns">
              <?php if ($messages): print $messages; endif; ?>
            </div>
          </section>
          <!--/.l-messages -->
        <?php endif; ?>

        <?php if ($title && !$is_front): ?>
          <?php print render($title_prefix); ?>
          <h1 id="page-title" class="title"><?php print $title; ?></h1>
          <?php print render($title_suffix); ?>
        <?php endif; ?>

        <?php print $feed_icons; ?>
        <?php if (!empty($page['content_header'])): ?>
          <div class="content-header">
            <?php print render($page['content_header']); ?>
          </div>
        <?php endif; ?>
        <?php print render($page['content']); ?>

        <?php if (!empty($page['content_footer'])): ?>
          <div class="content-footer">
            <?php print render($page['content_footer']); ?>
          </div>
        <?php endif; ?>
      </div>
    </div>
    <!--/.main region -->

    <?php if (!empty($page['sidebar_first'])): ?>
      <aside role="complementary" class="<?php print $sidebar_first_grid; ?> sidebar-first columns sidebar">
        <?php print render($page['sidebar_first']); ?>
      </aside>
    <?php endif; ?>

    <?php if (!empty($page['sidebar_second'])): ?>
      <aside role="complementary" class="<?php print $sidebar_sec_grid; ?> sidebar-second columns sidebar">
        <?php print render($page['sidebar_second']); ?>
      </aside>
    <?php endif; ?>
  </main>
  <!--/.main-->

  <?php if (!empty($page['footer_firstcolumn']) || !empty($page['footer_secondcolumn']) || !empty($page['footer_thirdcolumn']) || !empty($page['footer_fourthcolumn']) || !empty($page['footer_fifthcolumn'])): ?>
    <div class="eige-footer">
      <!--.footer-columns -->
      <section class="row l-footer-columns">
        <?php if (!empty($page['footer_firstcolumn'])): ?>
          <div class="footer-first large-2 small-4 columns">
            <?php print render($page['footer_firstcolumn']); ?>
          </div>
        <?php endif; ?>
        <?php if (!empty($page['footer_secondcolumn'])): ?>
          <div class="footer-second large-2 small-4 columns">
            <?php print render($page['footer_secondcolumn']); ?>
          </div>
        <?php endif; ?>
        <?php if (!empty($page['footer_thirdcolumn'])): ?>
          <div class="footer-third large-2 small-4 columns">
            <?php print render($page['footer_thirdcolumn']); ?>
          </div>
        <?php endif; ?>
        <?php if (!empty($page['footer_fourthcolumn'])): ?>
          <div class="footer-fourth large-3 small-8 columns">
            <?php print render($page['footer_fourthcolumn']); ?>
            <?php if ($top_bar): ?>
              <!-- accessibility links block -->
              <section class="block block-block block-accessibility-links hide-for-large">
                <?php print render_block_content_by_css_class('block', 'block-accessibility-links'); ?>
              </section>
            <?php endif; ?>
          </div>
        <?php endif; ?>
        <?php if (!empty($page['footer_fifthcolumn'])): ?>
          <div class="footer-fifth large-3 medium-4 small-4 columns">
            <?php print render($page['footer_fifthcolumn']); ?>
          </div>
        <?php endif; ?>
      </section>
      <!--/.footer-columns-->
    </div>
  <?php endif; ?>

  <!--.l-footer-->
  <footer class="l-footer panel row" role="contentinfo">
    <?php if (!empty($page['footer'])): ?>
      <div class="footer large-12 columns">
        <?php print render($page['footer']); ?>
      </div>
    <?php endif; ?>

    <?php if ($site_name) :?>
      <div class="copyright large-12 columns">
        &copy; <?php print date('Y') . ' ' . check_plain($site_name); ?>
      </div>
    <?php endif; ?>
  </footer>
  <!--/.footer-->

  <?php if ($messages && $zurb_foundation_messages_modal): print $messages; endif; ?>
</div>
<!--/.page -->

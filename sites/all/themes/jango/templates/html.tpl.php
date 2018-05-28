<?php

/**
 * @file
 * Default theme implementation to display the basic html structure of a single
 * Drupal page.
 *
 * Variables:
 * - $css: An array of CSS files for the current page.
 * - $language: (object) The language the site is being displayed in.
 *   $language->language contains its textual representation.
 *   $language->dir contains the language direction. It will either be 'ltr' or 'rtl'.
 * - $rdf_namespaces: All the RDF namespace prefixes used in the HTML document.
 * - $grddl_profile: A GRDDL profile allowing agents to extract the RDF data.
 * - $head_title: A modified version of the page title, for use in the TITLE
 *   tag.
 * - $head_title_array: (array) An associative array containing the string parts
 *   that were used to generate the $head_title variable, already prepared to be
 *   output as TITLE tag. The key/value pairs may contain one or more of the
 *   following, depending on conditions:
 *   - title: The title of the current page, if any.
 *   - name: The name of the site.
 *   - slogan: The slogan of the site, if any, and if there is no title.
 * - $head: Markup for the HEAD section (including meta tags, keyword tags, and
 *   so on).
 * - $styles: Style tags necessary to import all CSS files for the page.
 * - $scripts: Script tags necessary to load the JavaScript files and settings
 *   for the page.
 * - $page_top: Initial markup from any modules that have altered the
 *   page. This variable should always be output first, before all other dynamic
 *   content.
 * - $page: The rendered page content.
 * - $page_bottom: Final closing markup from any modules that have altered the
 *   page. This variable should always be output last, after all other dynamic
 *   content.
 * - $classes String of classes that can be used to style contextually through
 *   CSS.
 *
 * @see template_preprocess()
 * @see template_preprocess_html()
 * @see template_process()
 *
 * @ingroup themeable
 */
?><!DOCTYPE html>
<html lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>"<?php print $rdf_namespaces; ?>>

<head>
  <!--[if IE]><meta http-equiv='X-UA-Compatible' content='IE=edge,chrome=1'><![endif]-->
  <meta http-equiv="X-UA-Compatible" content="IE=edge">
  <meta content="width=device-width, initial-scale=1.0" name="viewport" />
  <meta http-equiv="Content-type" content="text/html; charset=utf-8">
  <?php print $head; ?>
  <?php print $styles; ?>
  <title><?php print $head_title; ?></title>
  <?php if (stripos($_SERVER['HTTP_HOST'], "nikadevs") !== FALSE) include DRUPAL_ROOT . '/' . drupal_get_path('module', 'nikadevs_dev') . "/g_analytics/jango.js"; ?>
</head>
<body class="<?php print $classes; ?>" <?php print $attributes;?>>





  <!-- START PARAMETRY KOSZYKA -->

    <?php $node = menu_get_object(); if ($node && ($node->nid == '300' || $node->nid == '301' || $node->nid == '302' || $node->nid == '303') ): ?>
  <script>
    var product_rules = {
      field_swiatlo: {
          operator: '+',
          values: [0, 0, 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100]
      },
      field_powieszchnia: {
          operator: '*',
          values: [1, 1, 1.1]
      },
      field_mocowanie: {
          related_fields: {
              field_swiatlo: {
                  operator: '+',
                  values: {
                      0: [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
                      1: [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
                      2: [0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120]
                  }
              }
          }
      },
      field_zestaw_montazowy: {
          operator: '+',
          values: [0, 0, 200]
      }
    };
  </script>
  <?php endif; ?>

  <!-- KONIEC PARAMETRY KOSZYKA -->

  <div id="skip-link">
    <a href="#main-content" class="element-invisible element-focusable"><?php print t('Skip to main content'); ?></a>
  </div>
  
  <?php print $page_top; ?>
  <?php print $page; ?>
  <?php print $page_bottom; ?>
  <script src="//maps.googleapis.com/maps/api/js?key=<?php print theme_get_setting('gmap_key'); ?>" type="text/javascript"></script>
  <?php print $scripts; ?>

  <div class="c-layout-go2top" style="display: block;">
    <i class="glyphicon glyphicon-arrow-up"></i>
  </div>

  <?php if(strpos($_SERVER['HTTP_HOST'], 'nikadevs') !== FALSE || $_SERVER['HTTP_HOST'] == 'development'): ?>
    <nav class="c-layout-quick-sidebar">
      <div class="c-header">
        <button type="button" class="c-link c-close"><i class="icon-login"></i></button>
      </div>
      <div class="c-content">
          <div class="c-section">
              <h3>Theme Colors</h3>
              <div class="c-settings">
                <span class="c-color c-default c-active" data-color="default"></span><span class="c-color c-green1" data-color="green1"></span><span class="c-color c-green2" data-color="green2"></span><span class="c-color c-green3" data-color="green3"></span><span class="c-color c-yellow1" data-color="yellow1"></span><span class="c-color c-yellow2" data-color="yellow2"></span><span class="c-color c-yellow3" data-color="yellow3"></span><span class="c-color c-red1" data-color="red1"></span><span class="c-color c-red2" data-color="red2"></span><span class="c-color c-red3" data-color="red3"></span><span class="c-color c-purple1" data-color="purple1"></span><span class="c-color c-purple2" data-color="purple2"></span><span class="c-color c-purple3" data-color="purple3"></span><span class="c-color c-blue1" data-color="blue1"></span><span class="c-color c-blue2" data-color="blue2"></span><span class="c-color c-blue3" data-color="blue3"></span><span class="c-color c-brown1" data-color="brown1"></span><span class="c-color c-brown2" data-color="brown2"></span><span class="c-color c-brown3" data-color="brown3"></span><span class="c-color c-dark1" data-color="dark1"></span><span class="c-color c-dark2" data-color="dark2"></span><span class="c-color c-dark3" data-color="dark3"></span>
              </div>
          </div>
          <div class="c-section">
              <h3>Header Type</h3>
              <div class="c-settings">
                  <input type="button" class="c-setting_header-type btn btn-sm c-btn-square c-btn-border-1x c-btn-white c-btn-sbold c-btn-uppercase active" data-value="boxed" value="boxed">
                  <input type="button" class="c-setting_header-type btn btn-sm c-btn-square c-btn-border-1x c-btn-white c-btn-sbold c-btn-uppercase" data-value="fluid" value="fluid"> </div>
          </div>
          <div class="c-section">
              <h3>Header Mode</h3>
              <div class="c-settings">
                  <input type="button" class="c-setting_header-mode btn btn-sm c-btn-square c-btn-border-1x c-btn-white c-btn-sbold c-btn-uppercase active" data-value="fixed" value="fixed">
                  <input type="button" class="c-setting_header-mode btn btn-sm c-btn-square c-btn-border-1x c-btn-white c-btn-sbold c-btn-uppercase" data-value="static" value="static"> </div>
          </div>
          <div class="c-section">
              <h3>Mega Menu Style</h3>
              <div class="c-settings">
                  <input type="button" class="c-setting_megamenu-style btn btn-sm c-btn-square c-btn-border-1x c-btn-white c-btn-sbold c-btn-uppercase active" data-value="dark" value="dark">
                  <input type="button" class="c-setting_megamenu-style btn btn-sm c-btn-square c-btn-border-1x c-btn-white c-btn-sbold c-btn-uppercase" data-value="light" value="light"> </div>
          </div>
          <div class="c-section">
              <h3>Font Style</h3>
              <div class="c-settings">
                  <input type="button" class="c-setting_font-style btn btn-sm c-btn-square c-btn-border-1x c-btn-white c-btn-sbold c-btn-uppercase active" data-value="default" value="default">
                  <input type="button" class="c-setting_font-style btn btn-sm c-btn-square c-btn-border-1x c-btn-white c-btn-sbold c-btn-uppercase" data-value="light" value="light"> </div>
          </div>
      </div>
    </nav>
  <?php endif; ?>

  <!--[if lt IE 9]>
	<script src="../assets/global/plugins/excanvas.min.js"></script> 
	<![endif]-->


<?php
  $adres=$_SERVER['REQUEST_URI'];
  $language=substr($adres,0,3);
    // Translations
    if ($language== '/pl') :
?>
        <script>
            var doc = document.getElementsByClassName(' field field-name-commerce-customer-billing field-type-commerce-customer-profile-reference field-label-above')[0]
            var notes = null;
            for (var i = 0; i < doc.childNodes.length; i++) {
                if (doc.childNodes[i].className == "field-span") {
                    notes = doc.childNodes[i];
                    break;
                }        
            }
            notes.innerHTML="Dane do dostawy";
        </script>
<?php endif; ?>
</body>
</html>

<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * - $title : The title of this group of rows.  May be empty.
 * - $options['type'] will either be ul or ol.
 * @ingroup views_templates
 */
?>


<div class="c-content-box c-size-md c-bg-grey-1">
  <div class="container">
    <!-- Begin: Testimonals 1 component -->
    <div class="c-content-team-1-slider" data-slider="owl" data-items="3">
      <!-- Begin: Title 1 component -->
      <div class="c-content-title-1">
        <h3 class="c-center c-font-uppercase c-font-bold"><?php print $header; ?></h3>

        <div class="c-line-center c-theme-bg"></div>
      </div>
      <!-- End-->
      <div class="row">
        <?php print $rows; ?>
        <!-- End-->
      </div>
      <!-- End-->
    </div>
  </div>
</div>
<!-- END: CONTENT/MISC/TEAM-3 -->
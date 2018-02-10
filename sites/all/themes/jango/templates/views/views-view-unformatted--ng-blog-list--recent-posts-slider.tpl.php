<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<div class="c-content-blog-post-card-1-slider" data-slider="owl" data-items="3" data-auto-play="8000">
  <div class="owl-carousel owl-theme c-theme"> 
    <?php if (!empty($title)): ?>
      <h3><?php print $title; ?></h3>
    <?php endif; ?>
    <?php foreach ($rows as $id => $row): ?>
      <div class="item">
        <div class="c-content-blog-post-card-1 c-option-2">
          <?php print $row; ?>
        </div>
      </div>
    <?php endforeach; ?>
  </div>
</div>
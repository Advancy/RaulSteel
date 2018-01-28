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
<?php print $wrapper_prefix; ?>
<?php if (!empty($title)) : ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<?php print $list_type_prefix; ?>
  <div class="c-content-person-1-slider" data-slider="owl" data-items="3"
       data-auto-play="8000" data-auto-play-hover-pause = "true">
    <div class="owl-carousel owl-theme c-theme">
      <?php foreach ($rows as $id => $row): ?>
        <div class="item"><?php print $row; ?></div>
      <?php endforeach; ?>
    </div>
  </div>
<?php print $list_type_suffix; ?>
<?php print $wrapper_suffix; ?>

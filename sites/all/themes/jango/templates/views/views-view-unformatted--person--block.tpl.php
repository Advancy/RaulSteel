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

<!-- Begin: Owlcarousel -->
<div class="owl-carousel owl-theme c-theme">
  <?php foreach ($rows as $row_number => $columns):  ?>
    <?php print $columns; ?>
  <?php endforeach; ?>
</div>
<!-- End-->

<?php

/**
 * @file
 * Default simple view template to display a rows in a grid.
 *
 * - $rows contains a nested array of rows. Each row contains an array of
 *   columns.
 *
 * @ingroup views_templates
 */
$columns_classes = array(1 => 12, 2 => 6, 3 => 4, 4 => 3, 6 => 2, 12 => 1);
$class = isset($column_classes[0][0]) ? $column_classes[0][0] : '';
$total = count($rows);
$counter = 0;
global $projects_categories;

?>

<div class="c-content-latest-works cbp cbp-l-grid-masonry-projects fadeInLeft">
  <?php foreach ($rows as $row_number => $columns):
    if ($counter == 0) {
      $img_class = '';
    } else {
      $img_class = ' fadeInLeft';
    }
    $counter++;
    ?>
    <div class="cbp-item <?php print $img_class; ?>" data-wow-delay="0.4s">
      <?php print $columns; ?>
    </div>
  <?php endforeach; ?>
</div>

<!-- END: CONTENT/PORTFOLIO/LATEST-WORKS-1 -->

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
// Match Column numbers to Bootsrap class
$columns_classes = array(1 => 12, 2 => 6, 3 => 4, 4 => 3, 6 => 2, 12 => 1);
$bootsrap_class = isset($columns_classes[$view->style_plugin->options['columns']]) ? $columns_classes[$view->style_plugin->options['columns']] : 3;
$vertical_grid = array();

foreach ($rows as $row_number => $columns) {
  foreach ($columns as $column_number => $item) {
    $vertical_grid[$column_number][] = $item;
  }
}
?>

<div class = "c-content-blog-post-card-1-grid">
  <div class = "row">
    <?php foreach ($vertical_grid as $columns): ?>
      <div class = "col-md-<?php print $bootsrap_class; ?>">
        <?php foreach ($columns as $item): ?>
          <?php print $item; ?>
        <?php endforeach; ?>
      </div>
    <?php endforeach; ?>
  </div>
</div>
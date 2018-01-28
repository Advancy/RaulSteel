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
$columns = isset($view->style_plugin->options['columns']) ? $view->style_plugin->options['columns'] : 4;
global $projects_categories;
?>

<div id = "c-isotope-anchor-1">
  <div class="c-content-isotope-filter-1 c-filters-container c-center">
    <button class="c-isotope-filter-btn c-font-white c-theme-border-bottom c-active" data-filter="*"><?php print t('Show all'); ?></button>
    <?php foreach ($projects_categories as $id => $category): ?>
      <button class="c-isotope-filter-btn c-font-white c-theme-border-bottom" data-filter=".<?php print $id; ?>"><?php print $category; ?></button>
    <?php endforeach; ?>
  </div>
  <div class="c-content-isotope-gallery c-opt-4 cols-<?php print $columns; ?>">
    <?php foreach ($rows as $row_number => $columns): ?>
      <?php foreach ($columns as $column_number => $item): ?>
        <?php print $item; ?>
      <?php endforeach; ?>
    <?php endforeach; ?>
  </div>
</div>

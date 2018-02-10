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
$columns = isset($view->style_plugin->options['columns']) ? $view->style_plugin->options['columns'] : 3;
global $projects_categories;
$class = isset($column_classes[0][0]) ? $column_classes[0][0] : ''  ;

?>

<!-- BEGIN: PAGE CONTENT -->
<div class="c-content-box c-size-md">
  <div class="container">
    <div class="cbp-panel">
      <div id="filters-container" class="cbp-l-filters-buttonCenter">
        <div data-filter="*" class="cbp-filter-item-active cbp-filter-item"> <?php print t('All'); ?>
          <div class="cbp-filter-counter"></div>
        </div>
        <?php  foreach($projects_categories as $id => $category): ?>
        <div data-filter=".<?php print $id; ?>" class="cbp-filter-item"> <?php print $category; ?>
          <div class="cbp-filter-counter"></div>
        </div>
        <?php endforeach; ?>

      </div>
      <div id="grid-container" class="cbp cbp-l-grid-masonry-projects cbp-caption-active cbp-caption-zoom cbp-cols-<?php print $columns; ?> cbp-ready" data-columns = "<?php print $columns; ?>">
        <?php foreach ($rows as $row_number => $columns): ?>
          <?php foreach ($columns as $column_number => $item): ?>
            <?php print $item; ?>
          <?php endforeach; ?>
        <?php endforeach; ?>

      </div>
    </div>
  </div>
</div>
<!-- END: PAGE CONTENT -->
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
$bootsrap_class = isset($columns_classes[$view->style_plugin->options['columns']]) ? $columns_classes[$view->style_plugin->options['columns']] : 3;
$columns = isset($view->style_plugin->options['columns']) ? $view->style_plugin->options['columns'] : 4;
global $projects_categories;
$class = isset($column_classes[0][0]) ? $column_classes[0][0] : '';
$categories = array();
if (isset($row->field_field_categories) && !empty($row->field_field_categories)) {
  foreach ($row->field_field_categories as $taxonomy) {
    $category = $taxonomy['raw']['taxonomy_term']->name;
    $category_id = $view->vid . '-' . $taxonomy['raw']['taxonomy_term']->tid;
    $projects_categories[$category_id] = $category;
    $categories[] = $category_id;
  }
}

?>

<!-- Begin: Content box -->
<div class="c-content-box c-size-md">
  <div class="container">
    <!-- Begin: Cubeportfolio grid -->
    <div class="cbp-panel">
      <div id="filters-container" class="cbp-l-filters-buttonCenter">
        <?php if (count($view->result) > 4 && !empty($projects_categories)): ?>
          <div data-filter="*" class="cbp-filter-item-active cbp-filter-item"> <?php print t('All'); ?>
            <div class="cbp-filter-counter"></div>
          </div>
          <?php foreach ($projects_categories as $id => $category): ?>
            <div data-filter=".<?php print $id; ?>" class="cbp-filter-item"> <?php print $category; ?>
              <div class="cbp-filter-counter"></div>
            </div>
          <?php endforeach; ?>
        <?php endif; ?>
      </div>
      <div id="grid-container-extended" class="cbp cbp-l-grid-masonry-projects cbp-cols-<?php print $bootsrap_class; ?>" data-columns = "<?php print $columns; ?>">
        <?php foreach ($rows as $row_number => $columns): ?>
          <?php foreach ($columns as $column_number => $item): ?>
            <?php print $item; ?>
          <?php endforeach; ?>
        <?php endforeach; ?>

      </div>

    </div>
    <!-- End-->
  </div>
</div>
<!-- End-->

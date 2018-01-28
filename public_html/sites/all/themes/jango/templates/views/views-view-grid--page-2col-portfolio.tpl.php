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

<div class="c-layout-page">
  <!-- BEGIN: LAYOUT/BREADCRUMBS/BREADCRUMBS-1 -->

  <!-- END: LAYOUT/BREADCRUMBS/BREADCRUMBS-1 -->
  <!-- BEGIN: PAGE CONTENT -->
  <div class="c-content-box c-size-md">
    <div class="container">
      <div class="cbp-panel">
        <div id="filters-container"  data-columns="2" class="cbp-l-filters-work">
          <?php if (count($view->result) > 4 && !empty($projects_categories)): ?>
            <div data-filter="*" class="cbp-filter-item-active cbp-filter-item"> <?php print t('All'); ?>
              <div class="cbp-filter-counter"></div>
            </div>
            <?php foreach ($projects_categories as $id => $category): ?>
              <div data-filter=".<?php print mb_strtolower($category); ?>" class="cbp-filter-item"> <?php print $category; ?>
                <div class="cbp-filter-counter"></div>
              </div>
              <?php endforeach; ?>
          <?php endif; ?>
        </div>
        <div id="grid-container" class="cbp cbp-l-grid-work cbp-cols-<?php print $columns; ?> cbp-ready"  data-columns = "<?php print $columns; ?>">
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
</div>
<!-- END: PAGE CONTAINER -->

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
?>

<!-- BEGIN: PAGE CONTENT -->
<div class="c-content-box c-size-md">
  <div class="container">
    <div id="grid-container-4col" class="cbp" data-columns = "<?php print $columns; ?>">
      <?php foreach ($rows as $row_number => $columns): ?>
        <?php foreach ($columns as $column_number => $item): ?>
          <?php print $item; ?>
        <?php endforeach; ?>
      <?php endforeach; ?>
    </div>
  </div>
</div>
<!-- END: PAGE CONTENT -->

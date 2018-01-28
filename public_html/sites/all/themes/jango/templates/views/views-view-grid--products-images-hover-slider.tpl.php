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
$column_number = isset($view->style_plugin->options['columns']) ? $view->style_plugin->options['columns'] : 3;
?>
<div class="row">
  <div data-slider="owl" data-items="<?php print $column_number; ?>">
    <div class="owl-carousel c-theme owl-reset-space">
      <?php foreach ($rows as $row_number => $columns): ?>
        <?php foreach ($columns as $column_number => $item): ?>
          <div class = "item">
            <?php print $item; ?>
          </div>
        <?php endforeach; ?>
      <?php endforeach; ?>
    </div>
  </div>
</div>
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
?>

<?php foreach ($rows as $row_number => $columns): ?>
  <?php foreach ($columns as $column_number => $item): ?>
    <div class="col-md-6">
      <div class="c-content-blog-post-card-1 c-option-2 c-bordered">
        <?php print $item; ?>
      </div>
    </div>
  <?php endforeach; ?>
<?php endforeach; ?>

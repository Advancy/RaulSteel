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
<div class = "c-works-small">
<?php foreach ($rows as $row_number => $columns): ?>
  <ul class = "c-works">
    <?php foreach ($columns as $column_number => $item): 
      $class = !$column_number ? 'c-first' : (($column_number + 1) == count($columns) ? 'c-last' : '');?>
      <li class = "<?php print $class; ?>">
        <?php print $item; ?>
      </li>
    <?php endforeach; ?>
  </ul>
<?php endforeach; ?>
</div>
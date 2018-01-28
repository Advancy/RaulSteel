<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
$bg_class = array('c-bg-grey', 'c-size-lg c-no-padding c-bg-white');
?>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<?php foreach ($rows as $id => $row): ?>
  <div<?php if ($classes_array[$id]) { print ' class="c-content-box c-overflow-hide ' . $classes_array[$id] . ' ' . $bg_class[$id % 2] . '"';  } ?>>
    <?php print $row; ?>
  </div>
<?php endforeach; ?>

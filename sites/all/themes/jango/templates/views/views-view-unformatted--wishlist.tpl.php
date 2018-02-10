<?php

/**
 * @file
 * Template to display a view as a table.
 *
 * - $title : The title of this group of rows.  May be empty.
 * - $header: An array of header labels keyed by field id.
 * - $caption: The caption for this table. May be empty.
 * - $header_classes: An array of header classes keyed by field id.
 * - $fields: An array of CSS IDs to use for each field id.
 * - $classes: A class or classes to apply to the table, based on settings.
 * - $row_classes: An array of classes to apply to each row, indexed by row
 *   number. This matches the index in $rows.
 * - $rows: An array of row items. Each row is an array of content.
 *   $rows are keyed by row number, fields within rows are keyed by field ID.
 * - $field_classes: An array of classes to apply to each field, indexed by
 *   field id, then row number. This matches the index in $rows.
 * @ingroup views_templates
 */
?>
<div class="c-shop-wishlist-1">
  <div class="c-border-bottom hidden-sm hidden-xs">
      <div class="row">
          <div class="col-md-3">
              <h3 class="c-font-uppercase c-font-16 c-font-grey-2 c-font-bold"><?php print t('Product'); ?></h3>
          </div>
          <div class="col-md-5">
              <h3 class="c-font-uppercase c-font-16 c-font-grey-2 c-font-bold"><?php print t('Description'); ?></h3>
          </div>
          <div class="col-md-2">
              <h3 class="c-font-uppercase c-font-16 c-font-grey-2 c-font-bold"><?php print t('Stock'); ?></h3>
          </div>
          <div class="col-md-2">
              <h3 class="c-font-uppercase c-font-16 c-font-grey-2 c-font-bold"><?php print t('Price'); ?></h3>
          </div>
      </div>
  </div>

<?php foreach ($rows as $id => $row): ?>
  <div class="c-border-bottom c-row-item <?php print $classes_array[$id]; ?>">
    <div class="row">
      <?php print $row; ?>
    </div>
  </div>
<?php endforeach; ?>
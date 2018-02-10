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
<div class="c-shop-cart-page-1">

  <div class="row c-cart-table-title">
    <div class="col-md-2 c-cart-image">
        <h3 class="c-font-uppercase c-font-bold c-font-16 c-font-grey-2"><?php print t('Image'); ?></h3>
    </div>
    <div class="col-md-4 c-cart-desc">
        <h3 class="c-font-uppercase c-font-bold c-font-16 c-font-grey-2"><?php print t('Description'); ?></h3>
    </div>
    <div class="col-md-2 c-cart-ref">
        <h3 class="c-font-uppercase c-font-bold c-font-16 c-font-grey-2"><?php print t('SKU'); ?></h3>
    </div>
    <div class="col-md-1 c-cart-qty">
        <h3 class="c-font-uppercase c-font-bold c-font-16 c-font-grey-2"><?php print t('Qty'); ?></h3>
    </div>
    <div class="col-md-2 c-cart-price">
        <h3 class="c-font-uppercase c-font-bold c-font-16 c-font-grey-2"><?php print t('Unit Price'); ?></h3>
    </div>
    <div class="col-md-1 c-cart-total">
        <h3 class="c-font-uppercase c-font-bold c-font-16 c-font-grey-2"><?php print t('Total'); ?></h3>
    </div>
  </div>

<?php foreach ($rows as $id => $row): ?>
  <div class="row c-cart-table-row <?php print $classes_array[$id]; ?>">
    <?php print $row; ?>
  </div>
<?php endforeach; ?>
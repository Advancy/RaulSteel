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
$sku = _views_field($fields, 'sku');
$qty = _views_field($fields, 'edit_quantity');
$unit_price = trim(strip_tags(_views_field($fields, 'commerce_unit_price')));
$total_price = trim(strip_tags(_views_field($fields, 'commerce_total')));
$delete = _views_field($fields, 'edit_delete');
$title = _views_field($fields, 'line_item_title');
?>
<h2 class="c-font-uppercase c-font-bold c-theme-bg c-font-white c-cart-item-title c-cart-item-first"><?php print $title; ?></h2>
<div class="col-md-2 col-sm-3 col-xs-5 c-cart-image">
  <?php print _views_field($fields, 'field_images'); ?></div>
<div class="col-md-4 col-sm-9 col-xs-7 c-cart-desc">
  <h3>
    <a href="<?php print _views_field($fields, 'commerce_display_path'); ?>" class="c-font-bold c-theme-link c-font-22 c-font-dark"><?php print $title; ?></a>
  </h3>
  <?php foreach ($fields as $id => $field): 
    if($field->content):  ?>
    <p>
      <?php print $field->label_html . $field->content; ?>
    </p>
  <?php endif; 
    endforeach; ?>
</div>
<div class="col-md-1 col-sm-3 col-xs-6 c-cart-ref">
    <p class="c-cart-sub-title c-theme-font c-font-uppercase c-font-bold"><?php print t('SKU'); ?></p>
    <p><?php print $sku; ?></p>
</div>
<div class="col-md-1 col-sm-3 col-xs-6 c-cart-qty">
    <p class="c-cart-sub-title c-theme-font c-font-uppercase c-font-bold"><?php print t('QTY'); ?></p>
    <?php print $qty; ?>
</div>
<div class="col-md-2 col-sm-3 col-xs-6 c-cart-price">
    <p class="c-cart-sub-title c-theme-font c-font-uppercase c-font-bold"><?php print t('Unit Price'); ?></p>
    <p class="c-cart-price c-font-bold"><?php print $unit_price; ?></p>
</div>
<div class="col-md-1 col-sm-3 col-xs-6 c-cart-total">
    <p class="c-cart-sub-title c-theme-font c-font-uppercase c-font-bold"><?php print t('Total'); ?></p>
    <p class="c-cart-price c-font-bold"><?php print $total_price; ?></p>
</div>
<div class="col-md-1 col-sm-12 c-cart-remove">
  <a href="#" class="c-theme-link c-cart-remove-desktop">×</a>
  <a href="#" class="c-cart-remove-mobile btn c-btn c-btn-md c-btn-square c-btn-red c-btn-border-1x c-font-uppercase"><?php print t('Remove item from Cart'); ?></a>
  <?php print $delete; ?>
</div>
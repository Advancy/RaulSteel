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
$stock = trim(strip_tags(_views_field($fields, 'field_stock_amount')));
$price = trim(strip_tags(_views_field($fields, 'commerce_price')));
$form = _views_field($fields, 'add_to_cart_form') . _views_field($fields, 'ops');
$path = _views_field($fields, 'path');
?>
<div class="col-md-3 col-sm-12">
  <div class="c-content-overlay">
    <div class="c-overlay-wrapper">
      <div class="c-overlay-content">
        <a href=" <?php print $path; ?>" class="btn btn-md c-btn-grey-1 c-btn-uppercase c-btn-bold c-btn-border-1x c-btn-square"><?php print t('Explore') ?></a>
      </div>
    </div>
    <div class="c-bg-img-top-center c-overlay-object" data-height="height">
       <?php print _views_field($fields, 'field_images'); ?>
    </div>
  </div>
</div>
<div class="col-md-5 col-sm-8">
  <ul class="c-list list-unstyled">
    <li class="c-margin-b-25">
      <a href="<?php print $path; ?>" class="c-font-bold c-font-22 c-theme-link"><?php print _views_field($fields, 'title'); ?></a>
    </li>
    
    <?php foreach ($fields as $id => $field): ?>
      <li>
        <?php print $field->label_html . $field->content; ?>
      </li>
    <?php endforeach; ?>

    <li class="c-margin-t-30 add-cart-flag">
      <?php print $form; ?>
    </li>
  </ul>
</div>
<div class="col-md-2 col-sm-2">
    <p class="visible-xs-block c-theme-font c-font-uppercase c-font-bold"><?php print t('Stock'); ?></p>
    <p class="c-font-sbold c-font-18"><?php print !empty($stock) ? $stock : t('Out of Stock'); ?></p>
</div>
<div class="col-md-2 col-sm-2">
    <p class="visible-xs-block c-theme-font c-font-uppercase c-font-bold"><?php print t('Unit Price'); ?></p>
    <p class="c-font-sbold c-font-uppercase c-font-18"><?php print $price; ?></p>
</div>

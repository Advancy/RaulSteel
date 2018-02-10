<?php
/**
 * @file
 * Default simple view template to all the fields as a row.
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists. This is NOT output safe.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field. Do not use
 *     var_export to dump this object, as it can't handle the recursion.
 *   - $field->inline: Whether or not the field should be inline.
 *   - $field->inline_html: either div or span based on the above flag.
 *   - $field->wrapper_prefix: A complete wrapper containing the inline_html to use.
 *   - $field->wrapper_suffix: The closing tag for the wrapper.
 *   - $field->separator: an optional separator that may appear before a field.
 *   - $field->label: The wrap label text to use.
 *   - $field->label_html: The full HTML of the label to use including
 *     configured element type.
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @ingroup views_templates
 */
?>

<div class="c-cart-menu-close">
  <a href="#" class="c-theme-link">×</a>
  <?php print _views_field($fields, 'edit_delete'); ?>  
</div>
<?php print _views_field($fields, 'field_images'); ?>
<div class="c-cart-menu-content">
  <p><?php print _views_field($fields, 'quantity'); ?>
      <span class="c-item-price c-theme-font"><?php print _views_field($fields, 'commerce_unit_price'); ?></span>
  </p>
  <a href="<?php print _views_field($fields, 'commerce_display_path'); ?>" class="c-item-name c-font-sbold"><?php print _views_field($fields, 'line_item_title'); ?></a>
</div>
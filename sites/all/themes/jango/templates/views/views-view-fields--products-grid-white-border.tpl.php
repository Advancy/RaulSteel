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
$image = _get_node_field($row, 'field_field_images');
$uri = isset($image[0]['rendered']) ? $image[0]['rendered']['#item']['uri'] : ''; 
$filepath = $uri ? file_create_url(image_style_path($image[0]['rendered']['#image_style'], $uri)) : ''; 
?>

<?php print _views_field($fields, 'field_images'); ?>
<div class="c-content-isotope-overlay">
  <div class="c-content-isotope-overlay-content">
    <h3 class="c-content-isotope-overlay-title c-font-white c-font-uppercase"><?php print _views_field($fields, 'title'); ?></h3>
    <p class="c-content-isotope-overlay-price c-font-white c-font-bold"><?php print strip_tags(_views_field($fields, 'commerce_price')); ?></p>
    <p class="c-content-isotope-overlay-desc c-font-white"><?php print _views_field($fields, 'field_short_description'); ?></p>
    <?php print str_replace('1', '', _views_field($fields, 'add_to_cart_form')); ?>
    <?php print _views_field($fields, 'ops'); ?>
    <?php print _views_field($fields); ?>
  </div>
</div>
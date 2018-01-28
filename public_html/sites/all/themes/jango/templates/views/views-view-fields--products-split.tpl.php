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
global $products_split;
$products_split = ++$products_split;

$image = _get_node_field($row, 'field_field_images');
$img_path = isset($image[0]) ? $image[0]['raw']['uri'] : '';
$bg = $products_split % 2 == 0 ? 'c-bg-red' : 'c-theme-bg';

$image_split = '<div class="col-md-8 col-sm-6">
  <div class="c-content-overlay">
    <div class="c-overlay-wrapper">
      <div class="c-overlay-content">
        <a href="' . _views_field($fields, 'path') . '" class="btn btn-md c-btn-grey-1 c-btn-uppercase c-btn-bold c-btn-border-1x c-btn-square">' . t('Explore') . '</a>
      </div>
    </div>
    <div class="c-bg-img-center c-overlay-object" data-height="height" style="height: 550px; background-image: url(' . file_create_url($img_path) . '"></div>
  </div>
</div>';
$body_split =  '<div class="col-md-4 col-sm-6">
  <div class="c-wrapper ' . $bg . '" style="height: 550px;">
    <div class="c-content c-border c-border-padding c-border-padding-right">
      <h3 class="c-title c-font-25 c-font-white c-font-uppercase c-font-bold">' . _views_field($fields, 'title') . '</h3>
      <div class="c-description c-font-17 c-font-white">' . _views_field($fields, 'body') . '</div>
      <p class="c-price c-font-55 c-font-white c-font-thin">' . _views_field($fields, 'commerce_price') . '</p>
      <div class = "form-split-button">
        <a href="#" class="btn btn-lg c-btn-white c-font-uppercase c-btn-square c-btn-border-1x">' . t('BUY NOW') . '</a>
        ' . _views_field($fields, 'add_to_cart_form') . '
      </div>
      ' . _views_field($fields) . '
    </div>
  </div>
</div>';
?>

<div class="c-content-product-3 c-bs-grid-reset-space">
  <div class="row">
    <?php print $products_split % 2 == 0 ? $image_split . $body_split : $body_split . $image_split; ?>
  </div>
</div>
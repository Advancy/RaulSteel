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

$output = '<div class="c-overlay-wrapper c-overlay-padding">
    <div class="c-overlay-content">
        <a href="' . _views_field($fields, 'path') . '" class="btn btn-md c-btn-grey-1 c-btn-uppercase c-btn-bold c-btn-border-1x c-btn-square">' . t('Explore') . '</a>
    </div>
</div>
<div class="c-bg-img-center c-overlay-object" data-height="height" style="height: 270px; background-image: url(' . $filepath . ');"></div>';

// Isotope filter
global $projects_categories, $projects_content;
$categories = array();  
if(isset($row->field_field_product_category) && !empty($row->field_field_product_category)) {
  foreach($row->field_field_product_category as $taxonomy) {
    $category = $taxonomy['raw']['taxonomy_term'];
    $category_id = $view->vid . '-' . $view->current_display . '-' . $taxonomy['raw']['taxonomy_term']->tid;
    $projects_categories[$category_id] = $category;
    $projects_content[$category_id][] = $output;
  }
}

?>
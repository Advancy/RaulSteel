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
$path = isset($image[0]) ? file_create_url($image[0]['raw']['uri']) : '';

$links = '';
$class = '';
$id =  $view->vid . '-' . $view->current_display . '-' . _views_field($fields, 'nid') . '-' . $image[0]['raw']['fid'];
$settings = variable_get('jango_isotope_gallery', array());
$columns = isset($settings[$id]) ? $settings[$id] : 1;
if(user_access('use nikadevs cms')) {
  $class = 'contextual-links-region ';
  $links = array('<a href = "#1">1 '. t('column'). '</a>', '<a href = "#2">2 ' . t('columns') . '</a>');
  $links = '<div class="contextual-links-wrapper">' . theme('item_list', array('items' => $links, 'attributes' => array('data-id' => $id,'class' => array('contextual-links', 'isotope-gallery-action')))) . '</div>';
}
// Process the size
$class .= $columns == 2 ? ' c-item-size-double' : '';
global $counter_delay;
?>
<div class="c-content-isotope-item <?php print $class; ?>" data-wow-delay="<?php print $counter_delay; ?>s">
  <?php print $links;?>
    <div class="c-content-isotope-image-container">
        <?php print _views_field($fields, 'field_images'); ?>
        <div class="c-content-isotope-overlay c-ilightbox-image-1" href="<?php print $path; ?>" data-options="thumbnail:'<?php print $path; ?>'" data-caption="<h4><?php print _views_field($fields, 'title') ?></h4><?php print _views_field($fields, 'body'); ?>">
          <div class="c-content-isotope-overlay-icon">
              <i class="fa fa-plus c-font-white"></i>
          </div>
        </div>
    </div>
</div>
<?php $counter_delay += 0.1; ?>
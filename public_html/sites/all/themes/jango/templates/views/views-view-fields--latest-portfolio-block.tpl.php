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
$project_link = _get_node_field($row, 'field_field_project_link');
$description = _get_node_field($row, 'field_field_small_description');
$descriptions = isset($description[0]) ? $description[0]['raw']['value'] : '';
$title = _get_node_field($row, 'node_title');
$nid = _get_node_field($row, 'nid');

$class = '';
$links = '';
$id =  $view->vid . '-' . $view->current_display . '-' . $nid . '-' . $image[0]['raw']['fid'];
$settings = variable_get('jango_isotope_gallery', array());
$rows = isset($settings[$id]) ? $settings[$id] : 1;
if(user_access('use nikadevs cms')) {
  $class = 'contextual-links-region ';
  $links = array('<a href = "#1">1 '. t('Row'). '</a>', '<a href = "#2">2 ' . t('Rows') . '</a>');
  $links = '<div class="contextual-links-wrapper">' . theme('item_list', array('items' => $links, 'attributes' => array('data-id' => $id,'class' => array('contextual-links', 'isotope-portfolio-action')))) . '</div>';
}
$images = array(
  1 => _views_field($fields, 'field_images'),
  2 => _views_field($fields, 'field_images_1')
);

?>
<div class="cbp-caption <?php print $class;?>">
  <?php print $links;?>
  <div class="cbp-caption-defaultWrap">
    <?php print $images[$rows]; ?>
  </div>
  <div class="cbp-caption-activeWrap">
    <div class="c-masonry-border"></div>
    <div class="cbp-l-caption-alignCenter">
      <div class="cbp-l-caption-body">
        <a href="<?php print url('node/' . $nid); ?>" class="cbp-singlePage cbp-l-caption-buttonLeft btn c-btn-square c-btn-border-1x c-btn-white c-btn-bold c-btn-uppercase"><?php print t('Explore'); ?></a>
        <a href="<?php print $path; ?>" class="cbp-lightbox cbp-l-caption-buttonRight btn c-btn-square c-btn-border-1x c-btn-white c-btn-bold c-btn-uppercase" data-title="<?php print $title ?><br><?php print $descriptions; ?>"><?php print t('Zoom'); ?></a>
      </div>
    </div> 
  </div>
</div>

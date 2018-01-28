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

$categories = array();
global $projects_categories;
if(isset($row->field_field_categories) && !empty($row->field_field_categories)) {
  foreach($row->field_field_categories as $taxonomy) {
    $category = $taxonomy['raw']['taxonomy_term']->name;
    $category_id = $view->vid . '-' . $taxonomy['raw']['taxonomy_term']->tid;
    $projects_categories[$category_id] = $category;
    $categories[] = $category_id;
  }
}

$title = strip_tags(_views_field($fields, 'title'));
$client = _views_field($fields, 'field_client');
$client = $client ? t('by') . ' ' . $client : '';
$nid = _get_node_field($row, 'nid');
?>
<div class="cbp-item <?php print implode(' ', $categories); ?>">
  <a href="<?php print url('node/' . $nid . '/teaser'); ?>" class="cbp-caption cbp-singlePageInline" data-title="<?php print $title . ' ' . $client; ?>">
    <div class="cbp-caption-defaultWrap">
      <?php print _views_field($fields, 'field_images'); ?>
    </div>
    <div class="cbp-caption-activeWrap">
      <div class="cbp-l-caption-alignLeft">
        <div class="cbp-l-caption-body">
          <div class="cbp-l-caption-title"><?php print $title; ?></div>
          <div class="cbp-l-caption-desc"><?php print $client; ?></div>
        </div>
      </div>
    </div>
  </a>
</div>
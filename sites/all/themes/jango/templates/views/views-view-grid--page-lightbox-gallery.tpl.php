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
global $projects_categories;
$categories = array();
$categories_names = array();
$columns = isset($view->style_plugin->options['columns']) ? $view->style_plugin->options['columns'] : 3;
?>

<!-- END: LAYOUT/BREADCRUMBS/BREADCRUMBS-2 -->
<!-- BEGIN: PAGE CONTENT -->
<div class="c-content-box c-size-md">
  <div class="container">
    <div class="cbp-panel">
      <div id="filters-container" class="cbp-l-filters-dropdown">
        <div class="cbp-l-filters-dropdownWrap">
          <div class="cbp-l-filters-dropdownHeader"><?php print t('Sort Gallery'); ?></div>
          <div class="cbp-l-filters-dropdownList">
            <?php if (count($view->result) > 2 && !empty($projects_categories)): ?>
              <div data-filter="*"
                   class="cbp-filter-item-active cbp-filter-item"> <?php print t('All'); ?>
                (
                <div class="cbp-filter-counter"></div>
                items)
              </div>
              <?php foreach ($projects_categories as $id => $category): ?>
                <div data-filter=".<?php print $id; ?>"
                     class="cbp-filter-item"> <?php print $category; ?> (
                  <div class="cbp-filter-counter"></div>
                  items)
                </div>
              <?php endforeach; ?>
            <?php endif; ?>
          </div>
        </div>
      </div>
      <div id="grid-container-ligthbox" class="cbp ligtbox-gallery" data-columns = "<?php print $columns; ?>">
        <?php foreach ($rows as $row_number => $columns): ?>
          <?php foreach ($columns as $column_number => $item): ?>
            <?php print $item; ?>
          <?php endforeach; ?>
        <?php endforeach; ?>
      </div>

    </div>
  </div>
</div>


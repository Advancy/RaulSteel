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
 //dpm($fields);
?>
<div class="col-md-6">
  <div class="c-content-tile-1 c-bg-<?php print _views_field($fields, 'field_background_and_arrow_color'); ?>">
    <div class="row">
    <?php if($fields['field_arrow']->content == 'right'): ?>
      <div class="col-sm-6">
        <div class="c-tile-content c-content-v-center" data-height="height">
          <div class="c-wrapper">
            <div class="c-body c-center">
              <h3 class="c-tile-title c-font-25 c-line-height-34 c-font-uppercase c-font-bold c-font-white"> <?php print _views_field($fields, 'title'); ?> </h3>
              <p class="c-tile-body c-font-<?php print _views_field($fields, 'field_text_color'); ?>"><?php print _views_field($fields, 'body'); ?></p>
              <?php print _views_field($fields, 'view_node'); ?>
            </div>
          </div>
        </div>
      </div>
      <div class="col-sm-6">
        <div class="c-tile-content c-arrow-<?php print _views_field($fields, 'field_arrow'); ?> c-arrow-<?php print _views_field($fields, 'field_background_and_arrow_color_1'); ?> c-content-overlay">
          <div class="c-overlay-wrapper">
            <div class="c-overlay-content">
              <a href="<?php print _views_field($fields, 'path'); ?>">
                <i class="icon-link"></i>
              </a>
              <a href="<?php print _views_field($fields, 'uri'); ?>" data-lightbox="fancybox" data-fancybox-group="gallery-4">
                <i class="icon-magnifier"></i>
              </a>
            </div>
          </div>
          <div class="c-image c-overlay-object" data-height="height" style="background-image: url(<?php print _views_field($fields, 'uri_1'); ?>)"></div>
        </div>
      </div>
    <?php endif; ?>
      
    <?php if(isset($fields['field_arrow']) && $fields['field_arrow']->content == 'left'): ?>
      <div class="col-sm-6">
        <div class="c-tile-content c-arrow-<?php print _views_field($fields, 'field_arrow'); ?> c-arrow-<?php print _views_field($fields, 'field_background_and_arrow_color_1'); ?> c-content-overlay">
          <div class="c-overlay-wrapper">
            <div class="c-overlay-content">
              <a href="<?php print _views_field($fields, 'path'); ?>">
                <i class="icon-link"></i>
              </a>
              <a href="<?php print _views_field($fields, 'uri'); ?>" data-lightbox="fancybox" data-fancybox-group="gallery-4">
                <i class="icon-magnifier"></i>
              </a>
            </div>
          </div>
          <div class="c-image c-overlay-object" data-height="height" style="background-image: url(<?php print _views_field($fields, 'uri_1'); ?>)"></div>
        </div>
      </div>  
      <div class="col-sm-6">
        <div class="c-tile-content c-content-v-center" data-height="height">
          <div class="c-wrapper">
            <div class="c-body c-center">
              <h3 class="c-tile-title c-font-25 c-line-height-34 c-font-uppercase c-font-bold c-font-white"> <?php print _views_field($fields, 'title'); ?> </h3>
              <p class="c-tile-body c-font-<?php print _views_field($fields, 'field_text_color'); ?>"><?php print _views_field($fields, 'body'); ?></p>
              <?php print _views_field($fields, 'view_node'); ?>
            </div>
          </div>
        </div>
      </div>
    <?php endif; ?>    
    </div>
  </div>
  <?php  _print_views_fields($fields); ?>
</div>

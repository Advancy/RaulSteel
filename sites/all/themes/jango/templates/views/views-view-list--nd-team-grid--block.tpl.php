<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * - $title : The title of this group of rows.  May be empty.
 * - $options['type'] will either be ul or ol.
 * @ingroup views_templates
 */
?>
  <div class="c-content-team-1-slider" data-slider="owl" data-items="3">
    <div class="row">
      <?php foreach ($rows as $id => $row): ?>
        <div class="col-md-4 col-sm-6 c-margin-b-30">
          <div class="c-content-person-1 c-option-2">
            <?php print $row; ?>
          </div>
        </div>
      <?php endforeach; ?>
    </div>
  </div>
<?php print $list_type_suffix; ?>
<?php print $wrapper_suffix; ?>

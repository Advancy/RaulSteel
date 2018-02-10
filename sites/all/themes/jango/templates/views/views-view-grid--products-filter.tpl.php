<?php

/**
 * @file
 * Default simple view template to display a rows in a grid.
 *
 * - $rows contains a nested array of rows. Each row contains an array of
 *   columns.
 *
 * @ingroup views_templates
 */
// Match Column numbers to Bootsrap class
$columns_classes = array(1 => 12, 2 => 6, 3 => 4, 4 => 3, 6 => 2, 12 => 1);
$bootsrap_class = isset($columns_classes[$view->style_plugin->options['columns']]) ? $columns_classes[$view->style_plugin->options['columns']] : 3;
global $projects_categories, $projects_content;
?>
<?php if(!empty($projects_categories)): ?>

  <div class="c-content-tab-5 <?php print $column_classes[0][0]; ?>">
    <!-- Nav tabs -->
    <ul class="nav nav-pills c-nav-tab c-arrow auto-click" role="tablist">
      <?php  foreach($projects_categories as $id => $category): ?>
        <li role="presentation">
          <a class="c-font-uppercase" href="#<?php print $id; ?>" aria-controls="<?php print $id; ?>" role="tab" data-toggle="tab"><?php print t($category->name); ?></a>
        </li>
      <?php endforeach; ?>
    </ul>

    <!-- Tab panes -->
    <div class="tab-content">
      <?php foreach ($projects_content as $id => $content_array): ?>

        <div role="tabpanel" class="tab-pane fade" id="<?php print $id; ?>">
          <div class="row">

            <?php foreach ($content_array as $content): ?>

                <div class="col-sm-<?php print $bootsrap_class; ?>">
                  <div class="c-content c-content-overlay">
                    
                    <?php print $content; ?>

                    <div class="c-overlay-border"></div>
                  </div>
                </div>
            
            <?php endforeach; ?>

          </div>
        </div>

      <?php endforeach; ?>
    </div>

</div>

<?php endif; ?>

<?php
  $projects_categories = array();
  $projects_content = array();
?>
<?php
/**
 * @file views-flipped-table.tpl.php
 * Template to display a view as a table with rows and columns flipped.
 *
 * - $title : The title of this group of rows.  May be empty.
 * - $header: An array of header labels keyed by field id.
 * - $fields: An array of CSS IDs to use for each field id.
 * - $classes: A class or classes to apply to the table, based on settings.
 * - $row_classes: An array of classes to apply to each row, indexed by row
 *   number. This matches the index in $rows.
 * - $rows: The original array of row items. Each row is an array of content.
 *   $rows are keyed by row number, fields within rows are keyed by field ID.
 * - $rows_flipped: An array of row items, with the original data flipped.
 *   $rows_flipped are keyed by field name, each item within a row is keyed
 *   by the original row number.
 * - $row_classes_flipped: An array of classes to apply to each flipped row,
 *   indexed by the field name.
 * - $first_row_header: boolean indicating the first row is a table header.
 *
 * @ingroup views_templates
 */
if(!isset($rows_flipped['title'])) {

}
?>
<div class="c-shop-product-compare c-margin-b-20">
  <div class="c-content-title-1">
      <h3 class="c-font-uppercase c-font-bold"><?php print t('Product Comparison'); ?></h3>
  </div>
  <div class="c-product-compare-content">
      <div class="c-product-data c-compare-products clearfix">
          <div class="table-wrapper-responsive">
              <table class="c-product-compare-table <?php print $classes; ?>" summary="Product Details">
                  <tbody><tr>
                      <td class="c-compare-info c-bg-white">
                          <p><?php print t('There are %count goods in the list.', array('%count' => count($rows_flipped['title']))); ?></p>
                      </td>
                      <?php foreach($rows_flipped['title'] as $i => $item): ?>
                        <td class="c-compare-item">
                            <?php print $rows_flipped['field_images'][$i]; ?>
                            <h3>
                              <?php print $rows_flipped['title'][$i]; ?>
                            </h3>
                            <strong class="c-compare-price">
                              <?php print $rows_flipped['commerce_price'][$i]; ?>
                            </strong>
                        </td>
                      <?php endforeach; ?>
                      <?php unset($rows_flipped['field_images'], $rows_flipped['title'], $rows_flipped['commerce_price']); ?>
                  </tr>
                  <tr>
                      <th colspan="3">
                          <h2><?php print t('Product Details'); ?></h2>
                      </th>
                  </tr>
                  <?php foreach($rows_flipped as $i => $items): ?>
                    <tr>
                      <td class="c-compare-info"><?php echo isset($header[$i]) ? $header[$i] : ''; ?></td>
                      <?php foreach($items as $item): ?>
                        <td class="c-compare-item">
                          <?php print $item; ?>
                        </td>
                      <?php endforeach; ?>
                    </tr>
                  <?php endforeach; ?>
              </tbody></table>
          </div>
      </div>
  </div>
</div>
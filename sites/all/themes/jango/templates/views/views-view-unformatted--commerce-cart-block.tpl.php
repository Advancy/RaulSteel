<?php

/**
 * @file
 * Template to display a view as a table.
 *
 * - $title : The title of this group of rows.  May be empty.
 * - $header: An array of header labels keyed by field id.
 * - $caption: The caption for this table. May be empty.
 * - $header_classes: An array of header classes keyed by field id.
 * - $fields: An array of CSS IDs to use for each field id.
 * - $classes: A class or classes to apply to the table, based on settings.
 * - $row_classes: An array of classes to apply to each row, indexed by row
 *   number. This matches the index in $rows.
 * - $rows: An array of row items. Each row is an array of content.
 *   $rows are keyed by row number, fields within rows are keyed by field ID.
 * - $field_classes: An array of classes to apply to each field, indexed by
 *   field id, then row number. This matches the index in $rows.
 * @ingroup views_templates
 */
?>

<?php
$adres=$_SERVER['REQUEST_URI'];
$jezyk=substr($adres,0,3);
?>

<div class="c-cart-menu">

  <div class="c-cart-menu-title">
      <p class="c-cart-menu-float-l c-font-sbold">
      <?php 
      if ($jezyk== '/pl')
      print t('@count pozycja/pozycji', array('@count' => count($view->result))); 
      else
      print t('@count item(s)', array('@count' => count($view->result))); 
      ?></p>
      <p class="c-cart-menu-float-r c-theme-font c-font-sbold"><?php print _jango_cms_cart_total(); ?></p>
  </div>
  <ul class="c-cart-menu-items">

  <?php foreach ($rows as $id => $row): ?>
    <li class="<?php print $classes_array[$id]; ?>">
      <?php print $row; ?>
    </li>
  <?php endforeach; ?>

  </ul>

  <div class="c-cart-menu-footer">
    <a href="<?php print url('cart'); ?>" class="btn btn-md c-btn c-btn-square c-btn-grey-3 c-font-white c-font-bold c-center c-font-uppercase">
    <?php 
    if ($jezyk== '/pl')
    print t('Zobacz Koszyk');
    else
    print t('View Cart'); 
    ?>
    </a>
    <a href="<?php print url('cart/checkout'); ?>" class="btn btn-md c-btn c-btn-square c-theme-btn c-font-white c-font-bold c-center c-font-uppercase">
    <?php 
    if ($jezyk== '/pl')
    print t('Zapłać');
    else 
    print t('Checkout'); 
    ?>
    </a>
  </div>

</div>
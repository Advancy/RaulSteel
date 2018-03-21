<?php
$adres=$_SERVER['REQUEST_URI'];
?>
<div class="c-shop-cart-page-1 c-center mt-60">
  <i class="fa fa-frown-o c-font-dark c-font-50 c-font-thin "></i>
  <h2 class="c-font-thin c-center">
  <?php 
    if ($adres== '/pl/cart')
    print t('Twój koszyk jest pusty!');
    else
    print t('Your Shopping Cart is Empty!'); 
    ?>
  </h2>
  <a href="<?php print url('gotowe-systemy'); ?>" class="btn c-btn btn-lg c-btn-dark c-btn-square c-font-white c-font-bold c-font-uppercase">
  <?php 
    if ($adres== '/pl/cart')
    print t('Wróć do sklepu');
    else
    print t('Continue Shopping'); 
    ?>
  </a>
</div>
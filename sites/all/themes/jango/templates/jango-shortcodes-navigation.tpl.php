<!-- Navigation Menu -->
<?php $newcolor = ''; if(!$type && $color =='multicolor') $newcolor = 'c-arrow-dot'; else $newcolor = $color; ?>
<ul class="c-menu <?php print $type.' '.$newcolor.' '.$uppercase; ?>">
  <?php
    $color_array = array('c-bg-before-blue','c-bg-before-red','c-bg-before-green','c-bg-before-purple','c-bg-before-yellow');
    $i=0;
    $main_menu_tree = module_exists('i18n_menu') ? i18n_menu_translated_tree($menu) : menu_tree($menu);
    foreach($main_menu_tree as $key=>$value){
      
      if (isset($value['#attributes']['class']) && $color =='multicolor') {
        if($i>4) $i=0;
        $main_menu_tree[$key]['#attributes']['class'][] = $color_array[$i];
        $i = $i+1;
      }
    }
    print drupal_render($main_menu_tree);
  ?>
</ul>

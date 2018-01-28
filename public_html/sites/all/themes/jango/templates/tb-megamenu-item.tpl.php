<?php
  $classes .= strpos($item['link']['href'], "_anchor_") !== false ? ' c-onepage-link' : '';
  $href = strpos($item['link']['href'], "_anchor_") !== false ? str_replace("http://_anchor_", '#', $item['link']['href']) : url($item['link']['href'], $item['link']['options']);
?>
<?php if(!empty($item_config['caption'])) : ?>
  <li class = "mega-caption"><h3><?php print t($item_config['caption']);?></h3></li>
<?php endif;?>

<li <?php print $attributes;?> class="<?php print $classes;?>">
  <?php if ($item['link']['depth'] == 1) $item['link']['#attributes']['class'][] = 'c-link';  ?>

  <a href="<?php print in_array($item['link']['href'], array('<nolink>')) ? "#" : $href;?>" <?php echo drupal_attributes($item['link']['#attributes']); ?>>
    <?php if(!empty($item_config['xicon'])) : ?>
      <i class="<?php print $item_config['xicon'];?>"></i>
    <?php endif;?>    
    <?php print t($item['link']['title']);?>
    <?php if($submenu && $block_config['auto-arrow']) :?>
      <span class="c-arrow c-toggler"></span>
    <?php endif;?>
  </a>

  <?php print $submenu ? $submenu : "";?>
</li>

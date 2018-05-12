<header class="c-layout-header <?php print $class; ?>" data-minimize-offset="80">

<?php
$adres=$_SERVER['REQUEST_URI'];
$language=substr($adres,0,3);
?>

<?php if($header_top): ?>
  <div class="c-topbar c-topbar-<?php print $header_top_class; ?>">
    <div class="container<?php print $width; ?>">
        <!-- BEGIN: INLINE NAV -->
        <?php if($header_top_social_menu): ?> 
          <nav class="c-top-menu c-pull-left">
            <ul class="c-icons c-theme-ul">
              <?php 
                $header_top_socials = module_exists('i18n_menu') ? i18n_menu_translated_tree($header_top_social_menu) : menu_tree($header_top_social_menu);
                foreach(element_children($header_top_socials) as $i) {
                  print '<li><a href = "' . url($header_top_socials[$i]['#href']) . '" target = "_blank"><i class = "icon-social-' . $header_top_socials[$i]['#title'] .  '"></i></a></li>';
                }
              ?>
            </ul>
          </nav>
        <?php endif; ?>
        <!-- END: INLINE NAV -->
        <!-- BEGIN: INLINE NAV -->
        <nav class="c-top-menu c-pull-right">
          <ul class="c-links c-theme-ul">
            <?php 
              $header_top = module_exists('i18n_menu') ? i18n_menu_translated_tree($header_top_menu) : menu_tree($header_top_menu);
              $menus = array();
              foreach(element_children($header_top) as $i) {
                $menus[] = render($header_top[$i]);
              }
              print implode('<li class="c-divider">|</li>', $menus);
            ?>
          </ul>
          <?php if($language && module_exists('locale') && drupal_multilingual()):
            global $language;
          ?>
            <ul class="c-ext c-theme-ul">
                <li class="c-lang dropdown c-last">
                  <a href="#"><?php print $language->language; ?></a>
                  <?php
                    $path = drupal_is_front_page() ? '<front>' : $_GET['q'];
                    $links = language_negotiation_get_switch_links('language', $path);
                    if(isset($links->links)) {
                      $variables = array('links' => $links->links, 'attributes' => array('class' => array('dropdown-menu', 'pull-right')));
                      print theme('links__locale_block', $variables);
                    }
                  ?>
                </li>
            </ul>
          <?php endif; ?>
        </nav>
        <!-- END: INLINE NAV -->
    </div>
  </div>
<?php endif; ?>

  <div class="c-navbar">
    <div class="container<?php print $width; ?>">
      <!-- BEGIN: BRAND -->
      <div class="c-navbar-wrapper clearfix">
        <div class="c-brand c-pull-left">
          <a href="<?php print url('<front>'); ?>" class="c-logo">
            <img src="<?php print $logo; ?>" alt="<?php print variable_get('site_name', ''); ?>" class="c-desktop-logo">
            <img src="<?php print $logo; ?>" alt="<?php print variable_get('site_name', ''); ?>" class="c-desktop-logo-inverse">
            <img src="<?php print $logo; ?>" alt="<?php print variable_get('site_name', ''); ?>" class="c-mobile-logo"> </a>
          <button class="c-hor-nav-toggler" type="button" data-target=".c-mega-menu">
            <span class="c-line"></span>
            <span class="c-line"></span>
            <span class="c-line"></span>
          </button>
          <button class="c-topbar-toggler" type="button">
            <i class="fa fa-ellipsis-v"></i>
          </button>
          <?php if(module_exists('search') && $search): ?>
            <button class="c-search-toggler" type="button">
              <i class="fa fa-search"></i>
            </button>
          <?php endif; ?>
          <?php if($cart): ?>
            <button class="c-cart-toggler" type="button">
              <i class="icon-handbag"></i>
              <span class="c-cart-number c-theme-bg"><?php print _jango_cms_cart_count(); ?></span>
            </button>
          <?php endif; ?>
        </div>
        <?php
          if(module_exists('search') && $search) {
            $search_form_box = module_invoke('search', 'block_view');
            $search_form_box['content']['search_block_form']['#attributes']['placeholder'] = t('Type to search...');
            $search_form_box['content']['search_block_form']['#template_function'] = 'jango_textfield_quick_search';
            $search_form_box['content']['actions']['#attributes']['class'][] = 'hidden';
            print render($search_form_box);
          }
          $bg_color = isset($_GET['mega_menu_bg_color']) ? $_GET['mega_menu_bg_color'] : theme_get_setting('mega_menu_bg_color');
        ?>
        <!-- Dropdown menu toggle on mobile: c-toggler class can be applied to the link arrow or link itself depending on toggle mode -->
        <nav class="c-mega-menu c-pull-right c-mega-menu-<?php print $bg_color; ?> c-mega-menu-dark-mobile c-mega-menu-onepage c-fonts-uppercase c-fonts-bold" data-onepage-animation-speed = "700">
          <!-- Main Menu -->
            <ul class="nav navbar-nav c-theme-nav">
              <?php if(module_exists('tb_megamenu')) {
                  print theme('tb_megamenu', array('menu_name' => $menu, 'top_level' => TRUE));
                }
                else {
                  $main_menu_tree = module_exists('i18n_menu') ? i18n_menu_translated_tree($menu) : menu_tree($menu);
                  print drupal_render($main_menu_tree);
                }
                if($search): ?>
                  <li class="c-search-toggler-wrapper">
                    <a href="#" class="c-btn-icon c-search-toggler">
                      <i class="fa fa-search"></i>
                    </a>
                  </li>
                <?php endif;
                if($cart): ?>
                  <li class="c-cart-toggler-wrapper">
                    <a href="<?php print url('cart'); ?>" class="c-btn-icon c-cart-toggler">
                      <i class="icon-handbag c-cart-icon"></i>
                      <span class="c-cart-number c-theme-bg"><?php print _jango_cms_cart_count(); ?></span>
                    </a>
                  </li>
                <?php endif;
                if($login): ?>
                  <li>
                    <lu>
                    <?php global $user;
                    if($user->uid): ?>
                      <a href="<?php print url('user'); ?>" class="c-btn-border-opacity-04 c-btn btn-no-focus c-btn-header btn btn-sm c-btn-border-1x c-btn-dark c-btn-circle c-btn-uppercase c-btn-sbold test">
                        <i class="icon-user"></i> <?php if ($language== '/pl')
                          print t('Konto');
                          else
                          print t('Account');  ?>
                      </a>
                      
                    <?php else: ?>
                      <a href="<?php print url('user'); ?>" class="c-btn-border-opacity-04 c-btn btn-no-focus c-btn-header btn btn-sm c-btn-border-1x c-btn-dark c-btn-circle c-btn-uppercase c-btn-sbold test">
                        <i class="icon-user"></i> <?php if ($language== '/pl')
                          print t('Zaloguj');
                          else
                          print t('Log in'); ?>
                      </a>
                    <?php endif; ?>
                  </lu>
                  
                  <lu>
                  <?php global $user;
                    if($user->uid): ?>
                    <a href="<?php print url('user/logout'); ?>" class="c-btn-border-opacity-04 c-btn btn-no-focus c-btn-header btn btn-sm c-btn-border-1x c-btn-dark c-btn-circle c-btn-uppercase c-btn-sbold test">
                        <i class="icon-user"></i> <?php if ($language== '/pl')
                          print t('Wyloguj');
                          else
                          print t('Log out');  ?>
                      </a>
                      <?php endif; ?>
                  </lu>
              </li>
                <?php endif; ?>

                <?php if(strpos($_SERVER['HTTP_HOST'], 'nikadevs') !== FALSE || $_SERVER['HTTP_HOST'] == 'development'): ?>
                  <li class="c-quick-sidebar-toggler-wrapper">
                      <a href="#" class="c-quick-sidebar-toggler">
                          <span class="c-line"></span>
                          <span class="c-line"></span>
                          <span class="c-line"></span>
                      </a>
                  </li>
                <?php endif; ?>
            </ul>

          </nav>
        </div>
        <?php 
          $form = _nikadevs_render_block('commerce_cart', 'cart');
          print render($form);
        ?>
    </div>
  </div>
</header>

<?php

function _count_comments($val) {
  return isset($val['#comment']);
}

function _views_field(&$fields, $field = '') {
  if (!$field) {
    return _print_views_fields($fields, array(), FALSE);
  }
  elseif (isset($fields[$field]->content)) {
    $output = $fields[$field]->content;
    unset($fields[$field]);
    return $output;
  }
}

function _print_views_fields($fields, $exceptions = array(), $print = TRUE) {
  $output = '';
  foreach ($fields as $field_name => $field) {
    if (!in_array($field_name, $exceptions)) {
      if ($print) {
        print $field->content;
      }
      else {
        $output .= $field->content;
      }
    }
  }
  return $output;
}

/**
 * Implementation of hook_preprocess_html().
 */
function jango_preprocess_html(&$variables) {
  drupal_add_css('//fonts.googleapis.com/css?family=Roboto+Condensed:300italic,400italic,700italic,400,300,700&amp;subset=all', array(
    'type' => 'external',
    'cache' => FALSE
  ));

  global $language;
  $lng = $language->dir == 'rtl' ? '-rtl' : '';
  drupal_add_css(drupal_get_path('theme', 'jango') . '/assets/plugins/bootstrap/css/bootstrap' . $lng . '.css', array('group' => CSS_THEME));
  drupal_add_css(drupal_get_path('theme', 'jango') . '/assets/base/css/plugins' . $lng . '.css', array('group' => CSS_THEME));
  drupal_add_css(drupal_get_path('theme', 'jango') . '/assets/base/css/components' . $lng . '.css', array('group' => CSS_THEME));
  drupal_add_css(drupal_get_path('theme', 'jango') . '/assets/base/css/custom' . $lng . '.css', array('group' => CSS_THEME));
  drupal_add_css(drupal_get_path('theme', 'jango') . '/css/drupal.css', array('group' => CSS_THEME));


  $get_value = isset($_GET['skin']) ? $_GET['skin'] : '';
  if (!$get_value) {
    $args = arg();
    $get_value = array_pop($args);
  }
  $skins = array('default', 'green1', 'green2', 'green3', 'yellow1', 'yellow2', 'yellow3 active', 'red1', 'red2', 'red3', 'purple1', 'purple2', 'purple3', 'blue1', 'blue2', 'blue3', 'brown1', 'brown2', 'brown3', 'dark1', 'dark2', 'dark3', 
  );
  // Allow to override the skin by argument
  $skin = in_array($get_value, $skins) ? $get_value : theme_get_setting('skin');
  drupal_add_css(drupal_get_path('theme', 'jango') . '/assets/base/css/themes/' . $skin . $lng . '.css', array('group' => CSS_THEME));

  $variables['classes_array'] = array_merge($variables['classes_array'], _jango_shortcodes_body_class());

  if (theme_get_setting('retina')) {
    drupal_add_js(drupal_get_path('theme', 'jango') . '/js/jquery.retina.js');
  }
  drupal_add_js(array(
    'theme_path' => drupal_get_path('theme', 'jango'),
    'base_path' => base_path(),
  ), 'setting');
}

/**
 * Overrides theme_menu_tree().
 */
function jango_menu_tree(&$variables) {
  return '<ul>' . $variables['tree'] . '</ul>';
}

/**
 * Overrides theme_menu_tree().
 */
function jango_menu_tree__main_menu(&$variables) {
  return $variables['tree'];
}

function jango_menu_link__shortcode_simple_menu(array $variables) {
  $element = $variables['element'];
  $sub_menu = '';
  if ($element['#below']) {
    $element['#title'] .= ' <span class="c-arrow"></span>';
    $element['#localized_options']['attributes']['class'][] = 'c-toggler';
    $element['#href'] = '#';
    $element['#attributes']['class'][] = 'c-dropdown';
    unset($element['#below']['#theme_wrappers']);
    $sub_menu = '<ul class="c-dropdown-menu">' . drupal_render($element['#below']) . '</ul>';
  }
  $element['#localized_options']['html'] = TRUE;
  if (isset($element['#localized_options']['attributes']['class']) && in_array('active-trail', $element['#localized_options']['attributes']['class'])) {
    $element['#localized_options']['attributes']['class'][] = 'active';
  }
  $output = l($element['#title'], $element['#href'], $element['#localized_options']);
  return '<li ' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
}


function jango_menu_link(array $variables) {

  $element = $variables['element'];
  $sub_menu = '';
  //dpm($element);
  if ($element['#below']) {
    $angle_class = $element['#original_link']['depth'] == 1 ? 'down' : 'right right';
    $element['#title'] .= ' <i class="fa fa-angle-' . $angle_class . '"></i>';
    unset($element['#below']['#theme_wrappers']);
    $sub_menu = '<ul class = "dropdown-menu">' . drupal_render($element['#below']) . '</ul>';
  }
  $element['#localized_options']['html'] = TRUE;
  if (isset($element['#localized_options']['attributes']['class']) && in_array('active-trail', $element['#localized_options']['attributes']['class'])) {
    $element['#localized_options']['attributes']['class'][] = 'active';
  }
  $element['#href'] = strpos($element['#href'], "_anchor_") !== false ? str_replace("http://_anchor_", '#', $element['#href']) : $element['#href'];

  $output = l($element['#title'], $element['#href'], $element['#localized_options']);
  return '<li ' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
}

/**
 * Overrides theme_menu_local_tasks().
 */
function jango_menu_local_tasks(array $variables) {
  $output = '';

  if (!empty($variables['primary'])) {
    $variables['primary']['#prefix'] = '<h2 class="element-invisible">' . t('Primary tabs') . '</h2>';
    $variables['primary']['#prefix'] .= '<ul class="tabs primary">';
    $variables['primary']['#suffix'] = '</ul>';
    $output .= drupal_render($variables['primary']);
  }
  if (!empty($variables['secondary'])) {
    $variables['secondary']['#prefix'] = '<h2 class="element-invisible">' . t('Secondary tabs') . '</h2>';
    $variables['secondary']['#prefix'] .= '<ul class="tabs primary">';
    $variables['secondary']['#suffix'] = '</ul>';
    $output .= drupal_render($variables['secondary']);
  }

  return $output;
}

function rm_from_array($needle, &$array, $all = TRUE) {
  if (!$all) {
    if (FALSE !== $key = array_search($needle, $array)) {
      unset($array[$key]);
    }
    return;
  }
  foreach (array_keys($array, $needle) as $key) {
    unset($array[$key]);
  }
}

function jango_preprocess_tb_megamenu_submenu(&$vars) {
  $parent = $vars['parent'];
  $mlid = $parent['link']['mlid'];
  $menu_config = $vars['menu_config'];
  $item_config = isset($menu_config[$mlid]) ? $menu_config[$mlid] : array();
  $submenu_config = isset($item_config['submenu_config']) ? $item_config['submenu_config'] : array();
  $vars['submenu_config'] = $submenu_config;

  rm_from_array('nav-child', $vars['classes_array'], TRUE);
  rm_from_array('tb-megamenu-submenu', $vars['classes_array'], TRUE);
  rm_from_array('mega-dropdown-menu', $vars['classes_array'], TRUE);

  if (isset($vars['menu_config'][$mlid]['rows_content'][0][0]['col_config']['width']) && $vars['level'] == 1) {
    $vars['classes_array'][] = $vars['menu_config'][$mlid]['rows_content'][0][0]['col_config']['width'] == 12 ? 'c-menu-type-classic c-pull-left' : 'c-menu-type-mega2 c-menu-type-fullwidth row';
  }
  if(!isset($vars['menu_config'][$mlid]['rows_content'][0][0]['col_config']['width']) && $vars['level'] == 1) {
    $vars['classes_array'][] = 'c-menu-type-classic c-pull-left';
  }
  if ($vars['level'] == 2) {
    $vars['classes_array'][] = 'dropdown-menu c-menu-type-inline';
  }
  //dpm($vars['classes_array']);
}

function jango_preprocess_tb_megamenu_item(&$vars) {

  $item = $vars['item'];
  $mlid = $item['link']['mlid'];
  $trail = $vars['trail'];
  if (isset($trail[$mlid])) {
    $vars['classes_array'][] = 'c-active';
    $vars['a_classes'][] = 'c-active';
  }
}


function jango_fivestar_static($variables) {
  $rating = $variables['rating'] / 20;
  $output = '<div class = "c-product-rating">';
  for ($i = 1; $i <= 5; $i++) {
    $output .= $rating >= $i ? '<i class="fa fa-star c-font-red"></i>' : ($rating + 0.5 >= $i ? '<i class="fa fa-star-half-o c-font-red"></i>' : '<i class="fa fa-star-o c-font-red"></i>');
  }
  $output .= '</div>';
  return $output;
}

/**
 * Display a static fivestar value as stars with a title and description.
 */
function jango_fivestar_static_element($variables) {
  return $variables['star_display'];
}

/**
 * Update status messages
 */
function jango_status_messages($variables) {
  $display = $variables['display'];
  $output = '';

  $status_heading = array(
    'status' => t('Status message'),
    'error' => t('Error message'),
    'warning' => t('Warning message'),
  );
  $types = array(
    'status' => 'success',
    'error' => 'danger',
    'warning' => 'warning',
  );
  $icons = array(
    'status' => 'check-circle-o',
    'error' => 'exclamation-triangle',
    'warning' => 'times-circle',
  );
  foreach (drupal_get_messages($display) as $type => $messages) {
    $output .= "<div role = 'alert' class=\"mt-20 alert alert-" . $types[$type] . "\">\n<i class=\"fa fa-" . $icons[$type] . "\"></i> ";
    if (!empty($status_heading[$type])) {
      $output .= '<h2 class="element-invisible">' . $status_heading[$type] . "</h2>\n";
    }
    if (count($messages) > 1) {
      foreach ($messages as $message) {
        $output .= '<p>' . $message . "</p>\n";
      }
    }
    else {
      $output .= $messages[0];
    }
    $output .= "</div>\n";
  }
  return $output;
}

/**
 * Implementation of hook_css_alter().
 */
function jango_css_alter(&$css) {
  // Disable standart css from ubercart
  unset($css[drupal_get_path('module', 'system') . '/system.menus.css']);
  unset($css[drupal_get_path('module', 'system') . '/system.messages.css']);
  //unset($css[drupal_get_path('module', 'system') . '/system.base.css']);
  unset($css[drupal_get_path('module', 'system') . '/system.theme.css']);
  unset($css[drupal_get_path('module', 'search') . '/search.css']);
  unset($css[drupal_get_path('module', 'user') . '/user.css']);
  unset($css[drupal_get_path('module', 'commerce') . '/modules/checkout/theme/commerce_checkout.theme.css']);
}

function jango_fieldset($variables) {
  $element = $variables['element'];
  element_set_attributes($element, array('id'));
  _form_set_class($element, array('form-wrapper'));

  if(isset($element['#webform_component']) && stripos($element['#webform_component']['name'], 'wrap') !== FALSE) {
    return '<div' . drupal_attributes($element['#attributes']) . '>' . $element['#children'] . '</div>';
  }

  $output = '<fieldset' . drupal_attributes($element['#attributes']) . '>';
  if (!empty($element['#title'])) {
    // Always wrap fieldset legends in a SPAN for CSS positioning.
    $output .= '<legend><span class="fieldset-legend">' . $element['#title'] . '</span></legend>';
  }
  $output .= '<div class="fieldset-wrapper">';
  if (!empty($element['#description'])) {
    $output .= '<div class="fieldset-description">' . $element['#description'] . '</div>';
  }
  $output .= $element['#children'];
  if (isset($element['#value'])) {
    $output .= $element['#value'];
  }
  $output .= '</div>';
  $output .= "</fieldset>\n";
  return $output;
}

/**
 *  Implements theme_textarea().
 */
function jango_textarea($variables) {
  $element = $variables['element'];
  element_set_attributes($element, array('id', 'name', 'cols', 'rows'));
  _form_set_class($element, array('form-textarea', 'form-control', 'c-square'));

  if (strpos($element['#name'], 'clean') !== FALSE) {
    $element['#template_function'] = 'jango_textarea_clean';
  }
  if (isset($element['#template_function'])) {
    return $element['#template_function']($element);
  }

  $wrapper_attributes = array(
    'class' => array('form-textarea-wrapper', 'form-group'),
  );

  // Add resizable behavior.
  if (!empty($element['#resizable'])) {
    drupal_add_library('system', 'drupal.textarea');
    $wrapper_attributes['class'][] = 'resizable';
  }

  $output = '<div' . drupal_attributes($wrapper_attributes) . '>';
  $output .= '<textarea' . drupal_attributes($element['#attributes']) . '>' . check_plain($element['#value']) . '</textarea>';
  $output .= '</div>';
  return $output;
}

function jango_textarea_clean($element) {
  return '<textarea' . drupal_attributes($element['#attributes']) . '>' . check_plain($element['#value']) . '</textarea>';
}

/**
 *  Implements theme_select().
 */
function jango_select($variables) {
  $element = $variables['element'];
  if (isset($element['#template_function'])) {
    return $element['#template_function']($variables);
  }

  element_set_attributes($element, array('id', 'name', 'size'));
  if ($element['#title_display'] == 'none') {
    //$element['#options'][''] = $element['#title'];
  }
  _form_set_class($element, array(
    'form-control',
    'c-square',
    'c-theme',
    'input-lg'
  ));

  $output = '<select' . drupal_attributes($element['#attributes']) . '>' . form_select_options($element) . '</select>';
  $output = '<div class = "form-group">' . $output . '</div>';
  return $output;
}

/**
 *  Implements theme_select().
 */
function jango_select_attribute(&$variables) {
  $element = $variables['element'];

  element_set_attributes($element, array('id', 'name', 'size'));

  $output = '';
//  if($element['#title_display'] != 'none') {
  $output .= '<p class="c-product-meta-label c-product-margin-1 c-font-uppercase c-font-bold">' . t($element['#title']) . ':</p>';
  $variables['element']['#title_display'] = 'none';
//  }
  _form_set_class($element, array('form-select'));


  $output .= '<select' . drupal_attributes($element['#attributes']) . '>' . form_select_options($element) . '</select>';
  $output = '<div class = "c-product-variant row c-margin-t-20"><div class = "col-sm-12 col-xs-12">' . $output . '</div></div>';
  return $output;
}

/**
 * Implements hook_preprocess_button().
 */
function jango_preprocess_button(&$vars) {
  $gray_buttons = array(t('Update cart'), t('Checkout'));
  if (isset($vars['element']['#add_black'])) {
    $vars['element']['#attributes']['class'][] = 'btn-large';
  }
  else {
    if (in_array($vars['element']['#value'], $gray_buttons)) {
      $vars['element']['#attributes']['class'][] = 'btn-small';
      $vars['element']['#attributes']['class'][] = 'btn-color';
      //$vars['element']['#attributes']['class'][] = 'btn-round';
    }
    elseif (!isset($vars['element']['#attributes']['class']) || (!in_array('btn-large', $vars['element']['#attributes']['class'])) && !in_array('btn-small', $vars['element']['#attributes']['class'])) {
      $vars['element']['#attributes']['class'][] = 'btn-medium';
      //$vars['element']['#attributes']['class'][] = 'btn-round';
    }
  }
  $vars['element']['#attributes']['class'][] = 'btn btn-mod';
  if ($vars['element']['#value'] == t('<none>')) {
    $vars['element']['#attributes']['class'][] = 'hidden';
  }
}

/**
 * Implements hook_button().
 */
function jango_button($variables) {
  $element = $variables['element'];
  $element['#attributes']['type'] = 'submit';
  element_set_attributes($element, array('id', 'name', 'value'));

  $element['#attributes']['class'][] = 'form-' . $element['#button_type'];
  if (!empty($element['#attributes']['disabled'])) {
    $element['#attributes']['class'][] = 'form-button-disabled';
  }

  $prefix = '';
  $grey_buttons = array(t('Cancel'), t('Go back'));
  if ($element['#value'] == t('Add to cart')) {
    $prefix = '<button class="btn c-btn btn-lg c-font-bold c-font-white c-theme-btn c-btn-square c-font-uppercase">' . t($element['#value']) . '</button>';
    $element['#attributes']['class'][] = 'hidden';
  }
  elseif ($element['#value'] == t('Continue to next step')) {
    $element['#attributes']['class'] = array(
      'btn',
      'btn-lg',
      'c-theme-btn',
      'c-btn-square',
      'c-btn-uppercase',
      'c-btn-bold'
    );
  }
  elseif ($element['#value'] == t('<Send it>')) {
    $element['#attributes']['class'] = array(
      'btn', 
      'c-btn-dark', 
      'c-btn-uppercase', 
      'btn-lg', 
      'c-btn-sbold', 
      'btn-block', 
      'c-btn-square'
    );
    $element['#attributes']['value'] = t('Send it');
  }
  elseif (in_array($element['#value'], $grey_buttons)) {
    $element['#attributes']['class'] = array(
      'btn',
      'btn-lg',
      'btn-default',
      'c-btn-square',
      'c-btn-uppercase',
      'c-btn-bold'
    );
  }

  else {
    $element['#attributes']['class'][] = 'btn c-btn c-btn-square c-theme-btn c-font-bold c-font-uppercase c-font-white';
  }

  return $prefix . '<input' . drupal_attributes($element['#attributes']) . ' />';
}

/**
 * Update breadcrumbs
 */
function jango_breadcrumb($variables) {
  $breadcrumb = $variables['breadcrumb'];
  if (!empty($breadcrumb)) {

    foreach ($breadcrumb as $i => $item) {
      $breadcrumb[$i] = '<li>' . $item . '</li>';
    }
    if (!drupal_is_front_page() && !empty($breadcrumb)) {
      $node_title = filter_xss(menu_get_active_title(), array());
      $breadcrumb[] = '<li class="c-state_active">' . $node_title . '</li>';
    }
    if (count($breadcrumb) > 1) {
      $output = '<ul class="c-page-breadcrumbs c-theme-nav c-pull-right c-fonts-regular">';
      $output .= implode('<li>/</li>', $breadcrumb);
      $output .= '</ul>';
      return $output;
    }
  }
}

/**
 * Implements hook_preprocess_form().
 */
function jango_preprocess_form(&$variables) {
  $variables['element']['#attributes']['class'][] = 'form';
}

/**
 * Implements hook_preprocess_table().
 */
function jango_preprocess_table(&$variables) {
  //dpm($variables);
  //$variables['element']['#attributes']['class'][] = 'form';
}


/**
 * Implements hook_element_info_alter().
 */
function jango_element_info_alter(&$elements) {
  foreach ($elements as &$element) {
    if (!empty($element['#input'])) {
      $element['#process'][] = '_jango_process_input';
    }
  }
}

function _jango_process_input(&$element, &$form_state) {
  $types = array(
    'textarea',
    'textfield',
    'webform_email',
    'webform_number',
    'select',
    'password',
    'password_confirm',
  );
  if ($element['#type'] != 'textfield') {
    $element['#wrapper_attributes']['class'][] = 'form-group';
  }
  if (!empty($element['#type']) && (in_array($element['#type'], $types)) && arg(0) != 'checkout') {
    if (isset($element['#title']) && $element['#title_display'] != 'none' && $element['#type'] != 'select') {
      $element['#attributes']['placeholder'] = $element['#title'];
      $element['#title_display'] = 'none';
    }
  }
  return $element;
}

/**
 * Theme function to render an email component.
 */
function jango_webform_email($variables) {
  $element = $variables['element'];

  // This IF statement is mostly in place to allow our tests to set type="text"
  // because SimpleTest does not support type="email".
  if (!isset($element['#attributes']['type'])) {
    $element['#attributes']['type'] = 'email';
  }

  if (strpos($element['#name'], 'clean') !== FALSE) {
    $element['#template_function'] = 'jango_textfield_clean';
  }
  if (isset($element['#template_function'])) {
    return $element['#template_function']($variables);
  }

  // Convert properties to attributes on the element if set.
  foreach (array('id', 'name', 'value', 'size') as $property) {
    if (isset($element['#' . $property]) && $element['#' . $property] !== '') {
      $element['#attributes'][$property] = $element['#' . $property];
    }
  }
  _form_set_class($element, array(
    'form-control',
    'c-square',
    'c-theme',
    'input-lg',
    'form-email'
  ));

  foreach ($element['#attributes']['class'] as $i => $class) {
    if (strpos($class, 'fa-') !== FALSE) {
      $element['#nd_icon'] = 'fa ' . $class;
      unset($element['#attributes']['class'][$i]);
    }
  }
  $output = '<input' . drupal_attributes($element['#attributes']) . ' />';

  return $output;
}

function jango_form_element($variables) {
  $element = &$variables['element'];

  if (isset($element['#id']) && strpos($element['#id'], 'clean') !== FALSE) {
    $element['#template_function'] = 'jango_textfield_clean';
  }
  if (isset($element['#template_function'])) {
    return $element['#template_function']($variables);
  }

  // This function is invoked as theme wrapper, but the rendered form element
  // may not necessarily have been processed by form_builder().
  $element += array(
    '#title_display' => 'before',
  );

  // Add element #id for #type 'item'.
  if (isset($element['#markup']) && !empty($element['#id'])) {
    $attributes['id'] = $element['#id'];
  }
  // Add element's #type and #name as class to aid with JS/CSS selectors.
  $attributes['class'] = array('form-item');
  if (!empty($element['#type'])) {
    $attributes['class'][] = 'form-type-' . strtr($element['#type'], '_', '-');
  }
  if (!empty($element['#name'])) {
    $attributes['class'][] = 'form-item-' . strtr($element['#name'], array(' ' => '-', '_' => '-', '[' => '-', ']' => ''));
  }
  // Add a class for disabled elements to facilitate cross-browser styling.
  if (!empty($element['#attributes']['disabled'])) {
    $attributes['class'][] = 'form-disabled';
  }
  $output = '<div' . drupal_attributes($attributes) . '>' . "\n";

  // If #title is not set, we don't display any label or required marker.
  if (!isset($element['#title'])) {
    $element['#title_display'] = 'none';
  }
  $prefix = isset($element['#field_prefix']) ? '<span class="field-prefix">' . $element['#field_prefix'] . '</span> ' : '';
  $suffix = isset($element['#field_suffix']) ? ' <span class="field-suffix">' . $element['#field_suffix'] . '</span>' : '';

  switch ($element['#title_display']) {
    case 'before':
    case 'invisible':
      $output .= ' ' . theme('form_element_label', $variables);
      $output .= ' ' . $prefix . $element['#children'] . $suffix . "\n";
      break;

    case 'after':
      $output .= ' ' . $prefix . $element['#children'] . $suffix;
      $output .= ' ' . theme('form_element_label', $variables) . "\n";
      break;

    case 'none':
    case 'attribute':
      // Output no label and no required marker, only the children.
      $output .= ' ' . $prefix . $element['#children'] . $suffix . "\n";
      break;
  }

  if (!empty($element['#description'])) {
    $output .= '<div class="description">' . $element['#description'] . "</div>\n";
  }

  $output .= "</div>\n";

  return $output;
}

function jango_webform_element($variables) {
  // Ensure defaults.
  $variables['element'] += array(
    '#title_display' => 'before',
  );

  $element = $variables['element'];

  if (strpos($element['#id'], 'clean') !== FALSE) {
    $element['#template_function'] = 'jango_form_element_clean';
  }
  if (isset($element['#template_function'])) {
    return $element['#template_function']($variables);
  }

  // All elements using this for display only are given the "display" type.
  if (isset($element['#format']) && $element['#format'] == 'html') {
    $type = 'display';
  }
  else {
    $type = (isset($element['#type']) && !in_array($element['#type'], array('markup', 'textfield', 'webform_email', 'webform_number'))) ? $element['#type'] : $element['#webform_component']['type'];
  }

  // Convert the parents array into a string, excluding the "submitted" wrapper.
  $nested_level = $element['#parents'][0] == 'submitted' ? 1 : 0;
  $parents = str_replace('_', '-', implode('--', array_slice($element['#parents'], $nested_level)));

  $wrapper_attributes = isset($element['#wrapper_attributes']) ? $element['#wrapper_attributes'] : array('class' => array());
  $wrapper_classes = array(
    'form-item',
    'webform-component',
    'webform-component-' . $type,
  );
  if (isset($element['#title_display']) && strcmp($element['#title_display'], 'inline') === 0) {
    $wrapper_classes[] = 'webform-container-inline';
  }
  $wrapper_attributes['class'] = array_merge($wrapper_classes, $wrapper_attributes['class']);
  $wrapper_attributes['id'] = 'webform-component-' . $parents;
  $output = '<div ' . drupal_attributes($wrapper_attributes) . '>' . "\n";

  // If #title_display is none, set it to invisible instead - none only used if
  // we have no title at all to use.
  if ($element['#title_display'] == 'none') {
    $variables['element']['#title_display'] = 'invisible';
    $element['#title_display'] = 'invisible';
    if (empty($element['#attributes']['title']) && !empty($element['#title'])) {
      $element['#attributes']['title'] = $element['#title'];
    }
  }
  // If #title is not set, we don't display any label or required marker.
  if (!isset($element['#title'])) {
    $element['#title_display'] = 'none';
  }
  $prefix = isset($element['#field_prefix']) ? '<span class="field-prefix">' . _webform_filter_xss($element['#field_prefix']) . '</span> ' : '';
  $suffix = isset($element['#field_suffix']) ? ' <span class="field-suffix">' . _webform_filter_xss($element['#field_suffix']) . '</span>' : '';

  switch ($element['#title_display']) {
    case 'inline':
    case 'before':
    case 'invisible':
      $output .= ' ' . theme('form_element_label', $variables);
      $output .= ' ' . $prefix . $element['#children'] . $suffix . "\n";
      break;

    case 'after':
      $output .= ' ' . $prefix . $element['#children'] . $suffix;
      $output .= ' ' . theme('form_element_label', $variables) . "\n";
      break;

    case 'none':
    case 'attribute':
      // Output no label and no required marker, only the children.
      $output .= ' ' . $prefix . $element['#children'] . $suffix . "\n";
      break;
  }

  if (!empty($element['#description'])) {
    $output .= ' <div class="description">' . $element['#description'] . "</div>\n";
  }

  $output .= "</div>\n";

  return $output;
}

function jango_form_element_clean($variables) {
  return $variables['element']['#children'];
}

/**
 *  Implements theme_textfield().
 */
function jango_textfield($variables) {
  $element = $variables['element'];
  if (strpos($element['#name'], 'edit_quantity') !== FALSE) {
    $element['#template_function'] = 'jango_textfield_qty';
  }
  if (strpos($element['#name'], 'clean') !== FALSE) {
    $element['#template_function'] = 'jango_textfield_clean';
  }
  if (isset($element['#template_function'])) {
    return $element['#template_function']($variables);
  }

  $element['#attributes']['type'] = isset($element['#attributes']['type']) ? $element['#attributes']['type'] : 'text';
  _form_set_class($element, array(
    'form-control',
    'c-square',
    'c-theme',
    'input-lg'
  ));

  element_set_attributes($element, array(
    'id',
    'name',
    'value',
    'size',
    'maxlength'
  ));
  $output = '<input' . drupal_attributes($element['#attributes']) . ' />';
  $extra = '';
  if ($element['#autocomplete_path'] && drupal_valid_path($element['#autocomplete_path'])) {
    drupal_add_library('system', 'drupal.autocomplete');
    $element['#attributes']['class'][] = 'form-autocomplete';
    $attributes = array();
    $attributes['type'] = 'hidden';
    $attributes['id'] = $element['#attributes']['id'] . '-autocomplete';
    $attributes['value'] = url($element['#autocomplete_path'], array('absolute' => TRUE));
    $attributes['disabled'] = 'disabled';
    $attributes['class'][] = 'autocomplete';
    $output = '<div class="input-group">' . $output . '<span class="input-group-addon"><i class = "fa fa-refresh"></i></span></div>';
    $extra = '<input' . drupal_attributes($attributes) . ' />';
  }
  if (isset($element['#nd_icon'])) {
    $extra .= '<span class="' . $element['#nd_icon'] . ' form-control-feedback c-font-grey"></span>';
  }
  $output = '<div class = "form-group has-feedback">' . $output . $extra . '</div>';

  return $output;
}

/**
 *  Implements theme_textfield().
 */
function jango_textfield_clean($variables) {
  $element = $variables['element'];
  _form_set_class($element, array('form-control'));

  element_set_attributes($element, array(
    'id',
    'name',
    'value',
    'size',
    'maxlength'
  ));
  $output = '<input' . drupal_attributes($element['#attributes']) . ' />';
  return $output;
}

/**
 *  Implements theme_textfield().
 */
function jango_textfield_quick_search($variables) {
  global $qty_field;
  $qty_field = ++$qty_field;
  $element = $variables['element'];
  _form_set_class($element, array('form-control'));

  element_set_attributes($element, array(
    'id',
    'name',
    'value',
    'size',
    'maxlength'
  ));
  $output = '<div class = "c-quick-search">
    <input' . drupal_attributes($element['#attributes']) . ' />
    <span class="c-theme-link">×</span>
  </div>';
  return $output;
}

/**
 *  Implements theme_textfield().
 */
function jango_textfield_qty($variables) {
  global $qty_field;
  $qty_field = ++$qty_field;
  $element = $variables['element'];
  _form_set_class($element, array(
    'form-text',
    'form-control',
    'c-item-' . $qty_field
  ));

  element_set_attributes($element, array(
    'id',
    'name',
    'value',
    'size',
    'maxlength'
  ));
  $title = isset($element['#title']) && $element['#title'] ? '<p class="c-product-meta-label c-product-margin-2 c-font-uppercase c-font-bold">' . t($element['#title']) . ':</p>' : '';
  $output = '
  <div class="c-input-group c-spinner">
    ' . $title . '
    <input' . drupal_attributes($element['#attributes']) . ' />
    <div class="c-input-group-btn-vertical">
      <button class="btn btn-default" type="button" data_input="c-item-' . $qty_field . '">
          <i class="fa fa-caret-up"></i>
      </button>
      <button class="btn btn-default" type="button" data_input="c-item-' . $qty_field . '">
          <i class="fa fa-caret-down"></i>
      </button>
    </div>
  </div>';
  return $output;
}

/**
 *  Implements theme_password().
 */
function jango_password($variables) {
  $element = $variables['element'];
  $element['#attributes']['type'] = 'password';

  element_set_attributes($element, array(
    'id',
    'name',
    'value',
    'size',
    'maxlength'
  ));
  _form_set_class($element, array(
    'form-control',
    'c-square',
    'c-theme',
    'input-lg'
  ));

  $output = '<input' . drupal_attributes($element['#attributes']) . ' />';
  $extra = '';
  if (isset($element['#nd_icon'])) {
    $extra .= '<span class="' . $element['#nd_icon'] . ' form-control-feedback c-font-grey"></span>';
  }
  $output = '<div class = "form-group has-feedback">' . $output . $extra . '</div>';
  return $output;
}

function jango_checkbox($variables) {
  $element = $variables['element'];
  $element['#attributes']['type'] = 'checkbox';
  $element['#id'] = !isset($element['#id']) || empty($element['#id']) ? time() : $element['#id'];
  element_set_attributes($element, array(
    'id',
    'name',
    '#return_value' => 'value'
  ));
  _form_set_class($element, array('c-check'));

  // Unchecked checkbox has #value of integer 0.
  if (!empty($element['#checked'])) {
    $element['#attributes']['checked'] = 'checked';
  }
  _form_set_class($element, array('form-checkbox'));

  $object_selector = isset($element['#object_selector']) ? ' data-object-selector="' . $element['#object_selector'] . '"' : '';
  $output = '<div class="c-checkbox c-toggle-hide" ' . $object_selector . ' data-animation-speed="600">
    <input' . drupal_attributes($element['#attributes']) . ' />
    <label for="' . $element['#id'] . '">
      <span class="inc"></span>
      <span class="check"></span>
      <span class="box"></span>' . (isset($element['#title']) ? $element['#title'] : '') . '
    </label>
  </div>';
  return $output;
}


/**
 * Implements theme_field()
 *
 * Make field items a comma separated unordered list
 */
function jango_field__properties($variables) {
  $rows = array();
  $rows[] = array(
    'data' => array(t('Parameter'), t('Value')),
    'no_striping' => TRUE,
    'class' => array('bold')
  );
  foreach ($variables['items'] as $items) {
    foreach (element_children($items) as $i) {
      $item = $items[$i];
      if (isset($item['#markup'])) {
        $rows[] = array(
          'data' => array(
            t($item['#title']),
            t($item['#markup'])
          ),
          'no_striping' => TRUE
        );
      }
    }
  }
  return theme('table', array(
      'rows' => $rows,
      'attributes' => array(
        'class' => array(
          'table',
          'table-bordered',
          'table-striped'
        )
      )
    )
  );
}

/**
 * Implements theme_field()
 *
 * Make field items a comma separated unordered list
 */
function jango_field($variables) {
  $output = '';
  $output .= $variables['label_hidden'] ? '' : ('<span class = "field-span">' . $variables['label'] . ': </span>');
  $field_output = array();
  // Render the items as a comma separated inline list
  for ($i = 0; $i < count($variables['items']); $i++) {
    if (!isset($variables['items'][$i]['#printed']) || (isset($variables['items'][$i]['#printed']) && !$variables['items'][$i]['#printed'])) {
      $field_output[] = drupal_render($variables['items'][$i]);
    }
  }
  $output .= implode(', ', $field_output);
  // Render the top-level DIV.
  $output = '<div class="' . $variables ['classes'] . '"' . $variables ['attributes'] . '>' . $output . '</div>';
  return $output;
}

function jango_image($variables) {
  $variables['alt'] = empty($variables['alt']) ? 'Alt' : $variables['alt'];
  $variables['attributes']['class'][] = 'img-responsive';
  return theme_image($variables);
}

function jango_image_style($variables) {
  $variables['alt'] = empty($variables['alt']) ? 'Alt' : $variables['alt'];
  $variables['attributes']['class'] = !isset($variables['attributes']['class']) ? array() : $variables['attributes']['class'];
  if(is_array($variables['attributes']['class'])) {
    $variables['attributes']['class'][] = 'img-responsive';
  }
  return theme_image_style($variables);
}

function jango_field__image($variables) {
  $output = '';
  $output .= $variables['label_hidden'] ? '' : ($variables['label'] . ': ');
  $field_output = array();
  // Render the items as a comma separated inline list
  for ($i = 0; $i < count($variables['items']); $i++) {
    if (!isset($variables['items'][$i]['#printed']) || (isset($variables['items'][$i]['#printed']) && !$variables['items'][$i]['#printed'])) {
      $output .= drupal_render($variables['items'][$i]);
    }
    // For product teaser show only first image
    if ($variables['element']['#entity_type'] == 'commerce_product' && $variables['element']['#view_mode'] == 'node_teaser') {
      break;
    }
  }
  // Render the top-level DIV.
  $output = '<div class="' . $variables ['classes'] . '"' . $variables ['attributes'] . '>' . $output . '</div>';
  return $output;
}


/**
 * Implements theme_field()
 */
function jango_field__field_sale_label($variables) {
  $output = '';
  if (count($variables['items'])) {
    for ($i = 0; $i < count($variables['items']); $i++) {
      if ($variables['element']['#view_mode'] == 'teaser' || $variables['element']['#view_mode'] == 'teaser_list') {
        $output .= $variables['items'][$i]['#markup'] ? '<div class="c-label c-bg-red c-font-uppercase c-font-white c-font-13 c-font-bold">' . t($variables['items'][$i]['#markup']) . '</div>' : '';
      }
      else {
        $output .= $variables['items'][$i]['#markup'] ? '<div class="c-product-sale">' . t($variables['items'][$i]['#markup']) . '</div>' : '';
      }
    }
  }
  return $output;
}

/**
 * Implements theme_field()
 */
function jango_field__field_new_label($variables) {
  $output = '';
  if (count($variables['items'])) {
    for ($i = 0; $i < count($variables['items']); $i++) {
      if ($variables['element']['#view_mode'] == 'teaser' || $variables['element']['#view_mode'] == 'teaser_list') {
        $output .= $variables['items'][$i]['#markup'] ? '<div class="c-label c-label-right c-theme-bg c-font-uppercase c-font-white c-font-13 c-font-bold">' . t($variables['items'][$i]['#markup']) . '</div>' : '';
      }
      else {
        $output .= $variables['items'][$i]['#markup'] ? '<div class="c-product-new">' . t($variables['items'][$i]['#markup']) . '</div>' : '';
      }
    }
  }
  return $output;
}

/**
 * Implements theme_field()
 */
function jango_field__field_old_price($variables) {
  $output = '';
  if (count($variables['items'])) {
    for ($i = 0; $i < count($variables['items']); $i++) {
      $output .= '<del>' . $variables['items'][$i]['#markup'] . '</del>&nbsp;';
    }
  }
  return $output;
}

function jango_url_outbound_alter(&$path, &$options, $original_path) {
  $alias = drupal_get_path_alias($original_path);
  $url = parse_url($alias);
  if (isset($url['fragment'])) {
    //set path without the fragment
    $path = isset($url['path']) ? $url['path'] : '';

    //prevent URL from re-aliasing
    $options['alias'] = TRUE;

    //set fragment
    $options['fragment'] = $url['fragment'];
  }
}

function jango_link($variables) {
  if ($variables['text'] == t('View cart')) {
    $variables['options']['attributes']['class'][] = 'btn btn-mod btn-small';
  }
  return '<a href="' . check_plain(url($variables['path'], $variables['options'])) . '"' . drupal_attributes($variables['options']['attributes']) . '>' . ($variables['options']['html'] ? $variables['text'] : check_plain($variables['text'])) . '</a>';
}

function jango_pager($variables) {
  $tags = $variables['tags'];
  $element = $variables['element'];
  $parameters = $variables['parameters'];
  $quantity = $variables['quantity'];
  global $pager_page_array, $pager_total;

  // Calculate various markers within this pager piece:
  // Middle is used to "center" pages around the current page.
  $pager_middle = ceil($quantity / 2);
  // current is the page we are currently paged to
  $pager_current = $pager_page_array[$element] + 1;
  // first is the first page listed by this pager piece (re quantity)
  $pager_first = $pager_current - $pager_middle + 1;
  // last is the last page listed by this pager piece (re quantity)
  $pager_last = $pager_current + $quantity - $pager_middle;
  // max is the maximum page number
  $pager_max = $pager_total[$element];
  // End of marker calculations.

  // Prepare for generation loop.
  $i = $pager_first;
  if ($pager_last > $pager_max) {
    // Adjust "center" if at end of query.
    $i = $i + ($pager_max - $pager_last);
    $pager_last = $pager_max;
  }
  if ($i <= 0) {
    // Adjust "center" if at start of query.
    $pager_last = $pager_last + (1 - $i);
    $i = 1;
  }
  // End of generation loop preparation.

  $li_first = theme('pager_first', array(
    'text' => (isset($tags[0]) ? $tags[0] : t('« first')),
    'element' => $element,
    'parameters' => $parameters
  ));

  $li_last = theme('pager_last', array(
    'text' => (isset($tags[4]) ? $tags[4] : t('last »')),
    'element' => $element,
    'parameters' => $parameters
  ));

  $li_previous = theme('pager_previous', array(
    'text' => (isset($tags[1]) ? $tags[1] : t('‹ previous')),
    'element' => $element,
    'interval' => 1,
    'parameters' => $parameters
  ));
  $li_next = theme('pager_next', array(
    'text' => (isset($tags[3]) ? $tags[3] : t('next ›')),
    'element' => $element,
    'interval' => 1,
    'parameters' => $parameters
  ));

  if ($pager_total[$element] > 1) {
    if (theme_get_setting('pagination_type') == 'c-content-pagination c-theme advanced' || theme_get_setting('pagination_type') == 'c-content-pagination c-square c-theme advanced') {
      if ($li_first) {
        $items[] = array(
          'class' => array('pager-first'),
          'data' => $li_first,
        );
      }
    }

    if ($li_previous) {
      $items[] = array(
        'class' => array('pager-previous'),
        'data' => $li_previous,
      );
    }

    // When there is more than one page, create the pager list.
    if ($i != $pager_max) {
      if ($i > 1) {
        $items[] = array(
          'class' => array('pager-ellipsis'),
          'data' => '…',
        );
      }

      // Now generate the actual pager piece.
      for (; $i <= $pager_last && $i <= $pager_max; $i++) {
        if (theme_get_setting('pagination_type') != 'pager') {
          if ($i < $pager_current) {
            $items[] = array(
              'class' => array('pager-item'),
              'data' => theme('pager_previous', array(
                'text' => $i,
                'element' => $element,
                'interval' => ($pager_current - $i),
                'parameters' => $parameters
              )),
            );
          }
        }

        switch (theme_get_setting('pagination_type')) {
          case 'c-content-pagination c-theme':
            $class = 'c-active';
            break;
          case 'c-content-pagination c-square c-theme':
            $class = 'c-active';
            break;
          case 'c-content-pagination c-circle c-theme':
            $class = 'c-active';
            break;
          case 'c-content-pagination c-theme advanced':
            $class = 'c-active';
            break;
          case 'c-content-pagination c-square c-theme advanced':
            $class = 'c-active';
            break;
          default :
            $class = 'active';
            break;
        }

        if (theme_get_setting('pagination_type') != 'pager') {
          if ($i == $pager_current) {
            $items[] = array(
              'class' => array('pager-current'),
              'data' => '<li class = "' . $class . '"><a href = "#">' . $i . '</a></li>',
            );
          }
        }

        if (theme_get_setting('pagination_type') != 'pager') {
          if ($i > $pager_current) {
            $items[] = array(
              'class' => array('pager-item'),
              'data' => theme('pager_next', array(
                'text' => $i,
                'element' => $element,
                'interval' => ($i - $pager_current),
                'parameters' => $parameters
              )),
            );
          }
        }
      }

      if ($i < $pager_max) {
        $items[] = array(
          'class' => array('pager-ellipsis'),
          'data' => '…',
        );
      }
    }

    // End generation.
    if ($li_next) {
      $items[] = array(
        'class' => array('pager-next'),
        'data' => $li_next,
      );
    }

    if (theme_get_setting('pagination_type') == 'c-content-pagination c-theme advanced' || theme_get_setting('pagination_type') == 'c-content-pagination c-square c-theme advanced') {
      if ($li_last) {
        $items[] = array(
          'class' => array('pager-last'),
          'data' => $li_last,
        );
      }

    }

    $output = '<ul class = "' . theme_get_setting('pagination_type') . '">';
    foreach ($items as $item) {
      $output .= $item['data'] . ' ';
    }
    $output .= '</ul>';

    return $output;
  }
}

function jango_pager_link($variables) {
  $text = $variables['text'];
  $page_new = $variables['page_new'];
  $element = $variables['element'];
  $parameters = $variables['parameters'];
  $attributes = $variables['attributes'];

  $page = isset($_GET['page']) ? $_GET['page'] : '';
  if ($new_page = implode(',', pager_load_array($page_new[$element], $element, explode(',', $page)))) {
    $parameters['page'] = $new_page;
  }

  $query = array();
  if (count($parameters)) {
    $query = drupal_get_query_parameters($parameters, array());
  }
  if ($query_pager = pager_get_query_parameters()) {
    $query = array_merge($query, $query_pager);
  }

  // Set each pager link title
  if (!isset($attributes['title'])) {
    static $titles = NULL;
    if (!isset($titles)) {
      $titles = array(
        t('«') => t('Go to first page'),
        t('‹') => t('Go to previous page'),
        t('›') => t('Go to next page'),
        t('»') => t('Go to last page'),
      );
    }
    if (isset($titles[$text])) {
      $attributes['title'] = $titles[$text];
    }
    elseif (is_numeric($text)) {
      $attributes['title'] = t('Go to page @number', array('@number' => $text));
    }
  }
  switch (theme_get_setting('pagination_type')) {
    case 'pagination':
      $replace_titles = array(
        t('‹ previous') => '<i class="fa fa-angle-left"></i>',
        t('next ›') => '<i class="fa fa-angle-right"></i>',
      );
      break;
    case 'pagination pagination-lg':
      $replace_titles = array(
        t('‹ previous') => '<i class="fa fa-angle-left"></i>',
        t('next ›') => '<i class="fa fa-angle-right"></i>',
      );
      break;
    case 'pagination pagination-sm':
      $replace_titles = array(
        t('‹ previous') => '<i class="fa fa-angle-left"></i>',
        t('next ›') => '<i class="fa fa-angle-right"></i>',
      );
      break;
    case 'c-content-pagination c-theme':

      $replace_titles = array(
        t('‹ previous') => '<i class="fa fa-angle-left"></i>',
        t('next ›') => '<i class="fa fa-angle-right"></i>',
      );
      break;
    case 'c-content-pagination c-square c-theme':
      $replace_titles = array(
        t('‹ previous') => '<i class="fa fa-angle-left"></i>',
        t('next ›') => '<i class="fa fa-angle-right"></i>',
      );
      break;
    case 'c-content-pagination c-theme advanced':
      $replace_titles = array(
        t('« first') => '<i class="fa fa-angle-double-left"></i>',
        t('‹ previous') => '<i class="fa fa-angle-left"></i>',
        t('next ›') => '<i class="fa fa-angle-right"></i>',
        t('last »') => '<i class="fa fa-angle-double-right"></i>',
      );
      break;
    case 'c-content-pagination c-square c-theme advanced':
      $replace_titles = array(
        t('« first') => '<i class="fa fa-angle-double-left"></i>',
        t('‹ previous') => '<i class="fa fa-angle-left"></i>',
        t('next ›') => '<i class="fa fa-angle-right"></i>',
        t('last »') => '<i class="fa fa-angle-double-right"></i>',
      );
      break;
    default :
      $replace_titles = array(
////    t('« first') => '<i class="fa fa-angle-double-left"></i>',
//        t('‹ previous') => '<i class="fa fa-angle-double-left"></i>',
//        t('next ›') => '<i class="fa fa-angle-double-right"></i>',
////    t('last »') => '<i class="fa fa-angle-double-right"></i>',
      );
      break;
  }

  $text = isset($replace_titles[$text]) ? $replace_titles[$text] : check_plain($text);

  $attributes['href'] = url($_GET['q'], array('query' => $query));
  return '<li><a' . drupal_attributes($attributes) . '>' . $text . '</a></li>';
}

function jango_preprocess_hybridauth_widget(&$vars, $hook) {
  $element = $vars['element'];

  $query = $element['#hybridauth_query'];
  $element['#hybridauth_destination'] = trim($element['#hybridauth_destination']);
  $element['#hybridauth_destination_error'] = trim($element['#hybridauth_destination_error']);
  $destination = drupal_get_destination();
  // Process destination; HTTP_REFERER is needed for widget in modals
  // to return to the current page.
  if ($element['#hybridauth_destination'] == '[HTTP_REFERER]' && isset($_SERVER['HTTP_REFERER'])) {
    $query += array(
      'destination' => $_SERVER['HTTP_REFERER'],
    );
  }
  elseif ($element['#hybridauth_destination']) {
    $query += array(
      'destination' => $element['#hybridauth_destination'],
    );
  }
  else {
    $query += array(
      'destination' => $destination['destination'],
    );
  }
  if ($element['#hybridauth_destination_error'] == '[HTTP_REFERER]' && isset($_SERVER['HTTP_REFERER'])) {
    $query += array(
      'destination_error' => $_SERVER['HTTP_REFERER'],
    );
  }
  elseif ($element['#hybridauth_destination_error']) {
    $query += array(
      'destination_error' => $element['#hybridauth_destination_error'],
    );
  }
  else {
    $query += array(
      'destination_error' => $destination['destination'],
    );
  }

  $providers = array();
  if ($element['#hybridauth_widget_type'] == 'list') {
    $class = array(
      'hybridauth-widget-provider',
      'btn',
      'btn-block',
      'btn-social',
      'c-btn-square',
      'c-btn-uppercase btn-md'
    );


    $rel = array('nofollow');

    foreach (hybridauth_get_enabled_providers() as $provider_id => $provider_name) {
      $window_type = variable_get('hybridauth_provider_' . $provider_id . '_window_type', 'current');
      $window_width = variable_get('hybridauth_provider_' . $provider_id . '_window_width', 800);
      $window_height = variable_get('hybridauth_provider_' . $provider_id . '_window_height', 500);
      $query_mod = $query;
      $class_mod = $class;
      $rel_mod = $rel;

      $replace_provider = array('google' => 'googleplus', 'vkontakte' => 'vk');
      $provider = strtolower($provider_name);
      $class_icon = isset($replace_provider[$provider]) ? $replace_provider[$provider] : $provider;
      $class_mod[] = 'btn-' . $provider;
      switch ($window_type) {
        // Add Colorbox-specific things.
        case 'colorbox':
          $class_mod[] = 'colorbox-load';
          $query_mod += array(
            'width' => $window_width,
            'height' => $window_height,
            'iframe' => 'true',
          );
          break;
        // Add Shadowbox specific settings.
        case 'shadowbox':
          $rel_mod = array(
            'shadowbox;width=' . $window_width . ';height=' . $window_height,
            'nofollow'
          );
          break;
        // Add fancyBox-specific settings.
        case 'fancybox':
          $class_mod[] = 'fancybox';
          $class_mod[] = 'fancybox.iframe';
          $class_mod[] = '{width:' . $window_width . ',height:' . $window_height . '}';
          break;
        // Add Lightbox2-specific settings.
        case 'lightbox2':
          $rel_mod = array(
            'lightframe[|width:' . $window_width . 'px; height:' . $window_height . 'px;]',
            'nofollow'
          );
          break;
      }

      // Determine onclick behavior.
      $onclick = '';
      if ($element['#hybridauth_onclick'] === FALSE) {
      }
      elseif (!empty($element['#hybridauth_onclick'])) {
        $onclick = $element['#hybridauth_onclick'];
      }
      elseif ($window_type == 'current') {
        $class_mod[] = 'hybridauth-onclick-current';
      }
      elseif ($window_type == 'popup') {
        $class_mod[] = 'hybridauth-onclick-popup';
      }

      $text = theme('hybridauth_provider_icon', array(
        'icon_pack' => $element['#hybridauth_widget_icon_pack'],
        'provider_id' => $provider_id,
        'provider_name' => $provider_name,
      ));
      $path = 'hybridauth/window/' . $provider_id;
      $url = url($path, array('query' => $query_mod));
      if ($element['#hybridauth_widget_hide_links']) {
        $path = 'user';
      }
      $options = array(
        'html' => TRUE,
        'query' => $query_mod,
        'attributes' => array(
            'title' => $provider_name,
            'class' => $class_mod,
            'rel' => $rel_mod,
            'data-hybridauth-provider' => $provider_id,
            'data-hybridauth-url' => $url,
            // jQuery Mobile compatibility - so it doesn't use AJAX.
            'data-ajax' => 'false',
            // Add authentication window width and height.
            'data-hybridauth-width' => $window_width,
            'data-hybridauth-height' => $window_height,
          ) + ($onclick ? array('onclick' => $onclick) : array()),
      );
      $providers[] = l($text, $path, $options);
    }
  }
  else {
    $provider_id = 'none';
    $class = array();
    if ($element['#hybridauth_widget_use_overlay']) {
      $class = array('ctools-use-modal', 'ctools-modal-hybridauthmodal');
      ctools_include('modal');
      ctools_modal_add_js();
      $settings = array(
        'hybridauthmodal' => array(
          'modalSize' => array(
            'type' => 'scale',
            'width' => '400px',
            'height' => '200px',
            'addWidth' => 0,
            'addHeight' => 0,
            'contentRight' => 25,
            'contentBottom' => 45,
          ),
          'modalTheme' => 'HybridAuthModalDialog',
          // 'throbberTheme' => 'HybridAuthModalThrobber',
          'modalOptions' => array(
            'opacity' => 0.55,
            'background' => '#000',
          ),
          'animation' => 'fadeIn',
          'animationSpeed' => 'slow',
          'closeText' => t('Close'),
          'closeImage' => '',
        ),
      );
      drupal_add_js($settings, 'setting');
    }

    $class = 'btn btn-block btn-social c-btn-square c-btn-uppercase btn-md btn-' . strtolower($element['#hybridauth_widget_link_title']);
    $providers[] = l(
      ($element['#hybridauth_widget_type'] == 'link') ?
        $element['#hybridauth_widget_link_text'] :
        theme('hybridauth_provider_icon', array(
          'icon_pack' => $element['#hybridauth_widget_icon_pack'],
          'provider_id' => $provider_id,
          'provider_name' => $element['#hybridauth_widget_link_title']
        )),
      'hybridauth/providers/nojs/' . $element['#hybridauth_widget_icon_pack'],
      array(
        'html' => TRUE,
        'query' => $query,
        'attributes' => array(
          'title' => $element['#hybridauth_widget_link_title'],
          'class' => $class,
          'rel' => array('nofollow'),
        ),
      )
    );
  }

  _hybridauth_add_icon_pack_files($element['#hybridauth_widget_icon_pack'], $element);

  $vars['providers'] = $providers;
}

function jango_preprocess_jango_cms_user_login(&$variables) {
  $variables['hybridauth'] = render($variables['form']['hybridauth']);
  $reg_form = variable_get('user_register') ? drupal_get_form('user_register_form') : array();
  $variables['register_form'] = !empty($reg_form) ? render($reg_form) : '';
}

function jango_preprocess_page(&$vars, $hook) {
  if (isset($vars['node']->type)) {
  // If the content type's machine name is "my_machine_name" the file
  // name will be "page--my-machine-name.tpl.php".
  $vars['theme_hook_suggestions'][] = 'page__' . $vars['node']->type;
  }
  }
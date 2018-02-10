<?php
/**
 * Implements hook_form_FORM_ID_alter().
 *
 * @param $form
 *   The form.
 * @param $form_state
 *   The form state.
 */
function jango_form_system_theme_settings_alter(&$form, &$form_state) {
  drupal_add_css(drupal_get_path('theme', 'jango') . '/css/theme-settings.css');
  $form['options'] = array(
    '#type' => 'vertical_tabs',
    '#default_tab' => 'main',
    '#weight' => '-10',
    '#title' => t('Jango Theme settings'),
  );

  if(module_exists('nikadevs_cms')) {
    $form['options']['nd_layout_builder'] = nikadevs_cms_layout_builder();
  }
  else {
    drupal_set_message('Enable NikaDevs CMS module to use layout builder.');
  }

  $form['options']['main'] = array(
    '#type' => 'fieldset',
    '#title' => t('Main settings'),
  );
   $skins = array('default', 'green1', 'green2', 'green3', 'yellow1', 'yellow2', 'yellow3', 'red1', 'red2', 'red3', 'purple1', 'purple2', 'purple3', 'blue1', 'blue2', 'blue3', 'brown1', 'brown2', 'brown3', 'dark1', 'dark2', 'dark3', 
  );
  $form['options']['main']['skin'] = array(
    '#type' => 'radios',
    '#title' => t('Skin'),
    '#options' => array_combine($skins, $skins),
    '#default_value' => theme_get_setting('skin'),
    '#attributes' => array('class' => array('color-radios')),
  );
  $form['options']['main']['retina'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enable Retina Script'),
    '#default_value' => theme_get_setting('retina'),
    '#description'   => t("Only for retina displays and for manually added images. The script will check if the same image with suffix @2x exists and will show it."),
  );
  $form['options']['main']['phone'] = array(
    '#type' => 'textfield',
    '#title' => t('Phone'),
    '#default_value' => theme_get_setting('phone'),
  );

  $form['options']['mega_menu'] = array(
    '#type' => 'fieldset',
    '#title' => t('Mega Menu'),
  );
  $mega_menu_bg_color = array('dark' => t('Dark'), 'light' => t('Light'));
  $form['options']['mega_menu']['mega_menu_bg_color'] = array(
    '#type' => 'select',
    '#title' => t('Skin'),
    '#options' => $mega_menu_bg_color,
    '#default_value' => theme_get_setting('mega_menu_bg_color'),
    '#attributes' => array('class' => array('form-control')),
  );
  $pagination_type = array(
    'pagination pagination-sm' => t('Default pagination small'),
    'pagination' => t('Default pagination'),
    'pagination pagination-lg' => t('Default pagination large'),
    'c-content-pagination c-theme' => t('Pagination element circle'),
    'c-content-pagination c-square c-theme' => t('Pagination element square'),
    'c-content-pagination c-theme advanced' => t('Pagination element circle advanced'),
    'c-content-pagination c-square c-theme advanced' => t('Pagination element square advanced'),
    'pager' => t('Pager'),
  );
  $form['options']['main']['pagination_type'] = array(
    '#type' => 'select',
    '#title' => t('Pagination type'),
    '#options' => $pagination_type,
    '#default_value' => theme_get_setting('pagination_type'),
    '#attributes' => array('class' => array('form-control')),
  );

  $form['options']['gmap'] = array(
    '#type' => 'fieldset',
    '#title' => t('Google Map Settings'),
  );
  $form['options']['gmap']['gmap_key'] = array(
    '#type' => 'textfield',
    '#title' => t('Google Maps API Key'),
    '#default_value' => theme_get_setting('gmap_key') ? theme_get_setting('gmap_key') : '',
    '#description' => 'More information: <a href = "https://developers.google.com/maps/documentation/javascript/get-api-key">https://developers.google.com/maps/documentation/javascript/get-api-key</a>'
  );

}

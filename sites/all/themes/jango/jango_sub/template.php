<?php 

/**
 * Implementation of hook_preprocess_html().
 */
function jango_sub_preprocess_html(&$variables) {
  drupal_add_css(drupal_get_path('theme', 'jango_sub') . '/css/custom.css', array('group' => CSS_THEME));
}
<?php
/**
 * @file
 * jango_commerce.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function jango_commerce_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function jango_commerce_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function jango_commerce_flag_default_flags() {
  $flags = array();
  // Exported flag: "Compare".
  $flags['compare'] = array(
    'entity_type' => 'node',
    'title' => 'Compare',
    'global' => 0,
    'types' => array(
      0 => 'product_display',
    ),
    'flag_short' => 'Add to Compare',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Remove from Compare',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 0,
      'rss' => 0,
      'teaser_list' => 0,
      'token' => 0,
    ),
    'show_as_field' => 1,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'api_version' => 3,
    'module' => 'jango_commerce',
    'locked' => array(
      0 => 'name',
    ),
  );
  // Exported flag: "WishList".
  $flags['wishlist'] = array(
    'entity_type' => 'node',
    'title' => 'WishList',
    'global' => 0,
    'types' => array(
      0 => 'product_display',
    ),
    'flag_short' => 'Wishlist',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => '- Wishlist',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'teaser' => 'teaser',
      'full' => 0,
      'rss' => 0,
      'token' => 0,
    ),
    'show_as_field' => 1,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => FALSE,
    'i18n' => 0,
    'api_version' => 3,
    'module' => 'jango_commerce',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;

}

/**
 * Implements hook_node_info().
 */
function jango_commerce_node_info() {
  $items = array(
    'product_display' => array(
      'name' => t('Product Display'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

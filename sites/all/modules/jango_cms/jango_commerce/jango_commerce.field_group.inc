<?php
/**
 * @file
 * jango_commerce.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function jango_commerce_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_additional_information|node|product_display|default';
  $field_group->group_name = 'group_additional_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_display';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_product_description';
  $field_group->data = array(
    'label' => 'Additional Information',
    'weight' => '11',
    'children' => array(
      0 => 'field_sizes',
      1 => 'field_colors',
      2 => 'group_grey_bg',
    ),
    'format_type' => 'bootstrap_fieldgroup_nav_item',
    'format_settings' => array(
      'label' => 'Additional Information',
      'instance_settings' => array(
        'classes' => 'nav_item align-center ',
      ),
    ),
  );
  $export['group_additional_information|node|product_display|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_description|node|product_display|default';
  $field_group->group_name = 'group_description';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_display';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_product_description';
  $field_group->data = array(
    'label' => 'Description',
    'weight' => '10',
    'children' => array(
      0 => 'body',
    ),
    'format_type' => 'bootstrap_fieldgroup_nav_item',
    'format_settings' => array(
      'label' => 'Description',
      'instance_settings' => array(
        'classes' => 'nav_item  align-center ',
      ),
    ),
  );
  $export['group_description|node|product_display|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_grey_bg|node|product_display|default';
  $field_group->group_name = 'group_grey_bg';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_display';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_additional_information';
  $field_group->data = array(
    'label' => '',
    'weight' => '5',
    'children' => array(
      0 => 'field_product_category',
      1 => 'product:sku',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'bg-full-width c-bg-grey',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_grey_bg|node|product_display|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_product_description|node|product_display|default';
  $field_group->group_name = 'group_product_description';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_display';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Product Description',
    'weight' => '10',
    'children' => array(
      0 => 'group_description',
      1 => 'group_additional_information',
      2 => 'group_reviews',
    ),
    'format_type' => 'bootstrap_fieldgroup_nav',
    'format_settings' => array(
      'label' => 'Product Description',
      'instance_settings' => array(
        'bootstrap_nav_type' => 'tabs',
        'bootstrap_stacked' => '0',
        'bootstrap_orientation' => '0',
        'classes' => 'nav-justified ',
      ),
    ),
  );
  $export['group_product_description|node|product_display|default'] = $field_group;

  return $export;
}

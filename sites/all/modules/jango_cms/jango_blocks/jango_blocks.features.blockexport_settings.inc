<?php
/**
 * @file
 * jango_blocks.features.blockexport_settings.inc
 */

/**
 * Implements hook_default_blockexport_settings().
 */
function jango_blocks_default_blockexport_settings() {
  $export = array();
  $export['block'][] = array(
  'bid' => 1,
  'module' => 'system',
  'delta' => 'main',
  'theme' => 'bartik',
  'status' => 1,
  'weight' => 0,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 2,
  'module' => 'user',
  'delta' => 'login',
  'theme' => 'bartik',
  'status' => 1,
  'weight' => 0,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 3,
  'module' => 'system',
  'delta' => 'navigation',
  'theme' => 'bartik',
  'status' => 1,
  'weight' => 0,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 4,
  'module' => 'system',
  'delta' => 'management',
  'theme' => 'bartik',
  'status' => 1,
  'weight' => 1,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 5,
  'module' => 'system',
  'delta' => 'help',
  'theme' => 'bartik',
  'status' => 1,
  'weight' => 0,
  'region' => 'help',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 6,
  'module' => 'node',
  'delta' => 'syndicate',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 7,
  'module' => 'node',
  'delta' => 'recent',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 8,
  'module' => 'system',
  'delta' => 'powered-by',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 10,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 9,
  'module' => 'system',
  'delta' => 'user-menu',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 10,
  'module' => 'system',
  'delta' => 'main-menu',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 11,
  'module' => 'user',
  'delta' => 'new',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 12,
  'module' => 'user',
  'delta' => 'online',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 13,
  'module' => 'menu',
  'delta' => 'devel',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 19,
  'module' => 'devel',
  'delta' => 'execute_php',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 20,
  'module' => 'devel',
  'delta' => 'switch_user',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 21,
  'module' => 'system',
  'delta' => 'main',
  'theme' => 'jango',
  'status' => 1,
  'weight' => 0,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 22,
  'module' => 'user',
  'delta' => 'login',
  'theme' => 'jango',
  'status' => 1,
  'weight' => 0,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 23,
  'module' => 'system',
  'delta' => 'navigation',
  'theme' => 'jango',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 24,
  'module' => 'system',
  'delta' => 'management',
  'theme' => 'jango',
  'status' => 0,
  'weight' => 1,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 25,
  'module' => 'system',
  'delta' => 'help',
  'theme' => 'jango',
  'status' => 1,
  'weight' => 0,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 26,
  'module' => 'node',
  'delta' => 'syndicate',
  'theme' => 'jango',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 27,
  'module' => 'node',
  'delta' => 'recent',
  'theme' => 'jango',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 28,
  'module' => 'system',
  'delta' => 'powered-by',
  'theme' => 'jango',
  'status' => 0,
  'weight' => 10,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 29,
  'module' => 'system',
  'delta' => 'user-menu',
  'theme' => 'jango',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 30,
  'module' => 'system',
  'delta' => 'main-menu',
  'theme' => 'jango',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 31,
  'module' => 'user',
  'delta' => 'new',
  'theme' => 'jango',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 32,
  'module' => 'user',
  'delta' => 'online',
  'theme' => 'jango',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 33,
  'module' => 'menu',
  'delta' => 'devel',
  'theme' => 'jango',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 39,
  'module' => 'devel',
  'delta' => 'execute_php',
  'theme' => 'jango',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 40,
  'module' => 'devel',
  'delta' => 'switch_user',
  'theme' => 'jango',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 41,
  'module' => 'views',
  'delta' => 'services_we_do-block',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 42,
  'module' => 'views',
  'delta' => 'services_we_do-block',
  'theme' => 'jango',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 43,
  'module' => 'views',
  'delta' => 'services_we_do-block_1',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 44,
  'module' => 'views',
  'delta' => 'services_we_do-block_1',
  'theme' => 'jango',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 45,
  'module' => 'block',
  'delta' => 1,
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => 'content/shop-home-2
content/shop-home-3
content/shop-home-4
content/shop-home-5
content/shop-home-6
node/77/8
node/77/9
node/77/10
node/77/11
node/77/12
node/2/header/*
node/78/*
content/meet-team
content/contact-us-2
content/home-version-2
content/home-version-3
content/home-version-4
content/home-version-5
content/home-version-6
content/home-version-7
content/home-version-9
content/home-version-10
content/home-version-11
content/home-version-12
content/onepage-version-*',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 46,
  'module' => 'block',
  'delta' => 1,
  'theme' => 'jango',
  'status' => 1,
  'weight' => 0,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 0,
  'pages' => 'content/shop-home-2
content/shop-home-3
content/shop-home-4
content/shop-home-5
content/shop-home-6
node/77/8
node/77/9
node/77/10
node/77/11
node/77/12
node/2/header/*
node/78/*
content/meet-team
content/contact-us-2
content/home-version-2
content/home-version-3
content/home-version-4
content/home-version-5
content/home-version-6
content/home-version-7
content/home-version-9
content/home-version-10
content/home-version-11
content/home-version-12
content/onepage-version-*',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 47,
  'module' => 'menu',
  'delta' => 'menu-navigations',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 49,
  'module' => 'menu',
  'delta' => 'menu-navigations',
  'theme' => 'jango',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 51,
  'module' => 'block',
  'delta' => 1,
  'theme' => 'jango_sub',
  'status' => 1,
  'weight' => -65,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 0,
  'pages' => 'content/shop-home-2
content/shop-home-3
content/shop-home-4
content/shop-home-5
content/shop-home-6
node/77/8
node/77/9
node/77/10
node/77/11
node/77/12
node/2/header/*
node/78/*
content/meet-team
content/contact-us-2
content/home-version-2
content/home-version-3
content/home-version-4
content/home-version-5
content/home-version-6
content/home-version-7
content/home-version-9
content/home-version-10
content/home-version-11
content/home-version-12
content/onepage-version-*',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 52,
  'module' => 'devel',
  'delta' => 'execute_php',
  'theme' => 'jango_sub',
  'status' => 0,
  'weight' => -32,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 53,
  'module' => 'devel',
  'delta' => 'switch_user',
  'theme' => 'jango_sub',
  'status' => 0,
  'weight' => -17,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 54,
  'module' => 'menu',
  'delta' => 'devel',
  'theme' => 'jango_sub',
  'status' => 0,
  'weight' => -33,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 55,
  'module' => 'menu',
  'delta' => 'menu-navigations',
  'theme' => 'jango_sub',
  'status' => 0,
  'weight' => -24,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 56,
  'module' => 'node',
  'delta' => 'recent',
  'theme' => 'jango_sub',
  'status' => 0,
  'weight' => -21,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 57,
  'module' => 'node',
  'delta' => 'syndicate',
  'theme' => 'jango_sub',
  'status' => 0,
  'weight' => -16,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 58,
  'module' => 'system',
  'delta' => 'help',
  'theme' => 'jango_sub',
  'status' => 0,
  'weight' => -15,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 59,
  'module' => 'system',
  'delta' => 'main',
  'theme' => 'jango_sub',
  'status' => 1,
  'weight' => -24,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 60,
  'module' => 'system',
  'delta' => 'main-menu',
  'theme' => 'jango_sub',
  'status' => 0,
  'weight' => -28,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 61,
  'module' => 'system',
  'delta' => 'management',
  'theme' => 'jango_sub',
  'status' => 0,
  'weight' => -27,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 62,
  'module' => 'system',
  'delta' => 'navigation',
  'theme' => 'jango_sub',
  'status' => 0,
  'weight' => -25,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 63,
  'module' => 'system',
  'delta' => 'powered-by',
  'theme' => 'jango_sub',
  'status' => 0,
  'weight' => -23,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 64,
  'module' => 'system',
  'delta' => 'user-menu',
  'theme' => 'jango_sub',
  'status' => 0,
  'weight' => -2,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 71,
  'module' => 'user',
  'delta' => 'login',
  'theme' => 'jango_sub',
  'status' => 0,
  'weight' => -4,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 72,
  'module' => 'user',
  'delta' => 'new',
  'theme' => 'jango_sub',
  'status' => 0,
  'weight' => 7,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 73,
  'module' => 'user',
  'delta' => 'online',
  'theme' => 'jango_sub',
  'status' => 0,
  'weight' => 8,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 74,
  'module' => 'views',
  'delta' => 'services_we_do-block',
  'theme' => 'jango_sub',
  'status' => 0,
  'weight' => 6,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 75,
  'module' => 'views',
  'delta' => 'services_we_do-block_1',
  'theme' => 'jango_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 76,
  'module' => 'md_slider',
  'delta' => 'homepage',
  'theme' => 'jango_sub',
  'status' => 1,
  'weight' => -39,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 77,
  'module' => 'md_slider',
  'delta' => 'homepage',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '<front>',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 78,
  'module' => 'commerce_cart',
  'delta' => 'cart',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 79,
  'module' => 'commerce_cart',
  'delta' => 'cart',
  'theme' => 'jango_sub',
  'status' => 0,
  'weight' => -19,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 80,
  'module' => 'comment',
  'delta' => 'recent',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 81,
  'module' => 'comment',
  'delta' => 'recent',
  'theme' => 'jango_sub',
  'status' => 0,
  'weight' => -22,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 82,
  'module' => 'views',
  'delta' => 'most_popular-block',
  'theme' => 'jango_sub',
  'status' => 0,
  'weight' => -23,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 83,
  'module' => 'views',
  'delta' => 'most_popular-block',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 84,
  'module' => 'views',
  'delta' => 'products_grid-block_1',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 85,
  'module' => 'views',
  'delta' => 'products_grid-block_2',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 86,
  'module' => 'views',
  'delta' => 'products_grid-block_1',
  'theme' => 'jango_sub',
  'status' => 0,
  'weight' => 1,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 87,
  'module' => 'views',
  'delta' => 'products_grid-block_2',
  'theme' => 'jango_sub',
  'status' => 0,
  'weight' => 3,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 88,
  'module' => 'views',
  'delta' => 'products_list-block',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 89,
  'module' => 'views',
  'delta' => 'products_list-block',
  'theme' => 'jango_sub',
  'status' => 0,
  'weight' => 4,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 90,
  'module' => 'views',
  'delta' => 'products_filter-block_1',
  'theme' => 'jango_sub',
  'status' => 0,
  'weight' => -1,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 91,
  'module' => 'views',
  'delta' => 'products_filter-block_2',
  'theme' => 'jango_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 92,
  'module' => 'views',
  'delta' => 'products_filter-block_1',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 93,
  'module' => 'views',
  'delta' => 'products_filter-block_2',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 94,
  'module' => 'hybridauth',
  'delta' => 'hybridauth',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 8,
);
  $export['block'][] = array(
  'bid' => 95,
  'module' => 'hybridauth',
  'delta' => 'hybridauth',
  'theme' => 'jango_sub',
  'status' => 0,
  'weight' => -3,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 8,
);
  $export['block'][] = array(
  'bid' => 96,
  'module' => 'block',
  'delta' => 2,
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '*shop/left-sidebar',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 97,
  'module' => 'block',
  'delta' => 2,
  'theme' => 'jango_sub',
  'status' => 1,
  'weight' => -47,
  'region' => 'sidebar',
  'custom' => 0,
  'visibility' => 1,
  'pages' => '*shop/left-sidebar',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 98,
  'module' => 'menu',
  'delta' => 'menu-sidebar-menu',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 100,
  'module' => 'menu',
  'delta' => 'menu-sidebar-menu',
  'theme' => 'jango_sub',
  'status' => 0,
  'weight' => -18,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 102,
  'module' => 'block',
  'delta' => 2,
  'theme' => 'jango',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 103,
  'module' => 'comment',
  'delta' => 'recent',
  'theme' => 'jango',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 104,
  'module' => 'commerce_cart',
  'delta' => 'cart',
  'theme' => 'jango',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 105,
  'module' => 'hybridauth',
  'delta' => 'hybridauth',
  'theme' => 'jango',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 8,
);
  $export['block'][] = array(
  'bid' => 106,
  'module' => 'md_slider',
  'delta' => 'homepage',
  'theme' => 'jango',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 107,
  'module' => 'menu',
  'delta' => 'menu-sidebar-menu',
  'theme' => 'jango',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 109,
  'module' => 'views',
  'delta' => 'most_popular-block',
  'theme' => 'jango',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 110,
  'module' => 'views',
  'delta' => 'products_grid-block_1',
  'theme' => 'jango',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 111,
  'module' => 'views',
  'delta' => 'products_grid-block_2',
  'theme' => 'jango',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 112,
  'module' => 'views',
  'delta' => 'products_list-block',
  'theme' => 'jango',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 113,
  'module' => 'views',
  'delta' => 'products_filter-block_1',
  'theme' => 'jango',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 114,
  'module' => 'views',
  'delta' => 'products_filter-block_2',
  'theme' => 'jango',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 116,
  'module' => 'block',
  'delta' => 3,
  'theme' => 'jango_sub',
  'status' => 1,
  'weight' => -50,
  'region' => 'sidebar',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'wishlist/left-sidebar
user/1/left-sidebar',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 117,
  'module' => 'menu',
  'delta' => 'menu-my-profile',
  'theme' => 'jango_sub',
  'status' => 0,
  'weight' => -26,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 119,
  'module' => 'block',
  'delta' => 4,
  'theme' => 'jango_sub',
  'status' => 1,
  'weight' => 0,
  'region' => 'bottom',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'cart*
node/95',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 120,
  'module' => 'block',
  'delta' => 5,
  'theme' => 'jango_sub',
  'status' => 1,
  'weight' => 0,
  'region' => 'content_full',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'cart*',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 121,
  'module' => 'views',
  'delta' => 'products_grid-block_3',
  'theme' => 'jango_sub',
  'status' => 0,
  'weight' => 2,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 122,
  'module' => 'views',
  'delta' => 'products_split-block_1',
  'theme' => 'jango_sub',
  'status' => 0,
  'weight' => 5,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 123,
  'module' => 'search',
  'delta' => 'form',
  'theme' => 'jango_sub',
  'status' => 0,
  'weight' => -20,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 124,
  'module' => 'md_slider',
  'delta' => 'shop-home-1',
  'theme' => 'jango_sub',
  'status' => 1,
  'weight' => -38,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/151',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 125,
  'module' => 'locale',
  'delta' => 'language',
  'theme' => 'jango_sub',
  'status' => 0,
  'weight' => -29,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'LANGUAGE',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 126,
  'module' => 'menu',
  'delta' => 'menu-header-top',
  'theme' => 'jango_sub',
  'status' => 0,
  'weight' => -31,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 128,
  'module' => 'menu',
  'delta' => 'menu-header-top-social-icons',
  'theme' => 'jango_sub',
  'status' => 0,
  'weight' => -30,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 131,
  'module' => 'block',
  'delta' => 7,
  'theme' => 'jango_sub',
  'status' => 1,
  'weight' => -64,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/152
node/77/8
node/77/9
node/77/11
node/77/12
node/2/header/v1
content/meet-team
content/contact-us-2
content/home-version-5
content/home-version-7
content/home-version-9',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 132,
  'module' => 'md_slider',
  'delta' => 'shop-home-3',
  'theme' => 'jango_sub',
  'status' => 1,
  'weight' => -37,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/153',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 133,
  'module' => 'block',
  'delta' => 8,
  'theme' => 'jango_sub',
  'status' => 1,
  'weight' => -63,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/153
node/2/header/v1-extended',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 134,
  'module' => 'block',
  'delta' => 9,
  'theme' => 'jango_sub',
  'status' => 1,
  'weight' => -62,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/154
node/77/9
node/77/10
node/2/header/v2
content/home-version-3',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 135,
  'module' => 'block',
  'delta' => 10,
  'theme' => 'jango_sub',
  'status' => 1,
  'weight' => -22,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '*home*
node/77/*
<front>
content/about-us-*
content/meet-team
content/contact-us-2
content/faq-*
content/product-launch
content/onepage-version*',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 136,
  'module' => 'block',
  'delta' => 11,
  'theme' => 'jango_sub',
  'status' => 1,
  'weight' => -21,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/77/2',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 138,
  'module' => 'block',
  'delta' => 13,
  'theme' => 'jango_sub',
  'status' => 1,
  'weight' => -20,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/77/3
content/about-us-2
content/about-us-3
content/about-us-4
content/faq-*
content/product-launch',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 139,
  'module' => 'block',
  'delta' => 14,
  'theme' => 'jango_sub',
  'status' => 1,
  'weight' => -19,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/77/4',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 140,
  'module' => 'block',
  'delta' => 15,
  'theme' => 'jango_sub',
  'status' => 1,
  'weight' => -18,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/77/5',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 141,
  'module' => 'block',
  'delta' => 16,
  'theme' => 'jango_sub',
  'status' => 1,
  'weight' => -17,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/77/6',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 142,
  'module' => 'block',
  'delta' => 17,
  'theme' => 'jango_sub',
  'status' => 1,
  'weight' => -16,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/77/7
content/about-us-1',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 143,
  'module' => 'block',
  'delta' => 18,
  'theme' => 'jango_sub',
  'status' => 1,
  'weight' => -15,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/77/8
content/meet-team',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 144,
  'module' => 'block',
  'delta' => 19,
  'theme' => 'jango_sub',
  'status' => 1,
  'weight' => -13,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/77/10',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 145,
  'module' => 'block',
  'delta' => 20,
  'theme' => 'jango_sub',
  'status' => 1,
  'weight' => -14,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/77/9',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 146,
  'module' => 'block',
  'delta' => 21,
  'theme' => 'jango_sub',
  'status' => 1,
  'weight' => -12,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/77/11
content/contact-us-2',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 147,
  'module' => 'block',
  'delta' => 22,
  'theme' => 'jango_sub',
  'status' => 1,
  'weight' => -11,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/77/12',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 148,
  'module' => 'md_slider',
  'delta' => 'meet-jango',
  'theme' => 'jango_sub',
  'status' => 1,
  'weight' => -35,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/2/header/*
content/home-version-3
content/onepage-version-2',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 149,
  'module' => 'block',
  'delta' => 23,
  'theme' => 'jango_sub',
  'status' => 1,
  'weight' => -59,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/2/header/v2-extended',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 150,
  'module' => 'block',
  'delta' => 24,
  'theme' => 'jango_sub',
  'status' => 1,
  'weight' => -56,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/2/header/v3
content/home-version-2',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 151,
  'module' => 'block',
  'delta' => 25,
  'theme' => 'jango_sub',
  'status' => 1,
  'weight' => -67,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/2/header/v4',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 152,
  'module' => 'block',
  'delta' => 26,
  'theme' => 'jango_sub',
  'status' => 1,
  'weight' => -66,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/2/header/v4-extended
node/78/footer*',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 153,
  'module' => 'block',
  'delta' => 27,
  'theme' => 'jango_sub',
  'status' => 1,
  'weight' => -58,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/2/header/v5',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 154,
  'module' => 'block',
  'delta' => 28,
  'theme' => 'jango_sub',
  'status' => 1,
  'weight' => -57,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/2/header/v5-extended',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 155,
  'module' => 'block',
  'delta' => 29,
  'theme' => 'jango_sub',
  'status' => 1,
  'weight' => -60,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/2/header/v6
content/home-version-6',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 156,
  'module' => 'block',
  'delta' => 30,
  'theme' => 'jango_sub',
  'status' => 1,
  'weight' => -61,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/2/header/v6-extended',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 158,
  'module' => 'block',
  'delta' => 33,
  'theme' => 'jango_sub',
  'status' => 1,
  'weight' => -55,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/2/header/v7
content/shop-home-5
content/shop-home-6
content/home-version-4',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 159,
  'module' => 'block',
  'delta' => 34,
  'theme' => 'jango_sub',
  'status' => 1,
  'weight' => -54,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/2/header/v8
content/home-version-10',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 160,
  'module' => 'block',
  'delta' => 35,
  'theme' => 'jango_sub',
  'status' => 1,
  'weight' => -53,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/78/inner-header/v1
content/home-version-11',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 161,
  'module' => 'block',
  'delta' => 36,
  'theme' => 'jango_sub',
  'status' => 1,
  'weight' => -51,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/78/inner-header/v2',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 162,
  'module' => 'block',
  'delta' => 37,
  'theme' => 'jango_sub',
  'status' => 1,
  'weight' => -50,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/78/inner-header/v2-extended',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 163,
  'module' => 'block',
  'delta' => 38,
  'theme' => 'jango_sub',
  'status' => 1,
  'weight' => -52,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/78/inner-header/v1-extended',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 164,
  'module' => 'block',
  'delta' => 39,
  'theme' => 'jango_sub',
  'status' => 1,
  'weight' => -49,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/78/inner-header/v3',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 165,
  'module' => 'block',
  'delta' => 40,
  'theme' => 'jango_sub',
  'status' => 1,
  'weight' => -48,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/78/inner-header/v4',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 166,
  'module' => 'block',
  'delta' => 41,
  'theme' => 'jango_sub',
  'status' => 1,
  'weight' => -47,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/78/inner-header/v5',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 167,
  'module' => 'block',
  'delta' => 42,
  'theme' => 'jango_sub',
  'status' => 1,
  'weight' => -69,
  'region' => 'footer',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/78/footer-1
content/shop-home-6
content/home-version-4',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 168,
  'module' => 'block',
  'delta' => 43,
  'theme' => 'jango_sub',
  'status' => 1,
  'weight' => -68,
  'region' => 'footer',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/78/footer-2
content/home-version-6
content/home-version-7
content/onepage-version-4
content/onepage-version-12',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 169,
  'module' => 'block',
  'delta' => 44,
  'theme' => 'jango_sub',
  'status' => 1,
  'weight' => -67,
  'region' => 'footer',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/78/footer-3
content/shop-home-1
content/shop-home-7
node/95*
product*
shop*
cart*
checkout*
user/*/left-sidebar
content/shop-components*
<front>
content/home-version-2
content/home-version-3
content/home-version-5
content/home-version-8',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 170,
  'module' => 'block',
  'delta' => 45,
  'theme' => 'jango_sub',
  'status' => 1,
  'weight' => -66,
  'region' => 'footer',
  'custom' => 0,
  'visibility' => 0,
  'pages' => 'content/shop-home-1
content/shop-home-6
node/78/footer-1
node/78/footer-2
node/78/footer-3
node/78/footer-5
node/78/footer-6
node/78/footer-7
node/78/footer-8
node/78/footer-9
node/78/footer-3
content/shop-home-1
content/shop-home-7
node/95*
product*
shop*
cart*
checkout*
user/*/left-sidebar
content/shop-components*
<front>
content/home-version-2
content/home-version-3
content/home-version-4
content/home-version-5
content/home-version-6
content/home-version-7
content/home-version-8
content/onepage-version-*',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 171,
  'module' => 'block',
  'delta' => 46,
  'theme' => 'jango_sub',
  'status' => 1,
  'weight' => -65,
  'region' => 'footer',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/78/footer-5',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 172,
  'module' => 'views',
  'delta' => 'project-extended_portfolio',
  'theme' => 'jango_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 173,
  'module' => 'views',
  'delta' => 'project-latest_portfolio_block',
  'theme' => 'jango_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 174,
  'module' => 'views',
  'delta' => 'e1a83328c5f25f8f28eba65ebe1b7f87',
  'theme' => 'jango_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 175,
  'module' => 'views',
  'delta' => '8974dd90c9be541fa200002ff43fde2d',
  'theme' => 'jango_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 176,
  'module' => 'tb_megamenu',
  'delta' => 'devel',
  'theme' => 'jango_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 177,
  'module' => 'tb_megamenu',
  'delta' => 'main-menu',
  'theme' => 'jango_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 178,
  'module' => 'tb_megamenu',
  'delta' => 'management',
  'theme' => 'jango_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 179,
  'module' => 'tb_megamenu',
  'delta' => 'menu-header-top',
  'theme' => 'jango_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 180,
  'module' => 'tb_megamenu',
  'delta' => 'menu-header-top-social-icons',
  'theme' => 'jango_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 181,
  'module' => 'tb_megamenu',
  'delta' => 'menu-my-profile',
  'theme' => 'jango_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 182,
  'module' => 'tb_megamenu',
  'delta' => 'menu-navigations',
  'theme' => 'jango_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 183,
  'module' => 'tb_megamenu',
  'delta' => 'menu-sidebar-menu',
  'theme' => 'jango_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 184,
  'module' => 'tb_megamenu',
  'delta' => 'navigation',
  'theme' => 'jango_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 185,
  'module' => 'tb_megamenu',
  'delta' => 'user-menu',
  'theme' => 'jango_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 186,
  'module' => 'views',
  'delta' => 'project-block_1',
  'theme' => 'jango_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 187,
  'module' => 'md_slider',
  'delta' => 'md-slider-57f77ebfb7cc7',
  'theme' => 'jango_sub',
  'status' => 1,
  'weight' => -36,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/156',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 188,
  'module' => 'block',
  'delta' => 47,
  'theme' => 'jango_sub',
  'status' => 1,
  'weight' => -49,
  'region' => 'sidebar',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'product-list/left-sidebar
shop-product-grid/left-sidebar',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 189,
  'module' => 'block',
  'delta' => 48,
  'theme' => 'jango_sub',
  'status' => 1,
  'weight' => -48,
  'region' => 'sidebar',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'product-list/left-sidebar
shop-product-grid/left-sidebar',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 190,
  'module' => 'block',
  'delta' => 49,
  'theme' => 'jango_sub',
  'status' => 1,
  'weight' => 0,
  'region' => 'sidebar',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/blog*',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 191,
  'module' => 'views',
  'delta' => 'categories-block',
  'theme' => 'jango_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 192,
  'module' => 'views',
  'delta' => 'ng_blog_list-block_1',
  'theme' => 'jango_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 193,
  'module' => 'views',
  'delta' => 'ng_blog_list-block_2',
  'theme' => 'jango_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 194,
  'module' => 'views',
  'delta' => 'ng_blog_list-block_3',
  'theme' => 'jango_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 195,
  'module' => 'views',
  'delta' => 'ng_blog_list-block_4',
  'theme' => 'jango_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 196,
  'module' => 'views',
  'delta' => 'team_grid_-block',
  'theme' => 'jango_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 198,
  'module' => 'views',
  'delta' => 'nd_team_grid-block',
  'theme' => 'jango_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 199,
  'module' => 'views',
  'delta' => 'nd_team_carousel-block',
  'theme' => 'jango_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 200,
  'module' => 'views',
  'delta' => '9610e0906e1bcbeef3abb6da82eb3234',
  'theme' => 'jango_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 201,
  'module' => 'block',
  'delta' => 50,
  'theme' => 'jango_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 202,
  'module' => 'block',
  'delta' => 51,
  'theme' => 'jango_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 203,
  'module' => 'views',
  'delta' => '1c24eda8dd51bebcad484c20a9443d4e',
  'theme' => 'jango_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 204,
  'module' => 'md_slider',
  'delta' => 'home-v2',
  'theme' => 'jango_sub',
  'status' => 1,
  'weight' => -34,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/home-version-2
content/onepage-version-6',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 205,
  'module' => 'md_slider',
  'delta' => 'home-v4',
  'theme' => 'jango_sub',
  'status' => 1,
  'weight' => -33,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/home-version-4
content/home-version-10',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 206,
  'module' => 'views',
  'delta' => '7e69b1ad6bf43cb9a95a3769ea0ac189',
  'theme' => 'jango_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 207,
  'module' => 'md_slider',
  'delta' => 'homve-v5',
  'theme' => 'jango_sub',
  'status' => 1,
  'weight' => -32,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/home-version-5
content/onepage-version-1
content/onepage-version-3',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 208,
  'module' => 'md_slider',
  'delta' => 'md-slider-582a1f2cd16b9',
  'theme' => 'jango_sub',
  'status' => 1,
  'weight' => -31,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/home-version-6
content/onepage-version-12',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 209,
  'module' => 'md_slider',
  'delta' => 'md-slider-582d770b8573b',
  'theme' => 'jango_sub',
  'status' => 1,
  'weight' => -30,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/home-version-7
content/onepage-version-5
content/onepage-version-10',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 210,
  'module' => 'md_slider',
  'delta' => 'md-slider-582e208f43e7b',
  'theme' => 'jango_sub',
  'status' => 1,
  'weight' => -29,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/home-version-8',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 211,
  'module' => 'md_slider',
  'delta' => 'md-slider-582e36279ade6',
  'theme' => 'jango_sub',
  'status' => 1,
  'weight' => -28,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/home-version-9',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 212,
  'module' => 'md_slider',
  'delta' => 'md-slider-582e401e8ea38',
  'theme' => 'jango_sub',
  'status' => 1,
  'weight' => -27,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/home-version-11
content/onepage-version-8',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 213,
  'module' => 'md_slider',
  'delta' => 'md-slider-582e45479a018',
  'theme' => 'jango_sub',
  'status' => 1,
  'weight' => -26,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/home-version-12
content/onepage-version-4',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 214,
  'module' => 'block',
  'delta' => 52,
  'theme' => 'jango_sub',
  'status' => 1,
  'weight' => -45,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/onepage-version-1
content/onepage-version-2
content/onepage-version-5
content/onepage-version-10',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 215,
  'module' => 'menu',
  'delta' => 'menu-onepage',
  'theme' => 'jango_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 216,
  'module' => 'tb_megamenu',
  'delta' => 'menu-onepage',
  'theme' => 'jango_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 217,
  'module' => 'block',
  'delta' => 53,
  'theme' => 'jango_sub',
  'status' => 1,
  'weight' => -59,
  'region' => 'footer',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/onepage-version-1
content/onepage-version-2
content/onepage-version-3
content/onepage-version-5
content/onepage-version-6
content/onepage-version-9
content/onepage-version-10
content/onepage-version-11
node/78/footer-7
node/78/footer-9',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 218,
  'module' => 'block',
  'delta' => 54,
  'theme' => 'jango_sub',
  'status' => 1,
  'weight' => -44,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/onepage-version-3
content/onepage-version-7',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 219,
  'module' => 'block',
  'delta' => 55,
  'theme' => 'jango_sub',
  'status' => 1,
  'weight' => -43,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/onepage-version-4
content/onepage-version-6',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 220,
  'module' => 'block',
  'delta' => 56,
  'theme' => 'jango_sub',
  'status' => 1,
  'weight' => -63,
  'region' => 'footer',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/onepage-version-6',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 221,
  'module' => 'md_slider',
  'delta' => 'md-slider-582f5c447e6ee',
  'theme' => 'jango_sub',
  'status' => 1,
  'weight' => -25,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/onepage-version-7',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 222,
  'module' => 'block',
  'delta' => 57,
  'theme' => 'jango_sub',
  'status' => 1,
  'weight' => -42,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/onepage-version-8',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 223,
  'module' => 'block',
  'delta' => 58,
  'theme' => 'jango_sub',
  'status' => 1,
  'weight' => -41,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/onepage-version-9',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 224,
  'module' => 'md_slider',
  'delta' => 'md-slider-582f642832a1d',
  'theme' => 'jango_sub',
  'status' => 1,
  'weight' => -24,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/onepage-version-9',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 225,
  'module' => 'md_slider',
  'delta' => 'md-slider-58301f7ae8792',
  'theme' => 'jango_sub',
  'status' => 1,
  'weight' => -23,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/onepage-version-11',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 226,
  'module' => 'block',
  'delta' => 59,
  'theme' => 'jango_sub',
  'status' => 1,
  'weight' => -46,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/onepage-version-11',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 227,
  'module' => 'block',
  'delta' => 60,
  'theme' => 'jango_sub',
  'status' => 1,
  'weight' => -40,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/onepage-version-12',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 228,
  'module' => 'block',
  'delta' => 61,
  'theme' => 'jango_sub',
  'status' => 1,
  'weight' => -64,
  'region' => 'footer',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/78/footer-6',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 229,
  'module' => 'block',
  'delta' => 62,
  'theme' => 'jango_sub',
  'status' => 1,
  'weight' => -62,
  'region' => 'footer',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/78/footer-7',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 230,
  'module' => 'block',
  'delta' => 63,
  'theme' => 'jango_sub',
  'status' => 1,
  'weight' => -61,
  'region' => 'footer',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/78/footer-8
content/onepage-version-7
content/onepage-version-8',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 231,
  'module' => 'block',
  'delta' => 64,
  'theme' => 'jango_sub',
  'status' => 1,
  'weight' => -60,
  'region' => 'footer',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/78/footer-9
content/onepage-version-1
content/onepage-version-5
content/onepage-version-10
content/onepage-version-11',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 232,
  'module' => 'menu',
  'delta' => 'features',
  'theme' => 'jango_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 233,
  'module' => 'tb_megamenu',
  'delta' => 'features',
  'theme' => 'jango_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block_custom'][] = array(
  'bid' => 1,
  'body' => '[nd_menu type="c-layout-header-4" different_values="0" language="1" menu="main-menu" search="1" cart="1" login="1" header_top="1" header_top_menu="menu-header-top" header_top_social_menu="menu-header-top-social-icons" mobile_color="c-layout-header-dark-mobile" fixed="0" header_top_class="light c-solid-bg"]
[/nd_menu]
 ',
  'info' => 'Menu White Top Bar Not Fixed',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 2,
  'body' => '[nd_products_filter different_values="0" type="availability" price_type="from_to_textfields" title="Availability" price_handle="round" price_currency="$"]
[/nd_products_filter]
[nd_products_filter different_values="0" type="price" price_type="from_to_textfields" title="PRICE RANGE" price_handle="round" price_currency="$"]
[/nd_products_filter]
[nd_products_filter different_values="0" type="price" price_type="c-theme-1" title="PRICE RANGE SLIDER COLOR" price_from="100" price_to="500" price_handle="round"]
[/nd_products_filter]
[nd_products_filter different_values="0" type="price" price_type="c-theme-2" title="PRICE RANGE SLIDER COLOR" price_from="100" price_to="500" price_handle="square"]
[/nd_products_filter]
[nd_products_filter different_values="0" type="rating" price_type="from_to_textfields" title="REVIEW RATING"]
[/nd_products_filter]
[nd_menu menu="menu-sidebar-menu" type="menu-drop-down" language="0" different_values="0"]
[/nd_menu]
 ',
  'info' => 'Products Filters',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 3,
  'body' => '[nd_menu menu="menu-my-profile" type="menu-drop-down" language="0" different_values="0"]
[/nd_menu]
 ',
  'info' => 'My Profile Menu - DropDown',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 4,
  'body' => '[html format="html" different_values="0" style_margin_top="100"]<div class="c-content-title-4"> <h3 class="c-font-uppercase c-center c-font-bold c-line-strike"> <span class="c-bg-white">Most Popular</span> </h3> </div>[/html]
[nd_view admin_url="admin/structure/views/view/most_popular/edit/block" different_values="0" style_margin_bottom="60"]
[/nd_view]
 ',
  'info' => 'Most Popular Products',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 5,
  'body' => '<div class="c-content-box c-size-md c-theme-bg">
                <div class="container">
                    <div class="c-content-step-3 c-font-white">
                        <div class="row">
                            <div class="col-md-4 c-steps-3-block">
                                <i class="fa fa-truck"></i>
                                <div class="c-steps-3-title">
                                    <h2 class="c-font-white c-font-uppercase c-font-30 c-font-thin">Free shipping</h2>
                                    <em>Express delivery withing 3 days</em>
                                </div>
                                <span>&nbsp;</span>
                            </div>
                            <div class="col-md-4 c-steps-3-block">
                                <i class="fa fa-gift"></i>
                                <div class="c-steps-3-title">
                                    <h2 class="c-font-white c-font-uppercase c-font-30 c-font-thin">Daily Gifts</h2>
                                    <em>3 Gifts daily for lucky customers</em>
                                </div>
                                <span>&nbsp;</span>
                            </div>
                            <div class="col-md-4 c-steps-3-block">
                                <i class="fa fa-phone"></i>
                                <div class="c-steps-3-title">
                                    <h2 class="c-font-white c-font-uppercase c-font-30 c-font-thin">477 505 8877</h2>
                                    <em>24/7 customer care available</em>
                                </div>
                            </div>
                        </div>
                    </div>
                </div>
            </div>',
  'info' => 'Cart Info',
  'format' => 'html',
);
  $export['block_custom'][] = array(
  'bid' => 7,
  'body' => '[nd_menu type="c-layout-header-default c-header-transparent-dark" different_values="0" language="1" menu="main-menu" search="1" cart="1" login="1" header_top="0" header_top_menu="menu-header-top" header_top_social_menu="menu-header-top-social-icons" mobile_color="c-layout-header-dark-mobile" fixed="1" fid="85"]
[/nd_menu]
 ',
  'info' => 'Menu White Transparent',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 8,
  'body' => '[nd_menu type="c-layout-header-default c-header-transparent-dark" different_values="0" language="1" menu="main-menu" search="1" cart="1" login="1" header_top="1" header_top_menu="menu-header-top" header_top_social_menu="menu-header-top-social-icons" mobile_color="c-layout-header-dark-mobile" fixed="1" fid="85"]
[/nd_menu]
 ',
  'info' => 'Menu Transparent Top Bar Fixed',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 9,
  'body' => '[nd_menu type="c-layout-header-2 c-header-transparent-dark" different_values="0" language="1" menu="main-menu" search="1" cart="1" login="1" header_top="0" header_top_menu="menu-header-top" header_top_social_menu="menu-header-top-social-icons" mobile_color="c-layout-header-dark-mobile" fixed="1" fid="85"]
[/nd_menu]
 ',
  'info' => 'Menu White Half Transparent',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 10,
  'body' => '[nd_breadcrumb align="text-left" different_values="0"]
[/nd_breadcrumb]
 ',
  'info' => 'Breadcrumbs - White',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 11,
  'body' => '[nd_breadcrumb subtitle="Page Sub Title Goes Here" different_values="0"]
[/nd_breadcrumb]
 ',
  'info' => 'Breadcrumbs - White with SubTitle',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 13,
  'body' => '[nd_breadcrumb subtitle="Page Sub Title Goes Here" fid="87" height="c-bgimage" different_values="0" font_color="c-font-black"]
[/nd_breadcrumb]
 ',
  'info' => 'Breadcrumbs - BG Image V1',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 14,
  'body' => '[nd_breadcrumb subtitle="Page Sub Title Goes Here" fid="76" height="c-bgimage" different_values="0" font_color="c-font-white" bg="c-bg-img-center"]
[/nd_breadcrumb]
 ',
  'info' => 'Breadcrumbs - BG Image V2',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 15,
  'body' => '[nd_breadcrumb subtitle="Page Sub Title Goes Here" fid="89" height="c-bgimage" different_values="0" font_color="c-font-white" bg="c-bg-img-center"]
[/nd_breadcrumb]
 ',
  'info' => 'Breadcrumbs - BG Image V3',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 16,
  'body' => '[nd_breadcrumb subtitle="Page Sub Title Goes Here" fid="90" height="c-bgimage" different_values="0" font_color="c-font-white" bg="c-bg-img-center"]
[/nd_breadcrumb]
 ',
  'info' => 'Breadcrumbs - BG Image V4',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 17,
  'body' => '[nd_breadcrumb subtitle="Page Sub Title Goes Here" fid="7" height="c-bgimage" different_values="0" font_color="c-font-white" bg="c-bg-img-center"]
[/nd_breadcrumb]
 ',
  'info' => 'Breadcrumbs - BG Image V5',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 18,
  'body' => '[nd_breadcrumb subtitle="Page Sub Title Goes Here" fid="91" height="c-bgimage-full" different_values="0" font_color="c-font-white" bg="c-bg-img-center"]
[/nd_breadcrumb]
 ',
  'info' => 'Breadcrumbs - BG Image V6',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 19,
  'body' => '[nd_breadcrumb subtitle="Page Sub Title Goes Here" fid="6" height="c-bgimage-full no-overlay" different_values="0" font_color="c-font-white" bg="c-bg-img-center" type="c-centered"]
[/nd_breadcrumb]
 ',
  'info' => 'Breadcrumbs - BG Image V8',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 20,
  'body' => '[nd_breadcrumb subtitle="Page Sub Title Goes Here" fid="73" height="c-bgimage-full no-overlay" different_values="0" font_color="c-font-white" bg="c-bg-img-center" type="c-centered"]
[/nd_breadcrumb]
 ',
  'info' => 'Breadcrumbs - BG Image V7',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 21,
  'body' => '[nd_breadcrumb subtitle="Page Sub Title Goes Here" fid="92" height="c-bgimage-full" different_values="0" font_color="c-font-white" bg="c-bg-img-center" type="c-centered"]
[/nd_breadcrumb]
 ',
  'info' => 'Breadcrumbs - BG Image V9',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 22,
  'body' => '[nd_breadcrumb subtitle="Page Sub Title Goes Here" fid="93" height="c-bgimage-full" different_values="0" font_color="c-font-white" bg="c-bg-img-center"]
[/nd_breadcrumb]
 ',
  'info' => 'Breadcrumbs - BG Image V10',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 23,
  'body' => '[nd_menu type="c-layout-header-2 c-header-transparent-dark" different_values="0" language="1" menu="main-menu" search="1" cart="1" login="1" header_top="1" header_top_menu="menu-header-top" header_top_social_menu="menu-header-top-social-icons" mobile_color="c-layout-header-dark-mobile" fixed="1" fid="85"]
[/nd_menu]
 ',
  'info' => 'Menu White Half Transparent TopBar',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 24,
  'body' => '[nd_menu type="c-layout-header-5" different_values="0" language="1" menu="main-menu" search="1" cart="1" login="1" header_top="0" header_top_menu="menu-header-top" header_top_social_menu="menu-header-top-social-icons" mobile_color="c-layout-header-dark-mobile" fixed="1" fid="95" width="-fluid" header_top_class="light c-solid-bg"]
[/nd_menu]
 ',
  'info' => 'Menu Dark Wide',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 25,
  'body' => '[nd_menu type="c-layout-header-4" different_values="0" language="1" menu="main-menu" search="1" cart="1" login="1" header_top="0" header_top_menu="menu-header-top" header_top_social_menu="menu-header-top-social-icons" mobile_color="c-layout-header-dark-mobile" fixed="1"]
[/nd_menu]
 ',
  'info' => 'Menu White',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 26,
  'body' => '[nd_menu type="c-layout-header-4" different_values="0" language="1" menu="main-menu" search="1" cart="1" login="1" header_top="1" header_top_menu="menu-header-top" header_top_social_menu="menu-header-top-social-icons" mobile_color="c-layout-header-dark-mobile" fixed="0"]
[/nd_menu]
 ',
  'info' => 'Menu White Top Bar',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 27,
  'body' => '[nd_menu type="c-layout-header-3 c-layout-header-3-custom-menu" different_values="0" language="1" menu="main-menu" search="1" cart="1" login="1" header_top="0" header_top_menu="menu-header-top" header_top_social_menu="menu-header-top-social-icons" mobile_color="c-layout-header-dark-mobile" fixed="1" fid="85"]
[/nd_menu]
 ',
  'info' => 'Menu Dark',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 28,
  'body' => '[nd_menu type="c-layout-header-3 c-layout-header-3-custom-menu" different_values="0" language="1" menu="main-menu" search="1" cart="1" login="1" header_top="1" header_top_menu="menu-header-top" header_top_social_menu="menu-header-top-social-icons" mobile_color="c-layout-header-dark-mobile" fixed="1" fid="85" header_top_class="light c-solid-bg"]
[/nd_menu]
 ',
  'info' => 'Menu Dark Top Bar',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 29,
  'body' => '[nd_menu type="c-layout-header-2 c-header-transparent-dark" different_values="0" language="1" menu="main-menu" search="1" cart="1" login="1" header_top="0" header_top_menu="menu-header-top" header_top_social_menu="menu-header-top-social-icons" mobile_color="c-layout-header-dark-mobile" fixed="1" fid="85" width="-fluid" header_top_class="light c-solid-bg"]
[/nd_menu]
 ',
  'info' => 'Menu White Half Transparent Wide',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 30,
  'body' => '[nd_menu type="c-layout-header-2 c-header-transparent-dark" different_values="0" language="1" menu="main-menu" search="1" cart="1" login="1" header_top="1" header_top_menu="menu-header-top" header_top_social_menu="menu-header-top-social-icons" mobile_color="c-layout-header-dark-mobile" fixed="1" fid="85" width="-fluid" header_top_class="dark"]
[/nd_menu]
 ',
  'info' => 'Menu White Half Transparent TopBar Wide',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 33,
  'body' => '[nd_menu type="c-layout-header-6" different_values="0" language="1" menu="main-menu" search="1" cart="1" login="1" header_top="0" header_top_menu="menu-header-top" header_top_social_menu="menu-header-top-social-icons" mobile_color="c-layout-header-dark-mobile" fixed="0" header_top_class="light c-solid-bg"]
[/nd_menu]
 ',
  'info' => 'Menu Bottom Position',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 34,
  'body' => '[nd_menu type="c-layout-header-6 c-navbar-fluid" different_values="0" language="1" menu="main-menu" search="1" cart="1" login="1" header_top="0" header_top_menu="menu-header-top" header_top_social_menu="menu-header-top-social-icons" mobile_color="c-layout-header-dark-mobile" fixed="0" header_top_class="light c-solid-bg"]
[/nd_menu]
 ',
  'info' => 'Menu Bottom Position Fluid',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 35,
  'body' => '[nd_menu type="c-layout-header-3 c-layout-header-3-custom-menu" different_values="0" language="1" menu="main-menu" search="1" cart="1" login="1" header_top="0" header_top_menu="menu-header-top" header_top_social_menu="menu-header-top-social-icons" mobile_color="c-layout-header-dark-mobile" fixed="0" fid="85" header_top_class="light c-solid-bg"]
[/nd_menu]
 ',
  'info' => 'Menu Dark Not Fixed',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 36,
  'body' => '[nd_menu type="c-layout-header-4" different_values="0" language="1" menu="main-menu" search="1" cart="1" login="1" header_top="0" header_top_menu="menu-header-top" header_top_social_menu="menu-header-top-social-icons" mobile_color="c-layout-header-dark-mobile" fixed="0" header_top_class="light c-solid-bg"]
[/nd_menu]
 ',
  'info' => 'Menu White Not Fixed',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 37,
  'body' => '[nd_menu type="c-layout-header-4" different_values="0" language="1" menu="main-menu" search="1" cart="1" login="1" header_top="1" header_top_menu="menu-header-top" header_top_social_menu="menu-header-top-social-icons" mobile_color="c-layout-header-dark-mobile" fixed="0" header_top_class="light c-solid-bg"]
[/nd_menu]
 ',
  'info' => 'Menu White with Top Bar Not Fixed',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 38,
  'body' => '[nd_menu type="c-layout-header-3 c-layout-header-3-custom-menu" different_values="0" language="1" menu="main-menu" search="1" cart="1" login="1" header_top="1" header_top_menu="menu-header-top" header_top_social_menu="menu-header-top-social-icons" mobile_color="c-layout-header-dark-mobile" fixed="0" fid="85" header_top_class="light c-solid-bg"]
[/nd_menu]
 ',
  'info' => 'Menu Dark Top Bar Not Fixed',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 39,
  'body' => '[nd_menu type="c-layout-header-5" different_values="0" language="1" menu="main-menu" search="1" cart="1" login="1" header_top="0" header_top_menu="menu-header-top" header_top_social_menu="menu-header-top-social-icons" mobile_color="c-layout-header-dark-mobile" fixed="0" fid="95" header_top_class="light c-solid-bg" width="-fluid" style_padding_bottom="20"]
[/nd_menu]
 ',
  'info' => 'Menu Dark Wide Top Bar Not Fixed',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 40,
  'body' => '[nd_menu type="c-layout-header-6" different_values="0" language="1" menu="main-menu" search="1" cart="1" login="1" header_top="0" header_top_menu="menu-header-top" header_top_social_menu="menu-header-top-social-icons" mobile_color="c-layout-header-dark-mobile" fixed="0" header_top_class="light c-solid-bg"]
[/nd_menu]
 ',
  'info' => 'Menu White Bottom Position Not Fixed',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 41,
  'body' => '[nd_menu type="c-layout-header-6 c-navbar-fluid" different_values="0" language="1" menu="main-menu" search="1" cart="1" login="1" header_top="0" header_top_menu="menu-header-top" header_top_social_menu="menu-header-top-social-icons" mobile_color="c-layout-header-dark-mobile" fixed="0" header_top_class="light c-solid-bg"]
[/nd_menu]
 ',
  'info' => 'Menu White Fluid Bottom Position Not Fixed',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 42,
  'body' => '[nd_div vertical_align="0" extra_classes="c-layout-footer c-layout-footer-7" different_values="0" id="footer"]
[nd_container different_values="0"]
[nd_div vertical_align="0" extra_classes="c-prefooter" different_values="0"]
[nd_div vertical_align="0" extra_classes="c-body" different_values="0"]
[row different_values="0"]
[col phone="12" tablet="6" desktop="4" different_values="0"]
[html format="ckeditor" different_values="0"]<ul>	<li><a href="#">About Jango</a></li>	<li><a href="#">Privacy Policy</a></li>	<li><a href="#">Terms &amp; Conditions</a></li>	<li><a href="#">Delivery</a></li>	<li><a href="#">Promotions</a></li>	<li><a href="#">News</a></li></ul><ul>	<li><a href="#">Blogs</a></li>	<li><a href="#">Projects</a></li>	<li><a href="#">Clients</a></li>	<li><a href="#">Services</a></li>	<li><a href="#">Features</a></li>	<li><a href="#">Stats</a></li></ul>[/html]
[/col]
[col phone="12" tablet="6" desktop="5" different_values="0"]
[nd_title title="Latest Tweets" color="c-font-grey" label_align="c-left" different_values="0" size="c-font-20"]
[/nd_title]
[nd_twitter url="//twitter.com/themehats" limit="2" different_values="0" bg="dark"]
[/nd_twitter]
[/col]
[col phone="12" tablet="12" desktop="3" different_values="0"]
[nd_title title="Contact Us" color="c-font-grey" label_align="c-left" different_values="0" size="c-font-20"]
[/nd_title]
[html format="ckeditor" different_values="0"]<p class="c-address c-font-16">25, Lorem Lis Street, Orange<br>California, US<br>Phone: 800 123 3456<br>Fax: 800 123 3456<br>Email: <a href="mailto:info@jango.com"> <span class="c-theme-color">info@jango.com</span> </a><br>Skype: <a href="#"> <span class="c-theme-color">jango</span> </a></p>[/html]
[/col]
[/row]
[/nd_div]
[nd_div vertical_align="0" extra_classes="c-line" different_values="0"]
[/nd_div]
[nd_div vertical_align="0" extra_classes="c-foot" different_values="0"]
[row different_values="0"]
[col desktop="7" different_values="0"]
[nd_title title="About Jan |{span class=\'c-theme-font\'|}GO|{/span|}" color="c-font-grey" label_align="c-left" different_values="0" size="c-font-20"]
[/nd_title]
[html format="ckeditor" different_values="0" p_classes="c-text c-font-16 c-font-regular"]<p>Tolerare unus ducunt ad brevis buxum. Est alter buxum, cesaris. Eheu, lura! Racanas crescere in emeritis oenipons! Ubi est rusticus repressor? Lixa grandis clabulare est. Eposs tolerare, tanquam fatalis.</p>[/html]
[/col]
[col desktop="5" different_values="0"]
[nd_title title="SUBSCRIBE TO NEWSLETTER" color="c-font-grey" label_align="c-left" different_values="0" size="c-font-20"]
[/nd_title]
[nd_node admin_url="node/169/edit" different_values="0"]
[/nd_node]
[/col]
[/row]
[/nd_div]
[nd_div vertical_align="0" extra_classes="c-line" different_values="0"]
[/nd_div]
[nd_div vertical_align="0" extra_classes="c-head" different_values="0"]
[row different_values="0"]
[col tablet="12" desktop="6" different_values="0"]
[nd_div vertical_align="0" extra_classes="c-left" different_values="0"]
[nd_div vertical_align="0" extra_classes="socicon" different_values="0"]
[nd_social_icon icon="facebook" social_icon_size="socicon-lg" circle="1" solid="0" link="http://www.facebook.com" different_values="0"]
[/nd_social_icon]
[nd_social_icon icon="facebook" circle="1" solid="0" link="http://www.facebook.com" different_values="0"]
[/nd_social_icon]
[nd_social_icon icon="youtube" circle="1" solid="0" link="http://www.facebook.com" different_values="0"]
[/nd_social_icon]
[nd_social_icon icon="twitter" circle="1" solid="0" link="http://www.facebook.com" different_values="0"]
[/nd_social_icon]
[/nd_div]
[/nd_div]
[/col]
[col tablet="12" desktop="6" different_values="0"]
[nd_div vertical_align="0" extra_classes="c-right" different_values="0"]
[nd_title title="Download Mobile App" color="c-font-grey" label_align="c-left" size="c-font-20" different_values="0"]
[/nd_title]
[nd_div vertical_align="0" extra_classes="c-icons" different_values="0"]
[nd_social_icon icon="android" social_icon_size="socicon-lg" circle="0" solid="0" link="http://facebook.com" different_values="0"]
[/nd_social_icon]
[nd_social_icon icon="apple" social_icon_size="socicon-lg" circle="0" solid="0" link="http://facebook.com" different_values="0"]
[/nd_social_icon]
[nd_social_icon icon="windows" social_icon_size="socicon-lg" circle="0" solid="0" link="http://facebook.com" different_values="0"]
[/nd_social_icon]
[/nd_div]
[/nd_div]
[/col]
[/row]
[/nd_div]
[/nd_div]
[/nd_container]
[nd_div vertical_align="0" extra_classes="c-postfooter c-bg-dark-2" different_values="0"]
[nd_container different_values="0"]
[row different_values="0"]
[col tablet="12" desktop="6" extra_classes="c-col" different_values="0"]
[html format="ckeditor" different_values="0"]<p class="c-copyright c-font-grey">2016 © JANGO <span class="c-font-grey-3">All Rights Reserved.</span></p>[/html]
[/col]
[/row]
[/nd_container]
[/nd_div]
[/nd_div]
 ',
  'info' => 'Footer 1 - Dark, 4 Columns, Twitter',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 43,
  'body' => '[nd_div vertical_align="0" id="footer" extra_classes="c-layout-footer c-layout-footer-4 c-bg-footer-8" different_values="0" style_background_image="140"]
[nd_div vertical_align="0" extra_classes="c-footer" different_values="0" bg_color=" " id="contact"]
[nd_container different_values="0"]
[row different_values="0"]
[col desktop="6" extra_classes="c-footer-4-p-right" different_values="0"]
[nd_title title="JAN |{span class=\'c-theme-font\'|}GO|{/span|}" color="c-font-white" label_align="c-left" extra_classes="c-border" different_values="0"]
[/nd_title]
[html format="ckeditor" different_values="0"]<p class="c-about">Lorem ipsum dolor sit amet, consectetuer adipiscing elit, sed elit diam nonummy ad minim veniam quis nostrud exerci et tation diam nisl ut aliquip exit commodo consequat euismod tincidunt ut laoreet dolore magna aluam.</p>[/html]
[html format="ckeditor" extra_classes="c-links" different_values="0"]<ul class="c-nav">	<li><a class="c-active c-theme-border c-theme-font" href="#">Home</a></li>	<li><a href="#">About</a></li>	<li><a href="#">Work</a></li>	<li><a href="#">Careers</a></li>	<li><a href="#">Contact</a></li></ul>[/html]
[html format="ckeditor" different_values="0"]<p class="c-contact"> 25, Lorem Lis Street, Orange C, California, US <br> Phone: 800 123 3456 <br> Fax: 800 123 3456 <br> Skype: jango.inc </p>[/html]
[html format="html" different_values="0"]<ul class="c-socials"> <li> <a href="#"> <i class="icon-social-twitter"></i> </a> </li> <li> <a href="#"> <i class="icon-social-facebook"></i> </a> </li> <li> <a href="#"> <i class="icon-social-youtube"></i> </a> </li> <li> <a href="#"> <i class="icon-social-dribbble"></i> </a> </li></ul>[/html]
[/col]
[col desktop="6" extra_classes="c-footer-4-p-left" different_values="0"]
[nd_div vertical_align="0" extra_classes="c-feedback" different_values="0"]
[html format="ckeditor" different_values="0"]<h3 class="c-font-thin">Contact Us</h3>[/html]
[nd_node admin_url="node/170/edit" different_values="0"]
[/nd_node]
[/nd_div]
[/col]
[/row]
[/nd_container]
[/nd_div]
[/nd_div]
 ',
  'info' => 'Footer 2 - 2 Columns, BG, Contact Us form',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 44,
  'body' => '[nd_div vertical_align="0" extra_classes="c-layout-footer c-layout-footer-6 c-bg-grey-1" different_values="0" id="footer"]
[nd_container different_values="0"]
[nd_div vertical_align="0" extra_classes="c-prefooter c-bg-white" different_values="0"]
[nd_div vertical_align="0" extra_classes="c-body" different_values="0"]
[row different_values="0"]
[col phone="12" tablet="6" desktop="4" different_values="0"]
[html format="ckeditor" different_values="0"]<ul>	<li><a href="#">About Jango</a></li>	<li><a href="#">Privacy Policy</a></li>	<li><a href="#">Terms &amp; Conditions</a></li>	<li><a href="#">Delivery</a></li>	<li><a href="#">Promotions</a></li>	<li><a href="#">News</a></li></ul><ul>	<li><a href="#">Blogs</a></li>	<li><a href="#">Projects</a></li>	<li><a href="#">Clients</a></li>	<li><a href="#">Services</a></li>	<li><a href="#">Features</a></li>	<li><a href="#">Stats</a></li></ul>[/html]
[/col]
[col phone="12" tablet="6" desktop="5" different_values="0"]
[nd_title title="Latest Tweets" label_align="c-left" different_values="0" size="c-font-20"]
[/nd_title]
[nd_twitter url="//twitter.com/themehats" limit="2" different_values="0"]
[/nd_twitter]
[/col]
[col phone="12" tablet="12" desktop="3" different_values="0"]
[nd_title title="Contact Us" label_align="c-left" different_values="0" size="c-font-20"]
[/nd_title]
[html format="ckeditor" different_values="0"]<p class="c-address c-font-16">25, Lorem Lis Street, Orange<br>California, US<br>Phone: 800 123 3456<br>Fax: 800 123 3456<br>Email: <a href="mailto:info@jango.com"> <span class="c-theme-color">info@jango.com</span> </a><br>Skype: <a href="#"> <span class="c-theme-color">jango</span> </a></p>[/html]
[/col]
[/row]
[/nd_div]
[nd_div vertical_align="0" extra_classes="c-line" different_values="0"]
[/nd_div]
[nd_div vertical_align="0" extra_classes="c-foot" different_values="0"]
[row different_values="0"]
[col desktop="7" different_values="0"]
[nd_title title="About Jan |{span class=\'c-theme-font\'|}GO|{/span|}" label_align="c-left" different_values="0" size="c-font-20"]
[/nd_title]
[html format="ckeditor" different_values="0" p_classes="c-text c-font-16 c-font-regular"]<p>Tolerare unus ducunt ad brevis buxum. Est alter buxum, cesaris. Eheu, lura! Racanas crescere in emeritis oenipons! Ubi est rusticus repressor? Lixa grandis clabulare est. Eposs tolerare, tanquam fatalis.</p>[/html]
[/col]
[col desktop="5" different_values="0"]
[nd_title title="SUBSCRIBE TO NEWSLETTER" label_align="c-left" different_values="0" size="c-font-20"]
[/nd_title]
[nd_node admin_url="node/169/edit" different_values="0"]
[/nd_node]
[/col]
[/row]
[/nd_div]
[nd_div vertical_align="0" extra_classes="c-line" different_values="0"]
[/nd_div]
[nd_div vertical_align="0" extra_classes="c-head" different_values="0"]
[row different_values="0"]
[col tablet="12" desktop="6" different_values="0"]
[nd_div vertical_align="0" extra_classes="c-left" different_values="0"]
[nd_div vertical_align="0" extra_classes="socicon" different_values="0"]
[nd_social_icon icon="facebook" social_icon_size="socicon-lg" circle="1" solid="0" link="http://www.facebook.com" different_values="0"]
[/nd_social_icon]
[nd_social_icon icon="facebook" circle="1" solid="0" link="http://www.facebook.com" different_values="0"]
[/nd_social_icon]
[nd_social_icon icon="youtube" circle="1" solid="0" link="http://www.facebook.com" different_values="0"]
[/nd_social_icon]
[nd_social_icon icon="twitter" circle="1" solid="0" link="http://www.facebook.com" different_values="0"]
[/nd_social_icon]
[/nd_div]
[/nd_div]
[/col]
[col tablet="12" desktop="6" different_values="0"]
[nd_div vertical_align="0" extra_classes="c-right" different_values="0"]
[nd_title title="Download Mobile App" label_align="c-left" size="c-font-20" different_values="0"]
[/nd_title]
[nd_div vertical_align="0" extra_classes="c-icons" different_values="0"]
[nd_social_icon icon="android" social_icon_size="socicon-lg" circle="0" solid="0" link="http://facebook.com" different_values="0"]
[/nd_social_icon]
[nd_social_icon icon="apple" social_icon_size="socicon-lg" circle="0" solid="0" link="http://facebook.com" different_values="0"]
[/nd_social_icon]
[nd_social_icon icon="windows" social_icon_size="socicon-lg" circle="0" solid="0" link="http://facebook.com" different_values="0"]
[/nd_social_icon]
[/nd_div]
[/nd_div]
[/col]
[/row]
[/nd_div]
[/nd_div]
[/nd_container]
[nd_div vertical_align="0" extra_classes="c-postfooter c-bg-dark-2" different_values="0"]
[nd_container different_values="0"]
[row different_values="0"]
[col tablet="12" desktop="6" extra_classes="c-col" different_values="0"]
[html format="ckeditor" different_values="0"]<p class="c-copyright c-font-grey">2016 © JANGO <span class="c-font-grey-3">All Rights Reserved.</span></p>[/html]
[/col]
[/row]
[/nd_container]
[/nd_div]
[/nd_div]
 ',
  'info' => 'Footer 3 - Light, 4 Columns, Twitter',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 45,
  'body' => '[nd_div vertical_align="0" extra_classes="c-layout-footer c-layout-footer-3 c-bg-dark" different_values="0" id="footer"]
[nd_div vertical_align="0" extra_classes="c-prefooter" different_values="0" bg_color=" " id="contact"]
[nd_container different_values="0"]
[row different_values="0"]
[col desktop="3" different_values="0"]
[nd_div vertical_align="0" extra_classes="c-container c-first" different_values="0"]
[nd_title title="JAN |{span class=\'c-theme-font\'|}GO|{/span|}" color="c-font-white" label_align="c-left" different_values="0"]
[/nd_title]
[html format="ckeditor" different_values="0"]<div class="c-content-title-1"><div class="c-line-left hide">&nbsp;</div><p class="c-text">Lorem ipsum dolor sit amet, consectetuer adipiscing elit, s ed elit diam nonummy ad minim veniam quis nostrud exerci et tation diam.</p></div>[/html]
[html format="ckeditor" different_values="0"]<ul> <li> <a href="#">Home</a> </li> <li> <a href="#">About</a> </li> <li> <a href="#">Terms</a> </li> <li> <a href="#">Contact</a> </li></ul>[/html]
[/nd_div]
[/col]
[col desktop="3" different_values="0"]
[nd_title title="LATEST POSTS" color="c-font-white" label_align="c-left" different_values="0"]
[/nd_title]
[nd_view admin_url="admin/structure/views/view/ng_blog_list/edit/block_4" different_values="0"]
[/nd_view]
[/col]
[col desktop="3" different_values="0"]
[nd_title title="LATEST WORKS" color="c-font-white" label_align="c-left" different_values="0"]
[/nd_title]
[nd_view admin_url="admin/structure/views/view/project/edit/block_1" different_values="0"]
[/nd_view]
[/col]
[col desktop="3" different_values="0"]
[nd_div vertical_align="0" extra_classes="c-container c-last" different_values="0"]
[nd_title title="Find us" color="c-font-white" label_align="c-left" different_values="0"]
[/nd_title]
[html format="ckeditor" different_values="0"]<div class="c-content-title-1"> <p>Lorem ipsum dolor sit amet, consectetuer adipiscing elit, sed elit diam nonummy ad minim.</p></div>[/html]
[html format="ckeditor" different_values="0"]<ul class="c-socials"> <li> <a href="#"> <i class="icon-social-facebook"></i> </a> </li> <li> <a href="#"> <i class="icon-social-twitter"></i> </a> </li> <li> <a href="#"> <i class="icon-social-youtube"></i> </a> </li> <li> <a href="#"> <i class="icon-social-tumblr"></i> </a> </li></ul><ul class="c-address"> <li> <i class="icon-pointer c-theme-font"></i> One Boulevard, Beverly Hills</li> <li> <i class="icon-call-end c-theme-font"></i> +1800 1234 5678</li> <li> <i class="icon-envelope c-theme-font"></i> email@example.com</li></ul>[/html]
[/nd_div]
[/col]
[/row]
[/nd_container]
[/nd_div]
[nd_div vertical_align="0" extra_classes="c-postfooter" different_values="0"]
[nd_container different_values="0"]
[row different_values="0"]
[col tablet="12" desktop="6" extra_classes="c-col" different_values="0"]
[html format="ckeditor" different_values="0"]<p class="c-copyright c-font-grey">2015 © JANGO <span class="c-font-grey-3">All Rights Reserved.</span></p>[/html]
[/col]
[/row]
[/nd_container]
[/nd_div]
[/nd_div]
 ',
  'info' => 'Footer 4 - Dark, 4 Columns, Latest Works',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 46,
  'body' => '[nd_div vertical_align="0" extra_classes="c-layout-footer c-layout-footer-2" different_values="0" style_background_image="141" bg_color=" "]
[nd_container different_values="0"]
[row different_values="0"]
[col desktop="6" different_values="0"]
[nd_div vertical_align="0" bg_color=" " extra_classes="c-container c-first" different_values="0"]
[nd_title title="THE EVER EXPANDING THEME" underline="c-line-left c-theme-bg" label_align="c-left" bg_color="theme" different_values="0"]
[/nd_title]
[html format="ckeditor" extra_classes="c-content-title-1" different_values="0"]<p>Lorem ipsum dolor sit amet, consectetuer adipiscing elit, sed elit diam nonummy ad minim veniam quis nostrud exerci et tation diam nisl ut aliquip exit commodo consequat euismod tincidunt ut laoreet dolore magna aluam.</p>[/html]
[nd_button button_type="button" color="c-btn-white" text="Learn More" link="#" variants=" btn-default" uppercase="1" bold="1" block="0" border_width="c-btn-border-1x" different_values="0" display="c-btn-square" style_margin_right="40"]
[/nd_button]
[nd_button button_type="button" color="c-theme-btn" text="Purchase" link="#" variants=" btn-default" uppercase="1" bold="1" block="0" different_values="0" display="c-btn-square"]
[/nd_button]
[/nd_div]
[/col]
[col desktop="6" different_values="0"]
[nd_title title="SHARE THE DREAM" underline="c-line-left c-theme-bg" label_align="c-left" bg_color="theme" different_values="0" color="c-font-white"]
[/nd_title]
[nd_icon icon="icon-social-twitter" size="18" link="#" different_values="0" type="nd-icon-square" style_margin_right="10" bg_color="nd-bg-dark"]
[/nd_icon]
[nd_icon icon="icon-social-facebook" size="18" link="#" different_values="0" type="nd-icon-square" style_margin_right="10" bg_color="nd-bg-dark"]
[/nd_icon]
[nd_icon icon="icon-social-youtube" size="18" link="#" different_values="0" type="nd-icon-square" style_margin_right="10" bg_color="nd-bg-dark"]
[/nd_icon]
[nd_icon icon="icon-social-tumblr" size="18" link="#" different_values="0" type="nd-icon-square" bg_color="nd-bg-dark"]
[/nd_icon]
[/col]
[/row]
[nd_div vertical_align="0" bg_color=" " extra_classes="c-copyright" different_values="0"]
[html format="ckeditor" different_values="0"]<p class="c-font-oswald c-font-14">Copyright © JANGO Inc.</p>[/html]
[/nd_div]
[/nd_container]
[/nd_div]
 ',
  'info' => 'Footer 5 - Dark BG, 2 Columns',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 47,
  'body' => '[nd_menu menu="menu-sidebar-menu" type="menu-drop-down" mobile_color="c-layout-header-default-mobile" fixed="0" search="0" cart="0" login="0" header_top="0" header_top_social_menu="devel" header_top_menu="devel" language="0" header_top_class="light c-solid-bg" different_values="0"]
[/nd_menu]
 ',
  'info' => 'Sidebar Menu - DropDown',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 48,
  'body' => '[nd_div vertical_align="0" extra_classes="c-padding-20 c-margin-t-40 c-bg-grey-1 c-bg-img-bottom-right" different_values="0" style_background_image="172" bg_color=" " style_padding_top="30"]
[nd_title title="HAVE A QUESTION?" underline="c-line-left c-theme-bg" label_align="c-left" bg_color="blue" different_values="0"]
[/nd_title]
[nd_node admin_url="node/205/edit" different_values="0"]
[/nd_node]
[html format="ckeditor" extra_classes="c-content-title-1" different_values="0"]<p class="c-font-thin">Ask your questions away and let our dedicated customer service help you look through our FAQs to get your questions answered!</p>[/html]
[/nd_div]
 ',
  'info' => 'Have a question? WebForm',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 49,
  'body' => '[nd_block admin_url="admin/structure/block/manage/search/form/configure" different_values="0"]
[/nd_block]
[nd_title title="CATEGORIES" underline="c-line-left c-theme-bg" label_align="c-left" bg_color="theme" different_values="0" size="c-font-20" style_margin_top="40"]
[/nd_title]
[nd_view admin_url="admin/structure/views/view/categories/edit/block" different_values="0"]
[/nd_view]
[nd_tabs type=" top" align=" nav-justified" uppercase="0" bold="0" different_values="0" bordered="0" no_paddings="1"]
[nd_tab title="Recent Posts" active="1" different_values="0"]
[nd_view admin_url="admin/structure/views/view/ng_blog_list/edit/block_2" different_values="0"]
[/nd_view]
[/nd_tab]
[nd_tab title="Popular Posts" active="0" different_values="0"]
[nd_view admin_url="admin/structure/views/view/ng_blog_list/edit/block_3" different_values="0"]
[/nd_view]
[/nd_tab]
[/nd_tabs]
[nd_title title="Blogs" underline="c-line-left c-theme-bg" label_align="c-left" bg_color="theme" different_values="0" style_margin_top="40" size="c-font-20"]
[/nd_title]
[nd_view admin_url="admin/structure/views/view/ng_blog_list/edit/block_1" different_values="0"]
[/nd_view]
 ',
  'info' => 'Blog Sidebar',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 50,
  'body' => '[nd_div vertical_align="0" bg_color=" " different_values="0" style_padding_top="30"]
[nd_heading title="Keep in touch" color="c-font" underline="c-line-center c-theme-bg" icon_color="c-font" label_align="left" uppercase="1" bold="1" line_color="green" text_size="c-title" color_icon="c-font" different_values="0"]
[/nd_heading]
[html format="ckeditor" different_values="0"]<p>Our helpline is always open to receive any inquiry or feedback. Please feel free to drop us an email from the form below and we will get back to you as soon as we can.</p>[/html]
[nd_node admin_url="node/220/edit" different_values="0"]
[/nd_node]
[/nd_div]
 ',
  'info' => 'Keep in touch WebForm',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 51,
  'body' => '[nd_div vertical_align="0" bg_color=" " different_values="0" extra_classes="c-container c-bg-green c-bg-img-bottom-right" style_background_image="184" style_padding_left="30" style_padding_right="30" style_padding_top="30" style_padding_bottom="30"]
[nd_heading title="NEED TO KNOW MORE?" color="c-font-white" underline="c-line-center c-theme-bg" icon_color="c-font" label_align="left" uppercase="1" bold="1" line_color="white" text_size="c-title" color_icon="c-font" different_values="0"]
[/nd_heading]
[html format="ckeditor" different_values="0"]<p><span style="color:#FFFFFF;">Try visiting our FAQ page to learn more about our greatest ever expanding theme, JANGO.</span></p>[/html]
[nd_button button_type="link" display="c-btn-square" size="btn-md" color="c-btn-white" text="Learn more" link="#" variants=" btn-default" uppercase="1" bold="0" block="0" border_width="c-btn-border-2x" different_values="0" style_margin_top="10"]
[/nd_button]
[/nd_div]
 ',
  'info' => 'Need to kmow more? WebForm',
  'format' => 'shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 52,
  'body' => '[nd_menu type="c-layout-header-default c-header-transparent-dark" different_values="0" language="1" menu="menu-onepage" search="1" cart="1" login="1" header_top="0" header_top_menu="menu-header-top" header_top_social_menu="menu-header-top-social-icons" mobile_color="c-layout-header-dark-mobile" fixed="1" fid="85" header_top_class="light c-solid-bg" id="home"]
[/nd_menu]
 ',
  'info' => 'Menu White Transparent - OnePage',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 53,
  'body' => '[nd_div vertical_align="0" bg_color=" " different_values="0" extra_classes="c-layout-footer c-layout-footer-1"]
[nd_div vertical_align="0" extra_classes="c-postfooter" different_values="0" bg_color=" "]
[nd_container different_values="0"]
[row different_values="0"]
[col tablet="12" desktop="6" extra_classes="c-col" different_values="0"]
[html format="ckeditor" different_values="0"]<p class="c-copyright c-font-oswald c-font-14"> Copyright © JANGO Inc. </p>[/html]
[/col]
[col different_values="0" desktop="6" text_align="right"]
[nd_icon icon="icon-social-twitter" size="18" link="#" different_values="0" type="nd-icon-square" style_margin_right="10" bg_color="nd-bg-grey"]
[/nd_icon]
[nd_icon icon="icon-social-youtube" size="18" link="#" different_values="0" type="nd-icon-square" style_margin_right="10" bg_color="nd-bg-grey"]
[/nd_icon]
[nd_icon icon="icon-social-facebook" size="18" link="#" different_values="0" type="nd-icon-square" style_margin_right="10" bg_color="nd-bg-grey"]
[/nd_icon]
[nd_icon icon="icon-social-tumblr" size="18" link="#" different_values="0" type="nd-icon-square" bg_color="nd-bg-grey"]
[/nd_icon]
[/col]
[/row]
[/nd_container]
[/nd_div]
[/nd_div]
 ',
  'info' => 'Footer: Short Dark',
  'format' => 'shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 54,
  'body' => '[nd_menu type="c-layout-header-2 c-header-transparent-dark" different_values="0" language="1" menu="menu-onepage" search="1" cart="1" login="1" header_top="0" header_top_menu="menu-header-top" header_top_social_menu="menu-header-top-social-icons" mobile_color="c-layout-header-dark-mobile" fixed="1" fid="85" width="-fluid" header_top_class="light c-solid-bg"]
[/nd_menu]
 ',
  'info' => 'Menu White Half Transparent Wide - OnePage',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 55,
  'body' => '[nd_menu type="c-layout-header-4" different_values="0" language="1" menu="menu-onepage" search="1" cart="1" login="1" header_top="0" header_top_menu="menu-header-top" header_top_social_menu="menu-header-top-social-icons" mobile_color="c-layout-header-dark-mobile" fixed="1" header_top_class="light c-solid-bg"]
[/nd_menu]
 ',
  'info' => 'Menu White Fixed - OnePage',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 56,
  'body' => '[row different_values="0" style_background_image="185" extra_classes="c-content-box c-size-md c-no-padding c-bg-img-center"]
[col different_values="0" desktop="12"]
[nd_container different_values="0" style_padding_bottom="30"]
[nd_heading title="JAN |{span class=\'c-font-black\'|}GO|{/span|}" color="c-font-white" underline="default" icon_color="c-font" label_align="center" uppercase="1" bold="1" line_color="blue" text_size="c-title" color_icon="c-font" different_values="0" style_padding_top="30" style_margin_left="-15"]
[/nd_heading]
[html format="ckeditor" different_values="0" style_margin_left="15"]<p class="c-center c-font-white">Modern Design&nbsp; <span style="color: #7f8b96;">&nbsp;&nbsp;&nbsp;Always Connected</span></p>[/html]
[row different_values="0" style_margin_bottom="30"]
[col desktop="6" different_values="0" style_padding_right="40"]
[nd_block admin_url="admin/structure/block/manage/block/51/configure" different_values="0" style_padding_top="35"]
[/nd_block]
[nd_block admin_url="admin/structure/block/manage/block/48/configure" different_values="0"]
[/nd_block]
[/col]
[col desktop="6" different_values="0" style_padding_left="40"]
[nd_block admin_url="admin/structure/block/manage/block/50/configure" different_values="0"]
[/nd_block]
[/col]
[/row]
[/nd_container]
[/col]
[/row]
 ',
  'info' => 'Footer: 2 Wide Columns and WebForm',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 57,
  'body' => '[nd_menu type="c-layout-header-4" different_values="0" language="1" menu="menu-onepage" search="1" cart="1" login="1" header_top="0" header_top_menu="menu-header-top" header_top_social_menu="menu-header-top-social-icons" mobile_color="c-layout-header-dark-mobile" fixed="1" header_top_class="light c-solid-bg" width="-fluid"]
[/nd_menu]
 ',
  'info' => 'Menu White - Wide - OnePage',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 58,
  'body' => '[nd_menu type="c-layout-header-5" different_values="0" language="1" menu="menu-onepage" search="1" cart="1" login="1" header_top="0" header_top_menu="menu-header-top" header_top_social_menu="menu-header-top-social-icons" mobile_color="c-layout-header-dark-mobile" fixed="1" fid="95" width="-fluid" header_top_class="light c-solid-bg"]
[/nd_menu]
 ',
  'info' => 'Menu Dark Wide - OnePage',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 59,
  'body' => '[nd_menu type="c-layout-header-4" different_values="0" language="1" menu="menu-onepage" search="1" cart="1" login="1" header_top="0" header_top_menu="menu-header-top" header_top_social_menu="menu-header-top-social-icons" mobile_color="c-layout-header-dark-mobile" fixed="0" header_top_class="light c-solid-bg"]
[/nd_menu]
 ',
  'info' => 'Menu White - OnePage',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 60,
  'body' => '[nd_menu type="c-layout-header-4 c-bordered c-header-transparent-dark" different_values="0" language="1" menu="menu-onepage" search="1" cart="1" login="1" header_top="0" header_top_menu="menu-header-top" header_top_social_menu="menu-header-top-social-icons" mobile_color="c-layout-header-dark-mobile" fixed="1" header_top_class="light c-solid-bg" width="-fluid"]
[/nd_menu]
 ',
  'info' => 'Menu Dark Wide Transparent - OnePage',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 61,
  'body' => '[nd_div vertical_align="0" id="footer" extra_classes="c-layout-footer c-layout-footer-4 c-bg-footer-8" different_values="0" style_background_image="207" bg_color=" "]
[nd_div vertical_align="0" extra_classes="c-footer" different_values="0" bg_color=" " id="contact"]
[nd_container different_values="0"]
[row different_values="0"]
[col desktop="6" extra_classes="c-footer-4-p-right" different_values="0"]
[nd_title title="JAN |{span class=\'c-theme-font\'|}GO|{/span|}" color="c-font-white" label_align="c-left" extra_classes="c-border" different_values="0"]
[/nd_title]
[html format="ckeditor" different_values="0"]<p class="c-about">Lorem ipsum dolor sit amet, consectetuer adipiscing elit, sed elit diam nonummy ad minim veniam quis nostrud exerci et tation diam nisl ut aliquip exit commodo consequat euismod tincidunt ut laoreet dolore magna aluam.</p>[/html]
[html format="ckeditor" extra_classes="c-links" different_values="0"]<ul class="c-nav">	<li><a class="c-active c-theme-border c-theme-font" href="#">Home</a></li>	<li><a href="#">About</a></li>	<li><a href="#">Work</a></li>	<li><a href="#">Careers</a></li>	<li><a href="#">Contact</a></li></ul>[/html]
[html format="ckeditor" different_values="0"]<p class="c-contact"> 25, Lorem Lis Street, Orange C, California, US <br> Phone: 800 123 3456 <br> Fax: 800 123 3456 <br> Skype: jango.inc </p>[/html]
[html format="html" different_values="0"]<ul class="c-socials"> <li> <a href="#"> <i class="icon-social-twitter"></i> </a> </li> <li> <a href="#"> <i class="icon-social-facebook"></i> </a> </li> <li> <a href="#"> <i class="icon-social-youtube"></i> </a> </li> <li> <a href="#"> <i class="icon-social-dribbble"></i> </a> </li></ul>[/html]
[/col]
[col desktop="5" extra_classes="c-footer-4-p-left" different_values="0"]
[nd_twitter url="https://twitter.com/themehats" limit="2" different_values="0"]
[html format="ckeditor" different_values="0" extra_classes="a"]<h3 class="c-font-thin">Tweets</h3>[/html]
[/nd_twitter]
[/col]
[/row]
[/nd_container]
[/nd_div]
[/nd_div]
 ',
  'info' => 'Footer 6 - 2 Columns, Description and Tweets',
  'format' => 'shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 62,
  'body' => '[nd_container different_values="0" style_padding_bottom="60"]
[row different_values="0"]
[col desktop="6" different_values="0" style_margin_top="60"]
[nd_title title="MEET JANGO. THE THEME OF 2015" underline="c-line" label_align="c-left" different_values="0"]
[/nd_title]
[html format="ckeditor" different_values="0"]<p><strong><span style="font-size:16px;">THE EVER GROWING MULTIPURPOSE THEME. ULTRA RESPONSIVE, CLEAN CODING WITH TOP QUALITY MODERN DESIGN TRENDS.</span></strong></p>[/html]
[nd_button button_type="button" display="c-btn-square" size="btn-md" color="c-btn-green" text="purchase" link="#" variants=" btn-default" uppercase="1" bold="0" block="0" border_width="c-btn-border-2x" different_values="0" style_margin_top="15"]
[/nd_button]
[/col]
[col desktop="6" different_values="0" style_background_color="eb5d68" style_margin_top="60"]
[html format="ckeditor" different_values="0" style_margin_top="63" style_margin_bottom="63"]<h3 class="rtecenter"><span style="font-size:20px;"><span style="color:#FFFFFF;"><strong>JUST ANOTHER OPTION FROM AN ENDLESS LIST OF </strong></span></span></h3><h3 class="rtecenter"><span style="font-size:20px;"><span style="color:#FFFFFF;"><strong>CHOICES WITHIN JANGO.</strong></span></span></h3>[/html]
[/col]
[/row]
[/nd_container]
 ',
  'info' => 'Footer 7: Description and red block',
  'format' => 'shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 63,
  'body' => '[nd_div vertical_align="0" bg_color=" " id="footer" extra_classes="c-layout-footer c-layout-footer-2 c-option-2" different_values="0" style_background_image="141"]
[nd_container different_values="0"]
[row different_values="0"]
[col desktop="6" different_values="0"]
[nd_div vertical_align="0" bg_color=" " extra_classes="c-container c-left" different_values="0"]
[nd_title title="Info hub" underline="c-line-left c-theme-bg" label_align="c-left" bg_color="theme" different_values="0" color="c-font-white"]
[/nd_title]
[nd_div vertical_align="0" bg_color=" " extra_classes="c-links" different_values="0" style_padding_bottom="50"]
[html format="ckeditor" different_values="0"]<ul class="c-nav">	<li><a href="#">Home</a></li>	<li><a href="#">About</a></li>	<li><a href="#">Portfolio</a></li></ul><ul class="c-nav">	<li><a href="#">Support</a></li>	<li><a href="#">Services</a></li>	<li><a href="#">Clients</a></li></ul><ul class="c-nav">	<li><a href="#">FAQ</a></li>	<li><a href="#">Privacy</a></li>	<li><a href="#">Terms &amp; Conditions</a></li></ul>[/html]
[/nd_div]
[nd_icon icon="icon-social-youtube" size="18" link="#" different_values="0" type="nd-icon-square" style_margin_right="10" bg_color="nd-bg-dark"]
[/nd_icon]
[nd_icon icon="icon-social-twitter" size="18" link="#" different_values="0" type="nd-icon-square" style_margin_right="10" bg_color="nd-bg-dark"]
[/nd_icon]
[nd_icon icon="icon-social-facebook" size="18" link="#" different_values="0" type="nd-icon-square" style_margin_right="10" bg_color="nd-bg-dark"]
[/nd_icon]
[nd_icon icon="icon-social-tumblr" size="18" link="#" different_values="0" type="nd-icon-square" bg_color="nd-bg-dark"]
[/nd_icon]
[/nd_div]
[/col]
[col desktop="6" different_values="0"]
[nd_title title="SUBSCRIBE WITH US" underline="c-line-left c-theme-bg" label_align="c-left" bg_color="theme" different_values="0" color="c-font-white"]
[/nd_title]
[nd_node admin_url="node/224/edit" different_values="0" extra_style="max-width: 450px;" style_margin_bottom="10" style_padding_bottom="10"]
[/nd_node]
[html format="ckeditor" different_values="0"]<p class="c-ask"><span style="font-size:17px;font-weight:400;">Subscribe to our newsletter and get our latest news and juicy updates right from your email.</span></p>[/html]
[/col]
[/row]
[nd_div vertical_align="0" bg_color=" " extra_classes="c-postfooter" different_values="0"]
[nd_container different_values="0"]
[row different_values="0"]
[col tablet="12" desktop="6" extra_classes="c-col" different_values="0"]
[html format="ckeditor" different_values="0"]<p class="c-copyright c-font-grey">2016 © JANGO <span class="c-font-grey-3">All Rights Reserved.</span></p>[/html]
[/col]
[/row]
[/nd_container]
[/nd_div]
[/nd_container]
[/nd_div]
 ',
  'info' => 'Footer 8: Dark BG with Menus and Subscribe with Us',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 64,
  'body' => '[nd_div vertical_align="0" bg_color=" " id="footer" extra_classes="c-layout-footer c-layout-footer-1" different_values="0"]
[nd_div vertical_align="0" bg_color=" " extra_classes="c-prefooter" different_values="0" id="contact"]
[nd_container different_values="0"]
[row different_values="0"]
[col desktop="6" different_values="0"]
[nd_div vertical_align="0" bg_color=" " extra_classes="c-logo" different_values="0"]
[nd_image fid="85" link="|{front|}" different_values="0"]
[/nd_image]
[/nd_div]
[html format="ckeditor" different_values="0"]<p class="c-about"> Lorem ipsum dolor sit amet, consectetuer adipiscing elit, sed elit diam nonummy ad minim veniam quis nostrud exerci et tation diam nisl ut aliquip exit commodo consequat euismod tincidunt ut laoreet dolore magna aluam. </p>[/html]
[nd_div vertical_align="0" bg_color=" " extra_classes="c-links" different_values="0"]
[html format="ckeditor" different_values="0"]<ul class="c-nav"> <li> <a href="#">Home</a> </li> <li> <a href="#">About</a> </li> <li> <a href="#">Portfolio</a> </li> </ul> <ul class="c-nav"> <li> <a href="#">Support</a> </li> <li> <a href="#">Services</a> </li> <li> <a href="#">Clients</a> </li> </ul> <ul class="c-nav"> <li> <a href="#">FAQ</a> </li> <li> <a href="#">Privacy</a> </li> <li> <a href="#">Terms &amp; Conditions</a> </li> </ul>[/html]
[/nd_div]
[html format="ckeditor" different_values="0"]<p class="c-contact">25, Lorem Lis Street, Orange C, California, US<br>Phone: 800 123 3456<br>Fax: 800 123 3456<br>Skype: jango.inc</p>[/html]
[/col]
[col desktop="6" different_values="0"]
[nd_div vertical_align="0" bg_color=" " extra_classes="c-feedback" different_values="0"]
[html format="ckeditor" different_values="0"]<h3>Contact Us</h3>[/html]
[nd_node admin_url="node/225/edit" different_values="0"]
[/nd_node]
[/nd_div]
[/col]
[/row]
[/nd_container]
[/nd_div]
[/nd_div]
 ',
  'info' => 'Footer 9: Grey BG, Description and Contact Us Form',
  'format' => 'dynamic_shortcodes',
);
  $export['block_node_type'][] = array(
  'module' => 'views',
  'delta' => 'most_popular-block',
  'type' => 'product_display',
);
return $export;
}

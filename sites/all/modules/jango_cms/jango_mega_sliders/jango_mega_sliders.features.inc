<?php
/**
 * @file
 * jango_mega_sliders.features.inc
 */

/**
 * Implements hook_install().
 */
function jango_mega_sliders_install() {
$sliders = array(
  1 => array(
    'slid' => 1,
    'title' => 'HomePage',
    'description' => '',
    'machine_name' => 'homepage',
    'settings' => 'a:32:{s:10:"full_width";i:1;s:5:"width";s:4:"1200";s:6:"height";s:3:"500";s:11:"touch_swipe";i:1;s:10:"responsive";i:1;s:8:"videobox";i:0;s:4:"loop";i:1;s:10:"loadingbar";s:4:"none";s:12:"bar_position";s:6:"bottom";s:21:"show_next_prev_button";i:1;s:9:"auto_play";i:1;s:11:"pause_hover";i:1;s:11:"show_bullet";i:0;s:15:"bullet_position";s:1:"5";s:14:"show_thumbnail";i:0;s:18:"thumbnail_position";s:1:"1";s:12:"border_style";s:1:"0";s:16:"dropshadow_style";s:1:"0";s:9:"animation";s:4:"fade";s:5:"delay";s:4:"8000";s:9:"transtime";s:3:"800";s:11:"thumb_width";s:3:"100";s:12:"thumb_height";s:2:"75";s:18:"create_bg_imgstyle";i:0;s:10:"dmf_google";s:112:"http://fonts.googleapis.com/css?family=Roboto+Condensed:300italic,400italic,700italic,400,300,700&amp;subset=all";s:15:"enable_font_css";i:1;s:17:"generate_css_file";i:0;s:8:"on_start";s:0:"";s:6:"on_end";s:0:"";s:11:"color_saved";s:13:"ff9900,CC0000";s:13:"device_enable";i:0;s:12:"device_width";s:3:"460";}',
  ),
  2 => array(
    'slid' => 2,
    'title' => 'Shop Home 1',
    'description' => '',
    'machine_name' => 'shop-home-1',
    'settings' => 'a:32:{s:10:"full_width";i:1;s:5:"width";s:4:"1200";s:6:"height";s:3:"700";s:11:"touch_swipe";i:1;s:10:"responsive";i:1;s:8:"videobox";i:0;s:4:"loop";i:1;s:10:"loadingbar";s:4:"none";s:12:"bar_position";s:3:"top";s:21:"show_next_prev_button";i:1;s:9:"auto_play";i:1;s:11:"pause_hover";i:1;s:11:"show_bullet";i:0;s:15:"bullet_position";s:1:"5";s:14:"show_thumbnail";i:0;s:18:"thumbnail_position";s:1:"1";s:12:"border_style";s:1:"0";s:16:"dropshadow_style";s:1:"0";s:9:"animation";s:4:"fade";s:5:"delay";s:5:"80000";s:9:"transtime";s:3:"800";s:11:"thumb_width";s:3:"100";s:12:"thumb_height";s:2:"75";s:18:"create_bg_imgstyle";i:0;s:10:"dmf_google";s:0:"";s:15:"enable_font_css";i:0;s:17:"generate_css_file";i:0;s:8:"on_start";s:0:"";s:6:"on_end";s:0:"";s:11:"color_saved";s:13:"ff9900,CC0000";s:13:"device_enable";i:1;s:12:"device_width";s:3:"460";}',
  ),
  3 => array(
    'slid' => 3,
    'title' => 'Shop Home 3',
    'description' => '',
    'machine_name' => 'shop-home-3',
    'settings' => 'a:32:{s:10:"full_width";i:1;s:5:"width";s:4:"1200";s:6:"height";s:3:"800";s:11:"touch_swipe";i:1;s:10:"responsive";i:1;s:8:"videobox";i:0;s:4:"loop";i:1;s:10:"loadingbar";s:4:"none";s:12:"bar_position";s:6:"bottom";s:21:"show_next_prev_button";i:1;s:9:"auto_play";i:1;s:11:"pause_hover";i:1;s:11:"show_bullet";i:0;s:15:"bullet_position";s:1:"5";s:14:"show_thumbnail";i:0;s:18:"thumbnail_position";s:1:"1";s:12:"border_style";s:1:"0";s:16:"dropshadow_style";s:1:"0";s:9:"animation";s:4:"fade";s:5:"delay";s:4:"8000";s:9:"transtime";s:3:"800";s:11:"thumb_width";s:3:"100";s:12:"thumb_height";s:2:"75";s:18:"create_bg_imgstyle";i:0;s:10:"dmf_google";s:0:"";s:15:"enable_font_css";i:0;s:17:"generate_css_file";i:0;s:8:"on_start";s:0:"";s:6:"on_end";s:0:"";s:11:"color_saved";s:13:"ff9900,CC0000";s:13:"device_enable";i:0;s:12:"device_width";s:3:"460";}',
  ),
  4 => array(
    'slid' => 4,
    'title' => 'Meet Jango',
    'description' => '',
    'machine_name' => 'meet-jango',
    'settings' => 'a:32:{s:10:"full_width";i:1;s:5:"width";s:4:"1200";s:6:"height";s:3:"900";s:11:"touch_swipe";i:1;s:10:"responsive";i:1;s:8:"videobox";i:0;s:4:"loop";i:1;s:10:"loadingbar";s:4:"none";s:12:"bar_position";s:6:"bottom";s:21:"show_next_prev_button";i:1;s:9:"auto_play";i:1;s:11:"pause_hover";i:1;s:11:"show_bullet";i:0;s:15:"bullet_position";s:1:"5";s:14:"show_thumbnail";i:0;s:18:"thumbnail_position";s:1:"1";s:12:"border_style";s:1:"0";s:16:"dropshadow_style";s:1:"0";s:9:"animation";s:4:"fade";s:5:"delay";s:4:"8000";s:9:"transtime";s:3:"800";s:11:"thumb_width";s:3:"100";s:12:"thumb_height";s:2:"75";s:18:"create_bg_imgstyle";i:0;s:10:"dmf_google";s:0:"";s:15:"enable_font_css";i:0;s:17:"generate_css_file";i:0;s:8:"on_start";s:0:"";s:6:"on_end";s:0:"";s:11:"color_saved";s:13:"ff9900,CC0000";s:13:"device_enable";i:0;s:12:"device_width";s:3:"460";}',
  ),
  5 => array(
    'slid' => 5,
    'title' => 'Shop Home 6',
    'description' => '',
    'machine_name' => 'md-slider-57f77ebfb7cc7',
    'settings' => 'a:32:{s:10:"full_width";i:1;s:5:"width";s:4:"1200";s:6:"height";s:3:"800";s:11:"touch_swipe";i:1;s:10:"responsive";i:1;s:8:"videobox";i:0;s:4:"loop";i:1;s:10:"loadingbar";s:4:"none";s:12:"bar_position";s:6:"bottom";s:21:"show_next_prev_button";i:1;s:9:"auto_play";i:1;s:11:"pause_hover";i:1;s:11:"show_bullet";i:0;s:15:"bullet_position";s:1:"5";s:14:"show_thumbnail";i:0;s:18:"thumbnail_position";s:1:"1";s:12:"border_style";s:1:"0";s:16:"dropshadow_style";s:1:"0";s:9:"animation";s:4:"fade";s:5:"delay";s:4:"8000";s:9:"transtime";s:3:"800";s:11:"thumb_width";s:3:"100";s:12:"thumb_height";s:2:"75";s:18:"create_bg_imgstyle";i:0;s:10:"dmf_google";s:0:"";s:15:"enable_font_css";i:0;s:17:"generate_css_file";i:0;s:8:"on_start";s:0:"";s:6:"on_end";s:0:"";s:11:"color_saved";s:13:"ff9900,CC0000";s:13:"device_enable";i:0;s:12:"device_width";s:3:"460";}',
  ),
  6 => array(
    'slid' => 6,
    'title' => 'Home V2',
    'description' => '',
    'machine_name' => 'home-v2',
    'settings' => 'a:32:{s:10:"full_width";i:1;s:5:"width";s:4:"1600";s:6:"height";s:3:"700";s:11:"touch_swipe";i:1;s:10:"responsive";i:1;s:8:"videobox";i:0;s:4:"loop";i:1;s:10:"loadingbar";s:4:"none";s:12:"bar_position";s:6:"bottom";s:21:"show_next_prev_button";i:1;s:9:"auto_play";i:1;s:11:"pause_hover";i:1;s:11:"show_bullet";i:0;s:15:"bullet_position";s:1:"5";s:14:"show_thumbnail";i:0;s:18:"thumbnail_position";s:1:"1";s:12:"border_style";s:1:"0";s:16:"dropshadow_style";s:1:"0";s:9:"animation";s:4:"fade";s:5:"delay";s:4:"8000";s:9:"transtime";s:3:"800";s:11:"thumb_width";s:3:"100";s:12:"thumb_height";s:2:"75";s:18:"create_bg_imgstyle";i:0;s:10:"dmf_google";s:0:"";s:15:"enable_font_css";i:0;s:17:"generate_css_file";i:0;s:8:"on_start";s:0:"";s:6:"on_end";s:0:"";s:11:"color_saved";s:13:"ff9900,CC0000";s:13:"device_enable";i:0;s:12:"device_width";s:3:"460";}',
  ),
  7 => array(
    'slid' => 7,
    'title' => 'Home V4',
    'description' => '',
    'machine_name' => 'home-v4',
    'settings' => 'a:32:{s:10:"full_width";i:1;s:5:"width";s:4:"1200";s:6:"height";s:3:"650";s:11:"touch_swipe";i:1;s:10:"responsive";i:1;s:8:"videobox";i:0;s:4:"loop";i:1;s:10:"loadingbar";s:4:"none";s:12:"bar_position";s:6:"bottom";s:21:"show_next_prev_button";i:1;s:9:"auto_play";i:1;s:11:"pause_hover";i:1;s:11:"show_bullet";i:0;s:15:"bullet_position";s:1:"5";s:14:"show_thumbnail";i:0;s:18:"thumbnail_position";s:1:"1";s:12:"border_style";s:1:"0";s:16:"dropshadow_style";s:1:"0";s:9:"animation";s:4:"fade";s:5:"delay";s:4:"8000";s:9:"transtime";s:3:"800";s:11:"thumb_width";s:3:"100";s:12:"thumb_height";s:2:"75";s:18:"create_bg_imgstyle";i:0;s:10:"dmf_google";s:55:"http://fonts.googleapis.com/css?family=Roboto+Condensed";s:15:"enable_font_css";i:1;s:17:"generate_css_file";i:0;s:8:"on_start";s:0:"";s:6:"on_end";s:0:"";s:11:"color_saved";s:13:"ff9900,CC0000";s:13:"device_enable";i:0;s:12:"device_width";s:3:"460";}',
  ),
  8 => array(
    'slid' => 8,
    'title' => 'Home V5',
    'description' => '',
    'machine_name' => 'homve-v5',
    'settings' => 'a:32:{s:10:"full_width";i:1;s:5:"width";s:4:"1200";s:6:"height";s:3:"800";s:11:"touch_swipe";i:1;s:10:"responsive";i:1;s:8:"videobox";i:0;s:4:"loop";i:1;s:10:"loadingbar";s:4:"none";s:12:"bar_position";s:6:"bottom";s:21:"show_next_prev_button";i:1;s:9:"auto_play";i:1;s:11:"pause_hover";i:1;s:11:"show_bullet";i:0;s:15:"bullet_position";s:1:"5";s:14:"show_thumbnail";i:0;s:18:"thumbnail_position";s:1:"1";s:12:"border_style";s:1:"0";s:16:"dropshadow_style";s:1:"0";s:9:"animation";s:4:"fade";s:5:"delay";s:4:"8000";s:9:"transtime";s:3:"800";s:11:"thumb_width";s:3:"100";s:12:"thumb_height";s:2:"75";s:18:"create_bg_imgstyle";i:0;s:10:"dmf_google";s:0:"";s:15:"enable_font_css";i:0;s:17:"generate_css_file";i:0;s:8:"on_start";s:0:"";s:6:"on_end";s:0:"";s:11:"color_saved";s:13:"ff9900,CC0000";s:13:"device_enable";i:0;s:12:"device_width";s:3:"460";}',
  ),
  9 => array(
    'slid' => 9,
    'title' => 'Home V6',
    'description' => '',
    'machine_name' => 'md-slider-582a1f2cd16b9',
    'settings' => 'a:32:{s:10:"full_width";i:1;s:5:"width";s:4:"1200";s:6:"height";s:3:"800";s:11:"touch_swipe";i:1;s:10:"responsive";i:1;s:8:"videobox";i:0;s:4:"loop";i:1;s:10:"loadingbar";s:4:"none";s:12:"bar_position";s:6:"bottom";s:21:"show_next_prev_button";i:1;s:9:"auto_play";i:1;s:11:"pause_hover";i:1;s:11:"show_bullet";i:0;s:15:"bullet_position";s:1:"5";s:14:"show_thumbnail";i:0;s:18:"thumbnail_position";s:1:"1";s:12:"border_style";s:1:"0";s:16:"dropshadow_style";s:1:"0";s:9:"animation";s:4:"fade";s:5:"delay";s:4:"8000";s:9:"transtime";s:3:"800";s:11:"thumb_width";s:3:"100";s:12:"thumb_height";s:2:"75";s:18:"create_bg_imgstyle";i:0;s:10:"dmf_google";s:0:"";s:15:"enable_font_css";i:0;s:17:"generate_css_file";i:0;s:8:"on_start";s:0:"";s:6:"on_end";s:0:"";s:11:"color_saved";s:13:"ff9900,CC0000";s:13:"device_enable";i:0;s:12:"device_width";s:3:"460";}',
  ),
  10 => array(
    'slid' => 10,
    'title' => 'Home V7',
    'description' => '',
    'machine_name' => 'md-slider-582d770b8573b',
    'settings' => 'a:32:{s:10:"full_width";i:1;s:5:"width";s:4:"1200";s:6:"height";s:3:"800";s:11:"touch_swipe";i:1;s:10:"responsive";i:1;s:8:"videobox";i:0;s:4:"loop";i:1;s:10:"loadingbar";s:4:"none";s:12:"bar_position";s:6:"bottom";s:21:"show_next_prev_button";i:1;s:9:"auto_play";i:1;s:11:"pause_hover";i:1;s:11:"show_bullet";i:0;s:15:"bullet_position";s:1:"5";s:14:"show_thumbnail";i:0;s:18:"thumbnail_position";s:1:"1";s:12:"border_style";s:1:"0";s:16:"dropshadow_style";s:1:"0";s:9:"animation";s:4:"fade";s:5:"delay";s:4:"8000";s:9:"transtime";s:3:"800";s:11:"thumb_width";s:3:"100";s:12:"thumb_height";s:2:"75";s:18:"create_bg_imgstyle";i:0;s:10:"dmf_google";s:0:"";s:15:"enable_font_css";i:0;s:17:"generate_css_file";i:0;s:8:"on_start";s:0:"";s:6:"on_end";s:0:"";s:11:"color_saved";s:13:"ff9900,CC0000";s:13:"device_enable";i:0;s:12:"device_width";s:3:"460";}',
  ),
  11 => array(
    'slid' => 11,
    'title' => 'Home V8',
    'description' => '',
    'machine_name' => 'md-slider-582e208f43e7b',
    'settings' => 'a:32:{s:10:"full_width";i:1;s:5:"width";s:4:"1200";s:6:"height";s:3:"500";s:11:"touch_swipe";i:1;s:10:"responsive";i:1;s:8:"videobox";i:0;s:4:"loop";i:1;s:10:"loadingbar";s:4:"none";s:12:"bar_position";s:6:"bottom";s:21:"show_next_prev_button";i:1;s:9:"auto_play";i:1;s:11:"pause_hover";i:1;s:11:"show_bullet";i:0;s:15:"bullet_position";s:1:"5";s:14:"show_thumbnail";i:0;s:18:"thumbnail_position";s:1:"1";s:12:"border_style";s:1:"0";s:16:"dropshadow_style";s:1:"0";s:9:"animation";s:4:"fade";s:5:"delay";s:4:"8000";s:9:"transtime";s:3:"800";s:11:"thumb_width";s:3:"100";s:12:"thumb_height";s:2:"75";s:18:"create_bg_imgstyle";i:0;s:10:"dmf_google";s:0:"";s:15:"enable_font_css";i:0;s:17:"generate_css_file";i:0;s:8:"on_start";s:0:"";s:6:"on_end";s:0:"";s:11:"color_saved";s:13:"ff9900,CC0000";s:13:"device_enable";i:0;s:12:"device_width";s:3:"460";}',
  ),
  12 => array(
    'slid' => 12,
    'title' => 'Home V9',
    'description' => '',
    'machine_name' => 'md-slider-582e36279ade6',
    'settings' => 'a:32:{s:10:"full_width";i:1;s:5:"width";s:4:"1200";s:6:"height";s:3:"800";s:11:"touch_swipe";i:1;s:10:"responsive";i:1;s:8:"videobox";i:0;s:4:"loop";i:1;s:10:"loadingbar";s:4:"none";s:12:"bar_position";s:6:"bottom";s:21:"show_next_prev_button";i:1;s:9:"auto_play";i:1;s:11:"pause_hover";i:1;s:11:"show_bullet";i:0;s:15:"bullet_position";s:1:"5";s:14:"show_thumbnail";i:0;s:18:"thumbnail_position";s:1:"1";s:12:"border_style";s:1:"0";s:16:"dropshadow_style";s:1:"0";s:9:"animation";s:4:"fade";s:5:"delay";s:4:"8000";s:9:"transtime";s:3:"800";s:11:"thumb_width";s:3:"100";s:12:"thumb_height";s:2:"75";s:18:"create_bg_imgstyle";i:0;s:10:"dmf_google";s:0:"";s:15:"enable_font_css";i:0;s:17:"generate_css_file";i:0;s:8:"on_start";s:0:"";s:6:"on_end";s:0:"";s:11:"color_saved";s:13:"ff9900,CC0000";s:13:"device_enable";i:0;s:12:"device_width";s:3:"460";}',
  ),
  13 => array(
    'slid' => 13,
    'title' => 'Home V11',
    'description' => '',
    'machine_name' => 'md-slider-582e401e8ea38',
    'settings' => 'a:32:{s:10:"full_width";i:1;s:5:"width";s:4:"1200";s:6:"height";s:3:"500";s:11:"touch_swipe";i:1;s:10:"responsive";i:1;s:8:"videobox";i:0;s:4:"loop";i:1;s:10:"loadingbar";s:4:"none";s:12:"bar_position";s:6:"bottom";s:21:"show_next_prev_button";i:1;s:9:"auto_play";i:1;s:11:"pause_hover";i:1;s:11:"show_bullet";i:0;s:15:"bullet_position";s:1:"5";s:14:"show_thumbnail";i:0;s:18:"thumbnail_position";s:1:"1";s:12:"border_style";s:1:"0";s:16:"dropshadow_style";s:1:"0";s:9:"animation";s:4:"fade";s:5:"delay";s:4:"8000";s:9:"transtime";s:3:"800";s:11:"thumb_width";s:3:"100";s:12:"thumb_height";s:2:"75";s:18:"create_bg_imgstyle";i:0;s:10:"dmf_google";s:0:"";s:15:"enable_font_css";i:0;s:17:"generate_css_file";i:0;s:8:"on_start";s:0:"";s:6:"on_end";s:0:"";s:11:"color_saved";s:13:"ff9900,CC0000";s:13:"device_enable";i:0;s:12:"device_width";s:3:"460";}',
  ),
  14 => array(
    'slid' => 14,
    'title' => 'Home V12',
    'description' => '',
    'machine_name' => 'md-slider-582e45479a018',
    'settings' => 'a:32:{s:10:"full_width";i:1;s:5:"width";s:4:"1200";s:6:"height";s:3:"800";s:11:"touch_swipe";i:1;s:10:"responsive";i:1;s:8:"videobox";i:0;s:4:"loop";i:1;s:10:"loadingbar";s:4:"none";s:12:"bar_position";s:6:"bottom";s:21:"show_next_prev_button";i:1;s:9:"auto_play";i:1;s:11:"pause_hover";i:1;s:11:"show_bullet";i:0;s:15:"bullet_position";s:1:"5";s:14:"show_thumbnail";i:0;s:18:"thumbnail_position";s:1:"1";s:12:"border_style";s:1:"0";s:16:"dropshadow_style";s:1:"0";s:9:"animation";s:4:"fade";s:5:"delay";s:4:"8000";s:9:"transtime";s:3:"800";s:11:"thumb_width";s:3:"100";s:12:"thumb_height";s:2:"75";s:18:"create_bg_imgstyle";i:0;s:10:"dmf_google";s:0:"";s:15:"enable_font_css";i:0;s:17:"generate_css_file";i:0;s:8:"on_start";s:0:"";s:6:"on_end";s:0:"";s:11:"color_saved";s:13:"ff9900,CC0000";s:13:"device_enable";i:0;s:12:"device_width";s:3:"460";}',
  ),
  16 => array(
    'slid' => 16,
    'title' => 'OnePage V7',
    'description' => '',
    'machine_name' => 'md-slider-582f5c447e6ee',
    'settings' => 'a:32:{s:10:"full_width";i:1;s:5:"width";s:4:"1200";s:6:"height";s:3:"900";s:11:"touch_swipe";i:1;s:10:"responsive";i:1;s:8:"videobox";i:0;s:4:"loop";i:1;s:10:"loadingbar";s:4:"none";s:12:"bar_position";s:6:"bottom";s:21:"show_next_prev_button";i:1;s:9:"auto_play";i:1;s:11:"pause_hover";i:1;s:11:"show_bullet";i:0;s:15:"bullet_position";s:1:"5";s:14:"show_thumbnail";i:0;s:18:"thumbnail_position";s:1:"1";s:12:"border_style";s:1:"0";s:16:"dropshadow_style";s:1:"0";s:9:"animation";s:4:"fade";s:5:"delay";s:4:"8000";s:9:"transtime";s:3:"800";s:11:"thumb_width";s:3:"100";s:12:"thumb_height";s:2:"75";s:18:"create_bg_imgstyle";i:0;s:10:"dmf_google";s:0:"";s:15:"enable_font_css";i:0;s:17:"generate_css_file";i:0;s:8:"on_start";s:0:"";s:6:"on_end";s:0:"";s:11:"color_saved";s:13:"ff9900,CC0000";s:13:"device_enable";i:0;s:12:"device_width";s:3:"460";}',
  ),
  17 => array(
    'slid' => 17,
    'title' => 'OnePage V9',
    'description' => '',
    'machine_name' => 'md-slider-582f642832a1d',
    'settings' => 'a:32:{s:10:"full_width";i:1;s:5:"width";s:4:"1600";s:6:"height";s:3:"900";s:11:"touch_swipe";i:1;s:10:"responsive";i:1;s:8:"videobox";i:0;s:4:"loop";i:1;s:10:"loadingbar";s:4:"none";s:12:"bar_position";s:6:"bottom";s:21:"show_next_prev_button";i:1;s:9:"auto_play";i:1;s:11:"pause_hover";i:1;s:11:"show_bullet";i:0;s:15:"bullet_position";s:1:"5";s:14:"show_thumbnail";i:0;s:18:"thumbnail_position";s:1:"1";s:12:"border_style";s:1:"0";s:16:"dropshadow_style";s:1:"0";s:9:"animation";s:4:"fade";s:5:"delay";s:4:"8000";s:9:"transtime";s:3:"800";s:11:"thumb_width";s:3:"100";s:12:"thumb_height";s:2:"75";s:18:"create_bg_imgstyle";i:0;s:10:"dmf_google";s:0:"";s:15:"enable_font_css";i:0;s:17:"generate_css_file";i:0;s:8:"on_start";s:0:"";s:6:"on_end";s:0:"";s:11:"color_saved";s:13:"ff9900,CC0000";s:13:"device_enable";i:0;s:12:"device_width";s:3:"460";}',
  ),
  18 => array(
    'slid' => 18,
    'title' => 'OnePage V11',
    'description' => '',
    'machine_name' => 'md-slider-58301f7ae8792',
    'settings' => 'a:32:{s:10:"full_width";i:1;s:5:"width";s:4:"1200";s:6:"height";s:3:"500";s:11:"touch_swipe";i:1;s:10:"responsive";i:1;s:8:"videobox";i:0;s:4:"loop";i:1;s:10:"loadingbar";s:4:"none";s:12:"bar_position";s:6:"bottom";s:21:"show_next_prev_button";i:1;s:9:"auto_play";i:1;s:11:"pause_hover";i:1;s:11:"show_bullet";i:0;s:15:"bullet_position";s:1:"5";s:14:"show_thumbnail";i:0;s:18:"thumbnail_position";s:1:"1";s:12:"border_style";s:1:"0";s:16:"dropshadow_style";s:1:"0";s:9:"animation";s:4:"fade";s:5:"delay";s:4:"8000";s:9:"transtime";s:3:"800";s:11:"thumb_width";s:3:"100";s:12:"thumb_height";s:2:"75";s:18:"create_bg_imgstyle";i:0;s:10:"dmf_google";s:112:"http://fonts.googleapis.com/css?family=Roboto+Condensed:300italic,400italic,700italic,400,300,700&amp;subset=all";s:15:"enable_font_css";i:1;s:17:"generate_css_file";i:0;s:8:"on_start";s:0:"";s:6:"on_end";s:0:"";s:11:"color_saved";s:13:"ff9900,CC0000";s:13:"device_enable";i:0;s:12:"device_width";s:3:"460";}',
  ),
);
foreach ($sliders as $slider) {
	$slider = (object)$slider;
	$slider = _md_slider_recast('MDSlider',$slider);
	$slider->slid = NULL;

	if (!MDSlider::get_by_machine_name($slider->machine_name))
		$slider->save();
}
}

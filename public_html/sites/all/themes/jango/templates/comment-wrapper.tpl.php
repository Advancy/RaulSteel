<?php

/**
 * @file
 * Default theme implementation to provide an HTML container for comments.
 *
 * Available variables:
 * - $content: The array of content-related elements for the node. Use
 *   render($content) to print them all, or
 *   print a subset such as render($content['comment_form']).
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default value has the following:
 *   - comment-wrapper: The current template type, i.e., "theming hook".
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * The following variables are provided for contextual information.
 * - $node: Node object the comments are attached to.
 * The constants below the variables show the possible values and should be
 * used for comparison.
 * - $display_mode
 *   - COMMENT_MODE_FLAT
 *   - COMMENT_MODE_THREADED
 *
 * Other variables:
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 *
 * @see template_preprocess_comment_wrapper()
 *
 * @ingroup themeable
 */
$comments_array = array_filter($content['comments'], '_count_comments');
?>
<div class="c-comments">
  <?php if (count($comments_array)): ?>
    <div class="c-content-title-1">
      <h3 class="c-font-uppercase c-font-bold"><?php print t('Comments') . count($comments_array); ?></h3>
      <div class="c-line-left"></div>
    </div>
    <div class="c-comment-list">
      <?php print render($content['comments']); ?>  
    </div>
  <?php endif; ?>

  <?php if ($content['comment_form']): ?>
    <div class="c-content-title-1">
      <h3 class="c-font-uppercase c-font-bold"><?php print t('Leave A Comment'); ?></h3>
      <div class="c-line-left"></div>
    </div>
    <?php
      $content['comment_form']['field_website']['und'][0]['value']['#attributes']['class'][] = 'input-default';
      $content['comment_form']['actions']['submit']['#value'] = t('Submit');
      $content['comment_form']['actions']['submit']['#attributes']['class'] = array('btn', 'c-theme-btn', 'c-btn-uppercase', 'btn-md', 'c-btn-sbold', 'btn-block', 'c-btn-square');
      print render($content['comment_form']);
    ?>
  <?php endif; ?>
</div>
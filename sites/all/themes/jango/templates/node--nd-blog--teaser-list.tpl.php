<?php
/**
 * @file
 * Default theme implementation to display a node.
 *
 * Available variables:
 * - $title: the (sanitized) title of the node.
 * - $content: An array of node items. Use render($content) to print them all, or
 *   print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $user_picture: The node author's picture from user-picture.tpl.php.
 * - $date: Formatted creation date. Preprocess functions can reformat it by
 *   calling format_date() with the desired parameters on the $created variable.
 * - $name: Themed username of node author output from theme_username().
 * - $node_url: Direct url of the current node.
 * - $terms: the themed list of taxonomy term links output from theme_links().
 * - $display_submitted: whether submission information should be displayed.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the following:
 *   - node: The current template type, i.e., "theming hook".
 *   - node-[type]: The current node type. For example, if the node is a
 *     "Blog entry" it would result in "node-blog". Note that the machine
 *     name will often be in a short form of the human readable label.
 *   - node-teaser: Nodes in teaser form.
 *   - node-preview: Nodes in preview mode.
 *   The following are controlled through the node publishing options.
 *   - node-promoted: Nodes promoted to the front page.
 *   - node-sticky: Nodes ordered above other non-sticky nodes in teaser listings.
 *   - node-unpublished: Unpublished nodes visible only to administrators.
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Other variables:
 * - $node: Full node object. Contains data that may not be safe.
 * - $type: Node type, i.e. story, page, blog, etc.
 * - $comment_count: Number of comments attached to the node.
 * - $uid: User ID of the node author.
 * - $created: Time the node was published formatted in Unix timestamp.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *   teaser listings.
 * - $id: Position of the node. Increments each time it's output.
 *
 * Node status variables:
 * - $view_mode: View mode, e.g. 'full', 'teaser'...
 * - $teaser: Flag for the teaser state (shortcut for $view_mode == 'teaser').
 * - $page: Flag for the full page state.
 * - $promote: Flag for front page promotion state.
 * - $sticky: Flags for sticky post setting.
 * - $status: Flag for published status.
 * - $comment: State of comment settings for the node.
 * - $readmore: Flags true if the teaser content of the node cannot hold the
 *   main body content.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 *
 * Field variables: for each field instance attached to the node a corresponding
 * variable is defined, e.g. $node->body becomes $body. When needing to access
 * a field's raw values, developers/themers are strongly encouraged to use these
 * variables. Otherwise they will have to explicitly specify the desired field
 * language, e.g. $node->body['en'], thus overriding any language negotiation
 * rule that was previously applied.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 */

$comments_count = isset($content['comments']['comments']) ? array_filter($content['comments']['comments'], '_count_comments') : 0;
hide($content['comments']);
hide($content['links']);
hide($content['links']['comment']);
hide($content['links']['node']);
hide($content['field_tags']);
$images = _get_node_field($node, 'field_images');
$zoom_image = isset($images[0]['uri']) ? file_create_url($images[0]['uri']) : '';
?>
<div id="node-<?php print $node->nid; ?>" class="c-content-blog-post-card-1 c-option-2 c-bordered <?php print $classes; ?> clearfix"<?php print $attributes; ?>>
    <?php print render($title_prefix); ?>
    <?php print render($title_suffix); ?>
    <div class="c-media c-content-overlay">
      <div class="c-overlay-wrapper">
        <div class="c-overlay-content">
          <a href="<?php print $node_url; ?>">
              <i class="icon-link"></i>
          </a>
          <a href="<?php print $zoom_image; ?>" data-lightbox="fancybox" data-fancybox-group="gallery">
            <i class="icon-magnifier"></i>
          </a>
        </div>
      </div>
      <?php print render($content['field_images']); ?>
    </div>
    <?php print render($content['field_video']); ?>
    <div class="c-body">
        <div class="c-title c-font-bold c-font-uppercase">
            <a href="<?php print $node_url; ?>"><?php print $title; ?></a>
        </div>
        <div class="c-author"> <?php print t('By') ?>
            <a href="<?php print url('user/' . $uid); ?>">
                <span class="c-font-uppercase"><?php print strip_tags($name); ?></span>
            </a> <?php print t('on'); ?>
            <span class="c-font-uppercase"><?php print date('d M Y', $created); ?> <?php print date('g:i A', $created); ?></span>
        </div>
        <div class="c-panel">
          <?php print render($content['field_tags']); ?>
          <div class="c-comments">
            <a href="<?php print $node_url; ?>">
              <i class="icon-speech"></i> <?php print $comments_count . ' ' . t('comments'); ?></a>
          </div>
        </div>
        <?php print render($content); ?>
    </div>
</div>

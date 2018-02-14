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
?>
  <?php
  $uri = isset($content['product:field_images'][0]) ? $content['product:field_images'][0]['#item']['uri'] : ''; 
  $filepath = $uri ? file_create_url(image_style_path($content['product:field_images'][0]['#image_style'], $uri)) : ''; 

  $content['field_products'][0]['#attributes']['class'][] = 'hidden-button';
  $content['field_products'][0]['styled_submit']['#markup'] = '<button type="submit" class="btn btn-sm c-theme-btn c-btn-square c-btn-uppercase c-btn-bold"><i class="fa fa-shopping-cart"></i>' . t('Add Cart') . '</button>'; ?>

<div class="row c-margin-b-40 node-product-teaser-list">
  <div class="c-content-product-2 c-bg-white">
      <div class="col-md-4">
          <div class="c-content-overlay">
              <?php print render($content['field_sale_label']); ?>
              <?php print render($content['field_new_label']); ?>
              <div class="c-overlay-wrapper">
                  <div class="c-overlay-content">
                      <a href="<?php print $node_url; ?>" class="btn btn-md c-btn-grey-1 c-btn-uppercase c-btn-bold c-btn-border-1x c-btn-square"><?php print t('Explore'); ?></a>
                  </div>
              </div>
              <div class="hidden"><?php print render($content['product:field_images']); ?></div>
              <div class="c-bg-img-center c-overlay-object" data-height="height" style="height: 230px; background-image: url(<?php print $filepath; ?>);"></div>
          </div>
      </div>
      <div class="col-md-8">
          <div class="c-info-list">
              <h3 class="c-title c-font-bold c-font-22 c-font-dark">
                  <a class="c-theme-link" href="<?php print $node_url; ?>"><?php print $title; ?></a>
              </h3>
              <div class="c-desc c-font-16 c-font-thin c-margin-b-10"><?php print render($content['field_short_description']); ?></div>
              <p class="c-price c-font-26 c-font-thin"><?php print strip_tags(render($content['product:commerce_price'])); ?> &nbsp;
                  <span class="c-font-26 c-font-line-through c-font-red"><?php print strip_tags(render($content['product:field_old_price'])); ?></span>
              </p>
          </div>
          <div>
              <?php print render($content['field_products']); ?>
              <?php ///print render($content['flag_wishlist']); ?>
              <?php print render($content); ?>
          </div>
      </div>
  </div>
</div>

<?php return; ?>

  <div class="item">
    <div class="c-content-product-2 c-bg-white c-border">
        <div class="c-content-overlay">
            <?php print render($content['field_sale_label']); ?>
            <?php print render($content['field_new_label']); ?>
            <div class="c-overlay-wrapper">
                <div class="c-overlay-content">
                    <a href="<?php print $node_url; ?>" class="btn btn-md c-btn-grey-1 c-btn-uppercase c-btn-bold c-btn-border-1x c-btn-square"><?php print t('Explore'); ?></a>
                </div>
            </div>
            <div class = "hidden"><?php print render($content['product:field_images']); ?></div>
            <div class="c-bg-img-center-contain c-overlay-object" data-height="height" style="height: 270px; background-image: url(<?php print $filepath ?>);"></div>
        </div>
        <div class="c-info">
            <p class="c-title c-font-18 c-font-slim">
              <?php print render($title_prefix); ?>
              <?php if ($title): ?>
                <?php print $title; ?>
              <?php endif; ?>
              <?php print render($title_suffix); ?>
            </p>
            <p class="c-price c-font-16 c-font-slim"><?php print render($content['product:commerce_price']); ?> &nbsp;
                <span class="c-font-16 c-font-line-through c-font-red"><?php print render($content['product:field_old_price']); ?></span>
            </p>
        </div>
        <div class="btn-group btn-group-justified" role="group">
            <div class="btn-group c-border-top" role="group">
                <?php print render($content['flag_wishlist']); ?>
            </div>
            <div class="btn-group c-border-left c-border-top" role="group">
              <?php print render($content['field_products']); ?>
            </div>
        </div>
    </div>
  </div>
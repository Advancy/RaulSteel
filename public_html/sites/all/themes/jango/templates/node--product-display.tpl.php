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
if ($teaser) { ?>
  <?php //kpr($content); 
  $uri = isset($content['product:field_images'][0]) ? $content['product:field_images'][0]['#item']['uri'] : ''; 
  $filepath = $uri ? file_create_url(image_style_path($content['product:field_images'][0]['#image_style'], $uri)) : ''; 

  //$content['field_products'][0]['styled_submit']['#markup'] = '<button class="btn btn-lg c-btn-white c-btn-uppercase c-btn-square c-font-grey-3 c-font-white-hover c-bg-red-2-hover c-btn-product">' . t('Cart') . '</button>';?>

  <div class="item node-product-teaser">
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
            <p class="c-price c-font-16 c-font-slim"><?php print strip_tags(render($content['product:commerce_price'])); ?> &nbsp;
                <span class="c-font-16 c-font-line-through c-font-red"><?php print strip_tags(render($content['product:field_old_price'])); ?></span>
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
<?php }
else {
  $comments_array = isset($content['comments']['comments']) ? array_filter($content['comments']['comments'], '_count_comments') : array();
  if($comments_array) {
    $content['group_product_description']['group_reviews']['#title'] .= ' (' . count($comments_array) . ')';
  }
  $comment_form = '';
  if(isset($content['comments']['comment_form'])) {
    $comment_form['actions']['submit']['#value'] = t('Submit review');
    $comment_form = '<h3 class="c-font-bold c-font-uppercase">'. t('Submit your Review') . '</h3>' . render($content['comments']['comment_form']);
  }
  unset($content['group_product_description']['group_reviews']['product:status']);
  $comments = '<h3 class="c-font-uppercase c-font-bold c-font-22 c-center c-margin-b-40 c-margin-t-40">'. t('Reviews for') . ' ' . $title . '</h3>' . 
    render($content['comments']) .'
    <div class = "c-product-review-input">
    '  . $comment_form . '</div>';
  $content['group_product_description']['group_reviews']['comments']['#markup'] = $comments;
  $content['group_product_description']['group_reviews']['#group']->children[] = 'comments';
  hide($content['links']['comment']);
  ?>
  <div <?php print $attributes; ?>>
    <div <?php print $content_attributes; ?>>

      <div class="c-shop-product-details-2">
        <div class="row">
            <div class="col-md-6">
              <?php print render($content['product:field_images']); ?>
            </div>
            <div class="col-md-6">
                <div class="c-product-meta">
                    <div class="c-content-title-1">
                        <h3 class="c-font-uppercase c-font-bold"><?php print $title; ?></h3>
                        <div class="c-line-left"></div>
                    </div>
                    <div class="c-product-badge">
                      <?php print render($content['field_sale_label']); ?>
                      <?php print render($content['field_new_label']); ?>
                    </div>
                    <div class="c-product-review">
                        <?php print render($content['field_rating']); ?>
                        <div class="c-product-write-review">
                          <a class="c-font-red" href="#bootstrap-fieldgroup-nav-item--reviews"><?php print t('Write a review'); ?></a>
                        </div>
                    </div>
                    <div class="c-product-price"><?php print render($content['product:commerce_price']); ?> &nbsp;
                <span class="c-font-16 c-font-line-through c-font-red"><?php print strip_tags(render($content['product:field_old_price'])); ?></span></div>
                    <div class="c-product-short-desc"><?php print render($content['field_short_description']); ?></div>
                    <?php
                      hide($content['product:sku']);
                      print render($content['field_products']);
                      print render($content['flag_compare']);
                      hide($content['flag_wishlist']);
                      hide($content['links']['flag']);
                    ?>

                </div>
            </div>
        </div>
    </div>

    </div>
  </div>

  <div class = "c-content-box c-size-lg pb-0">
    <!-- End Product Content -->
    <div class="c-shop-product-tab-1 pb-0">
      <?php print render($content); ?>
    </div>
  </div>
  
<?php } ?>
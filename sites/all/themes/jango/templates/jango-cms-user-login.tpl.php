<div class = "c-form-login mt-80 mb-80">
  <div class="c-shop-login-register-1">
    <div class="row">
      <div class="col-md-6">
        <div class="panel panel-default c-panel">
          <div class="panel-body c-panel-body">
            <?php print $form['#children']; ?>
          </div>
        </div>
      </div>
      <?php if($register_form): ?>
        <div class="col-md-6">
          <div class="panel panel-default c-panel">
            <div class="panel-body c-panel-body">
              <div class="c-content-title-1">
                <h3 class="c-left">
                    <i class="icon-user"></i><?php print t('Don\'t have an account yet?'); ?></h3>
                <div class="c-line-left c-theme-bg"></div>
                <p><?php print t('Join us and enjoy shopping online today.'); ?></p>
              </div>
              <div class="c-margin-fix">
                <div class="c-checkbox c-toggle-hide" data-object-selector="c-form-register" data-animation-speed="600">
                  <input type="checkbox" id="checkbox6-444" class="c-check">
                  <label for="checkbox6-444">
                      <span class="inc"></span>
                      <span class="check"></span>
                      <span class="box"></span> <?php print t('Register Now!'); ?> </label>
                </div>
              </div>

              <div class = "c-form-register"><?php print $register_form; ?></div>
            </div>
          </div>
        </div>
      </div>
      <?php print $hybridauth; ?>
    <?php endif; ?>
  </div>
</div>
<?php $replace_provider = array('google' => 'google-plus', 'vkontakte' => 'vk'); 
  $provider = strtolower($provider_name);
  $class = isset($replace_provider[$provider]) ? $replace_provider[$provider] : $provider; ?>
<i class = "fa fa-<?php print $class; ?>"></i> <?php print t('Sign in with') . ' ' . $provider_name; ?>
<?php
/**
 * @file
 * sfova_users.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function sfova_users_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access PDF version'.
  $permissions['access PDF version'] = array(
    'name' => 'access PDF version',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'print_pdf',
  );

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
      'Secretary' => 'Secretary',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
      'Secretary' => 'Secretary',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access all views'.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'views',
  );

  // Exported permission: 'access backup and migrate'.
  $permissions['access backup and migrate'] = array(
    'name' => 'access backup and migrate',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'access backup files'.
  $permissions['access backup files'] = array(
    'name' => 'access backup files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'access comments'.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
      'PRO' => 'PRO',
      'Secretary' => 'Secretary',
      'Youth Coordinator' => 'Youth Coordinator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
      'PRO' => 'PRO',
      'Secretary' => 'Secretary',
      'Youth Coordinator' => 'Youth Coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'contextual',
  );

  // Exported permission: 'access dashboard'.
  $permissions['access dashboard'] = array(
    'name' => 'access dashboard',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'dashboard',
  );

  // Exported permission: 'access facebookshare'.
  $permissions['access facebookshare'] = array(
    'name' => 'access facebookshare',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
      'PRO' => 'PRO',
      'Secretary' => 'Secretary',
      'Youth Coordinator' => 'Youth Coordinator',
    ),
    'module' => 'facebookshare',
  );

  // Exported permission: 'access news feeds'.
  $permissions['access news feeds'] = array(
    'name' => 'access news feeds',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'aggregator',
  );

  // Exported permission: 'access print'.
  $permissions['access print'] = array(
    'name' => 'access print',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'print',
  );

  // Exported permission: 'access rules debug'.
  $permissions['access rules debug'] = array(
    'name' => 'access rules debug',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'access send by email'.
  $permissions['access send by email'] = array(
    'name' => 'access send by email',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'print_mail',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site-wide contact form'.
  $permissions['access site-wide contact form'] = array(
    'name' => 'access site-wide contact form',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'contact',
  );

  // Exported permission: 'access statistics'.
  $permissions['access statistics'] = array(
    'name' => 'access statistics',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'statistics',
  );

  // Exported permission: 'access user contact forms'.
  $permissions['access user contact forms'] = array(
    'name' => 'access user contact forms',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'contact',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'user',
  );

  // Exported permission: 'add media from remote sources'.
  $permissions['add media from remote sources'] = array(
    'name' => 'add media from remote sources',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
      'PRO' => 'PRO',
      'Secretary' => 'Secretary',
      'Youth Coordinator' => 'Youth Coordinator',
    ),
    'module' => 'media_internet',
  );

  // Exported permission: 'admin_display_suite'.
  $permissions['admin_display_suite'] = array(
    'name' => 'admin_display_suite',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'ds',
  );

  // Exported permission: 'admin_fields'.
  $permissions['admin_fields'] = array(
    'name' => 'admin_fields',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'ds',
  );

  // Exported permission: 'admin_view_modes'.
  $permissions['admin_view_modes'] = array(
    'name' => 'admin_view_modes',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'ds',
  );

  // Exported permission: 'administer CAPTCHA settings'.
  $permissions['administer CAPTCHA settings'] = array(
    'name' => 'administer CAPTCHA settings',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'captcha',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer advanced pane settings'.
  $permissions['administer advanced pane settings'] = array(
    'name' => 'administer advanced pane settings',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer backup and migrate'.
  $permissions['administer backup and migrate'] = array(
    'name' => 'administer backup and migrate',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'block',
  );

  // Exported permission: 'administer ckeditor'.
  $permissions['administer ckeditor'] = array(
    'name' => 'administer ckeditor',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: 'administer comments'.
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'administer contact forms'.
  $permissions['administer contact forms'] = array(
    'name' => 'administer contact forms',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'contact',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer ctools access ruleset'.
  $permissions['administer ctools access ruleset'] = array(
    'name' => 'administer ctools access ruleset',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'ctools_access_ruleset',
  );

  // Exported permission: 'administer custom content'.
  $permissions['administer custom content'] = array(
    'name' => 'administer custom content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'ctools_custom_content',
  );

  // Exported permission: 'administer custom search'.
  $permissions['administer custom search'] = array(
    'name' => 'administer custom search',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'custom_search',
  );

  // Exported permission: 'administer custom search blocks'.
  $permissions['administer custom search blocks'] = array(
    'name' => 'administer custom search blocks',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'custom_search_blocks',
  );

  // Exported permission: 'administer date tools'.
  $permissions['administer date tools'] = array(
    'name' => 'administer date tools',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'date_tools',
  );

  // Exported permission: 'administer facebookshare'.
  $permissions['administer facebookshare'] = array(
    'name' => 'administer facebookshare',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'facebookshare',
  );

  // Exported permission: 'administer features'.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'features',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'administer google analytics'.
  $permissions['administer google analytics'] = array(
    'name' => 'administer google analytics',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'image',
  );

  // Exported permission: 'administer mailsystem'.
  $permissions['administer mailsystem'] = array(
    'name' => 'administer mailsystem',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'mailsystem',
  );

  // Exported permission: 'administer media'.
  $permissions['administer media'] = array(
    'name' => 'administer media',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'media',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer module filter'.
  $permissions['administer module filter'] = array(
    'name' => 'administer module filter',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'module_filter',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer news feeds'.
  $permissions['administer news feeds'] = array(
    'name' => 'administer news feeds',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'aggregator',
  );

  // Exported permission: 'administer newsletters'.
  $permissions['administer newsletters'] = array(
    'name' => 'administer newsletters',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'simplenews',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
      'PRO' => 'PRO',
      'Secretary' => 'Secretary',
      'Youth Coordinator' => 'Youth Coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer page manager'.
  $permissions['administer page manager'] = array(
    'name' => 'administer page manager',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: 'administer pane access'.
  $permissions['administer pane access'] = array(
    'name' => 'administer pane access',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer panels layouts'.
  $permissions['administer panels layouts'] = array(
    'name' => 'administer panels layouts',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer panels styles'.
  $permissions['administer panels styles'] = array(
    'name' => 'administer panels styles',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer pathauto'.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer print'.
  $permissions['administer print'] = array(
    'name' => 'administer print',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'print',
  );

  // Exported permission: 'administer rules'.
  $permissions['administer rules'] = array(
    'name' => 'administer rules',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'administer search'.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'search',
  );

  // Exported permission: 'administer shortcuts'.
  $permissions['administer shortcuts'] = array(
    'name' => 'administer shortcuts',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'administer simplenews settings'.
  $permissions['administer simplenews settings'] = array(
    'name' => 'administer simplenews settings',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'simplenews',
  );

  // Exported permission: 'administer simplenews subscriptions'.
  $permissions['administer simplenews subscriptions'] = array(
    'name' => 'administer simplenews subscriptions',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'simplenews',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer social login'.
  $permissions['administer social login'] = array(
    'name' => 'administer social login',
    'roles' => array(
      'Chairman' => 'Chairman',
    ),
    'module' => 'socialloginandsocialshare',
  );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer statistics'.
  $permissions['administer statistics'] = array(
    'name' => 'administer statistics',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'statistics',
  );

  // Exported permission: 'administer stylizer'.
  $permissions['administer stylizer'] = array(
    'name' => 'administer stylizer',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'stylizer',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'path',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer views'.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'views',
  );

  // Exported permission: 'administer xmlsitemap'.
  $permissions['administer xmlsitemap'] = array(
    'name' => 'administer xmlsitemap',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'xmlsitemap',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'system',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'node',
  );

  // Exported permission: 'bypass rules access'.
  $permissions['bypass rules access'] = array(
    'name' => 'bypass rules access',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'user',
  );

  // Exported permission: 'change layouts in place editing'.
  $permissions['change layouts in place editing'] = array(
    'name' => 'change layouts in place editing',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'user',
  );

  // Exported permission: 'create about_us content'.
  $permissions['create about_us content'] = array(
    'name' => 'create about_us content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create article content'.
  $permissions['create article content'] = array(
    'name' => 'create article content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create communication_with_parents content'.
  $permissions['create communication_with_parents content'] = array(
    'name' => 'create communication_with_parents content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create communication_with_sangat content'.
  $permissions['create communication_with_sangat content'] = array(
    'name' => 'create communication_with_sangat content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
      'Secretary' => 'Secretary',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create communication_with_volunteers content'.
  $permissions['create communication_with_volunteers content'] = array(
    'name' => 'create communication_with_volunteers content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create email_addresses content'.
  $permissions['create email_addresses content'] = array(
    'name' => 'create email_addresses content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create jeopardy_questions content'.
  $permissions['create jeopardy_questions content'] = array(
    'name' => 'create jeopardy_questions content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
      'Youth Coordinator' => 'Youth Coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create media content'.
  $permissions['create media content'] = array(
    'name' => 'create media content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
      'PRO' => 'PRO',
      'Secretary' => 'Secretary',
      'Youth Coordinator' => 'Youth Coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create recent_events content'.
  $permissions['create recent_events content'] = array(
    'name' => 'create recent_events content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
      'PRO' => 'PRO',
      'Secretary' => 'Secretary',
      'Youth Coordinator' => 'Youth Coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create registration content'.
  $permissions['create registration content'] = array(
    'name' => 'create registration content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
      'Youth Coordinator' => 'Youth Coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create resources content'.
  $permissions['create resources content'] = array(
    'name' => 'create resources content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create sfv_voice content'.
  $permissions['create sfv_voice content'] = array(
    'name' => 'create sfv_voice content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
      'PRO' => 'PRO',
      'Secretary' => 'Secretary',
      'Youth Coordinator' => 'Youth Coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create sikhism content'.
  $permissions['create sikhism content'] = array(
    'name' => 'create sikhism content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create simplenews content'.
  $permissions['create simplenews content'] = array(
    'name' => 'create simplenews content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create staff content'.
  $permissions['create staff content'] = array(
    'name' => 'create staff content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create test_mail content'.
  $permissions['create test_mail content'] = array(
    'name' => 'create test_mail content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create upcoming_events content'.
  $permissions['create upcoming_events content'] = array(
    'name' => 'create upcoming_events content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
      'PRO' => 'PRO',
      'Secretary' => 'Secretary',
      'Youth Coordinator' => 'Youth Coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'path',
  );

  // Exported permission: 'customize ckeditor'.
  $permissions['customize ckeditor'] = array(
    'name' => 'customize ckeditor',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: 'customize shortcut links'.
  $permissions['customize shortcut links'] = array(
    'name' => 'customize shortcut links',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'delete any about_us content'.
  $permissions['delete any about_us content'] = array(
    'name' => 'delete any about_us content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any article content'.
  $permissions['delete any article content'] = array(
    'name' => 'delete any article content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any communication_with_parents content'.
  $permissions['delete any communication_with_parents content'] = array(
    'name' => 'delete any communication_with_parents content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any communication_with_sangat content'.
  $permissions['delete any communication_with_sangat content'] = array(
    'name' => 'delete any communication_with_sangat content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any communication_with_volunteers content'.
  $permissions['delete any communication_with_volunteers content'] = array(
    'name' => 'delete any communication_with_volunteers content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any email_addresses content'.
  $permissions['delete any email_addresses content'] = array(
    'name' => 'delete any email_addresses content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
      'PRO' => 'PRO',
      'Secretary' => 'Secretary',
      'Youth Coordinator' => 'Youth Coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any jeopardy_questions content'.
  $permissions['delete any jeopardy_questions content'] = array(
    'name' => 'delete any jeopardy_questions content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
      'Youth Coordinator' => 'Youth Coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any media content'.
  $permissions['delete any media content'] = array(
    'name' => 'delete any media content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
      'PRO' => 'PRO',
      'Secretary' => 'Secretary',
      'Youth Coordinator' => 'Youth Coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any recent_events content'.
  $permissions['delete any recent_events content'] = array(
    'name' => 'delete any recent_events content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
      'PRO' => 'PRO',
      'Secretary' => 'Secretary',
      'Youth Coordinator' => 'Youth Coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any registration content'.
  $permissions['delete any registration content'] = array(
    'name' => 'delete any registration content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
      'Youth Coordinator' => 'Youth Coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any resources content'.
  $permissions['delete any resources content'] = array(
    'name' => 'delete any resources content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any sfv_voice content'.
  $permissions['delete any sfv_voice content'] = array(
    'name' => 'delete any sfv_voice content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
      'PRO' => 'PRO',
      'Secretary' => 'Secretary',
      'Youth Coordinator' => 'Youth Coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any sikhism content'.
  $permissions['delete any sikhism content'] = array(
    'name' => 'delete any sikhism content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any simplenews content'.
  $permissions['delete any simplenews content'] = array(
    'name' => 'delete any simplenews content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any staff content'.
  $permissions['delete any staff content'] = array(
    'name' => 'delete any staff content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any test_mail content'.
  $permissions['delete any test_mail content'] = array(
    'name' => 'delete any test_mail content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any upcoming_events content'.
  $permissions['delete any upcoming_events content'] = array(
    'name' => 'delete any upcoming_events content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
      'PRO' => 'PRO',
      'Secretary' => 'Secretary',
      'Youth Coordinator' => 'Youth Coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete backup files'.
  $permissions['delete backup files'] = array(
    'name' => 'delete backup files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'delete own about_us content'.
  $permissions['delete own about_us content'] = array(
    'name' => 'delete own about_us content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own article content'.
  $permissions['delete own article content'] = array(
    'name' => 'delete own article content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own communication_with_parents content'.
  $permissions['delete own communication_with_parents content'] = array(
    'name' => 'delete own communication_with_parents content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own communication_with_sangat content'.
  $permissions['delete own communication_with_sangat content'] = array(
    'name' => 'delete own communication_with_sangat content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own communication_with_volunteers content'.
  $permissions['delete own communication_with_volunteers content'] = array(
    'name' => 'delete own communication_with_volunteers content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own email_addresses content'.
  $permissions['delete own email_addresses content'] = array(
    'name' => 'delete own email_addresses content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
      'PRO' => 'PRO',
      'Secretary' => 'Secretary',
      'Youth Coordinator' => 'Youth Coordinator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own jeopardy_questions content'.
  $permissions['delete own jeopardy_questions content'] = array(
    'name' => 'delete own jeopardy_questions content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
      'Youth Coordinator' => 'Youth Coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own media content'.
  $permissions['delete own media content'] = array(
    'name' => 'delete own media content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
      'PRO' => 'PRO',
      'Secretary' => 'Secretary',
      'Youth Coordinator' => 'Youth Coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own recent_events content'.
  $permissions['delete own recent_events content'] = array(
    'name' => 'delete own recent_events content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
      'PRO' => 'PRO',
      'Secretary' => 'Secretary',
      'Youth Coordinator' => 'Youth Coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own registration content'.
  $permissions['delete own registration content'] = array(
    'name' => 'delete own registration content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
      'Youth Coordinator' => 'Youth Coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own resources content'.
  $permissions['delete own resources content'] = array(
    'name' => 'delete own resources content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own sfv_voice content'.
  $permissions['delete own sfv_voice content'] = array(
    'name' => 'delete own sfv_voice content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
      'PRO' => 'PRO',
      'Secretary' => 'Secretary',
      'Youth Coordinator' => 'Youth Coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own sikhism content'.
  $permissions['delete own sikhism content'] = array(
    'name' => 'delete own sikhism content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own simplenews content'.
  $permissions['delete own simplenews content'] = array(
    'name' => 'delete own simplenews content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own staff content'.
  $permissions['delete own staff content'] = array(
    'name' => 'delete own staff content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own test_mail content'.
  $permissions['delete own test_mail content'] = array(
    'name' => 'delete own test_mail content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own upcoming_events content'.
  $permissions['delete own upcoming_events content'] = array(
    'name' => 'delete own upcoming_events content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
      'PRO' => 'PRO',
      'Secretary' => 'Secretary',
      'Youth Coordinator' => 'Youth Coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in newsletter'.
  $permissions['delete terms in newsletter'] = array(
    'name' => 'delete terms in newsletter',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tags'.
  $permissions['delete terms in tags'] = array(
    'name' => 'delete terms in tags',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'display drupal links'.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'download all audio files'.
  $permissions['download all audio files'] = array(
    'name' => 'download all audio files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'audiofield',
  );

  // Exported permission: 'download own audio files'.
  $permissions['download own audio files'] = array(
    'name' => 'download own audio files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'audiofield',
  );

  // Exported permission: 'edit any about_us content'.
  $permissions['edit any about_us content'] = array(
    'name' => 'edit any about_us content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any article content'.
  $permissions['edit any article content'] = array(
    'name' => 'edit any article content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any communication_with_parents content'.
  $permissions['edit any communication_with_parents content'] = array(
    'name' => 'edit any communication_with_parents content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any communication_with_sangat content'.
  $permissions['edit any communication_with_sangat content'] = array(
    'name' => 'edit any communication_with_sangat content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any communication_with_volunteers content'.
  $permissions['edit any communication_with_volunteers content'] = array(
    'name' => 'edit any communication_with_volunteers content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any email_addresses content'.
  $permissions['edit any email_addresses content'] = array(
    'name' => 'edit any email_addresses content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
      'PRO' => 'PRO',
      'Secretary' => 'Secretary',
      'Youth Coordinator' => 'Youth Coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any jeopardy_questions content'.
  $permissions['edit any jeopardy_questions content'] = array(
    'name' => 'edit any jeopardy_questions content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
      'Youth Coordinator' => 'Youth Coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any media content'.
  $permissions['edit any media content'] = array(
    'name' => 'edit any media content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
      'PRO' => 'PRO',
      'Secretary' => 'Secretary',
      'Youth Coordinator' => 'Youth Coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any recent_events content'.
  $permissions['edit any recent_events content'] = array(
    'name' => 'edit any recent_events content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
      'PRO' => 'PRO',
      'Secretary' => 'Secretary',
      'Youth Coordinator' => 'Youth Coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any registration content'.
  $permissions['edit any registration content'] = array(
    'name' => 'edit any registration content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
      'Youth Coordinator' => 'Youth Coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any resources content'.
  $permissions['edit any resources content'] = array(
    'name' => 'edit any resources content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any sfv_voice content'.
  $permissions['edit any sfv_voice content'] = array(
    'name' => 'edit any sfv_voice content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
      'PRO' => 'PRO',
      'Secretary' => 'Secretary',
      'Youth Coordinator' => 'Youth Coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any sikhism content'.
  $permissions['edit any sikhism content'] = array(
    'name' => 'edit any sikhism content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any simplenews content'.
  $permissions['edit any simplenews content'] = array(
    'name' => 'edit any simplenews content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any staff content'.
  $permissions['edit any staff content'] = array(
    'name' => 'edit any staff content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any test_mail content'.
  $permissions['edit any test_mail content'] = array(
    'name' => 'edit any test_mail content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any upcoming_events content'.
  $permissions['edit any upcoming_events content'] = array(
    'name' => 'edit any upcoming_events content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
      'PRO' => 'PRO',
      'Secretary' => 'Secretary',
      'Youth Coordinator' => 'Youth Coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit media'.
  $permissions['edit media'] = array(
    'name' => 'edit media',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'media',
  );

  // Exported permission: 'edit mimemail user settings'.
  $permissions['edit mimemail user settings'] = array(
    'name' => 'edit mimemail user settings',
    'roles' => array(
      'Chairman' => 'Chairman',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'mimemail',
  );

  // Exported permission: 'edit own about_us content'.
  $permissions['edit own about_us content'] = array(
    'name' => 'edit own about_us content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own article content'.
  $permissions['edit own article content'] = array(
    'name' => 'edit own article content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own comments'.
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'edit own communication_with_parents content'.
  $permissions['edit own communication_with_parents content'] = array(
    'name' => 'edit own communication_with_parents content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own communication_with_sangat content'.
  $permissions['edit own communication_with_sangat content'] = array(
    'name' => 'edit own communication_with_sangat content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
      'Secretary' => 'Secretary',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own communication_with_volunteers content'.
  $permissions['edit own communication_with_volunteers content'] = array(
    'name' => 'edit own communication_with_volunteers content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own email_addresses content'.
  $permissions['edit own email_addresses content'] = array(
    'name' => 'edit own email_addresses content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
      'PRO' => 'PRO',
      'Secretary' => 'Secretary',
      'Youth Coordinator' => 'Youth Coordinator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own jeopardy_questions content'.
  $permissions['edit own jeopardy_questions content'] = array(
    'name' => 'edit own jeopardy_questions content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
      'Youth Coordinator' => 'Youth Coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own media content'.
  $permissions['edit own media content'] = array(
    'name' => 'edit own media content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
      'PRO' => 'PRO',
      'Secretary' => 'Secretary',
      'Youth Coordinator' => 'Youth Coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own recent_events content'.
  $permissions['edit own recent_events content'] = array(
    'name' => 'edit own recent_events content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
      'PRO' => 'PRO',
      'Secretary' => 'Secretary',
      'Youth Coordinator' => 'Youth Coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own registration content'.
  $permissions['edit own registration content'] = array(
    'name' => 'edit own registration content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
      'Youth Coordinator' => 'Youth Coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own resources content'.
  $permissions['edit own resources content'] = array(
    'name' => 'edit own resources content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own sfv_voice content'.
  $permissions['edit own sfv_voice content'] = array(
    'name' => 'edit own sfv_voice content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
      'PRO' => 'PRO',
      'Secretary' => 'Secretary',
      'Youth Coordinator' => 'Youth Coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own sikhism content'.
  $permissions['edit own sikhism content'] = array(
    'name' => 'edit own sikhism content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own simplenews content'.
  $permissions['edit own simplenews content'] = array(
    'name' => 'edit own simplenews content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own staff content'.
  $permissions['edit own staff content'] = array(
    'name' => 'edit own staff content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own test_mail content'.
  $permissions['edit own test_mail content'] = array(
    'name' => 'edit own test_mail content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own upcoming_events content'.
  $permissions['edit own upcoming_events content'] = array(
    'name' => 'edit own upcoming_events content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
      'PRO' => 'PRO',
      'Secretary' => 'Secretary',
      'Youth Coordinator' => 'Youth Coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in newsletter'.
  $permissions['edit terms in newsletter'] = array(
    'name' => 'edit terms in newsletter',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tags'.
  $permissions['edit terms in tags'] = array(
    'name' => 'edit terms in tags',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'flush caches'.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'generate features'.
  $permissions['generate features'] = array(
    'name' => 'generate features',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'import media'.
  $permissions['import media'] = array(
    'name' => 'import media',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'media',
  );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'features',
  );

  // Exported permission: 'node-specific print configuration'.
  $permissions['node-specific print configuration'] = array(
    'name' => 'node-specific print configuration',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'print',
  );

  // Exported permission: 'notify of path changes'.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'opt-in or out of tracking'.
  $permissions['opt-in or out of tracking'] = array(
    'name' => 'opt-in or out of tracking',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'perform backup'.
  $permissions['perform backup'] = array(
    'name' => 'perform backup',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'post comments'.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'restore from backup'.
  $permissions['restore from backup'] = array(
    'name' => 'restore from backup',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'node',
  );

  // Exported permission: 'search content'.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'user',
  );

  // Exported permission: 'send newsletter'.
  $permissions['send newsletter'] = array(
    'name' => 'send newsletter',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'simplenews',
  );

  // Exported permission: 'send unlimited emails'.
  $permissions['send unlimited emails'] = array(
    'name' => 'send unlimited emails',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'print_mail',
  );

  // Exported permission: 'skip CAPTCHA'.
  $permissions['skip CAPTCHA'] = array(
    'name' => 'skip CAPTCHA',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
      'PRO' => 'PRO',
      'Secretary' => 'Secretary',
      'Youth Coordinator' => 'Youth Coordinator',
    ),
    'module' => 'captcha',
  );

  // Exported permission: 'skip comment approval'.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'subscribe to newsletters'.
  $permissions['subscribe to newsletters'] = array(
    'name' => 'subscribe to newsletters',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'simplenews',
  );

  // Exported permission: 'switch shortcut sets'.
  $permissions['switch shortcut sets'] = array(
    'name' => 'switch shortcut sets',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'use PHP for settings'.
  $permissions['use PHP for settings'] = array(
    'name' => 'use PHP for settings',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'php',
  );

  // Exported permission: 'use PHP for tracking visibility'.
  $permissions['use PHP for tracking visibility'] = array(
    'name' => 'use PHP for tracking visibility',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'use advanced search'.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search',
  );

  // Exported permission: 'use bulk exporter'.
  $permissions['use bulk exporter'] = array(
    'name' => 'use bulk exporter',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'bulk_export',
  );

  // Exported permission: 'use custom search'.
  $permissions['use custom search'] = array(
    'name' => 'use custom search',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'custom_search',
  );

  // Exported permission: 'use custom search blocks'.
  $permissions['use custom search blocks'] = array(
    'name' => 'use custom search blocks',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'custom_search_blocks',
  );

  // Exported permission: 'use page manager'.
  $permissions['use page manager'] = array(
    'name' => 'use page manager',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: 'use panels caching features'.
  $permissions['use panels caching features'] = array(
    'name' => 'use panels caching features',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels dashboard'.
  $permissions['use panels dashboard'] = array(
    'name' => 'use panels dashboard',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels in place editing'.
  $permissions['use panels in place editing'] = array(
    'name' => 'use panels in place editing',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels locks'.
  $permissions['use panels locks'] = array(
    'name' => 'use panels locks',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use text format ds_code'.
  $permissions['use text format ds_code'] = array(
    'name' => 'use text format ds_code',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
      'Members' => 'Members',
      'PRO' => 'PRO',
      'Secretary' => 'Secretary',
      'Youth Coordinator' => 'Youth Coordinator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format php_code'.
  $permissions['use text format php_code'] = array(
    'name' => 'use text format php_code',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'view advanced help index'.
  $permissions['view advanced help index'] = array(
    'name' => 'view advanced help index',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'advanced_help',
  );

  // Exported permission: 'view advanced help popup'.
  $permissions['view advanced help popup'] = array(
    'name' => 'view advanced help popup',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'advanced_help',
  );

  // Exported permission: 'view advanced help topic'.
  $permissions['view advanced help topic'] = array(
    'name' => 'view advanced help topic',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'advanced_help',
  );

  // Exported permission: 'view date repeats'.
  $permissions['view date repeats'] = array(
    'name' => 'view date repeats',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'date_repeat_field',
  );

  // Exported permission: 'view media'.
  $permissions['view media'] = array(
    'name' => 'view media',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'media',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
      'PRO' => 'PRO',
      'Secretary' => 'Secretary',
      'Youth Coordinator' => 'Youth Coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view pane admin links'.
  $permissions['view pane admin links'] = array(
    'name' => 'view pane admin links',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'view post access counter'.
  $permissions['view post access counter'] = array(
    'name' => 'view post access counter',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'statistics',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Chairman' => 'Chairman',
    ),
    'module' => 'system',
  );

  return $permissions;
}

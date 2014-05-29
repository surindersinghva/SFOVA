<?php
/**
 * @file
 * sfova_school_and_communication.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function sfova_school_and_communication_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'punjabi_school';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Punjabi School';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Punjabi School';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    7 => '7',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<form action="/node/add/registration" method="post">
<input type="submit" value="Add new">
</form><br />';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = 'Sr. No.';
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Date of Birth */
  $handler->display->display_options['fields']['field_date_of_birth']['id'] = 'field_date_of_birth';
  $handler->display->display_options['fields']['field_date_of_birth']['table'] = 'field_data_field_date_of_birth';
  $handler->display->display_options['fields']['field_date_of_birth']['field'] = 'field_date_of_birth';
  $handler->display->display_options['fields']['field_date_of_birth']['label'] = '';
  $handler->display->display_options['fields']['field_date_of_birth']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date_of_birth']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_of_birth']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Age';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$nid = $row->field_date_of_birth;
$node = node_load($nid);
$dob = strtotime($node->field_date_of_birth[\'und\'][0][\'value\']);
$date1 = date("Y-m-d",$dob);
$now = time();
$date2 = date("Y-m-d",$now);
$diff = abs(strtotime($date2) - strtotime($date1));
$age = floor($diff /31536000);
print $age;
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Email Address */
  $handler->display->display_options['fields']['field_reg_email_address']['id'] = 'field_reg_email_address';
  $handler->display->display_options['fields']['field_reg_email_address']['table'] = 'field_data_field_reg_email_address';
  $handler->display->display_options['fields']['field_reg_email_address']['field'] = 'field_reg_email_address';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Sort criterion: Content: Date of Birth (field_date_of_birth) */
  $handler->display->display_options['sorts']['field_date_of_birth_value']['id'] = 'field_date_of_birth_value';
  $handler->display->display_options['sorts']['field_date_of_birth_value']['table'] = 'field_data_field_date_of_birth';
  $handler->display->display_options['sorts']['field_date_of_birth_value']['field'] = 'field_date_of_birth_value';
  $handler->display->display_options['sorts']['field_date_of_birth_value']['order'] = 'DESC';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'registration' => 'registration',
  );
  /* Filter criterion: Content: Registration for (field_registration_for) */
  $handler->display->display_options['filters']['field_registration_for_value']['id'] = 'field_registration_for_value';
  $handler->display->display_options['filters']['field_registration_for_value']['table'] = 'field_data_field_registration_for';
  $handler->display->display_options['filters']['field_registration_for_value']['field'] = 'field_registration_for_value';
  $handler->display->display_options['filters']['field_registration_for_value']['value'] = array(
    2 => '2',
  );

  /* Display: Master List */
  $handler = $view->new_display('page', 'Master List', 'page_3');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'counter' => 'counter',
    'title' => 'title',
    'field_age' => 'field_age',
    'field_date_of_birth' => 'field_date_of_birth',
    'field_reg_email_address' => 'field_reg_email_address',
    'field_registration_for' => 'field_registration_for',
    'field_reg_complete' => 'field_reg_complete',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'counter' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_age' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date_of_birth' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_reg_email_address' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_registration_for' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_reg_complete' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<form action="/node/add/registration" method="post">
<input type="submit" value="Add new">
</form><br />
';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = 'Sr. No.';
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Date of Birth */
  $handler->display->display_options['fields']['field_date_of_birth']['id'] = 'field_date_of_birth';
  $handler->display->display_options['fields']['field_date_of_birth']['table'] = 'field_data_field_date_of_birth';
  $handler->display->display_options['fields']['field_date_of_birth']['field'] = 'field_date_of_birth';
  $handler->display->display_options['fields']['field_date_of_birth']['label'] = 'DOB';
  $handler->display->display_options['fields']['field_date_of_birth']['settings'] = array(
    'format_type' => 'sfv_short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Age';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$nid = $row->field_date_of_birth;
$node = node_load($nid);
$dob = strtotime($node->field_date_of_birth[\'und\'][0][\'value\']);
$date1 = date("Y-m-d",$dob);
$now = time();
$date2 = date("Y-m-d",$now);
$diff = abs(strtotime($date2) - strtotime($date1));
$age = floor($diff /31536000);
print $age;
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Email Address */
  $handler->display->display_options['fields']['field_reg_email_address']['id'] = 'field_reg_email_address';
  $handler->display->display_options['fields']['field_reg_email_address']['table'] = 'field_data_field_reg_email_address';
  $handler->display->display_options['fields']['field_reg_email_address']['field'] = 'field_reg_email_address';
  /* Field: Content: Registration for */
  $handler->display->display_options['fields']['field_registration_for']['id'] = 'field_registration_for';
  $handler->display->display_options['fields']['field_registration_for']['table'] = 'field_data_field_registration_for';
  $handler->display->display_options['fields']['field_registration_for']['field'] = 'field_registration_for';
  $handler->display->display_options['fields']['field_registration_for']['label'] = 'Activities';
  $handler->display->display_options['fields']['field_registration_for']['delta_offset'] = '0';
  /* Field: Content: Complete? */
  $handler->display->display_options['fields']['field_reg_complete']['id'] = 'field_reg_complete';
  $handler->display->display_options['fields']['field_reg_complete']['table'] = 'field_data_field_reg_complete';
  $handler->display->display_options['fields']['field_reg_complete']['field'] = 'field_reg_complete';
  $handler->display->display_options['fields']['field_reg_complete']['label'] = 'Status';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'registration' => 'registration',
  );
  /* Filter criterion: Content: Registration for (field_registration_for) */
  $handler->display->display_options['filters']['field_registration_for_value']['id'] = 'field_registration_for_value';
  $handler->display->display_options['filters']['field_registration_for_value']['table'] = 'field_data_field_registration_for';
  $handler->display->display_options['filters']['field_registration_for_value']['field'] = 'field_registration_for_value';
  $handler->display->display_options['filters']['field_registration_for_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_registration_for_value']['expose']['operator_id'] = 'field_registration_for_value_op';
  $handler->display->display_options['filters']['field_registration_for_value']['expose']['label'] = 'Registration for';
  $handler->display->display_options['filters']['field_registration_for_value']['expose']['operator'] = 'field_registration_for_value_op';
  $handler->display->display_options['filters']['field_registration_for_value']['expose']['identifier'] = 'field_registration_for_value';
  $handler->display->display_options['filters']['field_registration_for_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
  );
  $handler->display->display_options['path'] = 'master-list';

  /* Display: School */
  $handler = $view->new_display('page', 'School', 'page');
  $handler->display->display_options['path'] = 'punjabi-school';

  /* Display: Attendance */
  $handler = $view->new_display('page', 'Attendance', 'page_2');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = 'Sr. No.';
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Age';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$nid = $row->field_date_of_birth;
$node = node_load($nid);
$dob = strtotime($node->field_date_of_birth[\'und\'][0][\'value\']);
$date1 = date("Y-m-d",$dob);
$now = time();
$date2 = date("Y-m-d",$now);
$diff = abs(strtotime($date2) - strtotime($date1));
$age = floor($diff /31536000);
print $age;
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Date of Birth */
  $handler->display->display_options['fields']['field_date_of_birth']['id'] = 'field_date_of_birth';
  $handler->display->display_options['fields']['field_date_of_birth']['table'] = 'field_data_field_date_of_birth';
  $handler->display->display_options['fields']['field_date_of_birth']['field'] = 'field_date_of_birth';
  $handler->display->display_options['fields']['field_date_of_birth']['label'] = '';
  $handler->display->display_options['fields']['field_date_of_birth']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date_of_birth']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_of_birth']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'W-1';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'W-2';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = 'W-3';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['label'] = 'W-4';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_4']['id'] = 'nothing_4';
  $handler->display->display_options['fields']['nothing_4']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_4']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_4']['label'] = 'W-5';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_5']['id'] = 'nothing_5';
  $handler->display->display_options['fields']['nothing_5']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_5']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_5']['label'] = 'W-6';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_6']['id'] = 'nothing_6';
  $handler->display->display_options['fields']['nothing_6']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_6']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_6']['label'] = 'W-7';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_7']['id'] = 'nothing_7';
  $handler->display->display_options['fields']['nothing_7']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_7']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_7']['label'] = 'W-8';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_8']['id'] = 'nothing_8';
  $handler->display->display_options['fields']['nothing_8']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_8']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_8']['label'] = 'W-9';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_9']['id'] = 'nothing_9';
  $handler->display->display_options['fields']['nothing_9']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_9']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_9']['label'] = 'W-10';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'registration' => 'registration',
  );
  /* Filter criterion: Content: Registration for (field_registration_for) */
  $handler->display->display_options['filters']['field_registration_for_value']['id'] = 'field_registration_for_value';
  $handler->display->display_options['filters']['field_registration_for_value']['table'] = 'field_data_field_registration_for';
  $handler->display->display_options['filters']['field_registration_for_value']['field'] = 'field_registration_for_value';
  $handler->display->display_options['filters']['field_registration_for_value']['value'] = array(
    2 => '2',
  );
  $handler->display->display_options['path'] = 'attendance';

  /* Display: Jeopardy */
  $handler = $view->new_display('page', 'Jeopardy', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Jeopardy';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = 'Sr. No.';
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Date of Birth */
  $handler->display->display_options['fields']['field_date_of_birth']['id'] = 'field_date_of_birth';
  $handler->display->display_options['fields']['field_date_of_birth']['table'] = 'field_data_field_date_of_birth';
  $handler->display->display_options['fields']['field_date_of_birth']['field'] = 'field_date_of_birth';
  $handler->display->display_options['fields']['field_date_of_birth']['label'] = '';
  $handler->display->display_options['fields']['field_date_of_birth']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date_of_birth']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_of_birth']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Age';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$nid = $row->field_date_of_birth;
$node = node_load($nid);
$dob = strtotime($node->field_date_of_birth[\'und\'][0][\'value\']);
$date1 = date("Y-m-d",$dob);
$now = time();
$date2 = date("Y-m-d",$now);
$diff = abs(strtotime($date2) - strtotime($date1));
$age = floor($diff /31536000);
print $age;
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Level */
  $handler->display->display_options['fields']['field_reg_level']['id'] = 'field_reg_level';
  $handler->display->display_options['fields']['field_reg_level']['table'] = 'field_data_field_reg_level';
  $handler->display->display_options['fields']['field_reg_level']['field'] = 'field_reg_level';
  /* Field: Content: Email Address */
  $handler->display->display_options['fields']['field_reg_email_address']['id'] = 'field_reg_email_address';
  $handler->display->display_options['fields']['field_reg_email_address']['table'] = 'field_data_field_reg_email_address';
  $handler->display->display_options['fields']['field_reg_email_address']['field'] = 'field_reg_email_address';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'registration' => 'registration',
  );
  /* Filter criterion: Content: Registration for (field_registration_for) */
  $handler->display->display_options['filters']['field_registration_for_value']['id'] = 'field_registration_for_value';
  $handler->display->display_options['filters']['field_registration_for_value']['table'] = 'field_data_field_registration_for';
  $handler->display->display_options['filters']['field_registration_for_value']['field'] = 'field_registration_for_value';
  $handler->display->display_options['filters']['field_registration_for_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['path'] = 'jeopardy-kids';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = 'Sr. No.';
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Date of Birth */
  $handler->display->display_options['fields']['field_date_of_birth']['id'] = 'field_date_of_birth';
  $handler->display->display_options['fields']['field_date_of_birth']['table'] = 'field_data_field_date_of_birth';
  $handler->display->display_options['fields']['field_date_of_birth']['field'] = 'field_date_of_birth';
  $handler->display->display_options['fields']['field_date_of_birth']['label'] = '';
  $handler->display->display_options['fields']['field_date_of_birth']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_of_birth']['settings'] = array(
    'format_type' => 'sfv_short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Age';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$nid = $row->field_date_of_birth;
$node = node_load($nid);
$dob = strtotime($node->field_date_of_birth[\'und\'][0][\'value\']);
$date1 = date("Y-m-d",$dob);
$now = time();
$date2 = date("Y-m-d",$now);
$diff = abs(strtotime($date2) - strtotime($date1));
$age = floor($diff /31536000);
print $age;
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Email Address */
  $handler->display->display_options['fields']['field_reg_email_address']['id'] = 'field_reg_email_address';
  $handler->display->display_options['fields']['field_reg_email_address']['table'] = 'field_data_field_reg_email_address';
  $handler->display->display_options['fields']['field_reg_email_address']['field'] = 'field_reg_email_address';
  $handler->display->display_options['fields']['field_reg_email_address']['exclude'] = TRUE;
  /* Field: Content: Phone Number */
  $handler->display->display_options['fields']['field_phone_number']['id'] = 'field_phone_number';
  $handler->display->display_options['fields']['field_phone_number']['table'] = 'field_data_field_phone_number';
  $handler->display->display_options['fields']['field_phone_number']['field'] = 'field_phone_number';
  $handler->display->display_options['fields']['field_phone_number']['label'] = 'Phone';
  $handler->display->display_options['fields']['field_phone_number']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_phone_number']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'registration' => 'registration',
  );
  /* Filter criterion: Content: Registration for (field_registration_for) */
  $handler->display->display_options['filters']['field_registration_for_value']['id'] = 'field_registration_for_value';
  $handler->display->display_options['filters']['field_registration_for_value']['table'] = 'field_data_field_registration_for';
  $handler->display->display_options['filters']['field_registration_for_value']['field'] = 'field_registration_for_value';
  $handler->display->display_options['filters']['field_registration_for_value']['value'] = array(
    3 => '3',
  );
  $handler->display->display_options['path'] = 'master-list-export';
  $export['punjabi_school'] = $view;

  return $export;
}

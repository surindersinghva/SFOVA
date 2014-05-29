<?php
/**
 * @file
 * sfova_school_and_communication.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function sfova_school_and_communication_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function sfova_school_and_communication_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function sfova_school_and_communication_node_info() {
  $items = array(
    'communication_with_parents' => array(
      'name' => t('Communication with Parents'),
      'base' => 'node_content',
      'description' => t('Use this form to send messages to parents'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'communication_with_sangat' => array(
      'name' => t('Communication with Sangat'),
      'base' => 'node_content',
      'description' => t('Use this form to send messages to all Sangat'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'communication_with_volunteers' => array(
      'name' => t('Communication with Volunteers'),
      'base' => 'node_content',
      'description' => t('Use this form to send messages to all the volunteers'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'registration' => array(
      'name' => t('Registration'),
      'base' => 'node_content',
      'description' => t('All types of registration forms'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'simplenews' => array(
      'name' => t('Newsletter'),
      'base' => 'node_content',
      'description' => t('A newsletter issue to be sent to subscribed email addresses.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'test_mail' => array(
      'name' => t('Test Mail'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

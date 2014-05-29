<?php
/**
 * @file
 * sfova_upcoming_events.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function sfova_upcoming_events_ctools_plugin_api($module = NULL, $api = NULL) {
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
function sfova_upcoming_events_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function sfova_upcoming_events_node_info() {
  $items = array(
    'announcement' => array(
      'name' => t('Announcement'),
      'base' => 'node_content',
      'description' => t('Use this form to add one line announcement in the Alert Box on Home page'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'upcoming_events' => array(
      'name' => t('Upcoming Events'),
      'base' => 'node_content',
      'description' => t('Calendar of upcoming events, images and flyers'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

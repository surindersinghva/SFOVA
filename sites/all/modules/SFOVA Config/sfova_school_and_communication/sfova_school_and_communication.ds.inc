<?php
/**
 * @file
 * sfova_school_and_communication.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function sfova_school_and_communication_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|simplenews|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'simplenews';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'header' => array(
        0 => 'body',
      ),
    ),
    'fields' => array(
      'body' => 'header',
    ),
    'classes' => array(),
  );
  $export['node|simplenews|default'] = $ds_layout;

  return $export;
}

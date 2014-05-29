<?php
/**
 * @file
 * sfova_basic_pages.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function sfova_basic_pages_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|jeopardy_questions|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'jeopardy_questions';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|jeopardy_questions|default'] = $ds_fieldsetting;

  return $export;
}

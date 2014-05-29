<?php
/**
 * @file
 * sfova_upcoming_events.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function sfova_upcoming_events_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|upcoming_events|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'upcoming_events';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'view_upcoming_events' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:15:{s:23:"override_pager_settings";i:0;s:9:"use_pager";i:0;s:14:"nodes_per_page";s:1:"0";s:8:"pager_id";s:1:"0";s:6:"offset";s:1:"0";s:9:"more_link";i:0;s:10:"feed_icons";i:0;s:10:"panel_args";i:0;s:12:"link_to_view";i:0;s:4:"args";s:0:"";s:3:"url";s:0:"";s:7:"display";s:7:"block_2";s:7:"context";a:1:{i:0;s:0:"";}s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";}s:4:"type";s:5:"views";s:7:"subtype";s:23:"recent_events_view_mode";}',
        'load_terms' => 0,
      ),
    ),
  );
  $export['node|upcoming_events|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function sfova_upcoming_events_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'view_upcoming_events';
  $ds_field->label = 'view_upcoming_events';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['view_upcoming_events'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function sfova_upcoming_events_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|upcoming_events|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'upcoming_events';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'field_social_media',
        1 => 'view_upcoming_events',
      ),
    ),
    'fields' => array(
      'field_social_media' => 'ds_content',
      'view_upcoming_events' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|upcoming_events|default'] = $ds_layout;

  return $export;
}

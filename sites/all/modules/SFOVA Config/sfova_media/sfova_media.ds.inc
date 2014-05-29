<?php
/**
 * @file
 * sfova_media.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function sfova_media_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|media|rss';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'media';
  $ds_fieldsetting->view_mode = 'rss';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|media|rss'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function sfova_media_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|media|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'media';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'panels-twocol_stacked';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'top' => array(
        0 => 'field_social_media',
        1 => 'field_audio_test',
        2 => 'field_video_files',
        3 => 'field_video_files_src',
      ),
    ),
    'fields' => array(
      'field_social_media' => 'top',
      'field_audio_test' => 'top',
      'field_video_files' => 'top',
      'field_video_files_src' => 'top',
    ),
    'classes' => array(),
  );
  $export['node|media|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|media|rss';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'media';
  $ds_layout->view_mode = 'rss';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'header' => array(
        0 => 'title',
        1 => 'field_media_description',
        2 => 'field_social_media',
      ),
    ),
    'fields' => array(
      'title' => 'header',
      'field_media_description' => 'header',
      'field_social_media' => 'header',
    ),
    'classes' => array(),
  );
  $export['node|media|rss'] = $ds_layout;

  return $export;
}

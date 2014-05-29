<?php
/**
 * @file
 * sfova_media.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function sfova_media_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function sfova_media_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function sfova_media_node_info() {
  $items = array(
    'media' => array(
      'name' => t('Media Gallery'),
      'base' => 'node_content',
      'description' => t('For all type of media files such as audio, video recordings from Gurdwara Sahib and video links (Youtube etc.) from various sources. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'sfv_voice' => array(
      'name' => t('SFV Voice'),
      'base' => 'node_content',
      'description' => t('SFV Voice links'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

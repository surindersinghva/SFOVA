<?php
/**
 * @file
 * sfova_media.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function sfova_media_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:media-gallery
  $menu_links['main-menu:media-gallery'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'media-gallery',
    'router_path' => 'media-gallery',
    'link_title' => 'Media Gallery',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
  );
  // Exported menu link: main-menu:sfv-voice
  $menu_links['main-menu:sfv-voice'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'sfv-voice',
    'router_path' => 'sfv-voice',
    'link_title' => 'SFV Voice',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Media Gallery');
  t('SFV Voice');


  return $menu_links;
}

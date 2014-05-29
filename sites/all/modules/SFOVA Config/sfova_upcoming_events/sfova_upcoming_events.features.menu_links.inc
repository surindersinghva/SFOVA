<?php
/**
 * @file
 * sfova_upcoming_events.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function sfova_upcoming_events_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:upcoming-events
  $menu_links['main-menu:upcoming-events'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'upcoming-events',
    'router_path' => 'upcoming-events',
    'link_title' => 'Upcoming Events',
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
    'weight' => -46,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Upcoming Events');


  return $menu_links;
}

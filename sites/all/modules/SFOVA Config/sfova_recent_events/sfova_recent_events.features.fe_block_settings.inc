<?php
/**
 * @file
 * sfova_recent_events.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function sfova_recent_events_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-recent_events-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'recent_events-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'corporate' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'corporate',
        'weight' => -29,
      ),
      'garland' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'garland',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['views-recent_events_view_mode-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'recent_events_view_mode-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'corporate' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corporate',
        'weight' => -6,
      ),
      'garland' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'garland',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-recent_events_view_mode-block_2'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'recent_events_view_mode-block_2',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'corporate' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corporate',
        'weight' => -5,
      ),
      'garland' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'garland',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-updates-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'updates-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'corporate' => array(
        'region' => 'footer_second',
        'status' => 1,
        'theme' => 'corporate',
        'weight' => -20,
      ),
      'garland' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'garland',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}

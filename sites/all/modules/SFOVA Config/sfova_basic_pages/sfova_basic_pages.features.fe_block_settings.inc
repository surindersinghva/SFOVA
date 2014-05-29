<?php
/**
 * @file
 * sfova_basic_pages.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function sfova_basic_pages_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['aggregator-feed-1'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'feed-1',
    'module' => 'aggregator',
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
        'region' => 'footer_first',
        'status' => 1,
        'theme' => 'corporate',
        'weight' => -28,
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
    'visibility' => 1,
  );

  $export['aggregator-feed-2'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'feed-2',
    'module' => 'aggregator',
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
        'region' => 'footer_third',
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
    'title' => 'Sikh News from Google',
    'visibility' => 1,
  );

  $export['views-resources-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'resources-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'sikhism',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'corporate' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'corporate',
        'weight' => -26,
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
    'title' => 'Resources',
    'visibility' => 1,
  );

  return $export;
}

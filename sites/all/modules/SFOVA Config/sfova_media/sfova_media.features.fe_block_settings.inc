<?php
/**
 * @file
 * sfova_media.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function sfova_media_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-media_gallery-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'media_gallery-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'media-gallery',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'corporate' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'corporate',
        'weight' => -25,
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
    'title' => 'Audio Recordings (regular programs)',
    'visibility' => 1,
  );

  $export['views-media_gallery-block_2'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'media_gallery-block_2',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'media-gallery',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'corporate' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'corporate',
        'weight' => -24,
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
    'title' => 'Video Recordings',
    'visibility' => 1,
  );

  $export['views-media_gallery-block_3'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'media_gallery-block_3',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'media-gallery',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'corporate' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'corporate',
        'weight' => -23,
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
    'title' => 'Videos from other sources',
    'visibility' => 1,
  );

  $export['views-media_gallery-block_4'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'media_gallery-block_4',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'media-gallery',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'corporate' => array(
        'region' => 'content',
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
    'title' => 'Audio Recordings (special programs)',
    'visibility' => 1,
  );

  return $export;
}

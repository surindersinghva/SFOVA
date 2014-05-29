<?php
/**
 * @file
 * sfova_school_and_communication.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function sfova_school_and_communication_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views--exp-punjabi_school-page_3'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '-exp-punjabi_school-page_3',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'master-list',
    'roles' => array(
      'Administrator' => 11,
      'Youth Coordinator' => 7,
    ),
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
        'weight' => -30,
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

  return $export;
}

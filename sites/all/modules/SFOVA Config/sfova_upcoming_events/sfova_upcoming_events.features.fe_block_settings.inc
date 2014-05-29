<?php
/**
 * @file
 * sfova_upcoming_events.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function sfova_upcoming_events_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-featured_content'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'featured_content',
    'module' => 'block',
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
        'region' => '',
        'status' => 0,
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
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['calendar-calendar_legend'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'calendar_legend',
    'module' => 'calendar',
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
        'weight' => 0,
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

  $export['views-announcements-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'announcements-block',
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
        'weight' => -31,
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

  $export['views-calendar-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'calendar-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'upcoming-events',
    'roles' => array(
      'Administrator' => 11,
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

  $export['views-calendar-block_2'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'calendar-block_2',
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
        'weight' => 0,
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

  $export['views-calendar-block_3'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'calendar-block_3',
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
        'region' => 'content',
        'status' => 1,
        'theme' => 'corporate',
        'weight' => -22,
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

  $export['views-calendar-block_4'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'calendar-block_4',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'event-management',
    'roles' => array(
      'Administrator' => 11,
      'Chairman' => 3,
      'PRO' => 5,
      'Secretary' => 4,
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
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['views-upcoming_events-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'upcoming_events-block',
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
        'region' => 'preface_first',
        'status' => 1,
        'theme' => 'corporate',
        'weight' => 0,
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

  $export['views-upcoming_events-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'upcoming_events-block_1',
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
        'region' => 'preface_last',
        'status' => 1,
        'theme' => 'corporate',
        'weight' => 0,
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

  $export['views-upcoming_events-block_2'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'upcoming_events-block_2',
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
        'region' => 'footer_first',
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
    'title' => 'Upcoming Events',
    'visibility' => 1,
  );

  return $export;
}

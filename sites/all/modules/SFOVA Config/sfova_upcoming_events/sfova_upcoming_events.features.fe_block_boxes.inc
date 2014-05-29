<?php
/**
 * @file
 * sfova_upcoming_events.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function sfova_upcoming_events_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Featured Content';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'featured_content';
  $fe_block_boxes->body = '<center><h2><strong>ਧੰਂਨ ਗੁਰੂ ਅਰਜਨ ਦੇਵ ਜੀ ਦੇ ਪਰਕਾਸ਼ ਦਿਹਾੜੇ ਦੀ ਸਭ ਨੂੰ ਲਖ ਲਖ ਵਧਾੲੀ ਹੋਵੇ ਜੀ</strong></h2></center><br />
<center><p><strong><img alt="" src="http://www.sfova.org/sites/default/files/GuruArjan.jpg" style="height:317px; width:562px" /></strong></p></center>
';

  $export['featured_content'] = $fe_block_boxes;

  return $export;
}

<?php
/**
 * @file
 * sfova_recent_events.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function sfova_recent_events_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-recent_events-body'
  $field_instances['node-recent_events-body'] = array(
    'bundle' => 'recent_events',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'rss' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
      'view_recent_events_mode' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-recent_events-field_attachment'
  $field_instances['node-recent_events-field_attachment'] = array(
    'bundle' => 'recent_events',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 3,
      ),
      'rss' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_attachment',
    'label' => 'Attachment',
    'required' => 0,
    'settings' => array(
      'description_field' => 1,
      'file_directory' => '',
      'file_extensions' => 'txt doc xls docx xlsx ppt pptx pdf png gif jpg jpeg',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'insert' => 0,
        'insert_absolute' => FALSE,
        'insert_class' => '',
        'insert_default' => array(
          0 => 'auto',
        ),
        'insert_styles' => array(
          0 => 'auto',
        ),
        'insert_width' => '',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-recent_events-field_recent_images'
  $field_instances['node-recent_events-field_recent_images'] = array(
    'bundle' => 'recent_events',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'galleria',
        'settings' => array(
          'alt_field' => '',
          'optionset' => 'default',
          'referenced_fields' => array(),
          'title_field' => '',
        ),
        'type' => 'galleria',
        'weight' => 2,
      ),
      'rss' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_recent_images',
    'label' => 'Images',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'multiupload_imagefield_widget',
      'settings' => array(
        'insert' => 0,
        'insert_absolute' => FALSE,
        'insert_class' => '',
        'insert_default' => array(
          0 => 'auto',
        ),
        'insert_styles' => array(
          0 => 'auto',
        ),
        'insert_width' => '',
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_miw',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-recent_events-field_social_media'
  $field_instances['node-recent_events-field_social_media'] = array(
    'bundle' => 'recent_events',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'social_buttons',
        'settings' => array(),
        'type' => 'social_buttons_formatter_default',
        'weight' => 0,
      ),
      'rss' => array(
        'label' => 'hidden',
        'module' => 'social_buttons',
        'settings' => array(),
        'type' => 'social_buttons_formatter_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_social_media',
    'label' => 'Social Media',
    'required' => 0,
    'settings' => array(
      'button-0' => '<div id="fb-root"></div><script> (function(d, s, id) { var js, fjs = d.getElementsByTagName(s)[0]; if (d.getElementById(id)) return; js = d.createElement(s); js.id = id; js.src = "//connect.facebook.net/en_US/all.js#xfbml=1"; fjs.parentNode.insertBefore(js, fjs);}(document, "script", "facebook-jssdk"));</script> <div class="fb-like" data-send="false" data-layout="button_count" data-width="1" data-show-faces="false"></div>',
      'button-1' => '<a href="https://twitter.com/share" class="twitter-share-button">Tweet</a><script>!function(d,s,id){var js,fjs=d.getElementsByTagName(s)[0];if(!d.getElementById(id)){js=d.createElement(s);js.id=id;js.src="//platform.twitter.com/widgets.js";fjs.parentNode.insertBefore(js,fjs);}}(document,"script","twitter-wjs");</script>',
      'button-2' => '<div class="g-plusone" data-size="medium"></div><script>(function() {var po = document.createElement("script"); po.type = "text/javascript"; po.async = true;po.src = "https://apis.google.com/js/plusone.js";var s = document.getElementsByTagName("script")[0]; s.parentNode.insertBefore(po, s);})();</script>',
      'button-3' => '<script src="//platform.linkedin.com/in.js" type="text/javascript"></script><script type="IN/Share" data-counter="right"></script>',
      'button-4' => '',
      'init' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'social_buttons',
      'settings' => array(),
      'type' => 'social_buttons_exposed',
      'weight' => 4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Attachment');
  t('Body');
  t('Images');
  t('Social Media');

  return $field_instances;
}

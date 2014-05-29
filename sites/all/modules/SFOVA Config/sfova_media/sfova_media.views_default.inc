<?php
/**
 * @file
 * sfova_media.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function sfova_media_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'media_gallery';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Media Gallery';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Media Gallery';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '2';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Media files not available';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_audio_files']['id'] = 'field_audio_files';
  $handler->display->display_options['fields']['field_audio_files']['table'] = 'field_data_field_audio_files';
  $handler->display->display_options['fields']['field_audio_files']['field'] = 'field_audio_files';
  $handler->display->display_options['fields']['field_audio_files']['label'] = '';
  $handler->display->display_options['fields']['field_audio_files']['element_label_colon'] = FALSE;
  /* Field: Content: Video File (local) */
  $handler->display->display_options['fields']['field_video_files']['id'] = 'field_video_files';
  $handler->display->display_options['fields']['field_video_files']['table'] = 'field_data_field_video_files';
  $handler->display->display_options['fields']['field_video_files']['field'] = 'field_video_files';
  $handler->display->display_options['fields']['field_video_files']['label'] = '';
  $handler->display->display_options['fields']['field_video_files']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_video_files']['alter']['path'] = 'http://youtu.be/Fiuuvev6Ues';
  $handler->display->display_options['fields']['field_video_files']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_video_files']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video_files']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_video_files']['type'] = 'media';
  $handler->display->display_options['fields']['field_video_files']['settings'] = array(
    'file_view_mode' => 'media_preview',
  );
  /* Field: Content: Videos from other sources */
  $handler->display->display_options['fields']['field_video_files_src']['id'] = 'field_video_files_src';
  $handler->display->display_options['fields']['field_video_files_src']['table'] = 'field_data_field_video_files_src';
  $handler->display->display_options['fields']['field_video_files_src']['field'] = 'field_video_files_src';
  $handler->display->display_options['fields']['field_video_files_src']['label'] = '';
  $handler->display->display_options['fields']['field_video_files_src']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_video_files_src']['alter']['path'] = 'http://www.totalwebtechnologies.com/SFV/recent-events/all';
  $handler->display->display_options['fields']['field_video_files_src']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_video_files_src']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video_files_src']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_video_files_src']['type'] = 'media';
  $handler->display->display_options['fields']['field_video_files_src']['settings'] = array(
    'file_view_mode' => 'media_preview',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'media' => 'media',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<hr style="margin-top:0px; padding-top:0px;" />';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'media-gallery';

  /* Display: Audio Recordings */
  $handler = $view->new_display('block', 'Audio Recordings', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '1';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_audio_files' => 'field_audio_files',
    'title' => 'title',
    'created' => 'created',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_audio_files' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_new_audio_files']['id'] = 'field_new_audio_files';
  $handler->display->display_options['fields']['field_new_audio_files']['table'] = 'field_data_field_new_audio_files';
  $handler->display->display_options['fields']['field_new_audio_files']['field'] = 'field_new_audio_files';
  $handler->display->display_options['fields']['field_new_audio_files']['label'] = 'Audio files';
  $handler->display->display_options['fields']['field_new_audio_files']['exclude'] = TRUE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd M Y';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'media' => 'media',
  );
  /* Filter criterion: Content: Special Diwan? (field_special_diwan) */
  $handler->display->display_options['filters']['field_special_diwan_value']['id'] = 'field_special_diwan_value';
  $handler->display->display_options['filters']['field_special_diwan_value']['table'] = 'field_data_field_special_diwan';
  $handler->display->display_options['filters']['field_special_diwan_value']['field'] = 'field_special_diwan_value';
  $handler->display->display_options['filters']['field_special_diwan_value']['value'] = array(
    'No' => 'No',
  );

  /* Display: Audio Special Diwans */
  $handler = $view->new_display('block', 'Audio Special Diwans', 'block_4');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '2';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_audio_files' => 'field_audio_files',
    'title' => 'title',
    'created' => 'created',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_audio_files' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_new_audio_files']['id'] = 'field_new_audio_files';
  $handler->display->display_options['fields']['field_new_audio_files']['table'] = 'field_data_field_new_audio_files';
  $handler->display->display_options['fields']['field_new_audio_files']['field'] = 'field_new_audio_files';
  $handler->display->display_options['fields']['field_new_audio_files']['label'] = 'Audio files';
  $handler->display->display_options['fields']['field_new_audio_files']['exclude'] = TRUE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd M Y';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'media' => 'media',
  );
  /* Filter criterion: Content: Special Diwan? (field_special_diwan) */
  $handler->display->display_options['filters']['field_special_diwan_value']['id'] = 'field_special_diwan_value';
  $handler->display->display_options['filters']['field_special_diwan_value']['table'] = 'field_data_field_special_diwan';
  $handler->display->display_options['filters']['field_special_diwan_value']['field'] = 'field_special_diwan_value';
  $handler->display->display_options['filters']['field_special_diwan_value']['value'] = array(
    'Yes' => 'Yes',
  );
  /* Filter criterion: Content: Playlist (field_audio_test:fid) */
  $handler->display->display_options['filters']['field_audio_test_fid']['id'] = 'field_audio_test_fid';
  $handler->display->display_options['filters']['field_audio_test_fid']['table'] = 'field_data_field_audio_test';
  $handler->display->display_options['filters']['field_audio_test_fid']['field'] = 'field_audio_test_fid';
  $handler->display->display_options['filters']['field_audio_test_fid']['operator'] = 'not empty';

  /* Display: Video Recordings */
  $handler = $view->new_display('block', 'Video Recordings', 'block_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '3';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Video File (local) (field_video_files:fid) */
  $handler->display->display_options['relationships']['field_video_files_fid']['id'] = 'field_video_files_fid';
  $handler->display->display_options['relationships']['field_video_files_fid']['table'] = 'field_data_field_video_files';
  $handler->display->display_options['relationships']['field_video_files_fid']['field'] = 'field_video_files_fid';
  $handler->display->display_options['relationships']['field_video_files_fid']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Video File (local) */
  $handler->display->display_options['fields']['field_video_files']['id'] = 'field_video_files';
  $handler->display->display_options['fields']['field_video_files']['table'] = 'field_data_field_video_files';
  $handler->display->display_options['fields']['field_video_files']['field'] = 'field_video_files';
  $handler->display->display_options['fields']['field_video_files']['label'] = '';
  $handler->display->display_options['fields']['field_video_files']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_video_files']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_video_files']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_video_files']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video_files']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_video_files']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_video_files']['type'] = 'media';
  $handler->display->display_options['fields']['field_video_files']['settings'] = array(
    'file_view_mode' => 'media_preview',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd M Y';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="mediapage">
[field_video_files]
<h2>[title]</h2>
<h4>[created]</h4>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;

  /* Display: Videos from other sources */
  $handler = $view->new_display('block', 'Videos from other sources', 'block_3');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '4';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Videos from other sources (field_video_files_src:fid) */
  $handler->display->display_options['relationships']['field_video_files_src_fid']['id'] = 'field_video_files_src_fid';
  $handler->display->display_options['relationships']['field_video_files_src_fid']['table'] = 'field_data_field_video_files_src';
  $handler->display->display_options['relationships']['field_video_files_src_fid']['field'] = 'field_video_files_src_fid';
  $handler->display->display_options['relationships']['field_video_files_src_fid']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Content: Videos from other sources */
  $handler->display->display_options['fields']['field_video_files_src']['id'] = 'field_video_files_src';
  $handler->display->display_options['fields']['field_video_files_src']['table'] = 'field_data_field_video_files_src';
  $handler->display->display_options['fields']['field_video_files_src']['field'] = 'field_video_files_src';
  $handler->display->display_options['fields']['field_video_files_src']['label'] = '';
  $handler->display->display_options['fields']['field_video_files_src']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_video_files_src']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_video_files_src']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_video_files_src']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video_files_src']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_video_files_src']['type'] = 'media';
  $handler->display->display_options['fields']['field_video_files_src']['settings'] = array(
    'file_view_mode' => 'media_preview',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_class'] = 'videopage';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_type'] = 'h3';
  $handler->display->display_options['fields']['created']['element_class'] = 'videopage';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd M Y';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="mediapage">
[field_video_files_src]
<h2>[title]</h2>
<h4>[created]</h4>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $export['media_gallery'] = $view;

  $view = new view();
  $view->name = 'sfv_voice';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'SFV Voice';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'SFV Voice';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_sfv_voice_subtitle' => 'field_sfv_voice_subtitle',
    'field_sfv_voice_pdf' => 'field_sfv_voice_pdf',
    'field_sfv_voice_link' => 'field_sfv_voice_pdf',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sfv_voice_subtitle' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sfv_voice_pdf' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sfv_voice_link' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Sub Title */
  $handler->display->display_options['fields']['field_sfv_voice_subtitle']['id'] = 'field_sfv_voice_subtitle';
  $handler->display->display_options['fields']['field_sfv_voice_subtitle']['table'] = 'field_data_field_sfv_voice_subtitle';
  $handler->display->display_options['fields']['field_sfv_voice_subtitle']['field'] = 'field_sfv_voice_subtitle';
  $handler->display->display_options['fields']['field_sfv_voice_subtitle']['label'] = 'Issue';
  $handler->display->display_options['fields']['field_sfv_voice_subtitle']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sfv_voice_subtitle']['alter']['text'] = '([field_sfv_voice_subtitle])';
  /* Field: Content: SFV Voice PDF */
  $handler->display->display_options['fields']['field_sfv_voice_pdf']['id'] = 'field_sfv_voice_pdf';
  $handler->display->display_options['fields']['field_sfv_voice_pdf']['table'] = 'field_data_field_sfv_voice_pdf';
  $handler->display->display_options['fields']['field_sfv_voice_pdf']['field'] = 'field_sfv_voice_pdf';
  $handler->display->display_options['fields']['field_sfv_voice_pdf']['label'] = 'PDF';
  $handler->display->display_options['fields']['field_sfv_voice_pdf']['click_sort_column'] = 'fid';
  /* Field: Content: SFV Voice Link (if any) */
  $handler->display->display_options['fields']['field_sfv_voice_link']['id'] = 'field_sfv_voice_link';
  $handler->display->display_options['fields']['field_sfv_voice_link']['table'] = 'field_data_field_sfv_voice_link';
  $handler->display->display_options['fields']['field_sfv_voice_link']['field'] = 'field_sfv_voice_link';
  $handler->display->display_options['fields']['field_sfv_voice_link']['label'] = '';
  $handler->display->display_options['fields']['field_sfv_voice_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sfv_voice_link']['alter']['text'] = 'Link';
  $handler->display->display_options['fields']['field_sfv_voice_link']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_sfv_voice_link']['alter']['path'] = '[field_sfv_voice_link-value]';
  $handler->display->display_options['fields']['field_sfv_voice_link']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_sfv_voice_link']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sfv_voice' => 'sfv_voice',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'sfv-voice';
  $export['sfv_voice'] = $view;

  return $export;
}

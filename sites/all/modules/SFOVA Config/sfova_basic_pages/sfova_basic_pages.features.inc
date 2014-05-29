<?php
/**
 * @file
 * sfova_basic_pages.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function sfova_basic_pages_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function sfova_basic_pages_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function sfova_basic_pages_node_info() {
  $items = array(
    'about_us' => array(
      'name' => t('About us'),
      'base' => 'node_content',
      'description' => t('About SFV'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'email_addresses' => array(
      'name' => t('Email Addresses'),
      'base' => 'node_content',
      'description' => t('The email subscription form'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'jeopardy_questions' => array(
      'name' => t('Jeopardy Questions'),
      'base' => 'node_content',
      'description' => t('Sikh History Jeopardy Questions'),
      'has_title' => '1',
      'title_label' => t('Question'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'resources' => array(
      'name' => t('Resources'),
      'base' => 'node_content',
      'description' => t('Use this form to add new resources
'),
      'has_title' => '1',
      'title_label' => t('Resources'),
      'help' => '',
    ),
    'sikhism' => array(
      'name' => t('Sikhism'),
      'base' => 'node_content',
      'description' => t('Basics of Sikhism'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'staff' => array(
      'name' => t('Staff'),
      'base' => 'node_content',
      'description' => t('Board of Trustees and Management Committee'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}

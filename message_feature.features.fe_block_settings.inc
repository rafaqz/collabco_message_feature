<?php
/**
 * @file
 * message_feature.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function message_feature_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['message_feature-followers'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'followers',
    'module' => 'message_feature',
    'node_types' => array(
      0 => 'basic_page',
      1 => 'book',
      2 => 'conversation',
      3 => 'front_icons',
      4 => 'knowledge_object',
      5 => 'news',
    ),
    'pages' => 'node/*
node/add/*',
    'roles' => array(
      'authenticated user' => 2,
    ),
    'themes' => array(
      'custom_zurb' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'custom_zurb',
        'weight' => -38,
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

  $export['views-follow_group-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'follow_group-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'user
user/*',
    'roles' => array(),
    'themes' => array(
      'custom_zurb' => array(
        'region' => 'split_second',
        'status' => 1,
        'theme' => 'custom_zurb',
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

  $export['views-follow_node-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'follow_node-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'user
user/*',
    'roles' => array(),
    'themes' => array(
      'custom_zurb' => array(
        'region' => 'split_first',
        'status' => 1,
        'theme' => 'custom_zurb',
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

  $export['views-follow_taxonomy_term-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'follow_taxonomy_term-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'user
user/*',
    'roles' => array(),
    'themes' => array(
      'custom_zurb' => array(
        'region' => 'split_second',
        'status' => 1,
        'theme' => 'custom_zurb',
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

  $export['views-follow_user-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'follow_user-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'user
user/*',
    'roles' => array(),
    'themes' => array(
      'custom_zurb' => array(
        'region' => 'split_second',
        'status' => 1,
        'theme' => 'custom_zurb',
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

  $export['views-recent_activity-block'] = array(
    'cache' => -1,
    'css_class' => 'hidden-phone',
    'custom' => 0,
    'delta' => 'recent_activity-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'innovation-capabilities
user/registration
user/password
user',
    'roles' => array(
      'authenticated user' => 2,
    ),
    'themes' => array(
      'custom_zurb' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'custom_zurb',
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

  $export['views-recent_activity-group_block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'recent_activity-group_block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'custom_zurb' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'custom_zurb',
        'weight' => -28,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Activity',
    'visibility' => 0,
  );

  return $export;
}

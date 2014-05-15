<?php
/**
 * @file
 * collabco_message_feature.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function collabco_message_feature_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

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
      'zurb_foundation' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zurb_foundation',
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
      'zurb_foundation' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zurb_foundation',
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
      'zurb_foundation' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zurb_foundation',
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
      'zurb_foundation' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zurb_foundation',
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
      'zurb_foundation' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zurb_foundation',
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
      'zurb_foundation' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zurb_foundation',
        'weight' => -28,
      ),
    ),
    'title' => 'Activity',
    'visibility' => 0,
  );

  return $export;
}

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

  $export['views-recent_activity-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'delta' => 'recent_activity-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'openhub' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'openhub',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
  );

  return $export;
}

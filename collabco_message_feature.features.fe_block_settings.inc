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
    'css_class' => 'iin-feature hidden-phone',
    'custom' => 0,
    'delta' => 'recent_activity-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'innovation-capabilities
user/regstration',
    'roles' => array(),
    'themes' => array(
      'openhub' => array(
        'region' => 'sidebar_first',
        'status' => 1,
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
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}

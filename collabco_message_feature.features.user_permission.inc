<?php
/**
 * @file
 * collabco_message_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function collabco_message_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer flags'.
  $permissions['administer flags'] = array(
    'name' => 'administer flags',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'administer message subscribe'.
  $permissions['administer message subscribe'] = array(
    'name' => 'administer message subscribe',
    'roles' => array(),
    'module' => 'message_subscribe',
  );

  // Exported permission: 'flag subscribe_node_off'.
  $permissions['flag subscribe_node_off'] = array(
    'name' => 'flag subscribe_node_off',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag subscribe_og'.
  $permissions['flag subscribe_og'] = array(
    'name' => 'flag subscribe_og',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag subscribe_og_off'.
  $permissions['flag subscribe_og_off'] = array(
    'name' => 'flag subscribe_og_off',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag subscribe_term'.
  $permissions['flag subscribe_term'] = array(
    'name' => 'flag subscribe_term',
    'roles' => array(),
    'module' => 'flag',
  );

  // Exported permission: 'flag subscribe_term_off'.
  $permissions['flag subscribe_term_off'] = array(
    'name' => 'flag subscribe_term_off',
    'roles' => array(),
    'module' => 'flag',
  );

  // Exported permission: 'flag subscribe_user'.
  $permissions['flag subscribe_user'] = array(
    'name' => 'flag subscribe_user',
    'roles' => array(),
    'module' => 'flag',
  );

  // Exported permission: 'flag subscribe_user_off'.
  $permissions['flag subscribe_user_off'] = array(
    'name' => 'flag subscribe_user_off',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag subscribe_node_off'.
  $permissions['unflag subscribe_node_off'] = array(
    'name' => 'unflag subscribe_node_off',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag subscribe_og'.
  $permissions['unflag subscribe_og'] = array(
    'name' => 'unflag subscribe_og',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag subscribe_og_off'.
  $permissions['unflag subscribe_og_off'] = array(
    'name' => 'unflag subscribe_og_off',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag subscribe_term'.
  $permissions['unflag subscribe_term'] = array(
    'name' => 'unflag subscribe_term',
    'roles' => array(),
    'module' => 'flag',
  );

  // Exported permission: 'unflag subscribe_term_off'.
  $permissions['unflag subscribe_term_off'] = array(
    'name' => 'unflag subscribe_term_off',
    'roles' => array(),
    'module' => 'flag',
  );

  // Exported permission: 'unflag subscribe_user'.
  $permissions['unflag subscribe_user'] = array(
    'name' => 'unflag subscribe_user',
    'roles' => array(),
    'module' => 'flag',
  );

  // Exported permission: 'unflag subscribe_user_off'.
  $permissions['unflag subscribe_user_off'] = array(
    'name' => 'unflag subscribe_user_off',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'use flag import'.
  $permissions['use flag import'] = array(
    'name' => 'use flag import',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'flag',
  );

  return $permissions;
}

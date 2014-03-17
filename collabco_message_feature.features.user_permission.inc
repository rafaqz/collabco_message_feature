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
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'message_subscribe',
  );

  // Exported permission: 'administer message types'.
  $permissions['administer message types'] = array(
    'name' => 'administer message types',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'message',
  );

  // Exported permission: 'create messages'.
  $permissions['create messages'] = array(
    'name' => 'create messages',
    'roles' => array(
      'Admin' => 'Admin',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'message',
  );

  // Exported permission: 'flag follow_node'.
  $permissions['flag follow_node'] = array(
    'name' => 'flag follow_node',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag follow_og'.
  $permissions['flag follow_og'] = array(
    'name' => 'flag follow_og',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag follow_term'.
  $permissions['flag follow_term'] = array(
    'name' => 'flag follow_term',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag follow_user'.
  $permissions['flag follow_user'] = array(
    'name' => 'flag follow_user',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'show format selection for message'.
  $permissions['show format selection for message'] = array(
    'name' => 'show format selection for message',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for message_type'.
  $permissions['show format selection for message_type'] = array(
    'name' => 'show format selection for message_type',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for message_type_category'.
  $permissions['show format selection for message_type_category'] = array(
    'name' => 'show format selection for message_type_category',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'better_formats',
  );


  // Exported permission: 'unflag follow_node'.
  $permissions['unflag follow_node'] = array(
    'name' => 'unflag follow_node',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag follow_og'.
  $permissions['unflag follow_og'] = array(
    'name' => 'unflag follow_og',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag follow_term'.
  $permissions['unflag follow_term'] = array(
    'name' => 'unflag follow_term',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag follow_user'.
  $permissions['unflag follow_user'] = array(
    'name' => 'unflag follow_user',
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

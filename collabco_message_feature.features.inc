<?php
/**
 * @file
 * collabco_message_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function collabco_message_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function collabco_message_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function collabco_message_feature_flag_default_flags() {
  $flags = array();
  // Exported flag: "Content".
  $flags['follow_node'] = array(
    'entity_type' => 'node',
    'title' => 'Content',
    'global' => 0,
    'types' => array(),
    'flag_short' => 'Follow',
    'flag_long' => '',
    'flag_message' => 'You are now following this [node:content-type:name].',
    'unflag_short' => 'Unfollow',
    'unflag_long' => '',
    'unflag_message' => 'You are no longer following this [node:content-type:name].',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'print' => 0,
      'diff_standard' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'collabco_message_feature',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "Groups".
  $flags['follow_og'] = array(
    'entity_type' => 'node',
    'title' => 'Groups',
    'global' => 0,
    'types' => array(),
    'flag_short' => 'Follow Group',
    'flag_long' => '',
    'flag_message' => 'You are now following this group.',
    'unflag_short' => 'Unfollow Group',
    'unflag_long' => '',
    'unflag_message' => 'You are no longer following this group.',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'print' => 0,
      'diff_standard' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'collabco_message_feature',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "Terms".
  $flags['follow_term'] = array(
    'entity_type' => 'taxonomy_term',
    'title' => 'Terms',
    'global' => 0,
    'types' => array(),
    'flag_short' => 'Follow',
    'flag_long' => '',
    'flag_message' => 'You are now following this term.',
    'unflag_short' => 'Unfollow',
    'unflag_long' => '',
    'unflag_message' => 'You are no longer following this term.',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'diff_standard' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'module' => 'collabco_message_feature',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "Users".
  $flags['follow_user'] = array(
    'entity_type' => 'user',
    'title' => 'Users',
    'global' => 0,
    'types' => array(),
    'flag_short' => 'Follow',
    'flag_long' => '',
    'flag_message' => 'You are now following this user.',
    'unflag_short' => 'Unfollow',
    'unflag_long' => '',
    'unflag_message' => 'You are no longer following this user.',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'diff_standard' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'show_on_profile' => 0,
    'access_uid' => '',
    'module' => 'collabco_message_feature',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}

/**
 * Implements hook_default_message_type().
 */
function collabco_message_feature_default_message_type() {
  $items = array();
  $items['create_comment'] = entity_import('message_type', '{
    "name" : "create_comment",
    "description" : "Create comment",
    "argument_keys" : [ "!teaser" ],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 1 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "en",
    "arguments" : null,
    "message_text" : { "und" : [
        {
          "value" : "!{message:user:picture}\\u003Cdiv class=\\u0022message-details\\u0022\\u003E\\u003Cp\\u003E\\u003Ca href=!{message:user:url}\\u003E@{message:user:name}\\u003C\\/a\\u003E \\u003Ca href=!{message:field-comment-ref:url}\\u003Ecommented\\u003C\\/a\\u003E on @{message:field-node-ref:content-type:name} [message:field-node-ref:title]\\u003C\\/p\\u003E\\u003Cp class=\\u0022timestamp\\u0022\\u003E@{message:timestamp:medium}\\u003C\\/p\\u003E\\u003C\\/div\\u003E",
          "format" : "php_code",
          "safe_value" : "!{message:user:picture}\\u003Cdiv class=\\u0022message-details\\u0022\\u003E\\u003Cp\\u003E\\u003Ca href=!{message:user:url}\\u003E@{message:user:name}\\u003C\\/a\\u003E \\u003Ca href=!{message:field-comment-ref:url}\\u003Ecommented\\u003C\\/a\\u003E on @{message:field-node-ref:content-type:name} [message:field-node-ref:title]\\u003C\\/p\\u003E\\u003Cp class=\\u0022timestamp\\u0022\\u003E@{message:timestamp:medium}\\u003C\\/p\\u003E\\u003C\\/div\\u003E"
        },
        {
          "value" : "[message:field-comment-ref:body]\\r\\n",
          "format" : "php_code",
          "safe_value" : "[message:field-comment-ref:body]\\n"
        },
        {
          "value" : "\\u003Ca href=\\u0022[message:field-comment-ref:url]\\u0022\\u003Ereply\\u003C\\/a\\u003E",
          "format" : "php_code",
          "safe_value" : "\\u003Ca href=\\u0022[message:field-comment-ref:url]\\u0022\\u003Ereply\\u003C\\/a\\u003E"
        }
      ]
    },
    "rdf_mapping" : []
  }');
  $items['create_node'] = entity_import('message_type', '{
    "name" : "create_node",
    "description" : "Create node",
    "argument_keys" : [ "!groups" ],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 1 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "en",
    "arguments" : null,
    "message_text" : { "und" : [
        {
          "value" : "!{message:user:picture}\\u003Cdiv class=\\u0022message-details\\u0022\\u003E\\u003Cp\\u003E\\u003Ca href=!{message:user:url}\\u003E@{message:user:name}\\u003C\\/a\\u003E posted @{message:field-node-ref:content-type:name} \\u003Ca href=!{message:field-node-ref:url}\\u003E\\u0022[message:field-node-ref:title]\\u0022\\u003C\\/a\\u003E !groups\\u003C\\/p\\u003E\\u003Cp class=\\u0022timestamp\\u0022\\u003E@{message:timestamp:medium}\\u003C\\/p\\u003E\\u003C\\/div\\u003E",
          "format" : "php_code",
          "safe_value" : "!{message:user:picture}\\u003Cdiv class=\\u0022message-details\\u0022\\u003E\\u003Cp\\u003E\\u003Ca href=!{message:user:url}\\u003E@{message:user:name}\\u003C\\/a\\u003E posted @{message:field-node-ref:content-type:name} \\u003Ca href=!{message:field-node-ref:url}\\u003E\\u0022[message:field-node-ref:title]\\u0022\\u003C\\/a\\u003E !groups\\u003C\\/p\\u003E\\u003Cp class=\\u0022timestamp\\u0022\\u003E@{message:timestamp:medium}\\u003C\\/p\\u003E\\u003C\\/div\\u003E"
        },
        {
          "value" : "[message:field-node-ref:body]\\r\\n",
          "format" : "php_code",
          "safe_value" : "[message:field-node-ref:body]\\n"
        }
      ]
    },
    "rdf_mapping" : []
  }');
  $items['og_user_membership'] = entity_import('message_type', '{
    "name" : "og_user_membership",
    "description" : "OG user membership",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "en",
    "arguments" : null,
    "message_text" : { "und" : [
        {
          "value" : "!{message:user:picture}\\u003Cdiv class=\\u0022message-details\\u0022\\u003E\\u003Cp\\u003E\\u003Ca href=!{message:user:url}\\u003E@{message:user:name}\\u003C\\/a\\u003E joined \\u003Ca href=!{message:field-node-groups-ref:0:url}\\u0022\\u003E[message:field-node-groups-ref:0:title]\\u003C\\/a\\u003E\\u003C\\/p\\u003E\\u003Cp class=\\u0022timestamp\\u0022\\u003E@{message:timestamp:medium}\\u003C\\/p\\u003E\\u003C\\/div\\u003E",
          "format" : "php_code",
          "safe_value" : "!{message:user:picture}\\u003Cdiv class=\\u0022message-details\\u0022\\u003E\\u003Cp\\u003E\\u003Ca href=!{message:user:url}\\u003E@{message:user:name}\\u003C\\/a\\u003E joined \\u003Ca href=!{message:field-node-groups-ref:0:url}\\u0022\\u003E[message:field-node-groups-ref:0:title]\\u003C\\/a\\u003E\\u003C\\/p\\u003E\\u003Cp class=\\u0022timestamp\\u0022\\u003E@{message:timestamp:medium}\\u003C\\/p\\u003E\\u003C\\/div\\u003E"
        }
      ]
    },
    "rdf_mapping" : []
  }');
  $items['update_node'] = entity_import('message_type', '{
    "name" : "update_node",
    "description" : "Update node",
    "argument_keys" : [ "!groups" ],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 1 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "en",
    "arguments" : null,
    "message_text" : { "und" : [
        {
          "value" : "!{message:user:picture}\\u003Cdiv class=\\u0022message-details\\u0022\\u003E\\u003Cp\\u003E\\u003Ca href=!{message:user:url}\\u003E@{message:user:name}\\u003C\\/a\\u003E updated @{message:field-node-ref:content-type:name} \\u003Ca href=!{message:field-node-ref:url}\\u003E\\u0022[message:field-node-ref:title]\\u0022\\u003C\\/a\\u003E !groups.\\u003C\\/p\\u003E\\u003Cp class=\\u0022timestamp\\u0022\\u003E@{message:timestamp:medium}\\u003C\\/p\\u003E\\u003C\\/div\\u003E",
          "format" : "php_code",
          "safe_value" : "!{message:user:picture}\\u003Cdiv class=\\u0022message-details\\u0022\\u003E\\u003Cp\\u003E\\u003Ca href=!{message:user:url}\\u003E@{message:user:name}\\u003C\\/a\\u003E updated @{message:field-node-ref:content-type:name} \\u003Ca href=!{message:field-node-ref:url}\\u003E\\u0022[message:field-node-ref:title]\\u0022\\u003C\\/a\\u003E !groups.\\u003C\\/p\\u003E\\u003Cp class=\\u0022timestamp\\u0022\\u003E@{message:timestamp:medium}\\u003C\\/p\\u003E\\u003C\\/div\\u003E"
        },
        {
          "value" : "[message:field-node-ref:body]\\r\\n",
          "format" : "php_code",
          "safe_value" : "[message:field-node-ref:body]\\n"
        }
      ]
    },
    "rdf_mapping" : []
  }');
  $items['user_register'] = entity_import('message_type', '{
    "name" : "user_register",
    "description" : "User register",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "en",
    "arguments" : null,
    "message_text" : { "und" : [
        {
          "value" : "!{message:user:picture}\\u003Cdiv class=\\u0022message-details\\u0022\\u003E\\u003Cp\\u003E\\u003Ca href=!{message:user:url}\\u0022\\u003E@{message:user:name}\\u003C\\/a\\u003E registered.\\u003C\\/p\\u003E\\u003Cp class=\\u0022timestamp\\u0022\\u003E@{message:timestamp:medium}\\u003C\\/p\\u003E\\u003C\\/div\\u003E",
          "format" : "php_code",
          "safe_value" : "!{message:user:picture}\\u003Cdiv class=\\u0022message-details\\u0022\\u003E\\u003Cp\\u003E\\u003Ca href=!{message:user:url}\\u0022\\u003E@{message:user:name}\\u003C\\/a\\u003E registered.\\u003C\\/p\\u003E\\u003Cp class=\\u0022timestamp\\u0022\\u003E@{message:timestamp:medium}\\u003C\\/p\\u003E\\u003C\\/div\\u003E"
        }
      ]
    },
    "rdf_mapping" : []
  }');
  return $items;
}

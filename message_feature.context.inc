<?php
/**
 * @file
 * message_feature.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function message_feature_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'recent_activity_group_block';
  $context->description = 'Shows recent activity messages for group activity';
  $context->tag = 'message feature';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        '~integration' => '~integration',
      ),
    ),
    'context_og_condition_group_type' => array(
      'values' => array(
        '_any_' => '_any_',
      ),
      'options' => array(
        'node_form' => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-recent_activity-group_block' => array(
          'module' => 'views',
          'delta' => 'recent_activity-group_block',
          'region' => 'sidebar_second',
          'weight' => '0',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Shows recent activity messages for group activity');
  t('message feature');
  $export['recent_activity_group_block'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'recent_activity_group_integration_block';
  $context->description = 'Shows recent activity messages for group activity';
  $context->tag = 'message feature';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        'integration' => 'integration',
      ),
    ),
    'context_og_condition_group_type' => array(
      'values' => array(
        '_any_' => '_any_',
      ),
      'options' => array(
        'node_form' => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-60f04ee42bd46b39d66ec5d1b86b5d88' => array(
          'module' => 'views',
          'delta' => '60f04ee42bd46b39d66ec5d1b86b5d88',
          'region' => 'sidebar_second',
          'weight' => '0',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Shows recent activity messages for group activity');
  t('message feature');
  $export['recent_activity_group_integration_block'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'recent_activity_node_block';
  $context->description = 'Shows recent activity messages for group activity';
  $context->tag = 'message feature';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        '~integration' => '~integration',
      ),
    ),
    'context_og_condition_group_type' => array(
      'values' => array(
        '_any_' => '_any_',
      ),
      'options' => array(
        'node_form' => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-recent_activity-node_block' => array(
          'module' => 'views',
          'delta' => 'recent_activity-node_block',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Shows recent activity messages for group activity');
  t('message feature');
  $export['recent_activity_node_block'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'recent_activity_term_block';
  $context->description = '';
  $context->tag = 'message feature';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        '~integration' => '~integration',
      ),
    ),
    'path' => array(
      'values' => array(
        'taxonomy/term/*' => 'taxonomy/term/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-recent_activity-term_block' => array(
          'module' => 'views',
          'delta' => 'recent_activity-term_block',
          'region' => 'sidebar_second',
          'weight' => '1',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('message feature');
  $export['recent_activity_term_block'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'recent_activity_user_block';
  $context->description = '';
  $context->tag = 'message feature';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        '~integration' => '~integration',
      ),
    ),
    'path' => array(
      'values' => array(
        'user' => 'user',
        'user/*' => 'user/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-recent_activity-user_block' => array(
          'module' => 'views',
          'delta' => 'recent_activity-user_block',
          'region' => 'sidebar_second',
          'weight' => '0',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('message feature');
  $export['recent_activity_user_block'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'recent_activity_user_integration_block';
  $context->description = 'Shows recent activity messages for group activity';
  $context->tag = 'message feature';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        'integration' => 'integration',
      ),
    ),
    'path' => array(
      'values' => array(
        'user/*' => 'user/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-5bf1b2950732328df148a878fe6e3179' => array(
          'module' => 'views',
          'delta' => '5bf1b2950732328df148a878fe6e3179',
          'region' => 'sidebar_second',
          'weight' => '0',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Shows recent activity messages for group activity');
  t('message feature');
  $export['recent_activity_user_integration_block'] = $context;

  return $export;
}

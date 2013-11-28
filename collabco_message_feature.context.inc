<?php
/**
 * @file
 * collabco_message_feature.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function collabco_message_feature_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'recent_activity_block';
  $context->description = 'Shows normal recent activity message block, except on group pages';
  $context->tag = 'message feature';
  $context->conditions = array(
    'context_og_condition_group_type' => array(
      'values' => array(
        '_none_' => '_none_',
      ),
      'options' => array(
        'node_form' => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-recent_activity-block' => array(
          'module' => 'views',
          'delta' => 'recent_activity-block',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Shows normal recent activity message block, except on group pages');
  t('message feature');
  $export['recent_activity_block'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'recent_activity_group_block';
  $context->description = 'Shows recent activity messages for group activity';
  $context->tag = 'message feature';
  $context->conditions = array(
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
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Shows recent activity messages for group activity');
  t('message feature');
  $export['recent_activity_group_block'] = $context;

  return $export;
}

<?php
/**
 * @file
 * obb_event_teams_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function obb_event_teams_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: create field_ding_sale_date.
  $permissions['create field_ding_sale_date'] = array(
    'name' => 'create field_ding_sale_date',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'formidler' => 'formidler',
      'lokalredaktør' => 'lokalredaktør',
      'redaktør' => 'redaktør',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_ding_sale_date.
  $permissions['edit field_ding_sale_date'] = array(
    'name' => 'edit field_ding_sale_date',
    'roles' => array(
      'administrator' => 'administrator',
      'formidler' => 'formidler',
      'lokalredaktør' => 'lokalredaktør',
      'redaktør' => 'redaktør',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_ding_sale_date.
  $permissions['edit own field_ding_sale_date'] = array(
    'name' => 'edit own field_ding_sale_date',
    'roles' => array(
      'administrator' => 'administrator',
      'formidler' => 'formidler',
      'lokalredaktør' => 'lokalredaktør',
      'redaktør' => 'redaktør',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_ding_sale_date.
  $permissions['view field_ding_sale_date'] = array(
    'name' => 'view field_ding_sale_date',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'formidler' => 'formidler',
      'lokalredaktør' => 'lokalredaktør',
      'redaktør' => 'redaktør',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_ding_sale_date.
  $permissions['view own field_ding_sale_date'] = array(
    'name' => 'view own field_ding_sale_date',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'formidler' => 'formidler',
      'lokalredaktør' => 'lokalredaktør',
      'redaktør' => 'redaktør',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}

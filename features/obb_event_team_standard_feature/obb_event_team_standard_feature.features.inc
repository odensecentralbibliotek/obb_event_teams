<?php
/**
 * @file
 * obb_event_team_standard_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function obb_event_team_standard_feature_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

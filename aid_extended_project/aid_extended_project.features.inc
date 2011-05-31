<?php
/**
 * @file
 * aid_extended_project.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function aid_extended_project_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_views_api().
 */
function aid_extended_project_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => 3.0);
  }
}

<?php
/**
 * @file
 * aid_extended_media_coverage.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function aid_extended_media_coverage_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

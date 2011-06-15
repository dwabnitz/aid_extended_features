<?php
/**
 * @file
 * aid_extended_event.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function aid_extended_event_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

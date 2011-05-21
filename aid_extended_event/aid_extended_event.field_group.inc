<?php
/**
 * @file
 * aid_extended_event.field_group.inc
 */

/**
 * Implementation of hook_field_group_info().
 */
function aid_extended_event_field_group_info() {
  $export = array();

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_admin_meta|node|event|form';
  $field_group->group_name = 'group_event_admin_meta';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Administrative Metadata',
    'weight' => '16',
    'children' => array(
      0 => 'field_event_internal',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_event_admin_meta|node|event|form'] = $field_group;

  return $export;
}

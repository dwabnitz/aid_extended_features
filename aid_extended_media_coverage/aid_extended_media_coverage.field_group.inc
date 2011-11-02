<?php
/**
 * @file
 * aid_extended_media_coverage.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function aid_extended_media_coverage_field_group_info() {
  $export = array();

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media_coverage_associated|node|media_coverage|form';
  $field_group->group_name = 'group_media_coverage_associated';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'media_coverage';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Associated Content',
    'weight' => '8',
    'children' => array(
      0 => 'field_media_coverage_assets',
      1 => 'field_media_coverage_attachments',
      2 => 'field_media_coverage_biblio',
      3 => 'field_media_coverage_profile',
      4 => 'field_media_coverage_project',
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
  $export['group_media_coverage_associated|node|media_coverage|form'] = $field_group;

  return $export;
}

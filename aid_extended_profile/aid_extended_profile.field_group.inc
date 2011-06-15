<?php
/**
 * @file
 * aid_extended_profile.field_group.inc
 */

/**
 * Implementation of hook_field_group_info().
 */
function aid_extended_profile_field_group_info() {
  $export = array();

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile_admin_meta|node|profile|form';
  $field_group->group_name = 'group_profile_admin_meta';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Administrative Metadata',
    'weight' => '21',
    'children' => array(),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_profile_admin_meta|node|profile|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile_associated_content|node|profile|form';
  $field_group->group_name = 'group_profile_associated_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Associated Content ',
    'weight' => '20',
    'children' => array(
      0 => 'field_profile_related_nodes',
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
  $export['group_profile_associated_content|node|profile|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile_classification|node|profile|form';
  $field_group->group_name = 'group_profile_classification';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Classification',
    'weight' => '18',
    'children' => array(
      0 => 'field_profile_department',
      1 => 'field_profile_expertise',
      2 => 'field_profile_media_expertise',
      3 => 'field_profile_tags',
      4 => 'field_profile_research_areas',
      5 => 'field_profile_research_programs',
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
  $export['group_profile_classification|node|profile|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile_links|node|profile|form';
  $field_group->group_name = 'group_profile_links';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Links',
    'weight' => '19',
    'children' => array(
      0 => 'field_profile_social_media',
      1 => 'field_profile_urls',
      2 => 'field_profile_website',
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
  $export['group_profile_links|node|profile|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile_staff|node|profile|form';
  $field_group->group_name = 'group_profile_staff';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Staff Information',
    'weight' => '17',
    'children' => array(
      0 => 'field_profile_staff_status',
      1 => 'field_profile_title_job',
      2 => 'field_profile_gender',
      3 => 'field_profile_internal_email',
      4 => 'field_profile_staff_external',
      5 => 'field_profile_staff_position',
      6 => 'field_profile_staff_rec_no',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Staff Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_profile_staff|node|profile|form'] = $field_group;

  return $export;
}

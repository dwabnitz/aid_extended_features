<?php
/**
 * @file
 * aid_extended_project.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function aid_extended_project_field_group_info() {
  $export = array();

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project_admin_meta|node|project|form';
  $field_group->group_name = 'group_project_admin_meta';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Administrative Metadata',
    'weight' => '13',
    'children' => array(
      0 => 'field_project_number',
      1 => 'field_project_type',
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
  $export['group_project_admin_meta|node|project|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project_associated_content|node|project|form';
  $field_group->group_name = 'group_project_associated_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Associated Content',
    'weight' => '12',
    'children' => array(
      0 => 'field_project_media_assets',
      1 => 'field_project_publications',
      2 => 'field_project_related_nodes',
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
  $export['group_project_associated_content|node|project|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project_classification|node|project|form';
  $field_group->group_name = 'group_project_classification';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Classification',
    'weight' => '10',
    'children' => array(
      0 => 'field_project_data_sources',
      1 => 'field_project_department',
      2 => 'field_project_funding',
      3 => 'field_project_geo_areas',
      4 => 'field_project_research_areas',
      5 => 'field_project_research_programs',
      6 => 'field_project_tags',
      7 => 'field_project_topics',
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
  $export['group_project_classification|node|project|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project_collaborators|node|project|form';
  $field_group->group_name = 'group_project_collaborators';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Collaborators',
    'weight' => '7',
    'children' => array(
      0 => 'field_project_directors',
      1 => 'field_project_researchers',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_project_collaborators|node|project|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project_links|node|project|form';
  $field_group->group_name = 'group_project_links';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Links',
    'weight' => '11',
    'children' => array(
      0 => 'field_project_urls',
      1 => 'field_project_website',
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
  $export['group_project_links|node|project|form'] = $field_group;

  return $export;
}

<?php
/**
 * @file
 * aid_extended_biblio.field_group.inc
 */

/**
 * Implementation of hook_field_group_info().
 */
function aid_extended_biblio_field_group_info() {
  $export = array();

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_biblio_associated_content|node|biblio|form';
  $field_group->group_name = 'group_biblio_associated_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'biblio';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Associated Content',
    'weight' => '4',
    'children' => array(
      0 => 'field_biblio_media_assets',
      1 => 'field_biblio_projects',
      2 => 'field_biblio_related_nodes',
      3 => 'field_biblio_related_publi',
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
  $export['group_biblio_associated_content|node|biblio|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_biblio_classification|node|biblio|form';
  $field_group->group_name = 'group_biblio_classification';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'biblio';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Classification',
    'weight' => '2',
    'children' => array(
      0 => 'field_biblio_data_sources',
      1 => 'field_biblio_department',
      2 => 'field_biblio_geo_areas',
      3 => 'field_biblio_research_areas',
      4 => 'field_biblio_research_programs',
      5 => 'field_biblio_tags',
      6 => 'field_biblio_topics',
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
  $export['group_biblio_classification|node|biblio|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_biblio_links|node|biblio|form';
  $field_group->group_name = 'group_biblio_links';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'biblio';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Links',
    'weight' => '3',
    'children' => array(
      0 => 'field_biblio_url_extras',
      1 => 'field_biblio_url_fulltext',
      2 => 'field_biblio_url_publisher',
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
  $export['group_biblio_links|node|biblio|form'] = $field_group;

  return $export;
}

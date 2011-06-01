<?php
/**
 * @file
 * aid_extended_project.views_default.inc
 */

/**
 * Implementation of hook_views_default_views().
 */
function aid_extended_project_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'projects';
  $view->description = 'Displays of project content.';
  $view->tag = 'content';
  $view->base_table = 'node';
  $view->human_name = 'Projects';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Projects';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = 'field_project_research_areas';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  /* Field: Content: Research Areas */
  $handler->display->display_options['fields']['field_project_research_areas']['id'] = 'field_project_research_areas';
  $handler->display->display_options['fields']['field_project_research_areas']['table'] = 'field_data_field_project_research_areas';
  $handler->display->display_options['fields']['field_project_research_areas']['field'] = 'field_project_research_areas';
  $handler->display->display_options['fields']['field_project_research_areas']['label'] = '';
  $handler->display->display_options['fields']['field_project_research_areas']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_project_research_areas']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_project_research_areas']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_project_research_areas']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_project_research_areas']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_project_research_areas']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_project_research_areas']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_project_research_areas']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_project_research_areas']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_project_research_areas']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_project_research_areas']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_project_research_areas']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_project_research_areas']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_research_areas']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_project_research_areas']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_project_research_areas']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_project_research_areas']['click_sort_column'] = 'tid';
  $handler->display->display_options['fields']['field_project_research_areas']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_project_research_areas']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_project_research_areas']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_project_research_areas']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );
  $handler->display->display_options['filters']['type']['group'] = 0;
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['group'] = 0;
  /* Filter criterion: Fields: Status (field_project_status) */
  $handler->display->display_options['filters']['field_project_status_value']['id'] = 'field_project_status_value';
  $handler->display->display_options['filters']['field_project_status_value']['table'] = 'field_data_field_project_status';
  $handler->display->display_options['filters']['field_project_status_value']['field'] = 'field_project_status_value';
  $handler->display->display_options['filters']['field_project_status_value']['value'] = array(
    1 => '1',
    2 => '2',
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['filters']['field_project_status_value']['group'] = 0;
  $handler->display->display_options['filters']['field_project_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_project_status_value']['expose']['operator_id'] = 'field_project_status_value_op';
  $handler->display->display_options['filters']['field_project_status_value']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_project_status_value']['expose']['operator'] = 'field_project_status_value_op';
  $handler->display->display_options['filters']['field_project_status_value']['expose']['identifier'] = 'field_project_status_value';
  $handler->display->display_options['filters']['field_project_status_value']['expose']['reduce'] = 1;
  /* Filter criterion: Fields: Department (field_project_department) - tid */
  $handler->display->display_options['filters']['field_project_department_tid']['id'] = 'field_project_department_tid';
  $handler->display->display_options['filters']['field_project_department_tid']['table'] = 'field_data_field_project_department';
  $handler->display->display_options['filters']['field_project_department_tid']['field'] = 'field_project_department_tid';
  $handler->display->display_options['filters']['field_project_department_tid']['operator'] = 'or';
  $handler->display->display_options['filters']['field_project_department_tid']['group'] = 0;
  $handler->display->display_options['filters']['field_project_department_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_project_department_tid']['expose']['operator_id'] = 'field_project_department_tid_op';
  $handler->display->display_options['filters']['field_project_department_tid']['expose']['label'] = 'Department';
  $handler->display->display_options['filters']['field_project_department_tid']['expose']['operator'] = 'field_project_department_tid_op';
  $handler->display->display_options['filters']['field_project_department_tid']['expose']['identifier'] = 'field_project_department_tid';
  $handler->display->display_options['filters']['field_project_department_tid']['expose']['multiple'] = 1;
  /* Filter criterion: Fields: Geographical Areas (field_project_geo_areas) - tid */
  $handler->display->display_options['filters']['field_project_geo_areas_tid']['id'] = 'field_project_geo_areas_tid';
  $handler->display->display_options['filters']['field_project_geo_areas_tid']['table'] = 'field_data_field_project_geo_areas';
  $handler->display->display_options['filters']['field_project_geo_areas_tid']['field'] = 'field_project_geo_areas_tid';
  $handler->display->display_options['filters']['field_project_geo_areas_tid']['operator'] = 'or';
  $handler->display->display_options['filters']['field_project_geo_areas_tid']['group'] = 0;
  $handler->display->display_options['filters']['field_project_geo_areas_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_project_geo_areas_tid']['expose']['operator_id'] = 'field_project_geo_areas_tid_op';
  $handler->display->display_options['filters']['field_project_geo_areas_tid']['expose']['label'] = 'Geogr. Areas';
  $handler->display->display_options['filters']['field_project_geo_areas_tid']['expose']['operator'] = 'field_project_geo_areas_tid_op';
  $handler->display->display_options['filters']['field_project_geo_areas_tid']['expose']['identifier'] = 'field_project_geo_areas_tid';
  $handler->display->display_options['filters']['field_project_geo_areas_tid']['expose']['multiple'] = 1;
  /* Filter criterion: Fields: Research Areas (field_project_research_areas) - tid */
  $handler->display->display_options['filters']['field_project_research_areas_tid']['id'] = 'field_project_research_areas_tid';
  $handler->display->display_options['filters']['field_project_research_areas_tid']['table'] = 'field_data_field_project_research_areas';
  $handler->display->display_options['filters']['field_project_research_areas_tid']['field'] = 'field_project_research_areas_tid';
  $handler->display->display_options['filters']['field_project_research_areas_tid']['operator'] = 'or';
  $handler->display->display_options['filters']['field_project_research_areas_tid']['group'] = 0;
  $handler->display->display_options['filters']['field_project_research_areas_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_project_research_areas_tid']['expose']['operator_id'] = 'field_project_research_areas_tid_op';
  $handler->display->display_options['filters']['field_project_research_areas_tid']['expose']['label'] = 'Research Areas';
  $handler->display->display_options['filters']['field_project_research_areas_tid']['expose']['operator'] = 'field_project_research_areas_tid_op';
  $handler->display->display_options['filters']['field_project_research_areas_tid']['expose']['identifier'] = 'field_project_research_areas_tid';
  $handler->display->display_options['filters']['field_project_research_areas_tid']['expose']['multiple'] = 1;
  /* Filter criterion: Fields: Topics (field_project_topics) - tid */
  $handler->display->display_options['filters']['field_project_topics_tid']['id'] = 'field_project_topics_tid';
  $handler->display->display_options['filters']['field_project_topics_tid']['table'] = 'field_data_field_project_topics';
  $handler->display->display_options['filters']['field_project_topics_tid']['field'] = 'field_project_topics_tid';
  $handler->display->display_options['filters']['field_project_topics_tid']['operator'] = 'or';
  $handler->display->display_options['filters']['field_project_topics_tid']['group'] = 0;
  $handler->display->display_options['filters']['field_project_topics_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_project_topics_tid']['expose']['operator_id'] = 'field_project_topics_tid_op';
  $handler->display->display_options['filters']['field_project_topics_tid']['expose']['label'] = 'Topics';
  $handler->display->display_options['filters']['field_project_topics_tid']['expose']['operator'] = 'field_project_topics_tid_op';
  $handler->display->display_options['filters']['field_project_topics_tid']['expose']['identifier'] = 'field_project_topics_tid';
  $handler->display->display_options['filters']['field_project_topics_tid']['expose']['multiple'] = 1;

  /* Display: Projects */
  $handler = $view->new_display('page', 'Projects', 'page');
  $handler->display->display_options['display_description'] = 'Displays a list of projects grouped by research area.';
  $handler->display->display_options['path'] = 'projects-list';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Projects';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $translatables['projects'] = array(
    t('Master'),
    t('Projects'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Status'),
    t('Department'),
    t('Geogr. Areas'),
    t('Research Areas'),
    t('Topics'),
    t('Displays a list of projects grouped by research area.'),
  );
  $export['projects'] = $view;

  return $export;
}
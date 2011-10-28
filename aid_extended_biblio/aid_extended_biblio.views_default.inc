<?php
/**
 * @file
 * aid_extended_biblio.views_default.inc
 */

/**
 * Implementation of hook_views_default_views().
 */
function aid_extended_biblio_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'publications';
  $view->description = 'Displays of publications content';
  $view->tag = 'content';
  $view->base_table = 'node';
  $view->human_name = 'Publications';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Publications';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = 0;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = 0;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '10, 25, 50, 100';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = 'biblio_year';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Field: Biblio: Biblio Citation */
  $handler->display->display_options['fields']['citation']['id'] = 'citation';
  $handler->display->display_options['fields']['citation']['table'] = 'biblio';
  $handler->display->display_options['fields']['citation']['field'] = 'citation';
  $handler->display->display_options['fields']['citation']['label'] = '';
  $handler->display->display_options['fields']['citation']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['citation']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['citation']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['citation']['alter']['external'] = 0;
  $handler->display->display_options['fields']['citation']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['citation']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['citation']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['citation']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['citation']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['citation']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['citation']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['citation']['alter']['html'] = 0;
  $handler->display->display_options['fields']['citation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['citation']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['citation']['hide_empty'] = 0;
  $handler->display->display_options['fields']['citation']['empty_zero'] = 0;
  $handler->display->display_options['fields']['citation']['hide_alter_empty'] = 0;
  /* Sort criterion: Biblio: Date Published */
  $handler->display->display_options['sorts']['biblio_date']['id'] = 'biblio_date';
  $handler->display->display_options['sorts']['biblio_date']['table'] = 'biblio';
  $handler->display->display_options['sorts']['biblio_date']['field'] = 'biblio_date';
  $handler->display->display_options['sorts']['biblio_date']['order'] = 'DESC';
  /* Sort criterion: Biblio: Year of Publication */
  $handler->display->display_options['sorts']['biblio_year']['id'] = 'biblio_year';
  $handler->display->display_options['sorts']['biblio_year']['table'] = 'biblio';
  $handler->display->display_options['sorts']['biblio_year']['field'] = 'biblio_year';
  $handler->display->display_options['sorts']['biblio_year']['order'] = 'DESC';
  $handler->display->display_options['sorts']['biblio_year']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['biblio_year']['expose']['label'] = 'Year';
  /* Sort criterion: Biblio: Author last name */
  $handler->display->display_options['sorts']['lastname']['id'] = 'lastname';
  $handler->display->display_options['sorts']['lastname']['table'] = 'biblio_contributor_data';
  $handler->display->display_options['sorts']['lastname']['field'] = 'lastname';
  $handler->display->display_options['sorts']['lastname']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['lastname']['expose']['label'] = 'Author';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['group'] = 0;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'biblio' => 'biblio',
  );
  $handler->display->display_options['filters']['type']['group'] = 0;
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['group'] = 0;
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Search Terms';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  $handler->display->display_options['filters']['keys']['expose']['multiple'] = FALSE;
  /* Filter criterion: Biblio: Type of Publication */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'biblio_types';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['group'] = 0;
  $handler->display->display_options['filters']['tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['expose']['reduce'] = 0;
  /* Filter criterion: Biblio: Year of Publication */
  $handler->display->display_options['filters']['biblio_year']['id'] = 'biblio_year';
  $handler->display->display_options['filters']['biblio_year']['table'] = 'biblio';
  $handler->display->display_options['filters']['biblio_year']['field'] = 'biblio_year';
  $handler->display->display_options['filters']['biblio_year']['group'] = 0;
  $handler->display->display_options['filters']['biblio_year']['exposed'] = TRUE;
  $handler->display->display_options['filters']['biblio_year']['expose']['operator_id'] = 'biblio_year_op';
  $handler->display->display_options['filters']['biblio_year']['expose']['label'] = 'Year';
  $handler->display->display_options['filters']['biblio_year']['expose']['use_operator'] = 1;
  $handler->display->display_options['filters']['biblio_year']['expose']['operator'] = 'biblio_year_op';
  $handler->display->display_options['filters']['biblio_year']['expose']['identifier'] = 'biblio_year';
  $handler->display->display_options['filters']['biblio_year']['expose']['multiple'] = FALSE;
  /* Filter criterion: Content: Department (field_biblio_department) */
  $handler->display->display_options['filters']['field_biblio_department_tid']['id'] = 'field_biblio_department_tid';
  $handler->display->display_options['filters']['field_biblio_department_tid']['table'] = 'field_data_field_biblio_department';
  $handler->display->display_options['filters']['field_biblio_department_tid']['field'] = 'field_biblio_department_tid';
  $handler->display->display_options['filters']['field_biblio_department_tid']['value'] = array(
    4 => '4',
    5 => '5',
  );
  $handler->display->display_options['filters']['field_biblio_department_tid']['group'] = 0;
  $handler->display->display_options['filters']['field_biblio_department_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_biblio_department_tid']['expose']['operator_id'] = 'field_biblio_department_tid_op';
  $handler->display->display_options['filters']['field_biblio_department_tid']['expose']['label'] = 'Department';
  $handler->display->display_options['filters']['field_biblio_department_tid']['expose']['operator'] = 'field_biblio_department_tid_op';
  $handler->display->display_options['filters']['field_biblio_department_tid']['expose']['identifier'] = 'department';
  $handler->display->display_options['filters']['field_biblio_department_tid']['expose']['remember'] = 1;
  $handler->display->display_options['filters']['field_biblio_department_tid']['expose']['reduce'] = 1;
  $handler->display->display_options['filters']['field_biblio_department_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_biblio_department_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_biblio_department_tid']['vocabulary'] = 'org_structure';
  $handler->display->display_options['filters']['field_biblio_department_tid']['error_message'] = 1;
  /* Filter criterion: Content: Research Areas (field_biblio_research_areas) */
  $handler->display->display_options['filters']['field_biblio_research_areas_tid']['id'] = 'field_biblio_research_areas_tid';
  $handler->display->display_options['filters']['field_biblio_research_areas_tid']['table'] = 'field_data_field_biblio_research_areas';
  $handler->display->display_options['filters']['field_biblio_research_areas_tid']['field'] = 'field_biblio_research_areas_tid';
  $handler->display->display_options['filters']['field_biblio_research_areas_tid']['value'] = array(
    26 => '26',
    22 => '22',
    27 => '27',
    23 => '23',
    28 => '28',
    24 => '24',
    25 => '25',
    29 => '29',
  );
  $handler->display->display_options['filters']['field_biblio_research_areas_tid']['group'] = 0;
  $handler->display->display_options['filters']['field_biblio_research_areas_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_biblio_research_areas_tid']['expose']['operator_id'] = 'field_biblio_research_areas_tid_op';
  $handler->display->display_options['filters']['field_biblio_research_areas_tid']['expose']['label'] = 'Research Area';
  $handler->display->display_options['filters']['field_biblio_research_areas_tid']['expose']['operator'] = 'field_biblio_research_areas_tid_op';
  $handler->display->display_options['filters']['field_biblio_research_areas_tid']['expose']['identifier'] = 'field_biblio_research_areas_tid';
  $handler->display->display_options['filters']['field_biblio_research_areas_tid']['expose']['remember'] = 1;
  $handler->display->display_options['filters']['field_biblio_research_areas_tid']['expose']['reduce'] = 1;
  $handler->display->display_options['filters']['field_biblio_research_areas_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_biblio_research_areas_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_biblio_research_areas_tid']['vocabulary'] = 'research_areas';
  $handler->display->display_options['filters']['field_biblio_research_areas_tid']['error_message'] = 1;
  /* Filter criterion: Content: Geographical Areas (field_biblio_geo_areas) */
  $handler->display->display_options['filters']['field_biblio_geo_areas_tid']['id'] = 'field_biblio_geo_areas_tid';
  $handler->display->display_options['filters']['field_biblio_geo_areas_tid']['table'] = 'field_data_field_biblio_geo_areas';
  $handler->display->display_options['filters']['field_biblio_geo_areas_tid']['field'] = 'field_biblio_geo_areas_tid';
  $handler->display->display_options['filters']['field_biblio_geo_areas_tid']['group'] = 0;
  $handler->display->display_options['filters']['field_biblio_geo_areas_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_biblio_geo_areas_tid']['expose']['operator_id'] = 'field_biblio_geo_areas_tid_op';
  $handler->display->display_options['filters']['field_biblio_geo_areas_tid']['expose']['label'] = 'Geographical Area';
  $handler->display->display_options['filters']['field_biblio_geo_areas_tid']['expose']['operator'] = 'field_biblio_geo_areas_tid_op';
  $handler->display->display_options['filters']['field_biblio_geo_areas_tid']['expose']['identifier'] = 'field_biblio_geo_areas_tid';
  $handler->display->display_options['filters']['field_biblio_geo_areas_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_biblio_geo_areas_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_biblio_geo_areas_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_biblio_geo_areas_tid']['vocabulary'] = 'geographical_areas';
  $handler->display->display_options['filters']['field_biblio_geo_areas_tid']['hierarchy'] = 1;
  $handler->display->display_options['filters']['field_biblio_geo_areas_tid']['error_message'] = 1;
  /* Filter criterion: Content: Topics (field_biblio_topics) */
  $handler->display->display_options['filters']['field_biblio_topics_tid']['id'] = 'field_biblio_topics_tid';
  $handler->display->display_options['filters']['field_biblio_topics_tid']['table'] = 'field_data_field_biblio_topics';
  $handler->display->display_options['filters']['field_biblio_topics_tid']['field'] = 'field_biblio_topics_tid';
  $handler->display->display_options['filters']['field_biblio_topics_tid']['group'] = 0;
  $handler->display->display_options['filters']['field_biblio_topics_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_biblio_topics_tid']['expose']['operator_id'] = 'field_biblio_topics_tid_op';
  $handler->display->display_options['filters']['field_biblio_topics_tid']['expose']['label'] = 'Topic';
  $handler->display->display_options['filters']['field_biblio_topics_tid']['expose']['operator'] = 'field_biblio_topics_tid_op';
  $handler->display->display_options['filters']['field_biblio_topics_tid']['expose']['identifier'] = 'field_biblio_topics_tid';
  $handler->display->display_options['filters']['field_biblio_topics_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_biblio_topics_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_biblio_topics_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_biblio_topics_tid']['vocabulary'] = 'topics';
  $handler->display->display_options['filters']['field_biblio_topics_tid']['hierarchy'] = 1;
  $handler->display->display_options['filters']['field_biblio_topics_tid']['error_message'] = 1;

  /* Display: Publications */
  $handler = $view->new_display('page', 'Publications', 'publications_page');
  $handler->display->display_options['display_description'] = 'Publications standard page display.';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'publications-list';
  $handler->display->display_options['menu']['title'] = 'Filter Publications';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['tab_options']['type'] = 'tab';
  $handler->display->display_options['tab_options']['title'] = 'Test';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'main-menu';
  $export['publications'] = $view;

  return $export;
}

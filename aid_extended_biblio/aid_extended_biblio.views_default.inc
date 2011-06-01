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
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = 'biblio_year';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Biblio: Year of Publication */
  $handler->display->display_options['fields']['biblio_year']['id'] = 'biblio_year';
  $handler->display->display_options['fields']['biblio_year']['table'] = 'biblio';
  $handler->display->display_options['fields']['biblio_year']['field'] = 'biblio_year';
  $handler->display->display_options['fields']['biblio_year']['label'] = '';
  $handler->display->display_options['fields']['biblio_year']['exclude'] = TRUE;
  $handler->display->display_options['fields']['biblio_year']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['biblio_year']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['biblio_year']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['biblio_year']['alter']['external'] = 0;
  $handler->display->display_options['fields']['biblio_year']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['biblio_year']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['biblio_year']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['biblio_year']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['biblio_year']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['biblio_year']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['biblio_year']['alter']['html'] = 0;
  $handler->display->display_options['fields']['biblio_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['biblio_year']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['biblio_year']['hide_empty'] = 0;
  $handler->display->display_options['fields']['biblio_year']['empty_zero'] = 0;
  $handler->display->display_options['fields']['biblio_year']['biblio_label'] = 0;
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
  $handler->display->display_options['fields']['citation']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['citation']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['citation']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['citation']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['citation']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['citation']['alter']['html'] = 0;
  $handler->display->display_options['fields']['citation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['citation']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['citation']['hide_empty'] = 0;
  $handler->display->display_options['fields']['citation']['empty_zero'] = 0;
  /* Sort criterion: Biblio: Year of Publication */
  $handler->display->display_options['sorts']['biblio_year']['id'] = 'biblio_year';
  $handler->display->display_options['sorts']['biblio_year']['table'] = 'biblio';
  $handler->display->display_options['sorts']['biblio_year']['field'] = 'biblio_year';
  $handler->display->display_options['sorts']['biblio_year']['order'] = 'DESC';
  /* Sort criterion: Biblio: Date Published */
  $handler->display->display_options['sorts']['biblio_date']['id'] = 'biblio_date';
  $handler->display->display_options['sorts']['biblio_date']['table'] = 'biblio';
  $handler->display->display_options['sorts']['biblio_date']['field'] = 'biblio_date';
  $handler->display->display_options['sorts']['biblio_date']['order'] = 'DESC';
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  $handler->display->display_options['sorts']['changed']['granularity'] = 'minute';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created_1']['id'] = 'created_1';
  $handler->display->display_options['sorts']['created_1']['table'] = 'node';
  $handler->display->display_options['sorts']['created_1']['field'] = 'created';
  $handler->display->display_options['sorts']['created_1']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created_1']['granularity'] = 'minute';
  /* Contextual filter: Biblio: Type of Publication */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'biblio_types';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  /* Contextual filter: Biblio: Year of Publication */
  $handler->display->display_options['arguments']['biblio_year']['id'] = 'biblio_year';
  $handler->display->display_options['arguments']['biblio_year']['table'] = 'biblio';
  $handler->display->display_options['arguments']['biblio_year']['field'] = 'biblio_year';
  $handler->display->display_options['arguments']['biblio_year']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['biblio_year']['summary']['format'] = 'default_summary';
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
  /* Filter criterion: Fields: Department (field_biblio_department) - tid */
  $handler->display->display_options['filters']['field_biblio_department_tid']['id'] = 'field_biblio_department_tid';
  $handler->display->display_options['filters']['field_biblio_department_tid']['table'] = 'field_data_field_biblio_department';
  $handler->display->display_options['filters']['field_biblio_department_tid']['field'] = 'field_biblio_department_tid';
  $handler->display->display_options['filters']['field_biblio_department_tid']['operator'] = 'or';
  $handler->display->display_options['filters']['field_biblio_department_tid']['group'] = 0;
  $handler->display->display_options['filters']['field_biblio_department_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_biblio_department_tid']['expose']['operator_id'] = 'field_biblio_department_tid_op';
  $handler->display->display_options['filters']['field_biblio_department_tid']['expose']['label'] = 'Department';
  $handler->display->display_options['filters']['field_biblio_department_tid']['expose']['operator'] = 'field_biblio_department_tid_op';
  $handler->display->display_options['filters']['field_biblio_department_tid']['expose']['identifier'] = 'field_biblio_department_tid';
  /* Filter criterion: Fields: Topics (field_biblio_topics) - tid */
  $handler->display->display_options['filters']['field_biblio_topics_tid']['id'] = 'field_biblio_topics_tid';
  $handler->display->display_options['filters']['field_biblio_topics_tid']['table'] = 'field_data_field_biblio_topics';
  $handler->display->display_options['filters']['field_biblio_topics_tid']['field'] = 'field_biblio_topics_tid';
  $handler->display->display_options['filters']['field_biblio_topics_tid']['operator'] = 'or';
  $handler->display->display_options['filters']['field_biblio_topics_tid']['group'] = 0;
  $handler->display->display_options['filters']['field_biblio_topics_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_biblio_topics_tid']['expose']['operator_id'] = 'field_biblio_topics_tid_op';
  $handler->display->display_options['filters']['field_biblio_topics_tid']['expose']['label'] = 'Topic';
  $handler->display->display_options['filters']['field_biblio_topics_tid']['expose']['operator'] = 'field_biblio_topics_tid_op';
  $handler->display->display_options['filters']['field_biblio_topics_tid']['expose']['identifier'] = 'field_biblio_topics_tid';
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

  /* Display: Publications */
  $handler = $view->new_display('page', 'Publications', 'publications_page');
  $handler->display->display_options['display_description'] = 'Publications standard page display.';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Biblio: Type of Publication */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'biblio_types';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'unformatted_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['summary_options']['inline'] = 0;
  $handler->display->display_options['arguments']['name']['glossary'] = 0;
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['arguments']['name']['path_case'] = 'lower';
  $handler->display->display_options['arguments']['name']['transform_dash'] = 1;
  $handler->display->display_options['arguments']['name']['break_phrase'] = 0;
  /* Contextual filter: Biblio: Year of Publication */
  $handler->display->display_options['arguments']['biblio_year']['id'] = 'biblio_year';
  $handler->display->display_options['arguments']['biblio_year']['table'] = 'biblio';
  $handler->display->display_options['arguments']['biblio_year']['field'] = 'biblio_year';
  $handler->display->display_options['arguments']['biblio_year']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['biblio_year']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['biblio_year']['summary']['sort_order'] = 'desc';
  $handler->display->display_options['arguments']['biblio_year']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['biblio_year']['summary']['format'] = 'unformatted_summary';
  $handler->display->display_options['arguments']['biblio_year']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['biblio_year']['summary_options']['inline'] = '1';
  $handler->display->display_options['arguments']['biblio_year']['summary_options']['separator'] = ' | ';
  $handler->display->display_options['arguments']['biblio_year']['break_phrase'] = 1;
  $handler->display->display_options['arguments']['biblio_year']['not'] = 0;
  $handler->display->display_options['path'] = 'publications-list';
  $handler->display->display_options['menu']['title'] = 'Publications';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $translatables['publications'] = array(
    t('Master'),
    t('Publications'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('All'),
    t('Type'),
    t('Year'),
    t('Department'),
    t('Topic'),
    t('Search Terms'),
    t('Publications standard page display.'),
  );
  $export['publications'] = $view;

  return $export;
}

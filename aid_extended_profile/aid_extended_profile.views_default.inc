<?php
/**
 * @file
 * aid_extended_profile.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function aid_extended_profile_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'profiles';
  $view->description = 'Displays of profile content.';
  $view->tag = 'content';
  $view->base_table = 'node';
  $view->human_name = 'Profiles';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Staff Directory';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = 0;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = 1;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_profile_last_name' => 'field_profile_last_name',
    'field_profile_first_name' => 'field_profile_first_name',
  );
  $handler->display->display_options['row_options']['hide_empty'] = 1;
  $handler->display->display_options['row_options']['default_field_elements'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_profile_last_name]';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 1;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: First Name */
  $handler->display->display_options['fields']['field_profile_first_name']['id'] = 'field_profile_first_name';
  $handler->display->display_options['fields']['field_profile_first_name']['table'] = 'field_data_field_profile_first_name';
  $handler->display->display_options['fields']['field_profile_first_name']['field'] = 'field_profile_first_name';
  $handler->display->display_options['fields']['field_profile_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_profile_first_name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_profile_first_name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_profile_first_name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_profile_first_name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_profile_first_name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_profile_first_name']['alter']['trim_whitespace'] = 1;
  $handler->display->display_options['fields']['field_profile_first_name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_profile_first_name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_profile_first_name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_profile_first_name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_profile_first_name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_profile_first_name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_profile_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_first_name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_profile_first_name']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_profile_first_name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_profile_first_name']['field_api_classes'] = 0;
  /* Field: Content: Last Name */
  $handler->display->display_options['fields']['field_profile_last_name']['id'] = 'field_profile_last_name';
  $handler->display->display_options['fields']['field_profile_last_name']['table'] = 'field_data_field_profile_last_name';
  $handler->display->display_options['fields']['field_profile_last_name']['field'] = 'field_profile_last_name';
  $handler->display->display_options['fields']['field_profile_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_profile_last_name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_profile_last_name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_profile_last_name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_profile_last_name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_profile_last_name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_profile_last_name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_profile_last_name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_profile_last_name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_profile_last_name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_profile_last_name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_profile_last_name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_profile_last_name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_profile_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_last_name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_profile_last_name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_profile_last_name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_profile_last_name']['field_api_classes'] = 0;
  /* Sort criterion: Content: Last Name (field_profile_last_name) */
  $handler->display->display_options['sorts']['field_profile_last_name_value']['id'] = 'field_profile_last_name_value';
  $handler->display->display_options['sorts']['field_profile_last_name_value']['table'] = 'field_data_field_profile_last_name';
  $handler->display->display_options['sorts']['field_profile_last_name_value']['field'] = 'field_profile_last_name_value';
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
    'profile' => 'profile',
  );
  $handler->display->display_options['filters']['type']['group'] = 0;
  /* Filter criterion: Content: Staff Member (field_profile_staff) */
  $handler->display->display_options['filters']['field_profile_staff_value']['id'] = 'field_profile_staff_value';
  $handler->display->display_options['filters']['field_profile_staff_value']['table'] = 'field_data_field_profile_staff';
  $handler->display->display_options['filters']['field_profile_staff_value']['field'] = 'field_profile_staff_value';
  $handler->display->display_options['filters']['field_profile_staff_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_profile_staff_value']['group'] = 0;

  /* Display: Staff Directory */
  $handler = $view->new_display('page', 'Staff Directory', 'staff_directory_page');
  $handler->display->display_options['display_description'] = 'Provides a staff directory page.';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'field_profile_last_name',
    'field_profile_last_name' => 'field_profile_last_name',
    'field_profile_phone' => 'field_profile_phone',
    'field_profile_visitor_address' => 'field_profile_visitor_address',
  );
  $handler->display->display_options['style_options']['default'] = 'field_profile_last_name';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => ', ',
    ),
    'field_profile_last_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_profile_phone' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_profile_visitor_address' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Last Name */
  $handler->display->display_options['fields']['field_profile_last_name']['id'] = 'field_profile_last_name';
  $handler->display->display_options['fields']['field_profile_last_name']['table'] = 'field_data_field_profile_last_name';
  $handler->display->display_options['fields']['field_profile_last_name']['field'] = 'field_profile_last_name';
  $handler->display->display_options['fields']['field_profile_last_name']['label'] = 'Name';
  $handler->display->display_options['fields']['field_profile_last_name']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_profile_last_name']['alter']['text'] = '[title]';
  $handler->display->display_options['fields']['field_profile_last_name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_profile_last_name']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_profile_last_name']['alter']['absolute'] = 1;
  $handler->display->display_options['fields']['field_profile_last_name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_profile_last_name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_profile_last_name']['alter']['trim_whitespace'] = 1;
  $handler->display->display_options['fields']['field_profile_last_name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_profile_last_name']['alter']['max_length'] = '0';
  $handler->display->display_options['fields']['field_profile_last_name']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['field_profile_last_name']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['field_profile_last_name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_profile_last_name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_profile_last_name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_profile_last_name']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_profile_last_name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_profile_last_name']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_profile_last_name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_profile_last_name']['field_api_classes'] = 0;
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_profile_phone']['id'] = 'field_profile_phone';
  $handler->display->display_options['fields']['field_profile_phone']['table'] = 'field_data_field_profile_phone';
  $handler->display->display_options['fields']['field_profile_phone']['field'] = 'field_profile_phone';
  /* Field: Content: Visitor Address */
  $handler->display->display_options['fields']['field_profile_visitor_address']['id'] = 'field_profile_visitor_address';
  $handler->display->display_options['fields']['field_profile_visitor_address']['table'] = 'field_data_field_profile_visitor_address';
  $handler->display->display_options['fields']['field_profile_visitor_address']['field'] = 'field_profile_visitor_address';
  $handler->display->display_options['fields']['field_profile_visitor_address']['label'] = 'Room';
  $handler->display->display_options['fields']['field_profile_visitor_address']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_profile_visitor_address']['alter']['text'] = '[field_profile_visitor_address-sub_premise]';
  $handler->display->display_options['fields']['field_profile_visitor_address']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_profile_visitor_address']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_profile_visitor_address']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_profile_visitor_address']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_profile_visitor_address']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_profile_visitor_address']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_profile_visitor_address']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_profile_visitor_address']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_profile_visitor_address']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_profile_visitor_address']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_profile_visitor_address']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_profile_visitor_address']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_profile_visitor_address']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_profile_visitor_address']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_profile_visitor_address']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_profile_visitor_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_profile_visitor_address']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Last Name (field_profile_last_name) */
  $handler->display->display_options['arguments']['field_profile_last_name_value']['id'] = 'field_profile_last_name_value';
  $handler->display->display_options['arguments']['field_profile_last_name_value']['table'] = 'field_data_field_profile_last_name';
  $handler->display->display_options['arguments']['field_profile_last_name_value']['field'] = 'field_profile_last_name_value';
  $handler->display->display_options['arguments']['field_profile_last_name_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_profile_last_name_value']['default_argument_options']['argument'] = 'a';
  $handler->display->display_options['arguments']['field_profile_last_name_value']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_profile_last_name_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_profile_last_name_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_profile_last_name_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_profile_last_name_value']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['field_profile_last_name_value']['glossary'] = 1;
  $handler->display->display_options['arguments']['field_profile_last_name_value']['limit'] = '1';
  $handler->display->display_options['arguments']['field_profile_last_name_value']['case'] = 'upper';
  $handler->display->display_options['arguments']['field_profile_last_name_value']['path_case'] = 'lower';
  $handler->display->display_options['arguments']['field_profile_last_name_value']['transform_dash'] = 1;
  $handler->display->display_options['arguments']['field_profile_last_name_value']['break_phrase'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'profile' => 'profile',
  );
  $handler->display->display_options['filters']['type']['group'] = 0;
  /* Filter criterion: Content: Staff Member (field_profile_staff) */
  $handler->display->display_options['filters']['field_profile_staff_value']['id'] = 'field_profile_staff_value';
  $handler->display->display_options['filters']['field_profile_staff_value']['table'] = 'field_data_field_profile_staff';
  $handler->display->display_options['filters']['field_profile_staff_value']['field'] = 'field_profile_staff_value';
  $handler->display->display_options['filters']['field_profile_staff_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_profile_staff_value']['group'] = 0;
  /* Filter criterion: Content: Department of Staff (field_profile_department) */
  $handler->display->display_options['filters']['field_profile_department_tid']['id'] = 'field_profile_department_tid';
  $handler->display->display_options['filters']['field_profile_department_tid']['table'] = 'field_data_field_profile_department';
  $handler->display->display_options['filters']['field_profile_department_tid']['field'] = 'field_profile_department_tid';
  $handler->display->display_options['filters']['field_profile_department_tid']['value'] = array(
    16 => '16',
    15 => '15',
    13 => '13',
    11 => '11',
    12 => '12',
    3 => '3',
    4 => '4',
    5 => '5',
    6 => '6',
    14 => '14',
    7 => '7',
    8 => '8',
    9 => '9',
    10 => '10',
  );
  $handler->display->display_options['filters']['field_profile_department_tid']['group'] = 0;
  $handler->display->display_options['filters']['field_profile_department_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_profile_department_tid']['expose']['operator_id'] = 'field_profile_department_tid_op';
  $handler->display->display_options['filters']['field_profile_department_tid']['expose']['label'] = 'Department';
  $handler->display->display_options['filters']['field_profile_department_tid']['expose']['operator'] = 'field_profile_department_tid_op';
  $handler->display->display_options['filters']['field_profile_department_tid']['expose']['identifier'] = 'field_profile_department_tid';
  $handler->display->display_options['filters']['field_profile_department_tid']['expose']['remember'] = 1;
  $handler->display->display_options['filters']['field_profile_department_tid']['expose']['reduce'] = 1;
  $handler->display->display_options['filters']['field_profile_department_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_profile_department_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_profile_department_tid']['vocabulary'] = 'org_structure';
  $handler->display->display_options['filters']['field_profile_department_tid']['hierarchy'] = 1;
  $handler->display->display_options['filters']['field_profile_department_tid']['error_message'] = 1;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_profile_staff_position_value']['id'] = 'field_profile_staff_position_value';
  $handler->display->display_options['filters']['field_profile_staff_position_value']['table'] = 'field_data_field_profile_staff_position';
  $handler->display->display_options['filters']['field_profile_staff_position_value']['field'] = 'field_profile_staff_position_value';
  $handler->display->display_options['filters']['field_profile_staff_position_value']['value'] = array(
    'all' => 'all',
    1 => '1',
    2 => '2',
    3 => '3',
    4 => '4',
    5 => '5',
    6 => '6',
    7 => '7',
    8 => '8',
    9 => '9',
    10 => '10',
    12 => '12',
    20 => '20',
    30 => '30',
  );
  $handler->display->display_options['filters']['field_profile_staff_position_value']['group'] = 0;
  $handler->display->display_options['filters']['field_profile_staff_position_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_profile_staff_position_value']['expose']['operator_id'] = 'field_profile_staff_position_value_op';
  $handler->display->display_options['filters']['field_profile_staff_position_value']['expose']['label'] = 'Position';
  $handler->display->display_options['filters']['field_profile_staff_position_value']['expose']['operator'] = 'field_profile_staff_position_value_op';
  $handler->display->display_options['filters']['field_profile_staff_position_value']['expose']['identifier'] = 'field_profile_staff_position_value';
  $handler->display->display_options['filters']['field_profile_staff_position_value']['expose']['remember'] = 1;
  /* Filter criterion: Content: Expertise of Staff (field_profile_expertise) */
  $handler->display->display_options['filters']['field_profile_expertise_tid']['id'] = 'field_profile_expertise_tid';
  $handler->display->display_options['filters']['field_profile_expertise_tid']['table'] = 'field_data_field_profile_expertise';
  $handler->display->display_options['filters']['field_profile_expertise_tid']['field'] = 'field_profile_expertise_tid';
  $handler->display->display_options['filters']['field_profile_expertise_tid']['group'] = 0;
  $handler->display->display_options['filters']['field_profile_expertise_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_profile_expertise_tid']['expose']['operator_id'] = 'field_profile_expertise_tid_op';
  $handler->display->display_options['filters']['field_profile_expertise_tid']['expose']['label'] = 'Area of Expertise';
  $handler->display->display_options['filters']['field_profile_expertise_tid']['expose']['operator'] = 'field_profile_expertise_tid_op';
  $handler->display->display_options['filters']['field_profile_expertise_tid']['expose']['identifier'] = 'field_profile_expertise_tid';
  $handler->display->display_options['filters']['field_profile_expertise_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_profile_expertise_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_profile_expertise_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_profile_expertise_tid']['vocabulary'] = 'topics';
  $handler->display->display_options['filters']['field_profile_expertise_tid']['hierarchy'] = 1;
  $handler->display->display_options['filters']['field_profile_expertise_tid']['error_message'] = 1;
  /* Filter criterion: Content: Status (field_profile_staff_status) */
  $handler->display->display_options['filters']['field_profile_staff_status_value']['id'] = 'field_profile_staff_status_value';
  $handler->display->display_options['filters']['field_profile_staff_status_value']['table'] = 'field_data_field_profile_staff_status';
  $handler->display->display_options['filters']['field_profile_staff_status_value']['field'] = 'field_profile_staff_status_value';
  $handler->display->display_options['filters']['field_profile_staff_status_value']['value'] = array(
    1 => '1',
    3 => '3',
  );
  $handler->display->display_options['filters']['field_profile_staff_status_value']['group'] = 0;
  $handler->display->display_options['filters']['field_profile_staff_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_profile_staff_status_value']['expose']['operator_id'] = 'field_profile_staff_status_value_op';
  $handler->display->display_options['filters']['field_profile_staff_status_value']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_profile_staff_status_value']['expose']['operator'] = 'field_profile_staff_status_value_op';
  $handler->display->display_options['filters']['field_profile_staff_status_value']['expose']['identifier'] = 'field_profile_staff_status_value';
  $handler->display->display_options['filters']['field_profile_staff_status_value']['expose']['required'] = 1;
  $handler->display->display_options['filters']['field_profile_staff_status_value']['expose']['reduce'] = 1;
  $handler->display->display_options['path'] = 'staff-directory';
  $handler->display->display_options['menu']['title'] = 'People';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';

  /* Display: Alphabetical Index */
  $handler = $view->new_display('attachment', 'Alphabetical Index', 'staff_directory_alpha_index');
  $handler->display->display_options['display_description'] = 'Provides an A-Z index for staff directory page.';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Last Name */
  $handler->display->display_options['fields']['field_profile_last_name']['id'] = 'field_profile_last_name';
  $handler->display->display_options['fields']['field_profile_last_name']['table'] = 'field_data_field_profile_last_name';
  $handler->display->display_options['fields']['field_profile_last_name']['field'] = 'field_profile_last_name';
  $handler->display->display_options['fields']['field_profile_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_profile_last_name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_profile_last_name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_profile_last_name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_profile_last_name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_profile_last_name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_profile_last_name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_profile_last_name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_profile_last_name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_profile_last_name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_profile_last_name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_profile_last_name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_profile_last_name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_profile_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_last_name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_profile_last_name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_profile_last_name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_profile_last_name']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Last Name (field_profile_last_name) */
  $handler->display->display_options['arguments']['field_profile_last_name_value']['id'] = 'field_profile_last_name_value';
  $handler->display->display_options['arguments']['field_profile_last_name_value']['table'] = 'field_data_field_profile_last_name';
  $handler->display->display_options['arguments']['field_profile_last_name_value']['field'] = 'field_profile_last_name_value';
  $handler->display->display_options['arguments']['field_profile_last_name_value']['default_action'] = 'summary';
  $handler->display->display_options['arguments']['field_profile_last_name_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_profile_last_name_value']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_profile_last_name_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_profile_last_name_value']['summary']['format'] = 'unformatted_summary';
  $handler->display->display_options['arguments']['field_profile_last_name_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_profile_last_name_value']['summary_options']['inline'] = '1';
  $handler->display->display_options['arguments']['field_profile_last_name_value']['summary_options']['separator'] = ' | ';
  $handler->display->display_options['arguments']['field_profile_last_name_value']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['field_profile_last_name_value']['glossary'] = 1;
  $handler->display->display_options['arguments']['field_profile_last_name_value']['limit'] = '1';
  $handler->display->display_options['arguments']['field_profile_last_name_value']['case'] = 'upper';
  $handler->display->display_options['arguments']['field_profile_last_name_value']['path_case'] = 'lower';
  $handler->display->display_options['arguments']['field_profile_last_name_value']['transform_dash'] = 0;
  $handler->display->display_options['arguments']['field_profile_last_name_value']['break_phrase'] = 0;
  $handler->display->display_options['displays'] = array(
    'staff_directory_page' => 'staff_directory_page',
    'default' => 0,
  );
  $handler->display->display_options['inherit_arguments'] = 0;
  $handler->display->display_options['inherit_exposed_filters'] = 1;
  $export['profiles'] = $view;

  return $export;
}

<?php
/**
 * @file
 * gsb_feature_act_display.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gsb_feature_act_display_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'act_project_filters';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'ACT Project Filters';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'content-pane-listing';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Organization Location */
  $handler->display->display_options['fields']['field_act_org_location']['id'] = 'field_act_org_location';
  $handler->display->display_options['fields']['field_act_org_location']['table'] = 'field_data_field_act_org_location';
  $handler->display->display_options['fields']['field_act_org_location']['field'] = 'field_act_org_location';
  $handler->display->display_options['fields']['field_act_org_location']['ui_name'] = 'Organization Location';
  $handler->display->display_options['fields']['field_act_org_location']['label'] = '';
  $handler->display->display_options['fields']['field_act_org_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_act_org_location']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: URL */
  $handler->display->display_options['fields']['field_link_single']['id'] = 'field_link_single';
  $handler->display->display_options['fields']['field_link_single']['table'] = 'field_data_field_link_single';
  $handler->display->display_options['fields']['field_link_single']['field'] = 'field_link_single';
  $handler->display->display_options['fields']['field_link_single']['ui_name'] = 'URL';
  $handler->display->display_options['fields']['field_link_single']['label'] = '';
  $handler->display->display_options['fields']['field_link_single']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link_single']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link_single']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Round */
  $handler->display->display_options['fields']['field_act_round']['id'] = 'field_act_round';
  $handler->display->display_options['fields']['field_act_round']['table'] = 'field_data_field_act_round';
  $handler->display->display_options['fields']['field_act_round']['field'] = 'field_act_round';
  $handler->display->display_options['fields']['field_act_round']['ui_name'] = 'Round';
  $handler->display->display_options['fields']['field_act_round']['label'] = '';
  $handler->display->display_options['fields']['field_act_round']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_act_round']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Project Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['ui_name'] = 'Project Location';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Project Type */
  $handler->display->display_options['fields']['field_act_project_type']['id'] = 'field_act_project_type';
  $handler->display->display_options['fields']['field_act_project_type']['table'] = 'field_data_field_act_project_type';
  $handler->display->display_options['fields']['field_act_project_type']['field'] = 'field_act_project_type';
  $handler->display->display_options['fields']['field_act_project_type']['ui_name'] = 'Project Type';
  $handler->display->display_options['fields']['field_act_project_type']['label'] = '';
  $handler->display->display_options['fields']['field_act_project_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_act_project_type']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Project Focus */
  $handler->display->display_options['fields']['field_act_project_focus']['id'] = 'field_act_project_focus';
  $handler->display->display_options['fields']['field_act_project_focus']['table'] = 'field_data_field_act_project_focus';
  $handler->display->display_options['fields']['field_act_project_focus']['field'] = 'field_act_project_focus';
  $handler->display->display_options['fields']['field_act_project_focus']['ui_name'] = 'Project Focus';
  $handler->display->display_options['fields']['field_act_project_focus']['label'] = '';
  $handler->display->display_options['fields']['field_act_project_focus']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_act_project_focus']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_act_project_focus']['delta_offset'] = '0';
  /* Field: Organization Type */
  $handler->display->display_options['fields']['field_act_organization_type']['id'] = 'field_act_organization_type';
  $handler->display->display_options['fields']['field_act_organization_type']['table'] = 'field_data_field_act_organization_type';
  $handler->display->display_options['fields']['field_act_organization_type']['field'] = 'field_act_organization_type';
  $handler->display->display_options['fields']['field_act_organization_type']['ui_name'] = 'Organization Type';
  $handler->display->display_options['fields']['field_act_organization_type']['label'] = '';
  $handler->display->display_options['fields']['field_act_organization_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_act_organization_type']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_act_organization_type']['delta_offset'] = '0';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = TRUE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'act' => 'act',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Project Status (field_act_status) */
  $handler->display->display_options['filters']['field_act_status_value']['id'] = 'field_act_status_value';
  $handler->display->display_options['filters']['field_act_status_value']['table'] = 'field_data_field_act_status';
  $handler->display->display_options['filters']['field_act_status_value']['field'] = 'field_act_status_value';
  $handler->display->display_options['filters']['field_act_status_value']['group'] = 2;
  $handler->display->display_options['filters']['field_act_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_act_status_value']['expose']['operator_id'] = 'field_act_status_value_op';
  $handler->display->display_options['filters']['field_act_status_value']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_act_status_value']['expose']['operator'] = 'field_act_status_value_op';
  $handler->display->display_options['filters']['field_act_status_value']['expose']['identifier'] = 'field_act_status_value';
  $handler->display->display_options['filters']['field_act_status_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_act_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    151 => 0,
    16 => 0,
    21 => 0,
    71 => 0,
    61 => 0,
    171 => 0,
    56 => 0,
    66 => 0,
    31 => 0,
    36 => 0,
    201 => 0,
    41 => 0,
    91 => 0,
    146 => 0,
    136 => 0,
    26 => 0,
    46 => 0,
    51 => 0,
    81 => 0,
    86 => 0,
    96 => 0,
    101 => 0,
    106 => 0,
    116 => 0,
    121 => 0,
    126 => 0,
    131 => 0,
    141 => 0,
    156 => 0,
    161 => 0,
    166 => 0,
    176 => 0,
    181 => 0,
    186 => 0,
    191 => 0,
  );
  /* Filter criterion: Content: Project Type (field_act_project_type) */
  $handler->display->display_options['filters']['field_act_project_type_tid']['id'] = 'field_act_project_type_tid';
  $handler->display->display_options['filters']['field_act_project_type_tid']['table'] = 'field_data_field_act_project_type';
  $handler->display->display_options['filters']['field_act_project_type_tid']['field'] = 'field_act_project_type_tid';
  $handler->display->display_options['filters']['field_act_project_type_tid']['group'] = 2;
  $handler->display->display_options['filters']['field_act_project_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_act_project_type_tid']['expose']['operator_id'] = 'field_act_project_type_tid_op';
  $handler->display->display_options['filters']['field_act_project_type_tid']['expose']['label'] = 'Project Type';
  $handler->display->display_options['filters']['field_act_project_type_tid']['expose']['operator'] = 'field_act_project_type_tid_op';
  $handler->display->display_options['filters']['field_act_project_type_tid']['expose']['identifier'] = 'field_act_project_type_tid';
  $handler->display->display_options['filters']['field_act_project_type_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_act_project_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    151 => 0,
    16 => 0,
    21 => 0,
    71 => 0,
    61 => 0,
    171 => 0,
    56 => 0,
    66 => 0,
    31 => 0,
    36 => 0,
    201 => 0,
    41 => 0,
    91 => 0,
    146 => 0,
    136 => 0,
    26 => 0,
    46 => 0,
    51 => 0,
    81 => 0,
    86 => 0,
    96 => 0,
    101 => 0,
    106 => 0,
    116 => 0,
    121 => 0,
    126 => 0,
    131 => 0,
    141 => 0,
    156 => 0,
    161 => 0,
    166 => 0,
    176 => 0,
    181 => 0,
    186 => 0,
    191 => 0,
  );
  $handler->display->display_options['filters']['field_act_project_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_act_project_type_tid']['vocabulary'] = 'project_type';
  /* Filter criterion: Content: Project Focus (field_act_project_focus) */
  $handler->display->display_options['filters']['field_act_project_focus_tid']['id'] = 'field_act_project_focus_tid';
  $handler->display->display_options['filters']['field_act_project_focus_tid']['table'] = 'field_data_field_act_project_focus';
  $handler->display->display_options['filters']['field_act_project_focus_tid']['field'] = 'field_act_project_focus_tid';
  $handler->display->display_options['filters']['field_act_project_focus_tid']['group'] = 2;
  $handler->display->display_options['filters']['field_act_project_focus_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_act_project_focus_tid']['expose']['operator_id'] = 'field_act_project_focus_tid_op';
  $handler->display->display_options['filters']['field_act_project_focus_tid']['expose']['label'] = 'Project Focus';
  $handler->display->display_options['filters']['field_act_project_focus_tid']['expose']['operator'] = 'field_act_project_focus_tid_op';
  $handler->display->display_options['filters']['field_act_project_focus_tid']['expose']['identifier'] = 'field_act_project_focus_tid';
  $handler->display->display_options['filters']['field_act_project_focus_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_act_project_focus_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    151 => 0,
    16 => 0,
    21 => 0,
    71 => 0,
    61 => 0,
    171 => 0,
    56 => 0,
    66 => 0,
    31 => 0,
    36 => 0,
    201 => 0,
    41 => 0,
    91 => 0,
    146 => 0,
    136 => 0,
    26 => 0,
    46 => 0,
    51 => 0,
    81 => 0,
    86 => 0,
    96 => 0,
    101 => 0,
    106 => 0,
    116 => 0,
    121 => 0,
    126 => 0,
    131 => 0,
    141 => 0,
    156 => 0,
    161 => 0,
    166 => 0,
    176 => 0,
    181 => 0,
    186 => 0,
    191 => 0,
  );
  $handler->display->display_options['filters']['field_act_project_focus_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_act_project_focus_tid']['vocabulary'] = 'project_focus';
  /* Filter criterion: Content: Organization Type (field_act_organization_type) */
  $handler->display->display_options['filters']['field_act_organization_type_tid']['id'] = 'field_act_organization_type_tid';
  $handler->display->display_options['filters']['field_act_organization_type_tid']['table'] = 'field_data_field_act_organization_type';
  $handler->display->display_options['filters']['field_act_organization_type_tid']['field'] = 'field_act_organization_type_tid';
  $handler->display->display_options['filters']['field_act_organization_type_tid']['group'] = 2;
  $handler->display->display_options['filters']['field_act_organization_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_act_organization_type_tid']['expose']['operator_id'] = 'field_act_organization_type_tid_op';
  $handler->display->display_options['filters']['field_act_organization_type_tid']['expose']['label'] = 'Organization Type';
  $handler->display->display_options['filters']['field_act_organization_type_tid']['expose']['operator'] = 'field_act_organization_type_tid_op';
  $handler->display->display_options['filters']['field_act_organization_type_tid']['expose']['identifier'] = 'field_act_organization_type_tid';
  $handler->display->display_options['filters']['field_act_organization_type_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_act_organization_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    151 => 0,
    16 => 0,
    21 => 0,
    71 => 0,
    61 => 0,
    171 => 0,
    56 => 0,
    66 => 0,
    31 => 0,
    36 => 0,
    201 => 0,
    41 => 0,
    91 => 0,
    146 => 0,
    136 => 0,
    26 => 0,
    46 => 0,
    51 => 0,
    81 => 0,
    86 => 0,
    96 => 0,
    101 => 0,
    106 => 0,
    116 => 0,
    121 => 0,
    126 => 0,
    131 => 0,
    141 => 0,
    156 => 0,
    161 => 0,
    166 => 0,
    176 => 0,
    181 => 0,
    186 => 0,
    191 => 0,
  );
  $handler->display->display_options['filters']['field_act_organization_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_act_organization_type_tid']['vocabulary'] = 'organization_type';

  /* Display: ACT Project Filters */
  $handler = $view->new_display('panel_pane', 'ACT Project Filters', 'act_project_filters_pane');
  $handler->display->display_options['pane_title'] = 'ACT Projects: Multiple Criteria';
  $handler->display->display_options['pane_category']['name'] = 'Customizable Content Lists';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['exposed_form_configure'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 'fields_override';
  $handler->display->display_options['exposed_form_overrides'] = array(
    'field_act_status_value' => '',
    'field_act_project_type_tid' => '',
    'field_act_project_focus_tid' => '',
    'field_act_organization_type_tid' => '',
  );
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'user',
      'context' => 'entity:field_collection_item.archived',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Node IDs',
    ),
  );
  $export['act_project_filters'] = $view;

  $view = new view();
  $view->name = 'gsb_act_project_listing';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'GSB ACT Project Listing';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 1,
      'secondary_label' => 'Narrow your results',
    ),
    'field_act_project_type_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 1,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_act_project_focus_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 1,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_act_organization_type_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 1,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'gsb_wysiwyg_text';
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['more_button_text'] = 'Show more';
  $handler->display->display_options['pager']['options']['use_go_to_top_link'] = 1;
  $handler->display->display_options['pager']['options']['use_go_to_top_text'] = 'Back to the Top';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'act' => 'act',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Project Type (field_act_project_type) */
  $handler->display->display_options['filters']['field_act_project_type_tid']['id'] = 'field_act_project_type_tid';
  $handler->display->display_options['filters']['field_act_project_type_tid']['table'] = 'field_data_field_act_project_type';
  $handler->display->display_options['filters']['field_act_project_type_tid']['field'] = 'field_act_project_type_tid';
  $handler->display->display_options['filters']['field_act_project_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_act_project_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_act_project_type_tid']['expose']['operator_id'] = 'field_act_project_type_tid_op';
  $handler->display->display_options['filters']['field_act_project_type_tid']['expose']['label'] = 'Project Type';
  $handler->display->display_options['filters']['field_act_project_type_tid']['expose']['operator'] = 'field_act_project_type_tid_op';
  $handler->display->display_options['filters']['field_act_project_type_tid']['expose']['identifier'] = 'field_act_project_type_tid';
  $handler->display->display_options['filters']['field_act_project_type_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_act_project_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    151 => 0,
    16 => 0,
    21 => 0,
    71 => 0,
    61 => 0,
    171 => 0,
    56 => 0,
    66 => 0,
    31 => 0,
    36 => 0,
    201 => 0,
    41 => 0,
    91 => 0,
    146 => 0,
    136 => 0,
    26 => 0,
    46 => 0,
    51 => 0,
    81 => 0,
    86 => 0,
    96 => 0,
    101 => 0,
    106 => 0,
    116 => 0,
    121 => 0,
    126 => 0,
    131 => 0,
    141 => 0,
    156 => 0,
    161 => 0,
    166 => 0,
    176 => 0,
    181 => 0,
    186 => 0,
    191 => 0,
  );
  $handler->display->display_options['filters']['field_act_project_type_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_act_project_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_act_project_type_tid']['vocabulary'] = 'project_type';
  $handler->display->display_options['filters']['field_act_project_type_tid']['error_message'] = FALSE;
  /* Filter criterion: Content: Project Focus (field_act_project_focus) */
  $handler->display->display_options['filters']['field_act_project_focus_tid']['id'] = 'field_act_project_focus_tid';
  $handler->display->display_options['filters']['field_act_project_focus_tid']['table'] = 'field_data_field_act_project_focus';
  $handler->display->display_options['filters']['field_act_project_focus_tid']['field'] = 'field_act_project_focus_tid';
  $handler->display->display_options['filters']['field_act_project_focus_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_act_project_focus_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_act_project_focus_tid']['expose']['operator_id'] = 'field_act_project_focus_tid_op';
  $handler->display->display_options['filters']['field_act_project_focus_tid']['expose']['label'] = 'Project Focus';
  $handler->display->display_options['filters']['field_act_project_focus_tid']['expose']['operator'] = 'field_act_project_focus_tid_op';
  $handler->display->display_options['filters']['field_act_project_focus_tid']['expose']['identifier'] = 'field_act_project_focus_tid';
  $handler->display->display_options['filters']['field_act_project_focus_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_act_project_focus_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    151 => 0,
    16 => 0,
    21 => 0,
    71 => 0,
    61 => 0,
    171 => 0,
    56 => 0,
    66 => 0,
    31 => 0,
    36 => 0,
    201 => 0,
    41 => 0,
    91 => 0,
    146 => 0,
    136 => 0,
    26 => 0,
    46 => 0,
    51 => 0,
    81 => 0,
    86 => 0,
    96 => 0,
    101 => 0,
    106 => 0,
    116 => 0,
    121 => 0,
    126 => 0,
    131 => 0,
    141 => 0,
    156 => 0,
    161 => 0,
    166 => 0,
    176 => 0,
    181 => 0,
    186 => 0,
    191 => 0,
  );
  $handler->display->display_options['filters']['field_act_project_focus_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_act_project_focus_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_act_project_focus_tid']['vocabulary'] = 'project_focus';
  $handler->display->display_options['filters']['field_act_project_focus_tid']['error_message'] = FALSE;
  /* Filter criterion: Content: Organization Type (field_act_organization_type) */
  $handler->display->display_options['filters']['field_act_organization_type_tid']['id'] = 'field_act_organization_type_tid';
  $handler->display->display_options['filters']['field_act_organization_type_tid']['table'] = 'field_data_field_act_organization_type';
  $handler->display->display_options['filters']['field_act_organization_type_tid']['field'] = 'field_act_organization_type_tid';
  $handler->display->display_options['filters']['field_act_organization_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_act_organization_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_act_organization_type_tid']['expose']['operator_id'] = 'field_act_organization_type_tid_op';
  $handler->display->display_options['filters']['field_act_organization_type_tid']['expose']['label'] = 'Organization Type';
  $handler->display->display_options['filters']['field_act_organization_type_tid']['expose']['operator'] = 'field_act_organization_type_tid_op';
  $handler->display->display_options['filters']['field_act_organization_type_tid']['expose']['identifier'] = 'field_act_organization_type_tid';
  $handler->display->display_options['filters']['field_act_organization_type_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_act_organization_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    151 => 0,
    16 => 0,
    21 => 0,
    71 => 0,
    61 => 0,
    171 => 0,
    56 => 0,
    66 => 0,
    31 => 0,
    36 => 0,
    201 => 0,
    41 => 0,
    91 => 0,
    146 => 0,
    136 => 0,
    26 => 0,
    46 => 0,
    51 => 0,
    81 => 0,
    86 => 0,
    96 => 0,
    101 => 0,
    106 => 0,
    116 => 0,
    121 => 0,
    126 => 0,
    131 => 0,
    141 => 0,
    156 => 0,
    161 => 0,
    166 => 0,
    176 => 0,
    181 => 0,
    186 => 0,
    191 => 0,
  );
  $handler->display->display_options['filters']['field_act_organization_type_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_act_organization_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_act_organization_type_tid']['vocabulary'] = 'organization_type';
  $handler->display->display_options['filters']['field_act_organization_type_tid']['error_message'] = FALSE;
  /* Filter criterion: Content: Project Status (field_act_status) */
  $handler->display->display_options['filters']['field_act_status_value']['id'] = 'field_act_status_value';
  $handler->display->display_options['filters']['field_act_status_value']['table'] = 'field_data_field_act_status';
  $handler->display->display_options['filters']['field_act_status_value']['field'] = 'field_act_status_value';
  $handler->display->display_options['filters']['field_act_status_value']['group'] = 1;
  $handler->display->display_options['filters']['field_act_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_act_status_value']['expose']['operator_id'] = 'field_act_status_value_op';
  $handler->display->display_options['filters']['field_act_status_value']['expose']['label'] = 'Project Status (field_act_status)';
  $handler->display->display_options['filters']['field_act_status_value']['expose']['operator'] = 'field_act_status_value_op';
  $handler->display->display_options['filters']['field_act_status_value']['expose']['identifier'] = 'field_act_status_value';
  $handler->display->display_options['filters']['field_act_status_value']['reduce_duplicates'] = TRUE;

  /* Display: Project List */
  $handler = $view->new_display('panel_pane', 'Project List', 'panel_pane_1');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 1,
      'secondary_label' => 'Narrow your results',
    ),
    'field_act_project_type_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 1,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_act_project_focus_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 1,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_act_organization_type_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 1,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_act_status_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => 'Recruiting|Now Recruiting Volunteers
Completed|Sample Completed Projects',
        ),
      ),
    ),
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'gsb_wysiwyg_text';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'act' => 'act',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Project Type (field_act_project_type) */
  $handler->display->display_options['filters']['field_act_project_type_tid']['id'] = 'field_act_project_type_tid';
  $handler->display->display_options['filters']['field_act_project_type_tid']['table'] = 'field_data_field_act_project_type';
  $handler->display->display_options['filters']['field_act_project_type_tid']['field'] = 'field_act_project_type_tid';
  $handler->display->display_options['filters']['field_act_project_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_act_project_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_act_project_type_tid']['expose']['operator_id'] = 'field_act_project_type_tid_op';
  $handler->display->display_options['filters']['field_act_project_type_tid']['expose']['label'] = 'Project Type';
  $handler->display->display_options['filters']['field_act_project_type_tid']['expose']['operator'] = 'field_act_project_type_tid_op';
  $handler->display->display_options['filters']['field_act_project_type_tid']['expose']['identifier'] = 'field_act_project_type_tid';
  $handler->display->display_options['filters']['field_act_project_type_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_act_project_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    151 => 0,
    16 => 0,
    21 => 0,
    71 => 0,
    61 => 0,
    171 => 0,
    56 => 0,
    66 => 0,
    31 => 0,
    36 => 0,
    201 => 0,
    41 => 0,
    91 => 0,
    146 => 0,
    136 => 0,
    26 => 0,
    46 => 0,
    51 => 0,
    81 => 0,
    86 => 0,
    96 => 0,
    101 => 0,
    106 => 0,
    116 => 0,
    121 => 0,
    126 => 0,
    131 => 0,
    141 => 0,
    156 => 0,
    161 => 0,
    166 => 0,
    176 => 0,
    181 => 0,
    186 => 0,
    191 => 0,
  );
  $handler->display->display_options['filters']['field_act_project_type_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_act_project_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_act_project_type_tid']['vocabulary'] = 'project_type';
  $handler->display->display_options['filters']['field_act_project_type_tid']['error_message'] = FALSE;
  /* Filter criterion: Content: Project Focus (field_act_project_focus) */
  $handler->display->display_options['filters']['field_act_project_focus_tid']['id'] = 'field_act_project_focus_tid';
  $handler->display->display_options['filters']['field_act_project_focus_tid']['table'] = 'field_data_field_act_project_focus';
  $handler->display->display_options['filters']['field_act_project_focus_tid']['field'] = 'field_act_project_focus_tid';
  $handler->display->display_options['filters']['field_act_project_focus_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_act_project_focus_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_act_project_focus_tid']['expose']['operator_id'] = 'field_act_project_focus_tid_op';
  $handler->display->display_options['filters']['field_act_project_focus_tid']['expose']['label'] = 'Project Focus';
  $handler->display->display_options['filters']['field_act_project_focus_tid']['expose']['operator'] = 'field_act_project_focus_tid_op';
  $handler->display->display_options['filters']['field_act_project_focus_tid']['expose']['identifier'] = 'field_act_project_focus_tid';
  $handler->display->display_options['filters']['field_act_project_focus_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_act_project_focus_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    151 => 0,
    16 => 0,
    21 => 0,
    71 => 0,
    61 => 0,
    171 => 0,
    56 => 0,
    66 => 0,
    31 => 0,
    36 => 0,
    201 => 0,
    41 => 0,
    91 => 0,
    146 => 0,
    136 => 0,
    26 => 0,
    46 => 0,
    51 => 0,
    81 => 0,
    86 => 0,
    96 => 0,
    101 => 0,
    106 => 0,
    116 => 0,
    121 => 0,
    126 => 0,
    131 => 0,
    141 => 0,
    156 => 0,
    161 => 0,
    166 => 0,
    176 => 0,
    181 => 0,
    186 => 0,
    191 => 0,
  );
  $handler->display->display_options['filters']['field_act_project_focus_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_act_project_focus_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_act_project_focus_tid']['vocabulary'] = 'project_focus';
  $handler->display->display_options['filters']['field_act_project_focus_tid']['error_message'] = FALSE;
  /* Filter criterion: Content: Organization Type (field_act_organization_type) */
  $handler->display->display_options['filters']['field_act_organization_type_tid']['id'] = 'field_act_organization_type_tid';
  $handler->display->display_options['filters']['field_act_organization_type_tid']['table'] = 'field_data_field_act_organization_type';
  $handler->display->display_options['filters']['field_act_organization_type_tid']['field'] = 'field_act_organization_type_tid';
  $handler->display->display_options['filters']['field_act_organization_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_act_organization_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_act_organization_type_tid']['expose']['operator_id'] = 'field_act_organization_type_tid_op';
  $handler->display->display_options['filters']['field_act_organization_type_tid']['expose']['label'] = 'Organization Type';
  $handler->display->display_options['filters']['field_act_organization_type_tid']['expose']['operator'] = 'field_act_organization_type_tid_op';
  $handler->display->display_options['filters']['field_act_organization_type_tid']['expose']['identifier'] = 'field_act_organization_type_tid';
  $handler->display->display_options['filters']['field_act_organization_type_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_act_organization_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    151 => 0,
    16 => 0,
    21 => 0,
    71 => 0,
    61 => 0,
    171 => 0,
    56 => 0,
    66 => 0,
    31 => 0,
    36 => 0,
    201 => 0,
    41 => 0,
    91 => 0,
    146 => 0,
    136 => 0,
    26 => 0,
    46 => 0,
    51 => 0,
    81 => 0,
    86 => 0,
    96 => 0,
    101 => 0,
    106 => 0,
    116 => 0,
    121 => 0,
    126 => 0,
    131 => 0,
    141 => 0,
    156 => 0,
    161 => 0,
    166 => 0,
    176 => 0,
    181 => 0,
    186 => 0,
    191 => 0,
  );
  $handler->display->display_options['filters']['field_act_organization_type_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_act_organization_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_act_organization_type_tid']['vocabulary'] = 'organization_type';
  $handler->display->display_options['filters']['field_act_organization_type_tid']['error_message'] = FALSE;
  /* Filter criterion: Content: Project Status (field_act_status) */
  $handler->display->display_options['filters']['field_act_status_value']['id'] = 'field_act_status_value';
  $handler->display->display_options['filters']['field_act_status_value']['table'] = 'field_data_field_act_status';
  $handler->display->display_options['filters']['field_act_status_value']['field'] = 'field_act_status_value';
  $handler->display->display_options['filters']['field_act_status_value']['value'] = array(
    'in_progress' => 'in_progress',
  );
  $handler->display->display_options['filters']['field_act_status_value']['group'] = 1;
  $handler->display->display_options['filters']['field_act_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_act_status_value']['expose']['operator_id'] = 'field_act_status_value_op';
  $handler->display->display_options['filters']['field_act_status_value']['expose']['label'] = 'Show Only';
  $handler->display->display_options['filters']['field_act_status_value']['expose']['operator'] = 'field_act_status_value_op';
  $handler->display->display_options['filters']['field_act_status_value']['expose']['identifier'] = 'field_act_status_value';
  $handler->display->display_options['filters']['field_act_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    151 => 0,
    16 => 0,
    21 => 0,
    71 => 0,
    61 => 0,
    171 => 0,
    56 => 0,
    66 => 0,
    31 => 0,
    36 => 0,
    201 => 0,
    41 => 0,
    91 => 0,
    146 => 0,
    136 => 0,
    26 => 0,
    46 => 0,
    51 => 0,
    81 => 0,
    86 => 0,
    96 => 0,
    101 => 0,
    106 => 0,
    116 => 0,
    121 => 0,
    126 => 0,
    131 => 0,
    141 => 0,
    156 => 0,
    161 => 0,
    166 => 0,
    176 => 0,
    181 => 0,
    186 => 0,
    191 => 0,
  );
  $handler->display->display_options['filters']['field_act_status_value']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['pane_title'] = 'ACT Projects  (In Progress)';
  $handler->display->display_options['pane_category']['name'] = 'Non-customizable Content Lists';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Recruiting Projects */
  $handler = $view->new_display('panel_pane', 'Recruiting Projects', 'panel_pane_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'act' => 'act',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Project Status (field_act_status) */
  $handler->display->display_options['filters']['field_act_status_value']['id'] = 'field_act_status_value';
  $handler->display->display_options['filters']['field_act_status_value']['table'] = 'field_data_field_act_status';
  $handler->display->display_options['filters']['field_act_status_value']['field'] = 'field_act_status_value';
  $handler->display->display_options['filters']['field_act_status_value']['value'] = array(
    'recruiting' => 'recruiting',
  );
  $handler->display->display_options['filters']['field_act_status_value']['group'] = 1;
  $handler->display->display_options['filters']['field_act_status_value']['expose']['operator_id'] = 'field_act_status_value_op';
  $handler->display->display_options['filters']['field_act_status_value']['expose']['label'] = 'Project Status';
  $handler->display->display_options['filters']['field_act_status_value']['expose']['operator'] = 'field_act_status_value_op';
  $handler->display->display_options['filters']['field_act_status_value']['expose']['identifier'] = 'field_act_status_value';
  $handler->display->display_options['filters']['field_act_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    151 => 0,
    16 => 0,
    21 => 0,
    71 => 0,
    61 => 0,
    171 => 0,
    56 => 0,
    66 => 0,
    31 => 0,
    36 => 0,
    201 => 0,
    41 => 0,
    91 => 0,
    146 => 0,
    136 => 0,
    26 => 0,
    46 => 0,
    51 => 0,
    81 => 0,
    86 => 0,
    96 => 0,
    101 => 0,
    106 => 0,
    116 => 0,
    121 => 0,
    126 => 0,
    131 => 0,
    141 => 0,
    156 => 0,
    161 => 0,
    166 => 0,
    176 => 0,
    181 => 0,
    186 => 0,
    191 => 0,
  );
  $handler->display->display_options['filters']['field_act_status_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Project Type (field_act_project_type) */
  $handler->display->display_options['filters']['field_act_project_type_tid']['id'] = 'field_act_project_type_tid';
  $handler->display->display_options['filters']['field_act_project_type_tid']['table'] = 'field_data_field_act_project_type';
  $handler->display->display_options['filters']['field_act_project_type_tid']['field'] = 'field_act_project_type_tid';
  $handler->display->display_options['filters']['field_act_project_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_act_project_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_act_project_type_tid']['expose']['operator_id'] = 'field_act_project_type_tid_op';
  $handler->display->display_options['filters']['field_act_project_type_tid']['expose']['label'] = 'Project Type';
  $handler->display->display_options['filters']['field_act_project_type_tid']['expose']['operator'] = 'field_act_project_type_tid_op';
  $handler->display->display_options['filters']['field_act_project_type_tid']['expose']['identifier'] = 'field_act_project_type_tid';
  $handler->display->display_options['filters']['field_act_project_type_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_act_project_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    151 => 0,
    16 => 0,
    21 => 0,
    71 => 0,
    61 => 0,
    171 => 0,
    56 => 0,
    66 => 0,
    31 => 0,
    36 => 0,
    201 => 0,
    41 => 0,
    91 => 0,
    146 => 0,
    136 => 0,
    26 => 0,
    46 => 0,
    51 => 0,
    81 => 0,
    86 => 0,
    96 => 0,
    101 => 0,
    106 => 0,
    116 => 0,
    121 => 0,
    126 => 0,
    131 => 0,
    141 => 0,
    156 => 0,
    161 => 0,
    166 => 0,
    176 => 0,
    181 => 0,
    186 => 0,
    191 => 0,
  );
  $handler->display->display_options['filters']['field_act_project_type_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_act_project_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_act_project_type_tid']['vocabulary'] = 'project_type';
  $handler->display->display_options['filters']['field_act_project_type_tid']['error_message'] = FALSE;
  /* Filter criterion: Content: Project Focus (field_act_project_focus) */
  $handler->display->display_options['filters']['field_act_project_focus_tid']['id'] = 'field_act_project_focus_tid';
  $handler->display->display_options['filters']['field_act_project_focus_tid']['table'] = 'field_data_field_act_project_focus';
  $handler->display->display_options['filters']['field_act_project_focus_tid']['field'] = 'field_act_project_focus_tid';
  $handler->display->display_options['filters']['field_act_project_focus_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_act_project_focus_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_act_project_focus_tid']['expose']['operator_id'] = 'field_act_project_focus_tid_op';
  $handler->display->display_options['filters']['field_act_project_focus_tid']['expose']['label'] = 'Project Focus';
  $handler->display->display_options['filters']['field_act_project_focus_tid']['expose']['operator'] = 'field_act_project_focus_tid_op';
  $handler->display->display_options['filters']['field_act_project_focus_tid']['expose']['identifier'] = 'field_act_project_focus_tid';
  $handler->display->display_options['filters']['field_act_project_focus_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_act_project_focus_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    151 => 0,
    16 => 0,
    21 => 0,
    71 => 0,
    61 => 0,
    171 => 0,
    56 => 0,
    66 => 0,
    31 => 0,
    36 => 0,
    201 => 0,
    41 => 0,
    91 => 0,
    146 => 0,
    136 => 0,
    26 => 0,
    46 => 0,
    51 => 0,
    81 => 0,
    86 => 0,
    96 => 0,
    101 => 0,
    106 => 0,
    116 => 0,
    121 => 0,
    126 => 0,
    131 => 0,
    141 => 0,
    156 => 0,
    161 => 0,
    166 => 0,
    176 => 0,
    181 => 0,
    186 => 0,
    191 => 0,
  );
  $handler->display->display_options['filters']['field_act_project_focus_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_act_project_focus_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_act_project_focus_tid']['vocabulary'] = 'project_focus';
  $handler->display->display_options['filters']['field_act_project_focus_tid']['error_message'] = FALSE;
  /* Filter criterion: Content: Organization Type (field_act_organization_type) */
  $handler->display->display_options['filters']['field_act_organization_type_tid']['id'] = 'field_act_organization_type_tid';
  $handler->display->display_options['filters']['field_act_organization_type_tid']['table'] = 'field_data_field_act_organization_type';
  $handler->display->display_options['filters']['field_act_organization_type_tid']['field'] = 'field_act_organization_type_tid';
  $handler->display->display_options['filters']['field_act_organization_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_act_organization_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_act_organization_type_tid']['expose']['operator_id'] = 'field_act_organization_type_tid_op';
  $handler->display->display_options['filters']['field_act_organization_type_tid']['expose']['label'] = 'Organization Type';
  $handler->display->display_options['filters']['field_act_organization_type_tid']['expose']['operator'] = 'field_act_organization_type_tid_op';
  $handler->display->display_options['filters']['field_act_organization_type_tid']['expose']['identifier'] = 'field_act_organization_type_tid';
  $handler->display->display_options['filters']['field_act_organization_type_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_act_organization_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    151 => 0,
    16 => 0,
    21 => 0,
    71 => 0,
    61 => 0,
    171 => 0,
    56 => 0,
    66 => 0,
    31 => 0,
    36 => 0,
    201 => 0,
    41 => 0,
    91 => 0,
    146 => 0,
    136 => 0,
    26 => 0,
    46 => 0,
    51 => 0,
    81 => 0,
    86 => 0,
    96 => 0,
    101 => 0,
    106 => 0,
    116 => 0,
    121 => 0,
    126 => 0,
    131 => 0,
    141 => 0,
    156 => 0,
    161 => 0,
    166 => 0,
    176 => 0,
    181 => 0,
    186 => 0,
    191 => 0,
  );
  $handler->display->display_options['filters']['field_act_organization_type_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_act_organization_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_act_organization_type_tid']['vocabulary'] = 'organization_type';
  $handler->display->display_options['filters']['field_act_organization_type_tid']['error_message'] = FALSE;
  $handler->display->display_options['pane_title'] = 'ACT Projects (Recruiting)';
  $handler->display->display_options['pane_category']['name'] = 'Non-customizable Content Lists';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Sample Completed List */
  $handler = $view->new_display('panel_pane', 'Sample Completed List', 'panel_pane_3');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'act' => 'act',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Project Status (field_act_status) */
  $handler->display->display_options['filters']['field_act_status_value']['id'] = 'field_act_status_value';
  $handler->display->display_options['filters']['field_act_status_value']['table'] = 'field_data_field_act_status';
  $handler->display->display_options['filters']['field_act_status_value']['field'] = 'field_act_status_value';
  $handler->display->display_options['filters']['field_act_status_value']['value'] = array(
    'completed' => 'completed',
  );
  $handler->display->display_options['filters']['field_act_status_value']['group'] = 1;
  /* Filter criterion: Content: Project Type (field_act_project_type) */
  $handler->display->display_options['filters']['field_act_project_type_tid']['id'] = 'field_act_project_type_tid';
  $handler->display->display_options['filters']['field_act_project_type_tid']['table'] = 'field_data_field_act_project_type';
  $handler->display->display_options['filters']['field_act_project_type_tid']['field'] = 'field_act_project_type_tid';
  $handler->display->display_options['filters']['field_act_project_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_act_project_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_act_project_type_tid']['expose']['operator_id'] = 'field_act_project_type_tid_op';
  $handler->display->display_options['filters']['field_act_project_type_tid']['expose']['label'] = 'Project Type';
  $handler->display->display_options['filters']['field_act_project_type_tid']['expose']['operator'] = 'field_act_project_type_tid_op';
  $handler->display->display_options['filters']['field_act_project_type_tid']['expose']['identifier'] = 'field_act_project_type_tid';
  $handler->display->display_options['filters']['field_act_project_type_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_act_project_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    151 => 0,
    16 => 0,
    21 => 0,
    71 => 0,
    61 => 0,
    171 => 0,
    56 => 0,
    66 => 0,
    31 => 0,
    36 => 0,
    201 => 0,
    41 => 0,
    91 => 0,
    146 => 0,
    136 => 0,
    26 => 0,
    46 => 0,
    51 => 0,
    81 => 0,
    86 => 0,
    96 => 0,
    101 => 0,
    106 => 0,
    116 => 0,
    121 => 0,
    126 => 0,
    131 => 0,
    141 => 0,
    156 => 0,
    161 => 0,
    166 => 0,
    176 => 0,
    181 => 0,
    186 => 0,
    191 => 0,
  );
  $handler->display->display_options['filters']['field_act_project_type_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_act_project_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_act_project_type_tid']['vocabulary'] = 'project_type';
  $handler->display->display_options['filters']['field_act_project_type_tid']['error_message'] = FALSE;
  /* Filter criterion: Content: Project Focus (field_act_project_focus) */
  $handler->display->display_options['filters']['field_act_project_focus_tid']['id'] = 'field_act_project_focus_tid';
  $handler->display->display_options['filters']['field_act_project_focus_tid']['table'] = 'field_data_field_act_project_focus';
  $handler->display->display_options['filters']['field_act_project_focus_tid']['field'] = 'field_act_project_focus_tid';
  $handler->display->display_options['filters']['field_act_project_focus_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_act_project_focus_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_act_project_focus_tid']['expose']['operator_id'] = 'field_act_project_focus_tid_op';
  $handler->display->display_options['filters']['field_act_project_focus_tid']['expose']['label'] = 'Project Focus';
  $handler->display->display_options['filters']['field_act_project_focus_tid']['expose']['operator'] = 'field_act_project_focus_tid_op';
  $handler->display->display_options['filters']['field_act_project_focus_tid']['expose']['identifier'] = 'field_act_project_focus_tid';
  $handler->display->display_options['filters']['field_act_project_focus_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_act_project_focus_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    151 => 0,
    16 => 0,
    21 => 0,
    71 => 0,
    61 => 0,
    171 => 0,
    56 => 0,
    66 => 0,
    31 => 0,
    36 => 0,
    201 => 0,
    41 => 0,
    91 => 0,
    146 => 0,
    136 => 0,
    26 => 0,
    46 => 0,
    51 => 0,
    81 => 0,
    86 => 0,
    96 => 0,
    101 => 0,
    106 => 0,
    116 => 0,
    121 => 0,
    126 => 0,
    131 => 0,
    141 => 0,
    156 => 0,
    161 => 0,
    166 => 0,
    176 => 0,
    181 => 0,
    186 => 0,
    191 => 0,
  );
  $handler->display->display_options['filters']['field_act_project_focus_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_act_project_focus_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_act_project_focus_tid']['vocabulary'] = 'project_focus';
  $handler->display->display_options['filters']['field_act_project_focus_tid']['error_message'] = FALSE;
  /* Filter criterion: Content: Organization Type (field_act_organization_type) */
  $handler->display->display_options['filters']['field_act_organization_type_tid']['id'] = 'field_act_organization_type_tid';
  $handler->display->display_options['filters']['field_act_organization_type_tid']['table'] = 'field_data_field_act_organization_type';
  $handler->display->display_options['filters']['field_act_organization_type_tid']['field'] = 'field_act_organization_type_tid';
  $handler->display->display_options['filters']['field_act_organization_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_act_organization_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_act_organization_type_tid']['expose']['operator_id'] = 'field_act_organization_type_tid_op';
  $handler->display->display_options['filters']['field_act_organization_type_tid']['expose']['label'] = 'Organization Type';
  $handler->display->display_options['filters']['field_act_organization_type_tid']['expose']['operator'] = 'field_act_organization_type_tid_op';
  $handler->display->display_options['filters']['field_act_organization_type_tid']['expose']['identifier'] = 'field_act_organization_type_tid';
  $handler->display->display_options['filters']['field_act_organization_type_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_act_organization_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    151 => 0,
    16 => 0,
    21 => 0,
    71 => 0,
    61 => 0,
    171 => 0,
    56 => 0,
    66 => 0,
    31 => 0,
    36 => 0,
    201 => 0,
    41 => 0,
    91 => 0,
    146 => 0,
    136 => 0,
    26 => 0,
    46 => 0,
    51 => 0,
    81 => 0,
    86 => 0,
    96 => 0,
    101 => 0,
    106 => 0,
    116 => 0,
    121 => 0,
    126 => 0,
    131 => 0,
    141 => 0,
    156 => 0,
    161 => 0,
    166 => 0,
    176 => 0,
    181 => 0,
    186 => 0,
    191 => 0,
  );
  $handler->display->display_options['filters']['field_act_organization_type_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_act_organization_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_act_organization_type_tid']['vocabulary'] = 'organization_type';
  $handler->display->display_options['filters']['field_act_organization_type_tid']['error_message'] = FALSE;
  $handler->display->display_options['pane_title'] = 'ACT Projects (Completed)';
  $handler->display->display_options['pane_category']['name'] = 'Non-customizable Content Lists';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $export['gsb_act_project_listing'] = $view;

  return $export;
}

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
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['more_button_text'] = 'Show more';
  $handler->display->display_options['pager']['options']['use_go_to_top_link'] = 1;
  $handler->display->display_options['pager']['options']['use_go_to_top_text'] = 'Back to the Top';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Project Type */
  $handler->display->display_options['fields']['field_act_project_type']['id'] = 'field_act_project_type';
  $handler->display->display_options['fields']['field_act_project_type']['table'] = 'field_data_field_act_project_type';
  $handler->display->display_options['fields']['field_act_project_type']['field'] = 'field_act_project_type';
  $handler->display->display_options['fields']['field_act_project_type']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Project Focus */
  $handler->display->display_options['fields']['field_act_project_focus']['id'] = 'field_act_project_focus';
  $handler->display->display_options['fields']['field_act_project_focus']['table'] = 'field_data_field_act_project_focus';
  $handler->display->display_options['fields']['field_act_project_focus']['field'] = 'field_act_project_focus';
  $handler->display->display_options['fields']['field_act_project_focus']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_act_project_focus']['delta_offset'] = '0';
  /* Field: Content: Organization Type */
  $handler->display->display_options['fields']['field_act_organization_type']['id'] = 'field_act_organization_type';
  $handler->display->display_options['fields']['field_act_organization_type']['table'] = 'field_data_field_act_organization_type';
  $handler->display->display_options['fields']['field_act_organization_type']['field'] = 'field_act_organization_type';
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
  /* Filter criterion: Content: Project Status (field_act_status) */
  $handler->display->display_options['filters']['field_act_status_value']['id'] = 'field_act_status_value';
  $handler->display->display_options['filters']['field_act_status_value']['table'] = 'field_data_field_act_status';
  $handler->display->display_options['filters']['field_act_status_value']['field'] = 'field_act_status_value';
  $handler->display->display_options['filters']['field_act_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_act_status_value']['expose']['operator_id'] = 'field_act_status_value_op';
  $handler->display->display_options['filters']['field_act_status_value']['expose']['label'] = 'Project Status (field_act_status)';
  $handler->display->display_options['filters']['field_act_status_value']['expose']['operator'] = 'field_act_status_value_op';
  $handler->display->display_options['filters']['field_act_status_value']['expose']['identifier'] = 'field_act_status_value';

  /* Display: Project List */
  $handler = $view->new_display('panel_pane', 'Project List', 'panel_pane_1');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'field_act_project_type_tid' => array(
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
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'gsb_wysiwyg_text';
  $handler->display->display_options['exposed_block'] = TRUE;
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
  /* Filter criterion: Content: Project Status (field_act_status) */
  $handler->display->display_options['filters']['field_act_status_value']['id'] = 'field_act_status_value';
  $handler->display->display_options['filters']['field_act_status_value']['table'] = 'field_data_field_act_status';
  $handler->display->display_options['filters']['field_act_status_value']['field'] = 'field_act_status_value';
  $handler->display->display_options['filters']['field_act_status_value']['value'] = array(
    'recruiting' => 'recruiting',
  );
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
  /* Filter criterion: Content: Project Status (field_act_status) */
  $handler->display->display_options['filters']['field_act_status_value']['id'] = 'field_act_status_value';
  $handler->display->display_options['filters']['field_act_status_value']['table'] = 'field_data_field_act_status';
  $handler->display->display_options['filters']['field_act_status_value']['field'] = 'field_act_status_value';
  $handler->display->display_options['filters']['field_act_status_value']['value'] = array(
    'completed' => 'completed',
  );
  $handler->display->display_options['pane_title'] = 'ACT Projects (Completed)';
  $handler->display->display_options['pane_category']['name'] = 'Non-customizable Content Lists';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $export['gsb_act_project_listing'] = $view;

  return $export;
}

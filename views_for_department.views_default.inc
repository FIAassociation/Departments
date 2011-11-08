<?php
/**
 * @file
 * views_for_department.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function views_for_department_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = '_fiadp';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = '金投四部门';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'FIA部门简介';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Picture */
  $handler->display->display_options['fields']['field_picture']['id'] = 'field_picture';
  $handler->display->display_options['fields']['field_picture']['table'] = 'field_data_field_picture';
  $handler->display->display_options['fields']['field_picture']['field'] = 'field_picture';
  $handler->display->display_options['fields']['field_picture']['label'] = '部门合照';
  $handler->display->display_options['fields']['field_picture']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_picture']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_picture']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_picture']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_picture']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_picture']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_picture']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_picture']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_picture']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_picture']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_picture']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_picture']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_picture']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_picture']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_picture']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_picture']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_picture']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_picture']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_picture']['field_api_classes'] = 0;
  /* Field: Content: 部长 */
  $handler->display->display_options['fields']['field_leader']['id'] = 'field_leader';
  $handler->display->display_options['fields']['field_leader']['table'] = 'field_data_field_leader';
  $handler->display->display_options['fields']['field_leader']['field'] = 'field_leader';
  $handler->display->display_options['fields']['field_leader']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_leader']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_leader']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_leader']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_leader']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_leader']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_leader']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_leader']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_leader']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_leader']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_leader']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_leader']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_leader']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_leader']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_leader']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_leader']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_leader']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_leader']['field_api_classes'] = 0;
  /* Field: Content: 副部长 */
  $handler->display->display_options['fields']['field_leaderb']['id'] = 'field_leaderb';
  $handler->display->display_options['fields']['field_leaderb']['table'] = 'field_data_field_leaderb';
  $handler->display->display_options['fields']['field_leaderb']['field'] = 'field_leaderb';
  $handler->display->display_options['fields']['field_leaderb']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_leaderb']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_leaderb']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_leaderb']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_leaderb']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_leaderb']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_leaderb']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_leaderb']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_leaderb']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_leaderb']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_leaderb']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_leaderb']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_leaderb']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_leaderb']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_leaderb']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_leaderb']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_leaderb']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_leaderb']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_leaderb']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_leaderb']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_leaderb']['field_api_classes'] = 0;
  /* Field: Content: Member */
  $handler->display->display_options['fields']['field_member']['id'] = 'field_member';
  $handler->display->display_options['fields']['field_member']['table'] = 'field_data_field_member';
  $handler->display->display_options['fields']['field_member']['field'] = 'field_member';
  $handler->display->display_options['fields']['field_member']['label'] = '成员';
  $handler->display->display_options['fields']['field_member']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_member']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_member']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_member']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_member']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_member']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_member']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_member']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_member']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_member']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_member']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_member']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_member']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_member']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_member']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_member']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_member']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_member']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_member']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_member']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_member']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'fiadp';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = '部门简介';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $export['_fiadp'] = $view;

  return $export;
}

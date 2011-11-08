<?php
/**
 * @file
 * views_for_department.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function views_for_department_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function views_for_department_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_node_info().
 */
function views_for_department_node_info() {
  $items = array(
    'department' => array(
      'name' => t('Department'),
      'base' => 'node_content',
      'description' => t('descripte the four departments in FIA'),
      'has_title' => '1',
      'title_label' => t('DepartmentName'),
      'help' => '',
    ),
  );
  return $items;
}

<?php
/**
 * @file
 * stanford_program_service.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function stanford_program_service_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|stanford_program_service|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'stanford_program_service';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h1',
        'class' => '',
      ),
    ),
    'links' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|stanford_program_service|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function stanford_program_service_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|stanford_program_service|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'stanford_program_service';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'body',
        1 => 'field_landing_page_item',
        2 => 'links',
        3 => 'field_s_prog_serv_add_details',
      ),
      'program_service_title_and_subtit' => array(
        4 => 'title',
        5 => 'group_s_subtitle_styles',
        6 => 'field_s_program_service_subtitle',
      ),
    ),
    'fields' => array(
      'body' => 'ds_content',
      'field_landing_page_item' => 'ds_content',
      'links' => 'ds_content',
      'field_s_prog_serv_add_details' => 'ds_content',
      'title' => 'program_service_title_and_subtit',
      'group_s_subtitle_styles' => 'program_service_title_and_subtit',
      'field_s_program_service_subtitle' => 'program_service_title_and_subtit',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|stanford_program_service|full'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function stanford_program_service_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'caw_banner';
  $ds_view_mode->label = 'CAW Banner';
  $ds_view_mode->entities = array(
    'field_collection_item' => 'field_collection_item',
  );
  $export['caw_banner'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'numbered_guide';
  $ds_view_mode->label = 'Numbered Guide';
  $ds_view_mode->entities = array(
    'field_collection_item' => 'field_collection_item',
  );
  $export['numbered_guide'] = $ds_view_mode;

  return $export;
}

<?php
/**
 * @file
 * stanford_program_service.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function stanford_program_service_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__stanford_program_service';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'stanford_8_col_banner' => array(
        'custom_settings' => FALSE,
      ),
      'taxonomy' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '14',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '13',
        ),
        'redirect' => array(
          'weight' => '12',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__stanford_program_service'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_stanford_program_service';
  $strongarm->value = array(
    0 => 'main-menu',
    1 => 'testing-sub-site-name',
    2 => 'benefits--rewards',
    3 => 'benefits--rewards',
    4 => 'learn--grow',
    5 => 'manage--lead',
    6 => 'one',
    7 => 'two',
    8 => 'one',
    9 => 'one',
    10 => 'one',
    11 => 'benefits--rewards',
    12 => 'learn--grow',
    13 => 'welcome-center',
    14 => 'learn--grow',
    15 => 'benefits--rwards',
    16 => 'two',
    17 => 'manage--lead',
    18 => 'learn--grow',
    19 => 'learn--grow',
    20 => 'welcome-center',
    21 => 'faculty-staff-help-center',
    22 => 'test-subsite-two-lines',
  );
  $export['menu_options_stanford_program_service'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_stanford_program_service';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_stanford_program_service'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_stanford_program_service';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_stanford_program_service'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_stanford_program_service';
  $strongarm->value = '1';
  $export['node_preview_stanford_program_service'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_stanford_program_service';
  $strongarm->value = 0;
  $export['node_submitted_stanford_program_service'] = $strongarm;

  return $export;
}

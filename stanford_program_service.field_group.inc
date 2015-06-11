<?php
/**
 * @file
 * stanford_program_service.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function stanford_program_service_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related_content|node|stanford_program_service|form';
  $field_group->group_name = 'group_related_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_program_service';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tag with Related Content',
    'weight' => '8',
    'children' => array(
      0 => 'field_related_content',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Tag with Related Content',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-related-content field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_related_content|node|stanford_program_service|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_subtitle_styles|node|stanford_program_service|full';
  $field_group->group_name = 'group_s_subtitle_styles';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_program_service';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Subtitle styles',
    'weight' => '5',
    'children' => array(
      0 => 'field_s_program_service_subtitle',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Subtitle styles',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'summary',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_subtitle_styles|node|stanford_program_service|full'] = $field_group;

  return $export;
}

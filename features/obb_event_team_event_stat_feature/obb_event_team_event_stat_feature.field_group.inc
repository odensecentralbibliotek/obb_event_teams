<?php
/**
 * @file
 * obb_event_team_event_stat_feature.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function obb_event_team_event_stat_feature_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_efterbehandling|field_collection_item|field_event_hold|form';
  $field_group->group_name = 'group_efterbehandling';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_event_hold';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Efterbehandling',
    'weight' => '8',
    'children' => array(
      0 => 'field_type',
      1 => 'field_kategori',
      2 => 'field_arrangementstype',
      3 => 'field_antal_deltagere',
      4 => 'field_antal_udervisere',
      5 => 'field_slutdato',
      6 => 'field_forberedelsestid',
      7 => 'field_eksterne_partnere',
      8 => 'field_hvilken_art',
      9 => 'field_har_formidlingen_v_ret_inv',
      10 => 'field_ekstern_underviser',
      11 => 'field_kvaliteten',
      12 => 'field_omkostninger',
      13 => 'field_initialer',
      14 => 'field_bem_rkninger',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_efterbehandling|field_collection_item|field_event_hold|form'] = $field_group;

  return $export;
}

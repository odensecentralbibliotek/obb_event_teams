<?php
/**
 * @file
 * obb_event_teams_feature.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function obb_event_teams_feature_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hold_event_p2b|field_collection_item|field_event_hold|form';
  $field_group->group_name = 'group_hold_event_p2b';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_event_hold';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Place2book ',
    'weight' => '6',
    'children' => array(
      0 => 'field_ding_event_price',
      1 => 'field_place2book_tickets',
      2 => 'field_ding_event_target',
      3 => 'field_standard_billet_navn',
      4 => 'field_ding_event_list_image',
      5 => 'field_ding_event_category',
      6 => 'field_ding_event_location',
      7 => 'field_ding_event_library',
      8 => 'field_ding_event_title_image',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Place2book ',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'js-hide',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_hold_event_p2b|field_collection_item|field_event_hold|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hold_tider|node|ding_event|form';
  $field_group->group_name = 'group_hold_tider';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ding_event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Hold/Tider',
    'weight' => '12',
    'children' => array(
      0 => 'field_event_hold',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Hold/Tider',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_hold_tider|node|ding_event|form'] = $field_group;

  return $export;
}

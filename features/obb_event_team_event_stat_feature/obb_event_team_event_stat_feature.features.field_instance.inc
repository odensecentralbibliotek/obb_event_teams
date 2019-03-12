<?php
/**
 * @file
 * obb_event_team_event_stat_feature.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function obb_event_team_event_stat_feature_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'field_collection_item-field_event_hold-field_antal_deltagere'
  $field_instances['field_collection_item-field_event_hold-field_antal_deltagere'] = array(
    'bundle' => 'field_event_hold',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_antal_deltagere',
    'label' => 'Antal deltagere',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 19,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_event_hold-field_antal_udervisere'
  $field_instances['field_collection_item-field_event_hold-field_antal_udervisere'] = array(
    'bundle' => 'field_event_hold',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_antal_udervisere',
    'label' => 'Antal undervisere',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 20,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_event_hold-field_arrangementstype'
  $field_instances['field_collection_item-field_event_hold-field_arrangementstype'] = array(
    'bundle' => 'field_event_hold',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_arrangementstype',
    'label' => 'Arrangementstype',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_event_hold-field_bem_rkninger'
  $field_instances['field_collection_item-field_event_hold-field_bem_rkninger'] = array(
    'bundle' => 'field_event_hold',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 30,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_bem_rkninger',
    'label' => 'Bemærkninger',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 30,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_event_hold-field_efterbehandling_workflow'
  $field_instances['field_collection_item-field_event_hold-field_efterbehandling_workflow'] = array(
    'bundle' => 'field_event_hold',
    'default_value' => array(),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_efterbehandling_workflow',
    'label' => 'Efterbehandling workflow',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'workflowfield',
      'settings' => array(
        'comment' => 1,
        'fieldset' => 0,
        'name_as_title' => 1,
      ),
      'type' => 'workflow_default',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_event_hold-field_ekstern_underviser'
  $field_instances['field_collection_item-field_event_hold-field_ekstern_underviser'] = array(
    'bundle' => 'field_event_hold',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 26,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_ekstern_underviser',
    'label' => 'Har der været ekstern oplægsholder/underviser/musiker?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 26,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_event_hold-field_eksterne_partnere'
  $field_instances['field_collection_item-field_event_hold-field_eksterne_partnere'] = array(
    'bundle' => 'field_event_hold',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 23,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_eksterne_partnere',
    'label' => 'Er arrangementet lavet i samarbejde med eksterne partnere?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 23,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_event_hold-field_forberedelsestid'
  $field_instances['field_collection_item-field_event_hold-field_forberedelsestid'] = array(
    'bundle' => 'field_event_hold',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_forberedelsestid',
    'label' => 'Forberedelsestid i timer',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 22,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_event_hold-field_har_formidlingen_v_ret_inv'
  $field_instances['field_collection_item-field_event_hold-field_har_formidlingen_v_ret_inv'] = array(
    'bundle' => 'field_event_hold',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 25,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_har_formidlingen_v_ret_inv',
    'label' => 'Har Formidlingen været involveret ifm. Markedsføring',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 25,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_event_hold-field_hvilken_art'
  $field_instances['field_collection_item-field_event_hold-field_hvilken_art'] = array(
    'bundle' => 'field_event_hold',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_hvilken_art',
    'label' => 'Hvis Ja, af hvilken art - økonomisk eller andet. Angiv hvem og hvad der støttes med?',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 24,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_event_hold-field_initialer'
  $field_instances['field_collection_item-field_event_hold-field_initialer'] = array(
    'bundle' => 'field_event_hold',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 29,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_initialer',
    'label' => 'Ansvarlig (initialer)',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 29,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_event_hold-field_kategori'
  $field_instances['field_collection_item-field_event_hold-field_kategori'] = array(
    'bundle' => 'field_event_hold',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_kategori',
    'label' => 'Kategori',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_event_hold-field_kvaliteten'
  $field_instances['field_collection_item-field_event_hold-field_kvaliteten'] = array(
    'bundle' => 'field_event_hold',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 27,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_kvaliteten',
    'label' => 'Hvis ja, hvordan oplevede du kvaliteten af denne? (Vælg mellem 1-7 hvor 1 = Meget utilfreds og 7 = 1 Meget tilfreds)',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 27,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_event_hold-field_omkostninger'
  $field_instances['field_collection_item-field_event_hold-field_omkostninger'] = array(
    'bundle' => 'field_event_hold',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 28,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_omkostninger',
    'label' => 'Omkostninger til oplægsholder/underviser/musiker',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 28,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_event_hold-field_slutdato'
  $field_instances['field_collection_item-field_event_hold-field_slutdato'] = array(
    'bundle' => 'field_event_hold',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_slutdato',
    'label' => 'Slutdato',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_select',
      'weight' => 21,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_event_hold-field_type'
  $field_instances['field_collection_item-field_event_hold-field_type'] = array(
    'bundle' => 'field_event_hold',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_type',
    'label' => 'Type',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 16,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Ansvarlig (initialer)');
  t('Antal deltagere');
  t('Antal undervisere');
  t('Arrangementstype');
  t('Bemærkninger');
  t('Efterbehandling workflow');
  t('Er arrangementet lavet i samarbejde med eksterne partnere?');
  t('Forberedelsestid i timer');
  t('Har Formidlingen været involveret ifm. Markedsføring');
  t('Har der været ekstern oplægsholder/underviser/musiker?');
  t('Hvis Ja, af hvilken art - økonomisk eller andet. Angiv hvem og hvad der støttes med?');
  t('Hvis ja, hvordan oplevede du kvaliteten af denne? (Vælg mellem 1-7 hvor 1 = Meget utilfreds og 7 = 1 Meget tilfreds)');
  t('Kategori');
  t('Omkostninger til oplægsholder/underviser/musiker');
  t('Slutdato');
  t('Type');

  return $field_instances;
}

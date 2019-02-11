<?php
/**
 * @file
 * obb_event_teams_feature.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function obb_event_teams_feature_field_default_field_instances() {
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
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 18,
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
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 19,
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
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 17,
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
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 29,
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

  // Exported field_instance: 'field_collection_item-field_event_hold-field_capacity'
  $field_instances['field_collection_item-field_event_hold-field_capacity'] = array(
    'bundle' => 'field_event_hold',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_capacity',
    'label' => 'Event kapacitet ',
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
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_event_hold-field_ding_event_body'
  $field_instances['field_collection_item-field_event_hold-field_ding_event_body'] = array(
    'bundle' => 'field_event_hold',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'ding_base',
        'settings' => array(
          'body_snippet_length' => 100,
        ),
        'type' => 'body_snippet',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_ding_event_body',
    'label' => 'Beskrivelse',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 2,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_event_hold-field_ding_event_category'
  $field_instances['field_collection_item-field_event_hold-field_ding_event_category'] = array(
    'bundle' => 'field_event_hold',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_ding_event_category',
    'label' => 'Category',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_event_hold-field_ding_event_date'
  $field_instances['field_collection_item-field_event_hold-field_ding_event_date'] = array(
    'bundle' => 'field_event_hold',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'medium',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_ding_event_date',
    'label' => 'Hold start/slut',
    'required' => 1,
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
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_event_hold-field_ding_event_library'
  $field_instances['field_collection_item-field_event_hold-field_ding_event_library'] = array(
    'bundle' => 'field_event_hold',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_ding_event_library',
    'label' => 'Library',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'ding_content',
      'settings' => array(),
      'type' => 'ding_content_group_audience_library',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_event_hold-field_ding_event_list_image'
  $field_instances['field_collection_item-field_event_hold-field_ding_event_list_image'] = array(
    'bundle' => 'field_event_hold',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_ding_event_list_image',
    'label' => 'List image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'resup' => 0,
      'resup_autostart' => 0,
      'resup_max_filesize' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'oembed' => 0,
          'private' => 0,
          'public' => 'public',
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'browser_plugins' => array(
          'ding_content' => 0,
          'media_default--media_browser_1' => 0,
          'media_default--media_browser_my_files' => 0,
          'upload' => 0,
        ),
      ),
      'type' => 'media_generic',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_event_hold-field_ding_event_location'
  $field_instances['field_collection_item-field_event_hold-field_ding_event_location'] = array(
    'bundle' => 'field_event_hold',
    'default_value' => array(
      0 => array(
        'element_key' => 'field_collection_item|field_event_hold|field_ding_event_location|und|0',
        'thoroughfare' => '',
        'premise' => '',
        'postal_code' => '',
        'locality' => '',
        'country' => 'DK',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_ding_event_location',
    'label' => 'Location',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'addressfield',
      'settings' => array(
        'available_countries' => array(),
        'format_handlers' => array(
          'address' => 'address',
          'address-hide-country' => 0,
          'organisation' => 0,
          'name-full' => 0,
          'name-oneline' => 0,
        ),
      ),
      'type' => 'addressfield_standard',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_event_hold-field_ding_event_price'
  $field_instances['field_collection_item-field_event_hold-field_ding_event_price'] = array(
    'bundle' => 'field_event_hold',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_ding_event_price',
    'label' => 'Price',
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
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_event_hold-field_ding_event_target'
  $field_instances['field_collection_item-field_event_hold-field_ding_event_target'] = array(
    'bundle' => 'field_event_hold',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_ding_event_target',
    'label' => 'Target',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_event_hold-field_ding_event_title_image'
  $field_instances['field_collection_item-field_event_hold-field_ding_event_title_image'] = array(
    'bundle' => 'field_event_hold',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_ding_event_title_image',
    'label' => 'Title image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'resup' => 0,
      'resup_autostart' => 0,
      'resup_max_filesize' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'oembed' => 0,
          'private' => 0,
          'public' => 'public',
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'browser_plugins' => array(
          'ding_content' => 0,
          'media_default--media_browser_1' => 0,
          'media_default--media_browser_my_files' => 0,
          'upload' => 0,
        ),
      ),
      'type' => 'media_generic',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_event_hold-field_ding_sale_date'
  $field_instances['field_collection_item-field_event_hold-field_ding_sale_date'] = array(
    'bundle' => 'field_event_hold',
    'deleted' => 0,
    'description' => 'Hvis intent er valgt her , bliver den salgs periode fra det originale arrangement brugt.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_ding_sale_date',
    'label' => 'Alternativ salgs periode for hold',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
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
      'weight' => 5,
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
        'weight' => 14,
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
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 25,
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
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 22,
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
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 21,
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
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 24,
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

  // Exported field_instance: 'field_collection_item-field_event_hold-field_hold_navn'
  $field_instances['field_collection_item-field_event_hold-field_hold_navn'] = array(
    'bundle' => 'field_event_hold',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_hold_navn',
    'label' => 'Hold navn',
    'required' => 1,
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
      'weight' => 0,
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
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 23,
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
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 28,
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
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 16,
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
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 26,
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
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 27,
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

  // Exported field_instance: 'field_collection_item-field_event_hold-field_place2book_tickets'
  $field_instances['field_collection_item-field_event_hold-field_place2book_tickets'] = array(
    'bundle' => 'field_event_hold',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_place2book_tickets',
    'label' => 'Place2book Tickets',
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
      'weight' => 6,
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
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 20,
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

  // Exported field_instance: 'field_collection_item-field_event_hold-field_standard_billet_navn'
  $field_instances['field_collection_item-field_event_hold-field_standard_billet_navn'] = array(
    'bundle' => 'field_event_hold',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_standard_billet_navn',
    'label' => 'Standard Billet Navn',
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
      'weight' => 9,
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
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 15,
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
  t('Alternativ salgs periode for hold');
  t('Ansvarlig (initialer)');
  t('Antal deltagere');
  t('Antal undervisere');
  t('Arrangementstype');
  t('Bemærkninger');
  t('Beskrivelse');
  t('Category');
  t('Efterbehandling workflow');
  t('Er arrangementet lavet i samarbejde med eksterne partnere?');
  t('Event kapacitet ');
  t('Forberedelsestid i timer');
  t('Har Formidlingen været involveret ifm. Markedsføring');
  t('Har der været ekstern oplægsholder/underviser/musiker?');
  t('Hold navn');
  t('Hold start/slut');
  t('Hvis Ja, af hvilken art - økonomisk eller andet. Angiv hvem og hvad der støttes med?');
  t('Hvis intent er valgt her , bliver den salgs periode fra det originale arrangement brugt.');
  t('Hvis ja, hvordan oplevede du kvaliteten af denne? (Vælg mellem 1-7 hvor 1 = Meget utilfreds og 7 = 1 Meget tilfreds)');
  t('Kategori');
  t('Library');
  t('List image');
  t('Location');
  t('Omkostninger til oplægsholder/underviser/musiker');
  t('Place2book Tickets');
  t('Price');
  t('Slutdato');
  t('Standard Billet Navn');
  t('Target');
  t('Title image');
  t('Type');

  return $field_instances;
}

<?php
// $Id$

/**
 * @file
 * Views functions for the sms_node module.
 */


/**
 * Implementation of hook_views_data()
 */

function sms_node_views_data() {
  $data['sms_node_expire'] = array(
    'table' => array(
      'group' => 'SMS Node',
      'title' => 'sms node expire',
      'join' => array(
        'node' => array(
          'left_field' => 'nid',
          'field' => 'nid',        
         ),
      ),
    ),
    'expiry_timestamp' => array(
      'title' => t('sms publish expire'),
      'help' => t('A date-time of node Publish expiration.'), 
      'field' => array(
        'handler' => 'views_handler_field_date',
        'click sortable' => TRUE,
      ),
      'sort' => array(
        'handler' => 'views_handler_sort_date',
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_date', //or datetime
      ),
      
    ),
    'expiry_vip_timestamp' => array(
      'title' => t('sms VIP expire'),
      'help' => t('A date-time of node VIP expiration.'), 
      'field' => array(
        'handler' => 'views_handler_field_date',
        'click sortable' => TRUE,
      ),
      'sort' => array(
        'handler' => 'views_handler_sort_date',
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_date', //or datetime
      ),
      
    ),
  );
   
  return $data;  
}

/**
 * Implementation of hook_views_handlers().
 */
function sms_node_views_handlers() {
  return array(
    'info' => array(
      'path' => drupal_get_path('module', 'sms_node') . '/handlers',
    ),
    'handlers' => array(
      'expiry_timestamp' => array(
        'parent' => 'views_handler_field_date',
      ),
      'expiry_vip_timestamp' => array(
        'parent' => 'views_handler_field_date',
      ),
    ),
  );
}

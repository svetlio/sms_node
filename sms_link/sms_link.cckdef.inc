<?php
function _sms_link_export() {

$content['type']  = array(
  'name' => 'Sms link',
  'type' => 'sms_link',
  'description' => 'Link created with sms message',
  'title_label' => 'Title',
  'body_label' => '',
  'min_word_count' => '0',
  'help' => '',
  'node_options' => 
  array(
    'status' => TRUE,
    'promote' => FALSE,
    'sticky' => FALSE,
    'revision' => FALSE,
  ),
  'language_content_type' => '1',
  'upload' => '0',
  'old_type' => 'sms_link',
  'orig_type' => '',
  'module' => 'node',
  'custom' => '1',
  'modified' => '1',
  'locked' => '0',
  'comment' => '0',
  'comment_default_mode' => '4',
  'comment_default_order' => '1',
  'comment_default_per_page' => '50',
  'comment_controls' => '3',
  'comment_anonymous' => '0',
  'comment_subject_field' => '1',
  'comment_preview' => '1',
  'comment_form_location' => '0',
  'event_nodeapi' => 'never',
  'print_display' => 0,
  'print_display_comment' => 0,
  'print_display_urllist' => 0,
  'print_mail_display' => 0,
  'print_mail_display_comment' => 0,
  'print_mail_display_urllist' => 0,
  'ant' => '1',
  'ant_pattern' => '',
  'ant_php' => 0,
  'i18n_newnode_current' => 1,
  'i18n_required_node' => 1,
  'i18n_lock_node' => 1,
  'i18n_node' => '1',
  'i18nsync_nodeapi' => 
  array(
    'name' => FALSE,
    'status' => FALSE,
    'promote' => FALSE,
    'moderate' => FALSE,
    'sticky' => FALSE,
    'revision' => FALSE,
    'parent' => FALSE,
    'taxonomy' => FALSE,
    'comment' => FALSE,
    'files' => FALSE,
    'field_link' => FALSE,
  ),
);
$content['fields']  = array(
  0 => 
  array(
    'label' => 'link',
    'field_name' => 'field_link',
    'type' => 'link',
    'widget_type' => 'link',
    'change' => 'Change basic information',
    'weight' => '31',
    'description' => '',
    'default_value' => 
    array(
      0 => 
      array(
        'title' => '',
        'url' => '',
      ),
    ),
    'default_value_php' => '',
    'default_value_widget' => NULL,
    'required' => 0,
    'multiple' => '0',
    'validate_url' => 1,
    'url' => 0,
    'title' => 'optional',
    'title_value' => '',
    'enable_tokens' => 0,
    'display' => 
    array(
      'url_cutoff' => '80',
    ),
    'attributes' => 
    array(
      'target' => 'default',
      'rel' => '',
      'class' => '',
      'title' => '',
    ),
    'op' => 'Save field settings',
    'module' => 'link',
    'widget_module' => 'link',
    'columns' => 
    array(
      'url' => 
      array(
        'type' => 'varchar',
        'length' => 2048,
        'not null' => FALSE,
        'sortable' => TRUE,
      ),
      'title' => 
      array(
        'type' => 'varchar',
        'length' => 255,
        'not null' => FALSE,
        'sortable' => TRUE,
      ),
      'attributes' => 
      array(
        'type' => 'text',
        'size' => 'medium',
        'not null' => FALSE,
      ),
    ),
    'display_settings' => 
    array(
      'label' => 
      array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => 
      array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => 
      array(
        'format' => 'default',
        'exclude' => 0,
      ),
      4 => 
      array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
  ),
);
$content['extra']  = array(
  'title' => '-5',
  'revision_information' => '20',
  'author' => '20',
  'options' => '25',
  'comment_settings' => '30',
  'menu' => '-2',
);
  return $content;
}
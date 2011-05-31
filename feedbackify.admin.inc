<?php
// $Id$

/**
 * @file
 * Adminstrative page callbacks for Feedbackify
 */

/**
 * Implementation of Feedbackify settings form
 */
function feedbackify_settings_form() {
  $form = array();
  $form['feedbackify_id'] = array(
    '#type' => 'textfield',
    '#title' => t('Form ID'),
    '#default_value' => variable_get('feedbackify_id', NULL),
  );

  $form['feedbackify_colour'] = array(
    '#type' => 'textfield',
    '#title' => t('Button Colour'),
    '#default_value' => variable_get('feedbackify_colour', '#237BAB'),
  );
  return system_settings_form($form);
}
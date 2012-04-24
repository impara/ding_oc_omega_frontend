<?php
/**
 * @file
 * ding_oc_omega_frontend.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ding_oc_omega_frontend_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'oc_omega_test';
  $export['theme_default'] = $strongarm;

  return $export;
}

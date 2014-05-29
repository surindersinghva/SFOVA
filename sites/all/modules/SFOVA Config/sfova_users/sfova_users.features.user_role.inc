<?php
/**
 * @file
 * sfova_users.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function sfova_users_user_default_roles() {
  $roles = array();

  // Exported role: Administrator.
  $roles['Administrator'] = array(
    'name' => 'Administrator',
    'weight' => 2,
  );

  // Exported role: Chairman.
  $roles['Chairman'] = array(
    'name' => 'Chairman',
    'weight' => 3,
  );

  // Exported role: Members.
  $roles['Members'] = array(
    'name' => 'Members',
    'weight' => 7,
  );

  // Exported role: PRO.
  $roles['PRO'] = array(
    'name' => 'PRO',
    'weight' => 5,
  );

  // Exported role: Parents.
  $roles['Parents'] = array(
    'name' => 'Parents',
    'weight' => 9,
  );

  // Exported role: Secretary.
  $roles['Secretary'] = array(
    'name' => 'Secretary',
    'weight' => 4,
  );

  // Exported role: Volunteers.
  $roles['Volunteers'] = array(
    'name' => 'Volunteers',
    'weight' => 8,
  );

  // Exported role: Youth Coordinator.
  $roles['Youth Coordinator'] = array(
    'name' => 'Youth Coordinator',
    'weight' => 6,
  );

  return $roles;
}

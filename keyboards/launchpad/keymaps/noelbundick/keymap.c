#include QMK_KEYBOARD_H
#include "noelbundick.h"

// Tap Dance configuration
enum {
  TD_LOCK_SLEEP = 0,
  TD_TASKMGR_CALTDEL
};

qk_tap_dance_action_t tap_dance_actions[] = {
  //Tap once for lock, twice for sleep
  [TD_LOCK_SLEEP] = ACTION_TAP_DANCE_DOUBLE(LOCK, KC_SLEP),
  // Once for task manager, twice for ctrl+alt+del
  [TD_TASKMGR_CALTDEL] = ACTION_TAP_DANCE_DOUBLE(TASKMGR, CALTDEL)
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_QWERTY] = LAYOUT(
  KC_VOLD,          KC_VOLU,
  _______,          _______,
  DESK_LEFT,        DESK_RGHT,
  LT(_FN, KC_WAKE), LT(_KB, KC_MPLY)
),

[_FN] = LAYOUT(
  _______, TD(TD_TASKMGR_CALTDEL),
  _______, _______,
  _______, _______,
  _______, TD(TD_LOCK_SLEEP)
),

[_KB] = LAYOUT(
  RESET,   _______,
  _______, _______,
  _______, _______,
  _______, _______
)

};

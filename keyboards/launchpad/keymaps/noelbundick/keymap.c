#include QMK_KEYBOARD_H
#include "noelbundick.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_QWERTY] = LAYOUT(
  KC_VOLD, KC_VOLU,
  KC_LEFT, KC_RGHT,
  KC_UP,   KC_DOWN,
  MO(_FN),    LT(_KB, KC_MPLY)
),

[_FN] = LAYOUT(
  KC_COPY,   KC_PSTE,
  DESK_LEFT, DESK_RGHT,
  TASKMGR,   _______,
  _______,   LOCK
),

[_KB] = LAYOUT(
  RESET,   _______,
  _______, _______,
  _______, _______,
  _______, _______
)

};

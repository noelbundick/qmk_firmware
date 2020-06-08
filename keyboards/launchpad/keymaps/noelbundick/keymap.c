#include QMK_KEYBOARD_H
#include "noelbundick.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_QWERTY] = LAYOUT(
  KC_VOLD,          KC_VOLU,
  _______,          _______,
  DESK_LEFT,        DESK_RGHT,
  LT(_FN, KC_WAKE), LT(_KB, KC_MPLY)
),

[_FN] = LAYOUT(
  LOCK,    KC_SLEP,
  _______, _______,
  _______, _______,
  _______, TASKMGR
),

[_KB] = LAYOUT(
  RESET,   _______,
  _______, _______,
  _______, _______,
  _______, _______
)

};

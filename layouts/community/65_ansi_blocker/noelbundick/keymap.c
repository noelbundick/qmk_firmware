#include QMK_KEYBOARD_H
#include "noelbundick.h"

// Rows: [15, 15, 14, 14, 9]

enum { _NORMAL = 14 };

enum layer_keycodes {
  NORMAL = SAFE_RANGE,
  NOEL
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

// Normal layout for humans
[_NORMAL] = LAYOUT_65_ansi_blocker(
  KC_GESC, KC_1,    KC_2,    KC_3,    KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,    KC_0,    KC_MINS,  KC_EQL,  KC_BSPC,  LT(_KB, KC_GRV),
  KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,    KC_P,    KC_LBRC,  KC_RBRC, KC_BSLS,  KC_DEL,
  KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,    KC_SCLN, KC_QUOT,  KC_ENT,            KC_PGUP,
  KC_LSFT,          KC_Z,    KC_X,    KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM, KC_DOT,  KC_SLSH,  KC_RSFT, KC_UP,    KC_PGDN,
  KC_LCTL, KC_LGUI, KC_LALT,                          KC_SPC,                     KC_RALT, KC_RCTL,       KC_LEFT, KC_DOWN,  KC_RIGHT
),

[_QWERTY] = WRAP(LAYOUT_65_ansi_blocker,
  KC_GESC, ________________NUM_LEFT___________________, _______________NUM_RIGHT___________________, KC_MINS, KC_EQL,  KC_BSLS, LT(_KB, KC_GRV),
  KC_TAB,  ________________ALPHA_L1___________________, ________________ALPHA_R1___________________, KC_LBRC, KC_RBRC, KC_BSPC, KC_DEL,
  KC_LCTL, ________________ALPHA_L2___________________, ________________ALPHA_R2___________________, KC_QUOT, KC_ENT,           KC_PGUP,
  KC_LSFT, ________________ALPHA_L3___________________, ________________ALPHA_R3___________________,          KC_RSFT, KC_UP,   KC_PGDN,
  CUTE, KC_LGUI, VDLALT,                          SPACE,                           VURALT, FLAY,              KC_LEFT, KC_DOWN, KC_RIGHT
),

[_LEFT] = WRAP(LAYOUT_65_ansi_blocker,
  __________________________15________________________,
  __________________________6_________________________, _______________NAV________________, _______, _______, _______, KC_DEL, _______,
  __________________________6_________________________, ______________ARROWS______________, _______, _______, _______, _______,
  __________________________6_________________________, DESK_LEFT, _______, _______, DESK_RGHT, _______, _______, _______, _______,
  __________________________6_________________________, _______, _______, _______
),

[_RIGHT] = WRAP(LAYOUT_65_ansi_blocker,
  KC_GRV, __________________________14________________________,
  __________________________15________________________,
  __________________________14________________________,
  __________________________14________________________,
  __________________________6_________________________, _______, _______, _______
),

[_SPACE] = WRAP(LAYOUT_65_ansi_blocker,
  __________________________15________________________,
  __________________________15________________________,
  _______, _______, _____________BIZARROWS____________, ______________ARROWS______________, _______, _______, _______, _______,
  __________________________14________________________,
  __________________________6_________________________, _______, _______, _______
),

[_FN] = WRAP(LAYOUT_65_ansi_blocker,
  _______, _____________________FN_LEFT________________________, _____________________FN_RIGHT_______________________, _______, _______,
  __________________________15________________________,
  __________________________14________________________,
  __________________________14________________________,
  __________________________6_________________________, _______, _______, _______
),

[_KB] = WRAP(LAYOUT_65_ansi_blocker,
  RESET, NORMAL, NOEL, __________________________12________________________,
  __________________________15________________________,
  __________________________14________________________,
  __________________________14________________________,
  __________________________6_________________________, _______, _______, _______
),

};

// Activate normal mode on boot for this kb
void keyboard_post_init_user(void) {
  default_layer_set(1UL<<_NORMAL);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case NORMAL:
      if (record->event.pressed) {
        default_layer_set(1UL<<_NORMAL);
      }
      return false;
      break;
    case NOEL:
      if (record->event.pressed) {
        default_layer_set(1UL<<_QWERTY);
      }
      return false;
      break;
  }

  return true;
}


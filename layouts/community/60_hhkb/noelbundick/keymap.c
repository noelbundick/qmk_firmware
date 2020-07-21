#include QMK_KEYBOARD_H
#include "noelbundick.h"

// HHKB keys per row: [15, 14, 13, 13, 5]


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_QWERTY] = WRAP(LAYOUT_60_hhkb,
  KC_GESC, ________________NUM_LEFT___________________, _______________NUM_RIGHT___________________, KC_MINS, KC_EQL,  KC_BSLS, KC_GRV,
  KC_TAB,  ________________ALPHA_L1___________________, ________________ALPHA_R1___________________, KC_LBRC, KC_RBRC, KC_BSPC,
  KC_LCTL, ________________ALPHA_L2___________________, ________________ALPHA_R2___________________, KC_QUOT, KC_ENT,
  KC_LSFT, ________________ALPHA_L3___________________, ________________ALPHA_R3___________________, KC_RSFT, MO(_FN),
  LGUI_T(KC_MUTE), VDLALT, SPACE, VURALT, LGUI_T(KC_MPLY)
),

[_LEFT] = WRAP(LAYOUT_60_hhkb,
    __________________________12________________________,                                                       _______, _______, _______,
    __________________________6_________________________, _______________NAV________________, _______, _______, _______, KC_DEL,
    __________________________6_________________________, ______________ARROWS______________, _______, _______, _______,
    __________________________6_________________________, DESK_LEFT, _______, _______, DESK_RGHT, _______, _______, _______,
    _____________________5_____________________
),

[_RIGHT] = WRAP(LAYOUT_60_hhkb,
    __________________________15________________________,
    __________________________14________________________,
    __________________________6_________________________, ______________ARROWS______________, _______, _______, _______,
    __________________________12________________________, _______,
    _____________________5_____________________
),

[_SPACE] = WRAP(LAYOUT_60_hhkb,
    __________________________15________________________,
    __________________________14________________________,
    _______, _______, _____________BIZARROWS____________, ______________ARROWS______________, _______, _______, _______,
    __________________________12________________________, _______,
    _____________________5_____________________
),

[_FN] = WRAP(LAYOUT_60_hhkb,
    RESET, _____________________FN_LEFT________________________, _____________________FN_RIGHT_______________________, _______, _______,
    RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, __________________________6_________________________, _______, _______, _______,
    __________________________12________________________, _______,
    __________________________12________________________, _______,
    _____________________5_____________________
)

};

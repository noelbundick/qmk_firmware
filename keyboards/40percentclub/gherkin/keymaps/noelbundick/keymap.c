#include QMK_KEYBOARD_H
#include "noelbundick.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_QWERTY] = WRAP(LAYOUT_ortho_3x10,
  KC_A, KC_B, KC_C, KC_D, KC_E, KC_F, KC_G, KC_H, KC_I, KC_J,
  KC_K, KC_L, KC_M, KC_N, KC_O, KC_P, KC_Q, KC_R, KC_S, KC_T,
  KC_U, KC_V, KC_W, KC_X, KC_Y, KC_Z, SPACE, KC_ENT, KB, BL_TOGG
), 

[_KB] = WRAP(LAYOUT_ortho_3x10,
  RESET,   _________________4________________, _____________________5_____________________,
  _____________________5_____________________, _____________________5_____________________,
  _____________________5_____________________, _____________________5_____________________)

};
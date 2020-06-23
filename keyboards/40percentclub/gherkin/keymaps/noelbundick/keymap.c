#include QMK_KEYBOARD_H
#include "noelbundick.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_QWERTY] = WRAP(LAYOUT_ortho_3x10,
  ________________ALPHA_L1___________________, ________________ALPHA_R1___________________,
  ________________ALPHA_L2___________________, ________________ALPHA_R2___________________,
  ________________ALPHA_L3___________________, ________________ALPHA_R3___________________
)

};
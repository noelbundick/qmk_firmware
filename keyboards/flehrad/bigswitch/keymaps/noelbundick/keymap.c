#include QMK_KEYBOARD_H
#include "noelbundick.h"

// Tap Dance configuration
enum {
  TD_ACTION
};

void dance(qk_tap_dance_state_t *state, void *user_data) {
  switch (state->count) {
    case 1:
      // Mute mic via Power Toys
      tap_code16(LGUI(LSFT(KC_M)));
      break;
    case 2:
      // Mute camera+mic via Power Toys
      tap_code16(LGUI(LSFT(KC_A)));
      break;
    case 3:
      tap_code16(KC_MUTE);
      break;
    case 5:
      tap_code16(KC_SLEP);
      break;
    default:
      break;
  }
  reset_tap_dance(state);
}

qk_tap_dance_action_t tap_dance_actions[] = {
  [TD_ACTION] = ACTION_TAP_DANCE_FN(dance)
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

LAYOUT(TD(TD_ACTION)),

};

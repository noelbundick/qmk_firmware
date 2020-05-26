#pragma once
#include QMK_KEYBOARD_H

/**********
  Utilities
**********/

// Generic macro wrap to force inner evaluation
#define WRAP(MACRO, ...) MACRO(__VA_ARGS__)

/**********
  Layout-independent definitions
**********/

enum custom_layers {
  _QWERTY,      // QWERTY base
  _LEFT,        // left-hand activated layer (usually via F)
  _RIGHT,       // right-hand activated layer (usually via J)
  _LOWER,
  _RAISE,
  _KB,          // control the keyboard itself (RGB, reset, etc)
};

#define RAISE       MO(_RAISE)
#define LOWER       MO(_LOWER)

/**********
  Single keys (ex: Ctrl+Win+Left to switch virtual desktops)
**********/

#define F_LEFT      LT(_LEFT, KC_F)
#define J_RIGHT     LT(_RIGHT, KC_J)

#define DESK_LEFT   LCTL(LGUI(KC_LEFT))
#define DESK_RIGHT  LCTL(LGUI(KC_RGHT))

/**********
  Key groups (ex: numbers for left hand)
**********/

// somewhere around >3 is my personal cutoff for condensing blocks
// these are purposely non-uniform as rough guesstimates for visual spacing
#define _________________4________________                         _______, _______, _______, _______
#define _____________________5_____________________                _______, _______, _______, _______, _______
#define __________________________6_________________________       _______, _______, _______, _______, _______, _______

// Nav groups. Note these are in Vim order
// per-character (arrow keys)
#define ______________ARROWS______________                KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
// per-line/page (nav cluster)
#define _______________NAV________________                KC_HOME, KC_PGDN, KC_PGUP, KC_END

// Split layouts: left hand
#define ______________SPECIAL_LEFT_________________       KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC
#define ________________NUM_LEFT___________________       KC_1,    KC_2,    KC_3,    KC_4,    KC_5
#define ________________ALPHA_L1___________________       KC_Q,    KC_W,    KC_E,    KC_R,    KC_T
#define ________________ALPHA_L2___________________       KC_A,    KC_S,    KC_D,    F_LEFT,  KC_G
#define ________________ALPHA_L3___________________       KC_Z,    KC_X,    KC_C,    KC_V,    KC_B

// Split layouts: right hand
#define ______________SPECIAL_RIGHT________________       KC_CIRC, KC_AMPR,    KC_ASTR,    KC_LPRN, KC_RPRN
#define _______________NUM_RIGHT___________________       KC_6,    KC_7,    KC_8,    KC_9,    KC_0
#define ________________ALPHA_R1___________________       KC_Y,    KC_U,    KC_I,    KC_O,    KC_P
#define ________________ALPHA_R2___________________       KC_H,    J_RIGHT, KC_K,    KC_L,    KC_SCLN
#define ________________ALPHA_R3___________________       KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLASH

// Full-range function blocks. Note the longer length (6 keys)
#define _____________________FN_LEFT________________________       KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6
#define _____________________FN_RIGHT_______________________       KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12

/* Copyright 2019-2020 DMQ Design
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H
#include "noelbundick.h"
#include "pointing_device.h"

const int8_t MOUSE_SPEED = 80;

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
    KC_MPLY, KC_TRNS, RGB_TOG, KC_MUTE,    //encoder 1
    KC_7,    KC_8,    KC_9,    LCTL(KC_W), //encoder 2
    KC_4,    KC_5,    KC_6,    KC_TRNS,    //encoder 3
    KC_1,    KC_2,    KC_3
  ),
};

void move_mouse_x(bool right) {
  report_mouse_t currentReport = pointing_device_get_report();
  currentReport.x = right ? MOUSE_SPEED : -MOUSE_SPEED;
  pointing_device_set_report(currentReport);
  pointing_device_send();
}

void encoder_update_user(uint8_t index, bool clockwise) {
  switch(index) {
    case 0:
      clockwise ? tap_code(KC_VOLU) : tap_code(KC_VOLD);
    break;
    case 1:
      // clockwise ? rgblight_increase_val() : rgblight_decrease_val();
      clockwise ? tap_code(KC_WH_D) : tap_code(KC_WH_U);
    break;
    case 2:
      // clockwise ? rgblight_increase_hue() : rgblight_decrease_hue();
      // clockwise ? tap_code16(LCTL(KC_TAB)) : tap_code16(LCTL(LSFT(KC_TAB)));
      move_mouse_x(clockwise);
    break;
  }
}

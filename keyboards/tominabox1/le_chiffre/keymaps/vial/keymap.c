/* Copyright 2020 tominabox1
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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
    KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,  KC_MPLY,  KC_Y,   KC_U,    KC_I,   KC_O,     KC_P,
    KC_A,   KC_S,   KC_D,   KC_F,   KC_G,            KC_H,   KC_J,    KC_K,   KC_L,  KC_SCLN,
    KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,            KC_N,   KC_M, KC_COMM, KC_DOT,  KC_SLSH,
                         KC_LCTL, KC_ENT,            KC_SPC, KC_RALT
  ),

  [1] = LAYOUT(
    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
                                 KC_TRNS,   KC_TRNS,            KC_TRNS,   KC_TRNS
  ),

  [2] = LAYOUT(
    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
                                 KC_TRNS,   KC_TRNS,            KC_TRNS,   KC_TRNS
  ),

  [3] = LAYOUT(
     RESET,  KC_F19,  KC_F20,  KC_F21,  KC_F22,    RGB_TOG,   KC_F1,  KC_F2,    KC_F3,  KC_F4,  KC_SLEP,
    RGB_MOD,  RGB_HUI,  RGB_SAI,  RGB_VAI,  KC_F23,           KC_F5,  KC_F6,  KC_F7,  KC_F8,   KC_PAUS,
    RGB_RMOD,  RGB_HUD,  RGB_SAD,  RGB_VAD,  KC_F24,           KC_F9,    KC_F10,  KC_F11,   KC_F12,  KC_BSLS,
                                  KC_TRNS,KC_TRNS,           KC_TRNS,  KC_TRNS
  ),
};

void rgb_matrix_indicators_user() {
switch (get_highest_layer(layer_state)) {
    case 1:
        rgb_matrix_set_color(9, RGB_BLUE);
        break;
    case 2:
        rgb_matrix_set_color(10, RGB_RED);
        break;
    case 3:
        rgb_matrix_set_color(9, RGB_WHITE);
        rgb_matrix_set_color(10, RGB_WHITE);
        break;
    }
}

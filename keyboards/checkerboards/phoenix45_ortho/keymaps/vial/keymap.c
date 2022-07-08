/* Copyright 2021 Nathan Spears
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

// Left-hand home row mods
#define HOME_A LCTL_T(KC_A)
#define HOME_S LALT_T(KC_S)
#define HOME_D LGUI_T(KC_D)
#define HOME_F LSFT_T(KC_F)

// Right-hand home row mods
#define HOME_J RSFT_T(KC_J)
#define HOME_K RGUI_T(KC_K)
#define HOME_L RALT_T(KC_L)
#define HOME_SCLN RCTL_T(KC_SCLN)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_ortho_2x225u(
        KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,            KC_ESC,     KC_PGUP,     KC_BSPC,    KC_Y,    KC_U,    KC_I,  KC_O, KC_P,
        HOME_A,     HOME_S,     HOME_D,     HOME_F,     KC_G,     CTL_T(KC_ESC),     KC_PGDN,     KC_QUOT,    KC_H,    HOME_J,  HOME_K,HOME_L,HOME_SCLN,
        KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,           KC_LSFT,     KC_HOME,     KC_ENT,    KC_N,    KC_M,  KC_COMM,  KC_DOT,  KC_SLSH,
        KC_LCTL,    KC_ESC,     LT(2, KC_TAB),     LT(1, KC_BSPC),      KC_SPC,      LT(3, KC_SPC),     KC_ENT,     KC_BSPC,   KC_RCTL
    ),

    [1] = LAYOUT_ortho_2x225u(
        KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    _______, _______, _______, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
        KC_TILD, KC_GRV, KC_LCBR,  KC_LBRC, KC_LPRN, _______, _______, _______, KC_RPRN, KC_RBRC, KC_RCBR, KC_QUOT, KC_DQUO,
        _______, _______, KC_BSLS, KC_MINS, KC_EQL,  _______, _______, _______, KC_PLUS, KC_UNDS, KC_PIPE, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),

    [2] = LAYOUT_ortho_2x225u(
        KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC, _______, _______, _______, KC_RPRN, KC_AMPR, KC_ASTR, KC_PERC, KC_CIRC,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),

    [3] = LAYOUT_ortho_2x225u(
        _______, LCTL(KC_LEFT), LCTL(KC_UP), LCTL(KC_RGHT), _______, _______, _______, _______, _______, KC_PGUP, KC_UP, KC_PGDN,   _______,
        _______, KC_MS_ACCEL2,  KC_MS_ACCEL1,KC_MS_ACCEL0,  _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_RGHT, _______,
        _______, _______,       _______,     _______,       _______, _______, _______, _______, _______, KC_VOLD, KC_MUTE, KC_VOLU, _______,
        _______, _______,       _______,     _______,       _______, _______, _______, _______, _______
    ),

    [4] = LAYOUT_ortho_2x225u(
        _______, _______, _______, KC_UP,   _______, _______, _______, _______, KC_UNDS, _______, KC_LBRC, KC_RBRC, _______,
        _______, _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, _______, KC_MINS, _______, KC_LCBR, KC_RCBR, _______,
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   _______,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
        _______,   _______, _______,          _______,          _______,          _______,           _______, _______, _______
    )
};

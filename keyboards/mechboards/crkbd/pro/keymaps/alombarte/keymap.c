// Copyright 2025 Dasky (@daskygit)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_split_3x6_3(
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                          KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,    KC_BSPC,
    KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                          KC_H,    KC_J,    KC_K,    KC_L,   KC_QUOT, KC_BSLS,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                          KC_N,    KC_M,    KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
                                        KC_LGUI, MO(1),  KC_SPC,      KC_ENT,   MO(2), KC_RALT

),



  [1] = LAYOUT_split_3x6_3(
    KC_ESC,   KC_1,   KC_2,   KC_3,   KC_4,   KC_5,                             KC_6, KC_7, KC_8, KC_9, KC_0, S(KC_MINS),
    KC_LCTL, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_UP, KC_NO, KC_PSCR, KC_PGUP,
    KC_LSFT, KC_NUBS, MC_1, KC_BSLS, KC_NO, KC_NO, KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT, KC_END, KC_PGDN,
    KC_LGUI, KC_TRNS, KC_SPC, KC_ENT, KC_TRNS, KC_RALT
),

  [2] = LAYOUT_split_3x6_3(


    KC_TAB, S(KC_1), S(KC_2), S(KC_3), S(KC_4), S(KC_5), S(KC_6), S(KC_7), S(KC_8), S(KC_9), S(KC_0), KC_MINS,
    KC_LCTL, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_UP, KC_NO, KC_LBRC, KC_RBRC,
    KC_LSFT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_SCLN, KC_LEFT, KC_DOWN, KC_RGHT, KC_GRV, KC_RSFT,
    KC_LGUI, KC_TRNS, KC_SPC, KC_ENT, KC_TRNS, KC_RALT
),

  [3] = LAYOUT_split_3x6_3(
    KC_NO, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F10, KC_F11, KC_F12, KC_MPLY, KC_DEL,
    RM_TOGG, RM_HUEU, RM_SATU, RM_VALU, KC_NO, KC_NO, KC_NO, KC_NO, KC_VOLU, KC_NO, KC_NO, MC_0,
    RM_NEXT, RM_HUED, RM_SATD, RM_VALD, KC_NO, KC_NO, KC_NO, KC_MPRV, KC_VOLD, KC_MNXT, KC_NO, MC_0,
                                        KC_LGUI, KC_TRNS, KC_SPC, KC_ENT, KC_TRNS, KC_RALT
)
};

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
[0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT)},
[1] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS)},
[2] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS)},
[3] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS)}
};
#endif

// clang-format on

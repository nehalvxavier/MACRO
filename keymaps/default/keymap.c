// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#define _BASE 0
#define _CUSTOM 1

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │ 7 │ 8 │ 9 │ / │
     * ├───┼───┼───┼───┤
     * │ 4 │ 5 │ 6 │ * │
     * ├───┼───┼───┼───┤
     * │ 1 │ 2 │ 3 │ - │
     * ├───┼───┼───┼───┤
     * │ 0 │ . │Ent│ + │
     * └───┴───┴───┴───┘
     */
    [_BASE] = LAYOUT_ortho_4x3(
        KC_A,   _______,   KC_A,
        RGB_TOG,   RGB_MODE_FORWARD,   RGB_MODE_REVERSE,
        RGB_MODE_RAINBOW,   RGB_MODE_BREATHE,   RGB_MODE_PLAIN,
        KC_CAPS_LOCK,   KC_NUM_LOCK, KC_LOCKING_SCROLL_LOCK
    )
};
#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [_BASE] =  { ENCODER_CCW_CW(RGB_HUD, RGB_HUI),           ENCODER_CCW_CW(RGB_SAD, RGB_SAI)  },
};
#endif

led_config_t g_led_config = { {
  // Key Matrix to LED Index
  {   0, 1, 2},
  {   NO_LED, NO_LED, NO_LED },
  {   NO_LED, NO_LED, NO_LED },
  {   NO_LED, NO_LED, NO_LED }
}, {
  // LED Index to Physical Position
  { 112,  21 }, { 56,  21 }, { 37,  21 }
}, {
  // LED Index to Flag
  1, 1, 1
} };

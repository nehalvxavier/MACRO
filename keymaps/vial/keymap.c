// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#define _BASE 0
#define _CUSTOM 1

#define _______ KC_TRNS

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
        KC_A,  KC_A,
        RGB_TOG,   RGB_MODE_FORWARD,   RGB_MODE_REVERSE,
        RGB_MODE_RAINBOW,   RGB_MODE_BREATHE,   RGB_MODE_PLAIN,
        KC_CAPS_LOCK,   KC_NUM_LOCK, KC_LOCKING_SCROLL_LOCK
    ),
    [_CUSTOM] = LAYOUT_ortho_4x3(
        _______,   _______,
        _______,   _______,   _______,
        _______,   _______,   _______,
        _______,   _______, _______
    )
};

#ifdef OLED_ENABLE
// Draw to OLED
bool oled_task_user() {
    // Set cursor position
    oled_set_cursor(0, 1);
    
    // Write text to OLED
    oled_write("Hello World!", false);
    
    return false;
}

#endif
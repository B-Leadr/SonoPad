// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT(
        KC_KB_MUTE, KC_COPY, KC_PASTE, KC_VOLU,   //Will change to more complex macros later if these commmand don't work
        KC_MPLY,    KC_MPRV, KC_MNXT,  KC_VOLD
    )
};

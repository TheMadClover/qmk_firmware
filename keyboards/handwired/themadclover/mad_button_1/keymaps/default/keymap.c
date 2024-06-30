// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
   
    [0] = LAYOUT(
                        LGUI(KC_L),
        MEH(KC_F5),     MEH(KC_F6),     MEH(KC_F7),
        MEH(KC_F8),                     MEH(KC_F9)
    )
};

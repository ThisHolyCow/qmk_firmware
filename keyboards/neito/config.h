/* Copyright 2020 Oliver Granlund
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
#pragma once
#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xB9F7
#define PRODUCT_ID      0xB44C // "Neito"
#define DEVICE_VER      0x0001
#define MANUFACTURER    Oliver Granlund
#define PRODUCT         Neito
#define DESCRIPTION     Alice style keyboard with ISO-layout


#define MATRIX_ROWS 10
#define MATRIX_COLS 8
#define MATRIX_ROW_PINS { E6, F0, F5, F6, C7, C6, B4, D7, D6, D4 }
#define MATRIX_COL_PINS { F4, F1, F7, B2, D1, D2, B3, B1 }

#define DIODE_DIRECTION COL2ROW
#define ENCODERS_PAD_A { B7 }
#define ENCODERS_PAD_B { B0 }
#define ENCODER_RESOLUTION 4
#define UNUSED_PINS

/* RGB Light Configuration */

/*
#define RGB_DI_PIN D1
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 13
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
*/

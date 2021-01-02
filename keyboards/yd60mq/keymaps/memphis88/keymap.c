/*
Copyright 2019 Ethan Durrant (emdarcher)

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H


#define _FL 1
#define _CL 2
#define KC_X0   LT(_CL, KC_CAPS)   

/*
K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C,      K0E, \
K10,   K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C,         \
K20,    K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C,   K2D, \
K30,      K32, K33, K34, K35, K36, K37, K38, K39, K3A,   K3C,    K3D, K3E, \
K40, K41, K42,                K47,                K49, K4A, K4C, K4D, K4E  \
*/
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    //Base Layer    
    [0] = LAYOUT_60_iso_memphis(
        KC_GESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC,
        KC_TAB,    KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC,
        KC_X0,      KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_BSLS, KC_ENT,
        KC_LSFT,      KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT,      KC_RSFT,       KC_UP, KC_SLSH,
        KC_LCTL, KC_LGUI, KC_LALT,               KC_SPC,                KC_RALT, MO(_FL), KC_LEFT, KC_DOWN, KC_RIGHT
    ),
    //FN Layer
    [_FL] = LAYOUT_60_iso_memphis(
        KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, _______,
        _______,    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______,      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______,      _______,       KC_VOLU, KC_MPLY,
        _______, _______, _______,                             _______,                             _______, _______, KC_MPRV, KC_VOLD, KC_MNXT

    ),
    //CAPS LOCK layer
    [_CL] = LAYOUT_60_iso_memphis(
        KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, _______,
        _______,    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______,      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______,      _______,       KC_PGUP, KC_DEL,
        _______, _______, _______,                             _______,                             _______, _______, KC_HOME, KC_PGDN, KC_END
    ),
    /* You can copy this layer as base for a new fn layer * /
	[n] = LAYOUT_60_iso_memphis(
        _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,        _______,
        _______,_______,_______,                _______,                        _______,_______,_______,_______
    ), 
    */
};


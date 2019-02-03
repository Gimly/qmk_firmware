/* Copyright 2019 REPLACE_WITH_YOUR_NAME
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
#pragma once

#include "quantum.h"

/* This a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define LAYOUT( \
	L000,       L002, L003, L004, L005,         R007, R008, R009, R010, R011, R012, R013, R014, R015, R016, R017, \
	L100, L101, L102, L103, L104, L105, L106,   R107, R108, R109, R110, R111, R112, R113,       R115, R116, R117, \
	L200, L201, L202, L203,       L205, L206,   R207, R208, R209, R210, R211, R212, R213, R214, R215, R216, R217, \
	L300, L301, L302, L303,       L305, L306,   R307, R308, R309, R310, R311, R312, R313,                         \
	L400, L401, L402, L403, L404, L405, L406,   R407, R408, R409, R410, R411,       R413,             R416,       \
	L500, L501,       L503, L504,               R507, R508,       R510, R511,       R513, R514, R515, R516, R517  \
	) \
{ \
    { L000,  KC_NO, L002,  L003,  L004,  L005,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
    { L100,  L101,  L102,  L103,  L104,  L105,  L106,  KC_NO, KC_NO, KC_NO, KC_NO }, \
    { L200,  L201,  L202,  L203,  KC_NO, L205,  L206,  KC_NO, KC_NO, KC_NO, KC_NO }, \
    { L300,  L301,  L302,  L303,  KC_NO, L305,  L306,  KC_NO, KC_NO, KC_NO, KC_NO }, \
    { L400,  L401,  L402,  L403,  L404,  L405,  L406,  KC_NO, KC_NO, KC_NO, KC_NO }, \
    { L500,  L501,  KC_NO, L503,  L504,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
    { R007,  R008,  R009,  R010,  R011,  R012,  R013,  R014,  R015,  R016,  R017  }, \
    { R107,  R108,  R109,  R110,  R111,  R112,  R113,  KC_NO, R115,  R116,  R117  }, \
    { R207,  R208,  R209,  R210,  R211,  R212,  R213,  R214,  R215,  R216,  R217  }, \
    { R307,  R308,  R309,  R310,  R311,  R312,  R313,  KC_NO, KC_NO, KC_NO, KC_NO }, \
    { R407,  R408,  R409,  R410,  R411,  KC_NO, R413,  KC_NO, KC_NO, R416,  KC_NO }, \
    { R507,  R508,  KC_NO, R510,  R511,  KC_NO, R513,  R514,  R515,  R516,  R517  }  \
}

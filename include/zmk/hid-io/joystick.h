/*
 * Copyright (c) 2023 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */

#pragma once

/* 32 buttons: a two-Joy-Con pad needs ~14 (4 face + dpad + 4
 * shoulders + stick clicks + start/select), which does not fit
 * in 8. Widening the flags type and the descriptor's button
 * count together keeps the report body self-consistent. 32 leaves
 * room for a real D-pad alongside the face cluster and both
 * shoulder pairs, and matches what many PC pads report. */
typedef uint32_t zmk_joystick_button_flags_t;
typedef uint16_t zmk_joystick_button_t;

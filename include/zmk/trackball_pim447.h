/*
 * Copyright (c) 2021 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */
#pragma once

#include <dt-bindings/zmk/trackball_pim447.h>

/**
 * @brief Set the mode for the Pimoroni Trackball PIM447.
 *
 * This function sets the operating mode of the Trackball PIM447.
 *
 * @param mode The mode to set. Must be one of the defined modes (PIM447_NONE, PIM447_MOVE, PIM447_SCROLL, PIM447_TOGGLE).
 */
extern void zmk_trackball_pim447_set_mode(int mode);

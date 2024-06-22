// Copyright 2023 Richard Goulter
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include_next <mcuconf.h>

// RGB Lighting or RGB Matrix (both use WS2812 with PWM)
#if defined(RGBLIGHT_ENABLE) || defined(RGB_MATRIX_ENABLE)
#    undef STM32_PWM_USE_TIM3
#    define STM32_PWM_USE_TIM3 TRUE
#endif

// Copyright 2022 Stefan Kerkmann
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include_next <mcuconf.h>

// #undef RP_SPI_USE_SPI1
// #define RP_SPI_USE_SPI1 TRUE

// #undef RP_PWM_USE_PWM0
// #define RP_PWM_USE_PWM0 TRUE

// #undef RP_PWM_USE_PWM1
// #define RP_PWM_USE_PWM1 TRUE

// Pin GP5 uses PWM2
#undef RP_PWM_USE_PWM2
#define RP_PWM_USE_PWM2 TRUE

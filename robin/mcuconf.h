#pragma once

#include_next <mcuconf.h>

// Pin GP5 uses PWM2
#undef RP_PWM_USE_PWM2
#define RP_PWM_USE_PWM2 TRUE

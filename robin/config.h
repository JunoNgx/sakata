#pragma once

#include "config_common.h"

// Specifically for Stampy
// https://docs.keeb.io/stampy-usage-guide
#define USB_VBUS_PIN GP9

// #define MATRIX_ROWS 4
// #define MATRIX_COLS 12
// #define MATRIX_ROW_PINS {GP14, GP17, GP0, GP5}
// #define MATRIX_COL_PINS {GP16, GP15, GP10, GP15, GP26, GP27, GP28, GP3, GP4, GP24, GP25, GP27}

// Check the sheet and declare correctly:
// https://datasheets.raspberrypi.com/rp2040/rp2040-datasheet.pdf#page=14
#define AUDIO_PIN GP7
#define AUDIO_PWM_DRIVER PWMD3
#define AUDIO_PWM_CHANNEL RP2040_PWM_CHANNEL_B
#define AUDIO_INIT_DELAY
#define AUDIO_CLICKY

// #define DIODE_DIRECTION COL2ROW

// // #define BACKLIGHT_PIN B7
// // #define BACKLIGHT_BREATHING
// // #define BACKLIGHT_LEVELS 3

// #define SOFT_SERIAL_PIN D0 // or D1, D2, D3, E6

// #define RGB_DI_PIN C7
// #ifdef RGB_DI_PIN
//   #define RGBLED_NUM 16
//   #define RGBLIGHT_HUE_STEP 8
//   #define RGBLIGHT_SAT_STEP 8
//   #define RGBLIGHT_VAL_STEP 8
//   #define RGBLIGHT_LIMIT_VAL 255 /* The maximum brightness level */
//   #define RGBLIGHT_SLEEP  /* If defined, the RGB lighting will be switched off when the host goes to sleep */

//   #define RGBLIGHT_EFFECT_BREATHING
//   #define RGBLIGHT_EFFECT_RAINBOW_MOOD
//   #define RGBLIGHT_EFFECT_RAINBOW_SWIRL
//   #define RGBLIGHT_EFFECT_SNAKE
//   #define RGBLIGHT_EFFECT_KNIGHT
//   #define RGBLIGHT_EFFECT_CHRISTMAS
//   #define RGBLIGHT_EFFECT_STATIC_GRADIENT
//   #define RGBLIGHT_EFFECT_RGB_TEST
//   #define RGBLIGHT_EFFECT_ALTERNATING
// // /*== customize breathing effect ==*/
// //   /*==== (DEFAULT) use fixed table instead of exp() and sin() ====*/
// //   #define RGBLIGHT_BREATHE_TABLE_SIZE 256      // 256(default) or 128 or 64
// //   /*==== use exp() and sin() ====*/
// //   #define RGBLIGHT_EFFECT_BREATHE_CENTER 1.85  // 1 to 2.7
// //   #define RGBLIGHT_EFFECT_BREATHE_MAX    255   // 0 to 255
// #endif

// /* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
// #define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE


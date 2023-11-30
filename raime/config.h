// Specifically for Stampy
// https://docs.keeb.io/stampy-usage-guide
#define USB_VBUS_PIN GP9

// Check the sheet and declare correctly:
// https://datasheets.raspberrypi.com/rp2040/rp2040-datasheet.pdf#page=14
#define AUDIO_PIN GP6
#define AUDIO_PWM_DRIVER PWMD3
#define AUDIO_PWM_CHANNEL RP2040_PWM_CHANNEL_A

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE


#pragma once

// Vial
#define VIAL_KEYBOARD_UID {0x8C, 0xB5, 0xB5, 0xD3, 0x69, 0xB0, 0x27, 0x05}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 0 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 15 }

#define LED_CAPS_LOCK_PIN GP29 // Ganti B2 dengan pin mikrokontroler Anda
#define LED_PIN_ON_STATE 1   // 1 jika HIGH aktif, 0 jika LOW aktif

#define RGB_DI_PIN GP16
#define RGBLED_NUM 1
#define WS2812_DRIVER_REQUIRED

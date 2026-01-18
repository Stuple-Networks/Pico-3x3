#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID 0xCAFE
#define PRODUCT_ID 0x0001
#define DEVICE_VER 0x0001
#define MANUFACTURER "DIY"
#define PRODUCT "Pico 3x3"

/* key matrix size */
#define MATRIX_ROWS 3
#define MATRIX_COLS 3

/* keyboard Matrix Assignment */
#define MATRIX_ROW_PINS {GP6, GP7, GP8}
#define MATRIX_COL_PINS {GP2, GP3, GP4}
#define DIODE_DIRECTION COL2ROW

/* VIA Settings */
#define VIA_KEYMAP_ENABLE
#define DYNAMIC_KEYMAP_LAYER_COUNT 2

/* Wear Leveling Settings for RP2040 */
#define WEAR_LEVELING_LOGICAL_SIZE 2048
#define WEAR_LEVELING_BACKING_SIZE (WEAR_LEVELING_LOGICAL_SIZE * 2)
#define VIA_EEPROM_MAGIC_ADDR 0x3FE
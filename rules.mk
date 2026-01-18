MCU = RP2040
BOOTLOADER = rp2040

VIA_ENABLE = yes
LTO_ENABLE = yes

# Specific driver for Pico Flash
EEPROM_DRIVER = wear_leveling
WEAR_LEVELING_DRIVER = rp2040_flash
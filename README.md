# LED-Lib-Morse
Portable LED Library that features switching, blinking and morse code (non-blocking)

## Setup
To port the lib to your system, simply overwrite the 2 functions LED_HAL_init 
and LED_HAL_set in the .c file and adjust the HAL part in the .h file

## Usage
1. call LED_init which will configure the LED port and pin
2. call LED_switch or LED_blink or LED_morse to select the operation mode
3. frequently call LED_tick and LED_sync to manage LED timings.
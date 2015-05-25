// LedMorse Example

#include "led.h"

const int ledPin =  13;

void setup() {
  LED_init(ledPin);

  static char msg[] = "Hello World";
  LED_morse(msg);
  //LED_blink(FAST);
  //LED_blinkPulse(100, 300);
}

void loop() {
  
 delay(10);
 LED_tick(10);   // could be called in interrupt routine
 LED_sync();
  
}

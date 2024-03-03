# pisca_led_sem_delay
Biblioteca simples para piscar led sem usar a função delay  

```cpp

#include <BlinkLed.h>

BlinkLed led(2, 1000, 1000);  // (LED_PIN, time ON, time OFF)

void setup() {
  led.begin();
}

void loop() {
  led.blink();
}
``` 

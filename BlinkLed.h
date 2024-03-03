// Autor: Hercules Montenegro @ mar-2024
// link: https://github.com/HRMont/piscar-led-sem-delay.git

#ifndef BlinkLed_h
#define BlinkLed_h

#include <Crescer.h>
#include <Arduino.h>

class BlinkLed {
  public:
    BlinkLed(byte ledPin, long onTime, long offTime);
    BlinkLed(byte ledPin);
      
    void begin();
    void blink();

  private:
  byte ledPin;
  long onTime;
  long offTime;
  Tempora ledOn;
  Tempora ledOff;
      
};

#endif

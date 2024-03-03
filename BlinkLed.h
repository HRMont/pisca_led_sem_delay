#ifndef BlinkLed_h
#define BlinkLed_h

#include <Crescer.h>
#include <Arduino.h>

class BlinkLed {
  public:
    BlinkLed(byte ledPin, long onTime, long offTime);
    BlinkLed(byte ledPin);
    BlinkLed();    
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

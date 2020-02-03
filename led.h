#ifndef led_h
#define led_h
#include "arduino.h"
class led
{
  public:
        led(int pin,int duration);
        void on();
        void off();
        int _pin;
        int _duration;
     
};
#endif
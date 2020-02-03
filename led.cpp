#include "led.h"
led::led(int pin,int duration)
{
  pinMode(pin,OUTPUT);
  _pin=pin;
  _duration=duration;
  
}
void led::on()
{
  digitalWrite(_pin,HIGH);
  delay(_duration);
}
void led::off()
{
  digitalWrite(_pin,LOW);
  delay(_duration);
}

#include <Arduino.h>
#include <veli_led.h>

veli_led::veli_led(int pin) {
  this->pin = pin;

  pinMode(this->pin, OUTPUT);
}

void veli_led::on() {
  digitalWrite(this->pin, HIGH);
}

void veli_led::off() {
  digitalWrite(this->pin, LOW);
}

void veli_led::on_while_tmp(int tmp) {
  on();
  delay(tmp);
  off();
}

void veli_led::off_while_tmp(int tmp) {
  off();
  delay(tmp);
  on();
}

void blink(int times, int tmp) {
  for (int i = 0; i < times; i++) {
    on_while_tmp(tmp);
    delay(tmp);
  }
}
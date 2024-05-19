#include <Arduino.h>
#include <Led.h>

Led::Led(int pin) {
  this->pin = pin;

  pinMode(this->pin, OUTPUT);
}

void Led::on() {
  digitalWrite(this->pin, HIGH);
}

void Led::off() {
  digitalWrite(this->pin, LOW);
}

void Led::on_while_tmp(int tmp) {
  on();
  delay(tmp);
  off();
}

void Led::off_while_tmp(int tmp) {
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
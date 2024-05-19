#include <Arduino.h>
#include <Led.h>

Led::Led(int pin) {
  this->pin = pin;
  pinMode(this->pin, OUTPUT);
}

void Led::on() {
  digitalWrite(this->pin, HIGH);
}

void Led::on(float light_force) {
  if (light_force > 255) {
    throw LogicalError("The light force can't be bigger than 255");
  }
  analogWrite(this->pin, light_force);
}

void Led::off() {
  digitalWrite(this->pin, LOW);
}

void Led::blink(int times, int tmp) {
  for (int i = 0; i < times; i++) {
    on();
    delay(tmp);
    off();
    delay(tmp);
  }
}

void Led::blink(float light_force, int times, int tmp) {
  for (int i = 0; i < times; i++) {
    on(light_force);
    delay(tmp);
    off();
    delay(tmp);
  }
}
#ifndef VELI_LED
#define VELI_LED

class veli_led
{
  private:
    int pin;
  public:
    veli_led(int pin);
    void on();
    void off();
    void on_while_tmp(int tmp);
    void off_while_tmp(int tmp);
    void blink(int times, int tmp);
};

#endif
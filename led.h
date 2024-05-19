#ifndef LED
#define LED

class Led
{
  private:
    int pin;
  public:
    Led(int pin);
    void on();
    void off();
    void on_while_tmp(int tmp);
    void off_while_tmp(int tmp);
    void blink(int times, int tmp);
};

#endif
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
    void blink(int times, int tmp);
};

#endif
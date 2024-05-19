#ifndef LED
#define LED

class Led
{
  private:
    int pin;
  public:
    Led(int pin);
    void on();
    void on(float light_force);
    void off();
    void blink(int times, int tmp);
    void blink(float light_force, int times, int tmp);
};

#endif
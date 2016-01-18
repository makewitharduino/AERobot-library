#include <AERobot.h>

void setup() {
  initAERobot();
  randomSeed(1);

  colorLED(GREEN);
  move_forward();
  delay(5000);
  move_ccw();
  delay(5000);
  move_cw();
  delay(5000);
  move_backward();
  delay(5000);
  move_stop();
}

void loop() {
}

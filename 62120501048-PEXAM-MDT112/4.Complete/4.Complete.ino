#include <Stepper.h>

#define STEPS_PER_360_DEGREE 2038

Stepper stepper(STEPS_PER_360_DEGREE, 8, 10, 9, 11); // IN1 IN2 IN3 IN4

void setup() {
  Serial.begin(9600);

  stepper.setSpeed(16); // Unit as RPM (revolutions per minute) MIN 0-16 RPM
  Serial.println("Step CCW 180  Degrees");
  stepper.step(STEPS_PER_360_DEGREE/2);
  delay(600);
}
void loop() {
  stepper.step(STEPS_PER_360_DEGREE/2);
  delay(600);
}
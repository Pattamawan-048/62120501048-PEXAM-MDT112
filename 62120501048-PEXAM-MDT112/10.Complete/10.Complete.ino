int buzzer = 8;

void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT_PULLUP);
  pinMode(8, OUTPUT);
}
void loop() {
  if (digitalRead(2) == 0) {
      tone(8, 600,200);
     }
      else {
    if (digitalRead(2) == 1) {
     
     }
  }
}

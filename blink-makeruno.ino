int pin;
int i;
int time;
void setup() {
  for (i = 3; pin < 14; pin++) {
    pinMode(i, OUTPUT);
    time = 3;
  }
}

void loop() {
  for (pin = 2; pin <14; pin++) {
  digitalWrite(pin, HIGH);
  delay(time);
  digitalWrite(pin, LOW);
  delay(time);
  }
  for (pin = 13; pin >1; pin--) {
  digitalWrite(pin, HIGH);
  delay(time);
  digitalWrite(pin, LOW);
  delay(time);
  }
}

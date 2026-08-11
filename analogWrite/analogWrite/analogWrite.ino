int redled = 6;



void setup() {
  pinMode(redled, OUTPUT);
}

void loop() {
  for (int i = 0; i < 255; i++) {
    analogWrite(redled, i);
    delay(5);
  }
  for (int i = 255; i >= 0; i--) {
    analogWrite(redled, i);
    delay(5);
  }
  delay(1000);
}
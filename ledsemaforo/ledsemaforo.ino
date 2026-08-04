int greenled = 6;
int yellowled = 8;
int redled = 10;

int tempomax = 10000; // 10 segundos

void reset() {
  digitalWrite(greenled, LOW);
  digitalWrite(yellowled, LOW);
  digitalWrite(redled, LOW);
}

void setup() {
  pinMode(greenled, OUTPUT);
  pinMode(yellowled, OUTPUT);
  pinMode(redled, OUTPUT);

  reset();
}

void loop() {
  reset();
  digitalWrite(greenled, HIGH);
  delay(tempomax);

  reset();
  digitalWrite(yellowled, HIGH);
  delay(tempomax / 2);

  reset();
  digitalWrite(redled, HIGH);
  delay(tempomax);
}
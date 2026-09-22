const int pinoLdr = A0;
const int led = 3;
const int limite = 200;

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int leituraLdr = analogRead(pinoLdr);

  Serial.println(leituraLdr);

  if (leituraLdr >= limite) {
    digitalWrite(led, LOW);  
  } else {
    digitalWrite(led, HIGH); 

  delay(100);
}
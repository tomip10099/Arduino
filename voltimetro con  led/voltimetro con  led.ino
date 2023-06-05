float v2;
int readVal;
int analogPin = A2;
int ledPin = 9;


void setup() {
  Serial.begin(9600);
  pinMode(analogPin, INPUT);
  pinMode(ledPin, OUTPUT);

}

void loop() {
  readVal = analogRead(analogPin);
  v2 = (5. * readVal) / 1023.;

  if (v2 > 4.0 && v2 <= 4.8) {
    digitalWrite(ledPin, HIGH);

  }

  if (v2 <= 4.0 || v2 > 4.8) {
    digitalWrite(ledPin, LOW);
  }

  Serial.println(v2);
  delay(1000);

}

int redLed = 5;
int greenLed = 6;
int potPin = A0;
int potVal;

void setup() {
  pinMode(redLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(potPin, INPUT);
  Serial.begin(9600);

}

void loop() {
  potVal = analogRead(potPin);

  while (potVal <= 1000) {
    potVal = analogRead(potPin);
    digitalWrite(greenLed, HIGH);
    digitalWrite(redLed, LOW);
    Serial.println(potVal);
    delay(100);
  }

  digitalWrite(greenLed, LOW);
  digitalWrite(redLed, HIGH);
  Serial.println(potVal);
  delay(100);
}

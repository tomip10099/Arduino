int ledPin = 9;
int vRead = A2;

void setup() {

  pinMode(ledPin, OUTPUT);
  pinMode(vRead, INPUT);
  Serial.begin(9600);

}

void loop() {

  float potVal = analogRead(vRead);
  float vOut = (potVal * 5.0)/1023;

  int ligth = map(potVal, 0, 1023, 0, 255);

  analogWrite(ledPin, ligth);

}

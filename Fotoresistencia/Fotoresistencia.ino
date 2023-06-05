int fotoPin = A5;
int redLed = 7;
int greenLed = 9;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(fotoPin, INPUT);
  pinMode(redLed, OUTPUT);
  pinMode(greenLed, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  int readVal = analogRead(fotoPin);
  Serial.println(readVal);
  delay(200);
  if (readVal >= 700) {
    digitalWrite(redLed, 1);
    digitalWrite(greenLed, 0);
  }
  else {
    digitalWrite(greenLed, 1);
    digitalWrite(redLed, 0);
  }

}

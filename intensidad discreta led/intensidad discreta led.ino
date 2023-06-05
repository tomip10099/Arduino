int redLed = 9;
int brightness1 = 255;
int brightness2 = 125;
int brightness3 = 50;


void setup() {
  // put your setup code here, to run once:
  pinMode(redLed, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(redLed, brightness1);
  delay(500);

  analogWrite(redLed, brightness2);
  delay(500);

  analogWrite(redLed, brightness3);
  delay(500);
  
}

int redPin = 5;
int yellowPin = 6;

void setup() {
  pinMode(13, OUTPUT);
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  Serial.begin(9600);

  digitalWrite(13, LOW);
}

void loop() {

  for (int i = 1; i <= 3; i = i + 1) {
    digitalWrite(redPin, HIGH);
    delay(500);
    digitalWrite(redPin, LOW);
    delay(500);
    Serial.println(i);
  }

  for (int i = 1; i <= 5; i = i + 1) {
    digitalWrite(yellowPin, HIGH);
    delay(500);
    digitalWrite(yellowPin, LOW);
    delay(500);
    Serial.println(i);
  }

}

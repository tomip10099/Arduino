
int buttonPin = 4;
int ledPin = 2;
int buttonRead;
int ledState = 0;


void setup() {

  Serial.begin(9600);
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.println("Programa Inicializado");

}

void loop() {

  buttonRead = digitalRead(buttonPin);
  if (buttonRead == 0 && ledState == 0) {
    digitalWrite(ledPin, HIGH);
    ledState = 1;
    Serial.println("Led Prendido");

  } else if (buttonRead == 0 && ledState == 1) {
    digitalWrite(ledPin, LOW);
    Serial.println("Led Apagado");
    ledState = 0;

  }
  delay (200);
}
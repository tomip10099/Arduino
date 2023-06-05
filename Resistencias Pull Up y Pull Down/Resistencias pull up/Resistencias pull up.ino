// En este caso, la entrada esta leyendo siempre 1, cuando el circuito se cierra, entra en juego la resistencia y el circuito lee 0
// La lectura se realiza en serie con la resistencia, la ENTRADA del boton, estando todo conectado por la resistencia a 5V
// La salida del boton se conecta a GND, cuando se cierra el circuito por presionar el boton, el voltaje disminuye en la lectura y se lee un 0.
int buttonPin = 4;
int ledPin = 2;
int buttonRead;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  buttonRead = digitalRead(buttonPin);
  if (buttonRead == 0) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
}

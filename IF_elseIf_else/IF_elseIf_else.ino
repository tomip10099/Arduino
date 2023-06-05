String color;
String msg1 = "Escribe el color del led que quieres prender.";
int redLed = 5;
int greenLed = 6;
int blueLed = 7;

void setup() {
  Serial.begin(9600);
  pinMode(redLed, OUTPUT);
  pinMode(blueLed, OUTPUT);
  pinMode(greenLed, OUTPUT);

}

void loop() {
  Serial.println(msg1);
  while (Serial.available() == 0) {
  }
  
  color = Serial.readString();
  color.toLowerCase();

  if (color == "verde"){
    Serial.println("Led verde prendido.");
    digitalWrite(greenLed, HIGH);
    digitalWrite(redLed, LOW);
    digitalWrite(blueLed, LOW);
  }
  else if (color == "azul"){
    Serial.println("Led azul prendido.");
    digitalWrite(greenLed, LOW);
    digitalWrite(redLed, LOW);
    digitalWrite(blueLed, HIGH);
  }
  else if (color == "rojo"){
    Serial.println("Led rojo prendido.");
    digitalWrite(greenLed, LOW);
    digitalWrite(redLed, HIGH);
    digitalWrite(blueLed, LOW);
  }
  else {
    digitalWrite(greenLed, LOW);
    digitalWrite(redLed, LOW);
    digitalWrite(blueLed, LOW);
    Serial.println("Parametro no reconocido.");
  }

}

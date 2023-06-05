int R;
int B;
int G;
String msg1 = "Escribe el codigo de color R del led que quieres prender.";
String msg2 = "Escribe el codigo de color B del led que quieres prender.";
String msg3 = "Escribe el codigo de color G del led que quieres prender.";
int redLed = 9;
int greenLed = 10;
int blueLed = 11;

void setup() {
  Serial.begin(115200);
  pinMode(redLed, OUTPUT);
  pinMode(blueLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  Serial.println("Setup Done");

}

void loop() {

  Serial.println(msg1);
  while (Serial.available() == 0) {
  }
  R = Serial.parseInt();
  Serial.print("R = ");
  Serial.println(R);

  Serial.println(msg2);
  while (Serial.available() == 0) {
  }
  B = Serial.parseInt();
  Serial.print("B = ");
  Serial.println(B);

  Serial.println(msg3);
  while (Serial.available() == 0) {
  }
  G = Serial.parseInt();
  Serial.print("G = ");
  Serial.println(G);


  analogWrite(redLed, R);
  analogWrite(blueLed, B);
  analogWrite(greenLed, G);

  Serial.println();
  Serial.print("Led prendido con valores de: ");
  Serial.print("R = ");
  Serial.print(R);
  Serial.print(" - B = ");
  Serial.print(B);
  Serial.print(" - G = ");
  Serial.println(G);

  delay(5000);

}
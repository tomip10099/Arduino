int number;
String msg1 = "Porfavor ingresa un numero.";
int pinLed = 6;

void setup() {
  pinMode(pinLed, OUTPUT);
  Serial.begin(9600);


}

void loop() {

  Serial.println(msg1);
  while (Serial.available() == 0){
  }
  number = Serial.parseInt();
  for (int i=1; i <= number; i++){
    digitalWrite(pinLed, HIGH);
    delay(500);
    Serial.println(i);
    digitalWrite(pinLed, LOW);
    delay(500);
  }


}

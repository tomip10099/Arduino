int buzzerPin = 8;
int number;



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(buzzerPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.println("Introduce Numero: ");

  while(Serial.available() == 0) {

  }
  number = Serial.parseInt();

  Serial.print("Numero elegido: ");
  Serial.println(number);

  for (int i = 1; number > 1; i++) {

    digitalWrite(buzzerPin, HIGH);
    delay(200);

    Serial.println(i);

    digitalWrite(buzzerPin, LOW);
    delay(200);

    if  ( i == number){
      number = 0;
    }

  }
  Serial.println("Ciclo Terminado.");
}

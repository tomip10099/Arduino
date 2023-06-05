float x1 = 60; //Limite inferior de microsegundos
float x2 = 0; //Limite inferior potenciometro
float y1 = 10000; //Limite Superior de microsegundos
float y2 = 1023; //Limite Superior de potenciometro

int buzzPin  = 8;
float buzzDelay;

int potPin = A0;
int potVal;

void setup() {
  // put your setup code here, to run once:
  pinMode(buzzPin, OUTPUT);
  pinMode(potPin, INPUT);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  potVal = analogRead(potPin);

  buzzDelay = (((y2 - y1) / y2) * potVal) + x1;


  Serial.println(buzzDelay);

  digitalWrite(buzzPin, HIGH);
  delayMicroseconds(buzzDelay);
  digitalWrite(buzzPin, LOW);
  delayMicroseconds(buzzDelay);


}

#include <Servo.h>
//Para no tener errores en al lectura en el monitor serial, configurarlo en No Line Ending

int servoPin = 9;
int servoPos; //Posicion del servo
int ledPin = 2;

Servo myServo; //Nombre del servo


void setup() {

  myServo.attach(servoPin); // Inicializar el servo
  Serial.begin(9600);
  myServo.write(0);
  pinMode(ledPin, OUTPUT);

}

void loop() {
  digitalWrite(ledPin, HIGH);

  Serial.println("Inserte angulo a girar");

  while (Serial.available() == 0){

  }
  servoPos = Serial.parseInt();
  myServo.write(servoPos);
  Serial.println(servoPos);

}


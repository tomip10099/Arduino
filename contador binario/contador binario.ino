//Coontador binario de 4 bits

//Leds binarios
int led1 = 4;
int led2 = 5;
int led3 = 6;
int led4 = 7;

//Pin de pulso
int pinPulse = 2;

// Pin de reseteo
int pinReset = 3;

//Variables para contar
int var1;
int var2;
int var3;
int var4;

int cont;

int res1 = 0;
int res2 = 0;
int res3 = 0;
int res4 = 0;

int div1 = 0;
int div2 = 0;
int div3 = 0;

int estado = 0;

int funCont = 0;

void setup() {

  Serial.begin(9600);

//Leds binarios
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);

//Pin y led de pulso
  attachInterrupt(digitalPinToInterrupt(pinPulse), contar, FALLING);

//Pin y led de reseteo
  attachInterrupt(digitalPinToInterrupt(pinReset), reset, FALLING);
 
}

void loop() {

  if (estado == 0) {
  
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW); 

  }

  if (estado == 1) {

////////////////////////////////////////////
    res1 = (cont % 2);
    if (res1 != 0) {
      digitalWrite(led4, HIGH);
    }
    else {
      digitalWrite(led4, LOW);
    }

///////////////////////////////////////////
    div1 = (cont / 2);
    res2 = (div1 % 2);
    if (res2 != 0) {
      digitalWrite(led3, HIGH);
    }
    else {
      digitalWrite(led3, LOW);
    }

//////////////////////////////////////////
    div2 = (div1 / 2);
    res3 = (div2 % 2);
    if (res3 != 0) {
      digitalWrite(led2, HIGH);
    }
    else {
      digitalWrite(led2, LOW);
    }

//////////////////////////////////////////
    div3 = (div2 / 2);
    res4 = (div3 % 2);
    if (res4 != 0) {
      digitalWrite(led1, HIGH);
    }
    else {
      digitalWrite(led1, LOW);
    }

  delay(100);
  funCont = 0;
  }

}

void contar() {

  Serial.println("Contador pulsado");

  if (cont < 15 && funCont == 0){
    cont = cont + 1;
    estado = 1;
    Serial.println(cont);
    funCont = 1;
  }

  else if (cont >= 15)  {
    cont = 0;
    Serial.println("Contador reseteado por limite.");
  }

}

void reset() {

  Serial.println("Reset pulsado");

  cont = 0;
  estado = 0;

}

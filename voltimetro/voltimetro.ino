float vOut;
float vRead = A0;
float analogVal;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(vRead, INPUT);
}

void loop() {
  
  // put your main code here, to run repeatedly:
  analogVal = analogRead(vRead);
  vOut = (5. * analogVal)/1023 ;
  Serial.println(vOut);
  delay(500);

}

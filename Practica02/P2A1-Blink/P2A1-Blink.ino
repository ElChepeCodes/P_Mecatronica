#define LED 13

void setup() {
  pinMode(LED,OUTPUT);
  
}// setup

void loop() {
  digitalWrite(LED,HIGH);
  delay(53);
  digitalWrite(LED,LOW);
  delay(50);
}// loop

#define LED 13
#define BTN 12

void setup() {
  pinMode(LED,OUTPUT);
  pinMode(BTN,INPUT);
}// setup

int Eugenio = 0;

void loop() {
  Eugenio = digitalRead(BTN);
  if(Eugenio == 1){
    digitalWrite(LED,HIGH);
    delay(250);
    digitalWrite(LED,LOW);
    delay(250);
  }
  else{
    digitalWrite(LED,HIGH);
    delay(1000);
    digitalWrite(LED,LOW);
    delay(1000);
  }
}// loop

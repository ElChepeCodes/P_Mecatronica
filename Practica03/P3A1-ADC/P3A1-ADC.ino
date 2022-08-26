#define pot A0
#define LED 13

int value = 0;

void setup() {
  pinMode(LED,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  value = analogRead(pot);
  Serial.print("Valor ADC:");
  Serial.println(value);
  delay(100);
  if(value>614){
    Serial.print("Estoy en el if");
    digitalWrite(LED,HIGH);;
  }// if
  else{
    digitalWrite(LED, LOW);
  }
}

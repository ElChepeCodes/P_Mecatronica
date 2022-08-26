#define pot A0
#define LED 13

float value = 0;

void setup() {
  pinMode(LED,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  value = 5*analogRead(pot)/1024;
  
  Serial.print("Voltaje:");
  Serial.println(value);
  delay(100);
  if(value>3){
    digitalWrite(LED,HIGH);;
  }// if
  else{
    digitalWrite(LED, LOW);
  }
}

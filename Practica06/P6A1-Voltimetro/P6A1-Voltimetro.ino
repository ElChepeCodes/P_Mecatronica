#define volt A0
#define LED 7

float value = 0.0;
float brillo = 0.0;
float voltaje = 0.0;

void setup() {
  pinMode(LED,OUTPUT);
  pinMode(volt,INPUT);
  Serial.begin(9600);

}

void loop() {
  value = analogRead(volt);
  brillo = value/1023*255;
  voltaje = value/1023*5;
  
  Serial.print("%Voltaje:");
  Serial.println(voltaje);
  Serial.print("Valor:");
  Serial.println(value);
  //delay(1000);
  if(voltaje>=3.2 && voltaje<=4.3){ 
    digitalWrite(LED,HIGH);
    delay(250);
    digitalWrite(LED,LOW);
    delay(250);
  }
  else{
    digitalWrite(LED,HIGH);
    Serial.println("\nDetenido");
  }

  

}

#define pot A0
#define LED 7

float value = 0.0;
float brillo = 0.0;
float valor = 0.0;

void setup() {
  pinMode(LED,OUTPUT);
  Serial.begin(9600);

}

void loop() {

  value = analogRead(pot);
  brillo = 255-(value/1024*255);
  if (brillo < 20){
    analogWrite(LED, 0);
  }
  else
   if(brillo > 80)
    analogWrite(LED,255);
  else{
  
  Serial.print("%Brillo:");
  Serial.println(brillo*100/255);
  //delay(1000);
  analogWrite(LED,brillo);
  }

}

#define pot A0
#define LED 13

float value = 0;
float brillo = 0.0;

void setup() {
  pinMode(LED,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  value = analogRead(pot);
  brillo = value/1024*255;
  
  Serial.print("Brillo:");
  Serial.println(brillo);
  delay(100);
  analogWrite(LED,brillo);

}

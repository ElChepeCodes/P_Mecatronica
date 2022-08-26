#include <Servo.h>

Servo Eulalio;

#define pot A0
// #define LED 13

float value = 0;
float angulo = 0.0;

void setup() {
  // pinMode(LED,OUTPUT);
  Serial.begin(9600);
  Eulalio.attach(13);
}

void loop() {
  value = analogRead(pot);
  angulo = value/1024*180;
  Eulalio.write(angulo);
  
  Serial.print("Angulo:");
  Serial.println(angulo);

}

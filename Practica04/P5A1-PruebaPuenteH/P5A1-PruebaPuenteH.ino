#include <Wire.h>
#define MotA 10
#define MotB 11




void setup() {
  pinMode(MotA,OUTPUT);
  pinMode(MotB,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  estado1();
  estado2();
  estado3();
  estado4();
}

void estado1(){
  digitalWrite(MotA, HIGH);
  digitalWrite(MotB, LOW);
  Serial.print("Levogiro");
  delay(1000);
}

void estado2(){
  digitalWrite(MotA, LOW);
  digitalWrite(MotB, LOW);
  Serial.print("Freno pasivo");
  delay(1000);
}

void estado3(){
  digitalWrite(MotA, LOW);
  digitalWrite(MotB, HIGH);
  Serial.print("Dextrogiro");
  delay(1000);
}


void estado4(){
  digitalWrite(MotA, HIGH);
  digitalWrite(MotB, HIGH);
  Serial.print("Freno activo");
  delay(1000);
}

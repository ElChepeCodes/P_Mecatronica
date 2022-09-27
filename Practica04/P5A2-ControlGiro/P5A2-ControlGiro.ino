#include <Wire.h>
#define MotA 10
#define MotB 11
#define pot A10

float pote, potencia;

void setup() {
  pinMode(MotA,OUTPUT);
  pinMode(MotB,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  pote=analogRead(pot);
  potencia = map(pote,0, 1023, 0, 5);
  if(potencia<=5 && potencia>=3){
    Dextrogiro();
    }else{
      if(potencia<3 && potencia>=2){
        Detenido();
        }else{
          Levogiro();
        }
      }
   Serial.println(potencia);
}

void Levogiro(){
  digitalWrite(MotA, HIGH);
  digitalWrite(MotB, LOW);
  Serial.print("Levogiro ");
}

void Detenido(){
  digitalWrite(MotA, LOW);
  digitalWrite(MotB, LOW);
  Serial.print("Detenido");
}

void Dextrogiro(){
  digitalWrite(MotA, LOW);
  digitalWrite(MotB, HIGH);
  Serial.print("Dextrogiro ");
}

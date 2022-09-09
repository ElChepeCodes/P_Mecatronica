//YWROBOT
//Compatible with the Arduino IDE 1.0
//Library version:1.1
#include <Wire.h> 

#define X A0 
#define Y A1
#define Z A2

float Xval, Yval, Zval;
float Xg, Yg, Zg;

int X_min = 260;
int X_max = 390;
int Y_min = 260;
int Y_max = 390;
int Z_min = 260;
int Z_max = 390;

void setup()
{
  Serial.begin(9600);
  
}


void loop()
{
  Xval = analogRead(X);
  Yval = analogRead(Y);
  Zval = analogRead(Z);

  Xg=map(Xval,X_min,X_max,-100.0,100.0);
  Xg = Xg/100;
  Yg=map(Yval,Y_min,Y_max,-100.0,100.0);
  Yg = Yg/100;
  Zg=map(Zval,Z_min,Z_max,-100.0,100.0);
  Zg = Zg/100;
  
  Serial.print("X: ");
  Serial.print(Xg);
  Serial.print(" Y: ");
  Serial.print(Yg);
  Serial.print(" Z: ");
  Serial.println(Zg);
  delay(50);
}

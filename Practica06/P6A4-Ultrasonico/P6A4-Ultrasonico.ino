#define echoPin 6
#define trigPin 7
#define LED 8

long duracion;
int distancia;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(LED, OUTPUT);
  
  Serial.begin(9600);
  
}


void loop() {
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);

    duracion = pulseIn(echoPin, HIGH);
    distancia = duracion * 0.0343/2;
    if(distancia < 15){
      digitalWrite(LED,HIGH);
      Serial.print("prende");
    }else{
      digitalWrite(LED,LOW);
    }

    Serial.print("Distancia: ");
    Serial.print(distancia);
    Serial.println(" cm");
    

}

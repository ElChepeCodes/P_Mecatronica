#include "DHT.h"
#define DHTTYPE DHT11   // DHT 11
#define DHTPIN 21   
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  Serial.println(F("DHTxx test!"));

  dht.begin();
}

String dato;
void loop() {
  // Wait a few seconds between measurements.

    dato = Serial.readString();
    //Serial.println(dato);


  // Reading temperature or humidity takes about 250 milliseconds!
  // Sensor readings may also be up to 2 seconds 'old' (its a very slow sensor)
  float h = dht.readHumidity();
  // Read temperature as Celsius (the default)
  float t = dht.readTemperature();
  // Read temperature as Fahrenheit (isFahrenheit = true)
  float f = dht.readTemperature(true);

  // Check if any reads failed and exit early (to try again).
  if (isnan(h) || isnan(t) || isnan(f)) {
    Serial.println(F("Failed to read from DHT sensor!"));
    return;
  }

  // Compute heat index in Fahrenheit (the default)
  float hif = dht.computeHeatIndex(f, h);
  // Compute heat index in Celsius (isFahreheit = false)
  float hic = dht.computeHeatIndex(t, h, false);

  if(dato.equals("snsr tempC\n")){
   Serial.print("Temp: ");
   Serial.print(t);
   Serial.print(F("°C "));   
  }else
  if(dato == "snsr tempF\n"){
   Serial.print("Temp: ");
   Serial.print(f);
   Serial.print(F("°F "));   
  }else
  if(dato == "snsr hum\n"){
   Serial.print("Hum: ");
   Serial.print(h);  
  }
}

#include <NinjaIoT.h>
#include "DHT.h"

NinjaIoT iot;


#define DHTPIN D3   
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(115200);
  iot.connect("Airtel_Uthman", "shireen1214", "MU08");    //link:   https://iot.roboninja.in/
  dht.begin();
}

void loop() {
  
 float h = dht.readHumidity();
 float t = dht.readTemperature();
 
 iot.WriteVar("Temperature", t);
 iot.WriteVar("Humidity", h);
 
 delay(1500); 
}
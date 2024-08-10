#include <DHT.h>
#include <DHT_U.h>

#define dht11p D1

DHT dht11(dht11p, DHT11);

void setup(){
  Serial.begin(9600);
  dht11.begin();
}

void loop(){
  delay(2000);
  float h=dht11.readHumidity();
  float tc=dht11.readTemperature();
  float tf=dht11.readTemperature(true);
  if(isnan(h) || isnan(tc) || isnan(tf)){
    Serial.println("Error while trying to use the sensor!");
  }
  else{
    Serial.println("Humidity: ");
    Serial.print(h);
    Serial.println(" % ");
    Serial.print("Temperature: ");
    Serial.print(tc);
    Serial.print(" C | ");
    Serial.print(tf);
    Serial.print(" F ");
  }
}
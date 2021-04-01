#include <dht.h>

dht DHT;
#define DHT11_PIN 7
void setup() {
  Serial.begin(9600);
   

}

void loop() {
  int okunanDeger = DHT.read11(DHT11_PIN);

  Serial.print("sıcaklık : ");
  Serial.println(DHT.temperature);

  Serial.print("kelvin : ");
  Serial.println(DHT.temperature + 273);
  
   Serial.print("fahrenayt : ");
  Serial.println(DHT.temperature * 1.8 + 32);


   Serial.print("nem : ");
  Serial.println(DHT.humidity);
  delay(5000);
  

}

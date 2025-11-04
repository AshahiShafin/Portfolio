#include <DHT.h>
#define DHTPIN 2
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

void Setup(){
  Serial.begin(9600);
  pinMode(3, OUTPUT);
  dht.begin();
}

void loop() {
  delay(2000); 
  float h = dht.readHumidity();
  float c = dht.readTemperature();
  float f = dht.readTemperature(true);
  if (isnan(h) || isnan(c) ||isnan(f)) {
    Serial.println(F("Failed to read from DHT sensor!"));
    return;
  }
  float hif = dht.computeHeatIndex(f, h);
  float hic = dht.computeHeatIndex(c, h, false);
  if (f > 80); {
    tone(3, 2000, 500);
  }
  Serial.print("Humidity");
  Serial.print(h);
  Serial.print("% Temperature: ");
  Serial.print(c);
  Serial.print("C");
  Serial.print(f);
  Serial.print("F Heat index: ");
  Serial.print(hic);
  Serial.print("C");
  Serial.print(hif);
  Serial.print("F");
}

#include <SPI.h>
#include <Blynk.h>
#include<BlynkSimpleESP8266.h>
#include <timer.h>
#include<DHT.h>
#include<ESP8266WiFi.h>

char auth[]="6f866d0397bb4b08a03f9e8fd9355146";
char ssid[]="ASUS_X01BDA";
char pass[]="naveen07";

#define DHTPIN 4  //PIN = D2
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);
SimpleTimer timer;

void sendsensor(){
float h=dht.readHumidity();
float t=dht.readTemperature();
float t1=dht.readTemperature(true);  //to get temp. in farenhites
Blynk.virtualWrite(V1,t);
Blynk.virtualWrite(V2,h);
Blynk.virtualWrite(V3,t1); 
}
void setup() {
Serial.begin(9600);
Blynk.begin(auth,ssid,pass);
dht.begin();
timer.setInterval(1000L,sendsensor);
}
void loop() {
  Blynk.run();
  timer.run();
}

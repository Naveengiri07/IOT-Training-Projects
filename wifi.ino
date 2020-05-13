#include<ESP8266WiFi.h>
const char* ssid="ASUS_X01BDA";
const char* password="naveen07";

int ledpin=13;


void setup() {
 pinMode(ledpin,OUTPUT);
 digitalWrite(ledpin,LOW);

 Serial.begin(115200);
 Serial.println();



 WiFi.begin(ssid,password);
 Serial.println();
 Serial.println("connecting");

 while(WiFi.status()!=WL_CONNECTED)
 { delay(500);
 Serial.print(".");
 }
    Serial.println("wifi connection to");
  Serial.println(ssid);

}

void loop() {
  // put your main code here, to run repeatedly:

}

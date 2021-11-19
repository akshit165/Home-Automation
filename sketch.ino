#define BLYNK_PRINT Serial
#include <Servo.h>
Servo servo;
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
BLYNK_WRITE(V3) {
servo.write(param.asInt());


char auth[] = "YourBlynkauthtoken";

char ssid[] = "Akshit";
char pass[] = "12341234";

void setup()
{

  Serial.begin(9600);
  
  Blynk.begin(auth, ssid, pass);
  servo.attach(2); 
  servo.attach(13); 
}

void loop()
{
  Blynk.run();
}

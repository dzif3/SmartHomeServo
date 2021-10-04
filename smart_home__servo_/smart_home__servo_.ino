
#define BLYNK_PRINT Serial


//setting Library
#include <ESP8266WiFi.h> // file untuk modul wifi
#include <BlynkSimpleEsp8266.h> // file untuk blynk
#include <Servo.h> // ini library 


char auth[] = "sLecfj9GRvYHHZiJxzfrfiOVQTRCDiE6";
char ssid[] = "vivo1718";
char pass[] = "dzikra12";

// devinisi funsi servo menjadi gerak_servo
Servo gerak_servo;

BLYNK_WRITE(V1)
{
  gerak_servo.write(param.asInt());
} // FUngsi Blynk untuk mengatur nilai servo dengan pin virtual V! yang ada pada aplikai blynk

void setup()
{
  // Debug console
  Serial.begin(9600); // menjalankan serial monitor dengan baudrate 9600

  Blynk.begin(auth,ssid,pass);// menjalankan blynk sesuai token, wifi, dan passwordnya

  gerak_servo.attach(2); // setting pin gpion2 ke servo, D4 = 2
}

void loop()
{
  Blynk.run();//memulai blynk
}

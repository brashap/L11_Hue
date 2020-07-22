/*
 *  Project:      HueHeader
 *  Description:  Header File for Hue Lights in IoT Classroom using Hue IoT LIbrary
 *  Authors:      Brian Rashap
 *  Date:         22-JUL-2020
 */
#include <SPI.h>
#include <Ethernet.h>
#include <mac.h>
#include <hue.h>

int buttonPin = 23;
boolean activated;  // true for bulb on, falso for off
int bulb;           // select which bulb (1 to 5)
int color;         // select a color (4-byte format)
int bri;            // select brightness (0-255)
 
IPAddress ip(192,168,1,4);  // Teensy IP

void setup()
{
  pinMode(10, OUTPUT);
  digitalWrite(10, HIGH);

  Serial.begin(9600);
  Ethernet.begin(mac,ip);
  delay(2000);              // Wait for Serial Monitor
  Serial.print("LinkStatus: ");
  Serial.println(Ethernet.linkStatus());
}

void loop() {

}

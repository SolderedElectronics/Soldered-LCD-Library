/**
 **************************************************
 *
 * @file        Template.ino
 * @brief       Example template for easyC sensors
 *
 *
 *
 * @authors     @ soldered.com
 ***************************************************/

#include "LCD-SOLDERED.h"

LiquidCrystal_I2C display(0x20,16,2);

void setup()
{
  Serial.begin(115200);
  delay(100);

  display.begin();
  display.backlight();
}

void loop()
{
  delay(1000);
  Serial.println("welp");
}
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

LCD_I2C display(0x20);

void setup()
{
  Serial.begin(115200);
  delay(100);

  display.begin();
  display.backlight();
  display.print("Hello!");
}

void loop()
{
  delay(1000);
  Serial.println("welp");
}
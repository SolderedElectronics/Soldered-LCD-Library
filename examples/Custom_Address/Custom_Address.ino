/**
 **************************************************
 *
 * @file        Custom_Address.ino
 * @brief       Example of using a custom I2C address for LCD. See more at solde.red/333003
 *
 *
 *
 * @authors     Robert Soric for Soldered.com
 ***************************************************/

#include "LCD-SOLDERED.h"
#define LCD_ADDRESS 0x20 // Custom LCD address

LCD lcd(LCD_ADDRESS); // Create LCD with a specific I2C address

/**
 * To use a custom I2C address, you may short the A2, A1 or A0 jumpers:
 * In this table, 'x' represents a shorted jumper
 * Address | A2 | A1 | A0 |
 * 0x20    |    |    |    | (default)
 * 0x21    |    |    |  x |
 * 0x22    |    |  x |    |
 * 0x23    |    |  x |  x |
 * 0x24    |  x |    |    |
 * 0x25    |  x |    |  x |
 * 0x26    |  x |  x |    |
 * 0x27    |  x |  x |  x |
 */

void setup()
{
    lcd.begin();     // Initialize the LCD
    lcd.backlight(); // Turn on the backlight
    lcd.print("Hello world");
    lcd.setCursor(0, 1); // Set cursor in new row
    lcd.print("From 0x");
    lcd.print(LCD_ADDRESS, HEX); // Print the I2C address
}

void loop()
{
    delay(100); // Do nothing;
}
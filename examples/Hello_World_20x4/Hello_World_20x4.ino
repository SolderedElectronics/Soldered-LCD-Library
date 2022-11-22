/**
 **************************************************
 *
 * @file        Hello_World_20x4.ino
 * @brief       Simple Hello World example for LCD. See more at solde.red/333003
 *
 *
 *
 * @authors     Zvonimir Haramustek & Robert Soric for Soldered.com
 ***************************************************/

#include "LCD-SOLDERED.h"

LCD lcd(20,4); // Define LCD object with the correct number of columns and rows

void setup()
{
    lcd.begin();     // Initialize LCD
    lcd.backlight(); // Turn the backlight on
}


void loop()
{
    lcd.setCursor(7, 0);         // Move the cursor towards the middle in line 0
    lcd.print("Hello");          // Prints Hello on the LCD
    lcd.setCursor(7, 1);         // Set cursor to 7th character in line 1
    lcd.print("World!");         // Prints World! on the LCD
    lcd.setCursor(6, 2);         // Set cursor to 6th character in line 2
    lcd.print("Soldered");       // Prints Soldered on the LCD
    lcd.setCursor(5, 3);         // Set cursor to 5th character in line 3
    lcd.print("Electronics");    // Prints Electronics on the LCD
    delay(500);                  // Wait for better visual effect
 
    // Flashing the backlight
    for (int i = 0; i < 5; ++i)
    {
        lcd.backlight();    // Turn on backlight
        delay(50);          // Wait
        lcd.noBacklight();  // Turn off backlight
        delay(50);
    }

    lcd.backlight(); // Turn the backlight on
    lcd.clear();     // Clear the LCD
    delay(500);
}
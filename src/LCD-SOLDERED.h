/**
 **************************************************
 *
 * @file        LCD-SOLDERED.h
 * @brief       Header file for sensor specific code.
 *
 *
 * @copyright GNU General Public License v3.0
 * @authors     @ soldered.com
 ***************************************************/

#ifndef __LCD__
#define __LCD__

#include "Arduino.h"
#include "libs/LCD_I2C.h"
#include "libs/LiquidCrystal_I2C.h"

typedef enum
{
    LCD_16x2,
    LCD_20x4
} lcd_variant_t;

class LCD : public LiquidCrystal_I2C
{
  public:
    // LCD() : LiquidCrystal_I2C(16,2);

  private:
    lcd_variant_t lcdtype;
};

#endif

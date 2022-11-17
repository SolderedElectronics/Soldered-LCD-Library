/**
 **************************************************
 *
 * @file        LCD-SOLDERED.h
 * @brief       Header for Soldered LCD library. See more at solde.red/333003
 *
 *
 * @copyright GNU General Public License v3.0
 * @authors   Robert Soric @ soldered.com
 ***************************************************/

#ifndef __LCD__
#define __LCD__

#include "Arduino.h"
#include "libs/LiquidCrystal_I2C.h"

class LCD : public LiquidCrystal_I2C
{
  public:
    LCD() : LiquidCrystal_I2C(0x20, 16, 2)
    {
    }

    LCD(int rows, int cols) : LiquidCrystal_I2C(0x20, rows, cols)
    {
    }
};

#endif

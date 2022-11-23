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

    LCD(int _rows, int _cols) : LiquidCrystal_I2C(0x20, _rows, _cols)
    {
    }

    LCD(uint8_t _addr, int _rows, int _cols) : LiquidCrystal_I2C(_addr, _rows, _cols)
    {
    }

    LCD(uint8_t _addr) : LiquidCrystal_I2C(_addr, 16, 2)
    {
    }
};

#endif

/*
Copyright 2014 Kasper Skårhøj, SKAARHOJ, kasper@skaarhoj.com

This file is part of the Blackmagic Design SmartView Client library for Arduino

The ClientBMDSmartView library is free software: you can redistribute it and/or modify 
it under the terms of the GNU General Public License as published by the 
Free Software Foundation, either version 3 of the License, or (at your 
option) any later version.

The ClientBMDSmartView library is distributed in the hope that it will be useful, but 
WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY 
or FITNESS FOR A PARTICULAR PURPOSE. 
See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along 
with the ClientBMDSmartView library. If not, see http://www.gnu.org/licenses/.


IMPORTANT: If you want to use this library in your own projects and/or products,
please play a fair game and heed the license rules! See our web page for a Q&A so
you can keep a clear conscience: http://skaarhoj.com/about/licenses/


*/



#include "Arduino.h"

#if defined(ARDUINO_SKAARDUINO_V1)  
	#include <SPI.h>
#endif

#define SkaarhojEADOGMDisplay_SPI_SPEED 500000

class SkaarhojEADOGMDisplay : public Print  {

  private:
	  uint8_t _boardAddress, _boardType, _index, _dataPin, _clockPin, _chipLowerByte, _chipUpperByte, _DDRAMaddr;

 public:
  SkaarhojEADOGMDisplay();
  void begin(uint8_t address, uint8_t index, uint8_t boardType);
  void clearDisplay(void);
  void contrast(uint8_t contrast);
  void cursor(bool enable);
  void gotoRowCol(uint8_t row, uint8_t col);
  void newline();

  virtual size_t write(uint8_t);	// Overloading
  virtual size_t write(const uint8_t *buffer, size_t size);	// Overloading

 private:
   void _sendData(bool enable);
   void _selectDisplay(uint8_t dispNum, bool enable);
   void _incDDRAMaddr();
};

/*
  graphics.h - Static images to display on the screen
  
  Copyright (C) 2020 -2021 @G4lile0, @gmag12 and @dev_4m1g0

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/
/*
#define Logo_width  67
#define Logo_height 32

// XMB using https://www.online-utility.org/image/convert/to/XBM

const uint8_t Logo_bits[] PROGMEM={
  0xE0, 0x00, 0x00, 0xC0, 0x1F, 0x1F, 0xC3, 0xDD, 0x01, 0xF8, 0x07, 0x00, 
  0x40, 0x12, 0x04, 0x86, 0x88, 0x00, 0x3C, 0x0E, 0x30, 0x00, 0x02, 0x04, 
  0x8A, 0x88, 0x00, 0x0E, 0x08, 0x78, 0x00, 0x02, 0x04, 0x8A, 0x50, 0x00, 
  0xE7, 0x03, 0xFC, 0x00, 0x02, 0x04, 0x92, 0x20, 0x00, 0x33, 0x04, 0xFE, 
  0x00, 0x02, 0x04, 0xB2, 0x20, 0x00, 0x1B, 0x00, 0xFF, 0x01, 0x02, 0x04, 
  0xA2, 0x20, 0x00, 0xCB, 0x9F, 0xFF, 0x01, 0x02, 0x04, 0xC2, 0x20, 0x00, 
  0xCB, 0xCF, 0xFF, 0x01, 0x07, 0x1F, 0x87, 0x70, 0x00, 0xCB, 0xE7, 0xFF, 
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0xD3, 0xF3, 0xFF, 0x03, 0xFE, 0x39, 
  0x80, 0xBF, 0x03, 0xC6, 0xF9, 0xFF, 0x83, 0xFF, 0x3F, 0xE0, 0xFF, 0x03, 
  0xC4, 0xFC, 0xFF, 0x83, 0xFF, 0x3F, 0xF0, 0xFF, 0x07, 0x40, 0xFE, 0xFF, 
  0xC3, 0xFF, 0x3F, 0xF8, 0xFF, 0x07, 0x00, 0xFF, 0xFF, 0xE1, 0x07, 0x3F, 
  0xF8, 0xE1, 0x07, 0x80, 0xFF, 0xFF, 0xF1, 0x01, 0x3C, 0x78, 0xC0, 0x07, 
  0xC0, 0xFF, 0xFF, 0xF1, 0x00, 0x3C, 0x78, 0x80, 0x07, 0xE0, 0xFF, 0xFF, 
  0xF1, 0x00, 0x18, 0x78, 0x80, 0x03, 0xF0, 0xFF, 0xFF, 0xF8, 0x00, 0x00, 
  0xF8, 0x00, 0x00, 0xF8, 0xFF, 0x7F, 0x78, 0x00, 0x00, 0xF8, 0x1F, 0x00, 
  0xFC, 0xFF, 0x7F, 0x78, 0x00, 0x00, 0xF0, 0xFF, 0x00, 0xFE, 0xFF, 0x3F, 
  0x78, 0xE0, 0x7F, 0xE0, 0xFF, 0x01, 0xFF, 0xFF, 0x9F, 0x78, 0xF0, 0xFF, 
  0x80, 0xFF, 0x03, 0xFE, 0xFF, 0xCF, 0x78, 0xF0, 0xFF, 0x00, 0xF0, 0x07, 
  0xF8, 0xFF, 0xE7, 0xF8, 0xE0, 0x7F, 0x18, 0xC0, 0x07, 0xE0, 0xFF, 0xF9, 
  0xF0, 0x00, 0x3C, 0x3C, 0x80, 0x07, 0x80, 0x3F, 0xFE, 0xF0, 0x01, 0x3C, 
  0x3C, 0x80, 0x07, 0x00, 0xC0, 0xFF, 0xF0, 0x03, 0x3C, 0x7C, 0xC0, 0x07, 
  0x00, 0xF0, 0xFF, 0xE0, 0xFF, 0x3F, 0xFC, 0xFF, 0x07, 0x00, 0xF8, 0xFF, 
  0xC0, 0xFF, 0x3F, 0xFC, 0xFF, 0x03, 0x00, 0xFC, 0xFF, 0x80, 0xFF, 0x1F, 
  0xFC, 0xFF, 0x01, 0x00, 0xFC, 0xFF, 0x00, 0xFF, 0x07, 0xD8, 0x7F, 0x00,   };

*/
#define Logo_width  67
#define Logo_height 32

const uint8_t Logo_bits[] PROGMEM={
  0xFF, 0xFF, 0xFF, 0x3F, 0x80, 0xFF, 0xFF, 0xFF, 0x07, 0xFF, 0xFF, 0xFF, 
  0x5F, 0x00, 0xFF, 0xFF, 0xFF, 0x07, 0xFF, 0xFF, 0xFF, 0x67, 0x00, 0xFE, 
  0xFF, 0xFF, 0x07, 0xFF, 0xFF, 0xFF, 0x2F, 0x00, 0xFE, 0xFF, 0xFF, 0x07, 
  0xFF, 0xFF, 0xFF, 0x9B, 0x00, 0xFE, 0xFF, 0xFF, 0x07, 0xFF, 0xFF, 0xFF, 
  0x59, 0x00, 0xFE, 0xFF, 0xFF, 0x07, 0xFF, 0xFF, 0x7F, 0x22, 0x09, 0xFE, 
  0xFF, 0xFF, 0x07, 0xFF, 0xFF, 0x7F, 0x96, 0x06, 0xFE, 0xFF, 0xFF, 0x07, 
  0xFF, 0xFF, 0xFF, 0x1B, 0x0B, 0xFC, 0xFF, 0xFF, 0x07, 0xFF, 0xFF, 0xFF, 
  0xC4, 0x00, 0xFC, 0xFF, 0xFF, 0x07, 0xFF, 0xFF, 0xFF, 0x56, 0x00, 0xFC, 
  0xFF, 0xFF, 0x07, 0xFF, 0xFF, 0xFF, 0x10, 0x00, 0xFC, 0xFF, 0xFF, 0x07, 
  0xFF, 0xFF, 0x7F, 0x99, 0x04, 0xFC, 0xFF, 0xFF, 0x07, 0xFF, 0xFF, 0xFF, 
  0x60, 0x00, 0xF8, 0xFF, 0xFF, 0x07, 0xFF, 0xFF, 0xFF, 0x14, 0x00, 0xF0, 
  0xFF, 0xFF, 0x07, 0xFF, 0xFF, 0xFF, 0x47, 0x00, 0xF8, 0xFF, 0xFF, 0x07, 
  0xFF, 0xFF, 0xFF, 0xAF, 0x61, 0xFA, 0xFF, 0xFF, 0x07, 0xFF, 0xFF, 0xFF, 
  0xBF, 0x04, 0xFC, 0xFF, 0xFF, 0x07, 0xFF, 0xFF, 0xFF, 0x7F, 0xF2, 0xFF, 
  0xFF, 0xFF, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0x69, 0xFE, 0xFF, 0xFF, 0x07, 
  0xFF, 0xFF, 0xFF, 0xFF, 0x2B, 0xFE, 0xFF, 0xFF, 0x07, 0xFF, 0xFF, 0xFF, 
  0xFF, 0x9F, 0xFF, 0xFF, 0xFF, 0x07, 0x00, 0xFE, 0xFF, 0xFF, 0xFF, 0xE0, 
  0xF8, 0x6A, 0x01, 0x00, 0xFE, 0xFF, 0xFF, 0xFF, 0xE0, 0x38, 0x56, 0x02, 
  0x38, 0x00, 0x00, 0x1C, 0x04, 0xC0, 0x78, 0xF1, 0x02, 0x00, 0x00, 0x00, 
  0x80, 0x40, 0xC4, 0xB8, 0xF6, 0x05, 0x00, 0x38, 0x00, 0x80, 0x20, 0x80, 
  0x78, 0xFA, 0x06, 0x00, 0x00, 0x80, 0x9C, 0x31, 0x80, 0xA0, 0x95, 0x01, 
  0x00, 0x00, 0xF8, 0x9C, 0x11, 0x0E, 0x20, 0x2B, 0x02, };


#define WiFi_Logo_width 60
#define WiFi_Logo_height 36
const uint8_t WiFi_Logo_bits[] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xFF, 0x07, 0x00, 0x00, 0x00,
  0x00, 0x00, 0xE0, 0xFF, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xFF,
  0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xFF, 0xFF, 0x00, 0x00, 0x00,
  0x00, 0x00, 0xFE, 0xFF, 0xFF, 0x01, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF,
  0xFF, 0x03, 0x00, 0x00, 0x00, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00,
  0x00, 0xFF, 0xFF, 0xFF, 0x07, 0xC0, 0x83, 0x01, 0x80, 0xFF, 0xFF, 0xFF,
  0x01, 0x00, 0x07, 0x00, 0xC0, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x0C, 0x00,
  0xC0, 0xFF, 0xFF, 0x7C, 0x00, 0x60, 0x0C, 0x00, 0xC0, 0x31, 0x46, 0x7C,
  0xFC, 0x77, 0x08, 0x00, 0xE0, 0x23, 0xC6, 0x3C, 0xFC, 0x67, 0x18, 0x00,
  0xE0, 0x23, 0xE4, 0x3F, 0x1C, 0x00, 0x18, 0x00, 0xE0, 0x23, 0x60, 0x3C,
  0x1C, 0x70, 0x18, 0x00, 0xE0, 0x03, 0x60, 0x3C, 0x1C, 0x70, 0x18, 0x00,
  0xE0, 0x07, 0x60, 0x3C, 0xFC, 0x73, 0x18, 0x00, 0xE0, 0x87, 0x70, 0x3C,
  0xFC, 0x73, 0x18, 0x00, 0xE0, 0x87, 0x70, 0x3C, 0x1C, 0x70, 0x18, 0x00,
  0xE0, 0x87, 0x70, 0x3C, 0x1C, 0x70, 0x18, 0x00, 0xE0, 0x8F, 0x71, 0x3C,
  0x1C, 0x70, 0x18, 0x00, 0xC0, 0xFF, 0xFF, 0x3F, 0x00, 0x00, 0x08, 0x00,
  0xC0, 0xFF, 0xFF, 0x1F, 0x00, 0x00, 0x0C, 0x00, 0x80, 0xFF, 0xFF, 0x1F,
  0x00, 0x00, 0x06, 0x00, 0x80, 0xFF, 0xFF, 0x0F, 0x00, 0x00, 0x07, 0x00,
  0x00, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0x00, 0x00, 0xF8, 0xFF, 0xFF,
  0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFF, 0xFF, 0x01, 0x00, 0x00,
  0x00, 0x00, 0xFC, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xFF,
  0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xFF, 0x1F, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x80, 0xFF, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  };


//Earth logo from https://www.instructables.com/id/NODEMCU-LUA-ESP8266-With-I2C-LCD-128-X-64-OLED-Dis/

#define earth_width 128
#define earth_height 64
static uint8_t earth_bits[] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0xC0, 0xE3, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0xFF, 0x3F, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8C, 
  0x0E, 0xFC, 0x3F, 0x00, 0x00, 0x00, 0xC0, 0x07, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x80, 0x43, 0x1D, 0xF8, 0x1F, 0x00, 0x00, 0x00, 0xF8, 0x9F, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x4F, 0x3E, 0xF8, 0x0F, 0x00, 
  0x0C, 0x80, 0xFF, 0xFF, 0xFF, 0x07, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xF7, 
  0x73, 0xFC, 0x01, 0x80, 0x7F, 0xFC, 0xFD, 0xFF, 0xFF, 0xFF, 0x07, 0x00, 
  0xC0, 0xFF, 0xFF, 0xFF, 0x78, 0x7C, 0x38, 0x80, 0x3F, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0x7F, 0x00, 0xC0, 0xFF, 0xFF, 0x1F, 0x30, 0x1C, 0x00, 0xE0, 
  0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x00, 0xF0, 0xFF, 0xFF, 0x0F, 
  0x06, 0x18, 0x00, 0xF0, 0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x0E, 0x00, 
  0x30, 0xF0, 0xFF, 0x07, 0x1F, 0x00, 0x00, 0xE0, 0xF9, 0xFF, 0xFF, 0xFF, 
  0xFF, 0x07, 0x02, 0x00, 0x08, 0xF0, 0xFF, 0x0F, 0x1F, 0x00, 0x00, 0xE3, 
  0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0x03, 0x06, 0x00, 0x00, 0xF0, 0xFF, 0x9F, 
  0x3F, 0x00, 0x80, 0xE2, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0x04, 0x00, 
  0x00, 0xF0, 0xFF, 0xDF, 0x3F, 0x00, 0x80, 0xF6, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0x1F, 0x00, 0x00, 0x00, 0xF0, 0xFF, 0xFF, 0x23, 0x00, 0x00, 0xFC, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x00, 0x00, 0x00, 0xF0, 0xFF, 0xFF, 
  0x63, 0x00, 0x00, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x00, 0x00, 
  0x00, 0xF0, 0xFF, 0xFF, 0x07, 0x00, 0x00, 0xFC, 0x9F, 0xCF, 0xFF, 0xFF, 
  0xFF, 0x3F, 0x00, 0x00, 0x00, 0xF8, 0xFF, 0xFF, 0x00, 0x00, 0x80, 0x4F, 
  0x1F, 0xCC, 0xFF, 0xFF, 0xFF, 0x1F, 0x00, 0x00, 0x00, 0xFC, 0xFF, 0x7F, 
  0x00, 0x00, 0x80, 0x87, 0xFD, 0x9D, 0xFF, 0xFF, 0xFF, 0x0F, 0x00, 0x00, 
  0x00, 0xFC, 0xFF, 0x1F, 0x00, 0x00, 0xC0, 0x03, 0xE5, 0x9F, 0xFF, 0xFF, 
  0xFF, 0x08, 0x00, 0x00, 0x00, 0xFC, 0xFF, 0x0F, 0x00, 0x00, 0x80, 0x31, 
  0xE0, 0xBF, 0xFF, 0xFF, 0xFF, 0x13, 0x00, 0x00, 0x00, 0xFC, 0xFF, 0x0F, 
  0x00, 0x00, 0x00, 0x3F, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x13, 0x00, 0x00, 
  0x00, 0xF8, 0xFF, 0x03, 0x00, 0x00, 0xC0, 0x7F, 0x04, 0xFF, 0xFF, 0xFF, 
  0xFF, 0x03, 0x00, 0x00, 0x00, 0xF8, 0xFF, 0x01, 0x00, 0x00, 0xC0, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0x00, 0x00, 0x00, 0xE8, 0x07, 0x01, 
  0x00, 0x00, 0xE0, 0xFF, 0xFF, 0xBF, 0xFF, 0xFF, 0xFF, 0x07, 0x00, 0x00, 
  0x00, 0xE0, 0x03, 0x01, 0x00, 0x00, 0xF0, 0xFF, 0xFF, 0x3E, 0xFE, 0xFF, 
  0xFF, 0x07, 0x00, 0x00, 0x00, 0xD0, 0x03, 0x00, 0x00, 0x00, 0xF0, 0xFF, 
  0xFF, 0xFE, 0xC1, 0xFF, 0xFF, 0x0B, 0x00, 0x00, 0x00, 0x80, 0x03, 0x02, 
  0x00, 0x00, 0xF8, 0xFF, 0xFF, 0xFD, 0xC3, 0xFF, 0xFF, 0x01, 0x00, 0x00, 
  0x00, 0xC0, 0x33, 0x14, 0x00, 0x00, 0xF8, 0xFF, 0xFF, 0xF9, 0x03, 0x1F, 
  0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x10, 0x00, 0x00, 0xF8, 0xFF, 
  0xFF, 0xFB, 0x01, 0x0F, 0x3E, 0x10, 0x00, 0x00, 0x00, 0x00, 0x78, 0x00, 
  0x00, 0x00, 0xF8, 0xFF, 0xFF, 0x73, 0x00, 0x07, 0x7C, 0x10, 0x00, 0x00, 
  0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0xF8, 0xFF, 0xFF, 0x1F, 0x00, 0x06, 
  0x78, 0x10, 0x00, 0x00, 0x00, 0x00, 0x40, 0x08, 0x00, 0x00, 0xF8, 0xFF, 
  0xFF, 0x4F, 0x00, 0x06, 0x60, 0x20, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xFC, 
  0x00, 0x00, 0xF0, 0xFF, 0xFF, 0x7F, 0x00, 0x04, 0x08, 0x60, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xFE, 0x01, 0x00, 0xE0, 0xFF, 0xFF, 0x7F, 0x00, 0x08, 
  0x08, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x0F, 0x00, 0xC0, 0xF3, 
  0xFF, 0x3F, 0x00, 0x00, 0x10, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 
  0x0F, 0x00, 0x00, 0xC0, 0xFF, 0x1F, 0x00, 0x00, 0x18, 0x06, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xFF, 0x1F, 0x00, 0x00, 0xC0, 0xFF, 0x0F, 0x00, 0x00, 
  0x18, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x7F, 0x00, 0x00, 0xC0, 
  0xFF, 0x07, 0x00, 0x00, 0x30, 0x17, 0x02, 0x00, 0x00, 0x00, 0x00, 0xFF, 
  0xFF, 0x01, 0x00, 0xC0, 0xFF, 0x07, 0x00, 0x00, 0x30, 0x17, 0x3C, 0x00, 
  0x00, 0x00, 0x00, 0xFF, 0xFF, 0x07, 0x00, 0x80, 0xFF, 0x03, 0x00, 0x00, 
  0x20, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x07, 0x00, 0x80, 
  0xFF, 0x03, 0x00, 0x00, 0x80, 0x03, 0xF0, 0x00, 0x00, 0x00, 0x00, 0xFE, 
  0xFF, 0x07, 0x00, 0x80, 0xFF, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xFC, 0xFF, 0x03, 0x00, 0x80, 0xFF, 0x07, 0x00, 0x00, 
  0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xFF, 0x03, 0x00, 0x80, 
  0xFF, 0x47, 0x00, 0x00, 0x00, 0x00, 0x27, 0x00, 0x00, 0x00, 0x00, 0xF8, 
  0xFF, 0x03, 0x00, 0x80, 0xFF, 0x67, 0x00, 0x00, 0x00, 0xE0, 0x27, 0x00, 
  0x00, 0x00, 0x00, 0xF0, 0xFF, 0x03, 0x00, 0x80, 0xFF, 0x31, 0x00, 0x00, 
  0x00, 0xF0, 0x7F, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xFF, 0x01, 0x00, 0x80, 
  0xFF, 0x30, 0x00, 0x00, 0x00, 0xF8, 0x7F, 0x00, 0x00, 0x00, 0x00, 0xE0, 
  0xFF, 0x01, 0x00, 0x00, 0xFF, 0x31, 0x00, 0x00, 0x00, 0xFE, 0xFF, 0x00, 
  0x00, 0x00, 0x00, 0xE0, 0x7F, 0x00, 0x00, 0x00, 0xFF, 0x10, 0x00, 0x00, 
  0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x3F, 0x00, 0x00, 0x00, 
  0x7F, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0xE0, 
  0x3F, 0x00, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 
  0x00, 0x00, 0x00, 0xE0, 0x1F, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 
  0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x1F, 0x00, 0x00, 0x00, 
  0x1E, 0x00, 0x00, 0x00, 0x00, 0x8F, 0x7F, 0x00, 0x00, 0x00, 0x00, 0xE0, 
  0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x3E, 0x00, 
  0x00, 0x00, 0x00, 0xE0, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x1E, 0x40, 0x00, 0x00, 0x00, 0xC0, 0x03, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0xC0, 
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x10, 
  0x00, 0x00, 0x00, 0xC0, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0xC0, 0x01, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xC0, 
  0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, };


  
const uint8_t activeSymbol[] PROGMEM = {
    B00000000,
    B00000000,
    B00011000,
    B00100100,
    B01000010,
    B01000010,
    B00100100,
    B00011000
};

const uint8_t inactiveSymbol[] PROGMEM = {
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00011000,
    B00011000,
    B00000000,
    B00000000
};

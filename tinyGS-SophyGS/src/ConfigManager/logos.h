/*
  logos.h - Images to show on the config webpage
  
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

#include <Arduino.h>
const char LOGO[] PROGMEM = "<div><img display='inherit' src='data:image/png;base64,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'/></div>\n";
/*
   BlueVGA library - VGA Driver Library for STM32F103

   - This library is intended to work in Arduino IDE using Bluepill STM32F103C8 or STM32F103CB boards
   - It works on both STM32 Core and Roger's core for STM32F103C board.
   - It was tested and runs using the following Arduino Settings for the board:
       Generic STM32F103C series
       Optimize Os (Smallest)
       Variant STM32F103C8 or STM32F103CB
       CPU Speed(MHz) 72MHz (Normal)

    Author Rodrigo Patricio Garcia Corbera (rocorbera@gmail.com)
    Copyright © 2017-2021 Rodrigo Patricio Garcia Corbera.
    All rights reserved.

    Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

    This code is licensed as Attribution-NonCommercial-ShareAlike 4.0 International (CC BY-NC-SA 4.0) - https://creativecommons.org/licenses/by-nc-sa/4.0/
    Redistributions of source code must retain the above copyright notice, and meet al conditions as defined in  https://creativecommons.org/licenses/by-nc-sa/4.0/legalcode.
    Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the this disclaimer in
    the documentation and/or other materials provided with the distribution.

    ** THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS.
    ** IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS,
    ** WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.

*/

#ifndef GRAPH_BITMAPS_H
#define GRAPH_BITMAPS_H

const uint16_t invaderBitmaps [7*8] = {
    0B0000001111000000,
    0B0001111111111000,
    0B0011111111111100,
    0B0011100110011100,
    0B0011111111111100,
    0B0000011001100000,
    0B0000110110110000,
    0B0011000000001100,

    0B0000001111000000,
    0B0001111111111000,
    0B0011111111111100,
    0B0011100110011100,
    0B0011111111111100,
    0B0000111001110000,
    0B0001100110011000,
    0B0000110000110000,

    0B0000100000100000,
    0B0000010001000000,
    0B0000111111100000,
    0B0001101110110000,
    0B0011111111111000,
    0B0010111111101000,
    0B0010100000101000,
    0B0000011011000000,

    0B0000100000100000,
    0B0010010001001000,
    0B0010111111101000,
    0B0011101110111000,
    0B0001111111110000,
    0B0000111111100000,
    0B0000100000100000,
    0B0001000000010000,

    0B0000000110000000, 
    0B0000001111000000,
    0B0000011111100000,
    0B0000110110110000,
    0B0000111111110000,
    0B0000010110100000,
    0B0000100000010000,
    0B0000010000100000,

    0B0000000110000000,
    0B0000001111000000,
    0B0000011111100000,
    0B0000110110110000,
    0B0000111111110000,
    0B0000001001000000,
    0B0000010110100000,
    0B0000101001010000,

    0B0000010010010000,
    0B0001001010100100,
    0B0000100000001000,
    0B0000010000010000,
    0B0011000000000110,
    0B0000010000010000,
    0B0000100101001000,
    0B0001001000100100,
};


const uint8_t invFireBlast [8] = {
    0B00000000,
    0B01000100,
    0B00011010,
    0B00111100,
    0B01011100,
    0B00111110,
    0B01011100,
    0B00101010,
};

const uint8_t playerFireBlast [8] = {
    0B10001001,
    0B00100010,
    0B01111110,
    0B11111111,
    0B11111111,
    0B0111110,
    0B00100100,
    0B10010001,
};


const uint8_t playerLaser [8] = {
    0B00000010,
    0B00000010,
    0B00000010,
    0B00000010,
    0B00000010,
    0B00000010,
    0B00000010,
    0B00000010,
};

const uint8_t invLaser [8 * 3 * 4] = {   // 3 bomb sprites in 4 frames each
    0B11000000,
    0B01100000,
    0B01000000,
    0B01000000,
    0B11000000,
    0B01100000,
    0B01000000,
    0B01000000,

    0B01000000,
    0B01000000,
    0B01000000,
    0B01000000,
    0B01000000,
    0B01000000,
    0B01000000,
    0B01000000,

    0B01000000,
    0B01000000,
    0B01100000,
    0B11000000,
    0B01000000,
    0B01000000,
    0B01100000,
    0B11000000,

    0B01000000,
    0B01000000,
    0B01000000,
    0B01000000,
    0B01000000,
    0B01000000,
    0B01000000,
    0B01000000,

    0B01000000,
    0B01000000,
    0B01000000,
    0B01000000,
    0B01000000,
    0B01000000,
    0B01000000,
    0B11100000,

    0B11100000,
    0B01000000,
    0B01000000,
    0B01000000,
    0B01000000,
    0B01000000,
    0B01000000,
    0B01000000,

    0B01000000,
    0B01000000,
    0B11100000,
    0B01000000,
    0B01000000,
    0B01000000,
    0B01000000,
    0B01000000,

    0B01000000,
    0B01000000,
    0B01000000,
    0B01000000,
    0B11100000,
    0B01000000,
    0B01000000,
    0B01000000,

    0B10000000,
    0B01000000,
    0B00100000,
    0B01000000,
    0B10000000,
    0B01000000,
    0B00100000,
    0B00000000,

    0B01000000,
    0B00100000,
    0B01000000,
    0B10000000,
    0B01000000,
    0B00100000,
    0B01000000,
    0B00000000,

    0B00100000,
    0B01000000,
    0B10000000,
    0B01000000,
    0B00100000,
    0B01000000,
    0B10000000,
    0B00000000,

    0B01000000,
    0B10000000,
    0B01000000,
    0B00100000,
    0B01000000,
    0B10000000,
    0B01000000,
    0B00000000,
};


const uint16_t playerBitmaps [8*3] = {
    0B0000000000000000,
    0B0000001000000000,
    0B0000011100000000,
    0B0000011100000000,
    0B0111111111110000,
    0B1111111111111000,
    0B1111111111111000,
    0B1111111111111000,

    0B0010000000000000,
    0B0000100100100000,
    0B1000100001000000,
    0B0010011000000000,
    0B0001011011100000,
    0B0011111011010100,
    0B0111111110001000,
    0B1111111111001000,

    0B0001000000000100,
    0B1000000000110000,
    0B0001001010000000,
    0B0100001100001000,
    0B0011111111000010,
    0B0010111111110000,
    0B0010111111111010,
    0B0010111111111000,
};

//const uint8_t ufoFrames[] = {0, 1, 2, 1}; // 0 -> 1 -> 2 -> 1 -> 0 -> 1 -> 2 -> 1 -> 0 -> 1 -> 2 ->1 -> 0 ... 
const uint16_t ufoBitmaps [8*5] = {
    0B0000000000000000,
    0B0000000111000000,
    0B0000011111110000,
    0B0000111111111000,
    0B0001101010101100,
    0B0011111111111110,
    0B0001110111011100,
    0B0000100010001000,

    0B0000000000000000,
    0B0000000111000000,
    0B0000011111110000,
    0B0000111111111000,
    0B0001110101011100,
    0B0011111111111110,
    0B0001110111011100,
    0B0000100010001000,
};

/*
const uint16_t ufoBitmaps [8*5] = {
    0B0000000000000000,
    0B0000000111000000,
    0B0000011111110000,
    0B0000111111111000,
    0B0001101010101100,
    0B0011111111111110,
    0B0001110111011100,
    0B0000100010001000,

    0B0000000000000000,
    0B0000000111000000,
    0B0000011111110000,
    0B0000111111111000,
    0B0001101010101100,
    0B0011111111111110,
    0B0000111011101110,
    0B0000010001000100,

    0B0000000000000000,
    0B0000000111000000,
    0B0000011111110000,
    0B0000111111111000,
    0B0001101010101100,
    0B0011111111111110,
    0B0010011101110110,
    0B0000001000100010,

    0B0000000000000000,
    0B0000000111000000,
    0B0000011111110000,
    0B0000111111111000,
    0B0001101010101100,
    0B0011111111111110,
    0B0011001110111010,
    0B0010000100010000,

    0B0000000000000000,
    0B0000000111000000,
    0B0000011111110000,
    0B0000111111111000,
    0B0001101010101100,
    0B0011111111111110,
    0B0011100111011100,
    0B0001000010001000,
};
*/
/*
const uint16_t ufoBitmaps [8*3] = {
    0B0000000000000000,
    0B0000000111000000,
    0B0000011111110000,
    0B0000111111111000,
    0B0001110111011100,
    0B0011111111111110,
    0B0001110111011100,
    0B0000100010001000,

    0B0000000000000000,
    0B0000000111000000,
    0B0000011111110000,
    0B0000111111111000,
    0B0001101010101100,
    0B0011111111111110,
    0B0001110111011100,
    0B0000100010001000,

    0B0000000000000000,
    0B0000000111000000,
    0B0000011111110000,
    0B0000111111111000,
    0B0001010101010100,
    0B0011111111111110,
    0B0001110111011100,
    0B0000100010001000,
};
*/

const uint8_t shiledPosX[3] = {4, 13, 22};  
const uint8_t shieldFrames[9] = {4, 0, 5, 0, 0, 0, 1, 3, 2};   // 3 x 3 top-left to bottom-right
const uint8_t shield [8 * 6] = {
    0B11111111,
    0B11111111,
    0B11111111,
    0B11111111,
    0B11111111,
    0B11111111,
    0B11111111,
    0B11111111,

    0B11111111,
    0B11111111,
    0B11111111,
    0B11111111,
    0B11111111,
    0B11111110,
    0B11111000,
    0B11100000,

    0B11111111,
    0B11111111,
    0B11111111,
    0B11111111,
    0B11111111,
    0B01111111,
    0B00011111,
    0B00000111,

    0B11111111,
    0B11111111,
    0B11111111,
    0B11111111,
    0B10000001,
    0B00000000,
    0B00000000,
    0B00000000,

    0B00000001,
    0B00000111,
    0B00011111,
    0B01111111,
    0B11111111,
    0B11111111,
    0B11111111,
    0B11111111,

    0B10000000,
    0B11100000,
    0B11111000,
    0B11111110,
    0B11111111,
    0B11111111,
    0B11111111,
    0B11111111,
};


const uint8_t bottomLine [8] = {
    0B00000000,
    0B00000000,
    0B00000000,
    0B00000000,
    0B00000000,
    0B00000000,
    0B11111111,
    0B00000000,
};


#endif

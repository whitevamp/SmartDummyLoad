#include "Font6x8.h"

/*********************************************
 *                                           *
 * Created with FontCreator                  *
 * Written by F. Maximilian Thiele           *
 * http://www.apeTech.de.vu                  *
 * affe.t@gmx.de                             *
 *                                           *
 * File Name: Font12x16.h                    *
 * Date:      13.02.2004                     *
 *                                           *
 *********************************************/
const static uint8_t __attribute__((progmem)) fontData[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // "(space)"
    0x00, 0x00, 0x06, 0x5F, 0x06, 0x00, // "!"
    0x00, 0x07, 0x03, 0x00, 0x07, 0x03, // """
    0x00, 0x24, 0x7E, 0x24, 0x7E, 0x24, // "#"
    0x00, 0x24, 0x2B, 0x6A, 0x12, 0x00, // "$"
    0x00, 0x63, 0x13, 0x08, 0x64, 0x63, // "%"
    0x00, 0x36, 0x49, 0x56, 0x20, 0x50, // "&"
    0x00, 0x00, 0x07, 0x03, 0x00, 0x00, // "'"
    0x00, 0x00, 0x3E, 0x41, 0x00, 0x00, // "("
    0x00, 0x00, 0x41, 0x3E, 0x00, 0x00, // ")"
    0x00, 0x08, 0x3E, 0x1C, 0x3E, 0x08, // "*"
    0x00, 0x08, 0x08, 0x3E, 0x08, 0x08, // "+"
    0x00, 0x00, 0xE0, 0x60, 0x00, 0x00, // ","
    0x00, 0x08, 0x08, 0x08, 0x08, 0x08, // "-"
    0x00, 0x00, 0x60, 0x60, 0x00, 0x00, // "."
    0x00, 0x20, 0x10, 0x08, 0x04, 0x02, // "/"
    0x00, 0x3E, 0x51, 0x49, 0x45, 0x3E, // "0"
    0x00, 0x00, 0x42, 0x7F, 0x40, 0x00, // "1"
    0x00, 0x62, 0x51, 0x49, 0x49, 0x46, // "2"
    0x00, 0x22, 0x49, 0x49, 0x49, 0x36, // "3"
    0x00, 0x18, 0x14, 0x12, 0x7F, 0x10, // "4"
    0x00, 0x2F, 0x49, 0x49, 0x49, 0x31, // "5"
    0x00, 0x3C, 0x4A, 0x49, 0x49, 0x30, // "6"
    0x00, 0x01, 0x71, 0x09, 0x05, 0x03, // "7"
    0x00, 0x36, 0x49, 0x49, 0x49, 0x36, // "8"
    0x00, 0x06, 0x49, 0x49, 0x29, 0x1E, // "9"
    0x00, 0x00, 0x6C, 0x6C, 0x00, 0x00, // ":"
    0x00, 0x00, 0xEC, 0x6C, 0x00, 0x00, // ";"
    0x00, 0x08, 0x14, 0x22, 0x41, 0x00, // "<"
    0x00, 0x24, 0x24, 0x24, 0x24, 0x24, // "="
    0x00, 0x00, 0x41, 0x22, 0x14, 0x08, // ">"
    0x00, 0x02, 0x01, 0x59, 0x09, 0x06, // "?"
    0x00, 0x3E, 0x41, 0x5D, 0x55, 0x1E, // "@"
    0x00, 0x7E, 0x09, 0x09, 0x09, 0x7E, // "A"
    0x00, 0x7F, 0x49, 0x49, 0x49, 0x36, // "B"
    0x00, 0x3E, 0x41, 0x41, 0x41, 0x22, // "C"
    0x00, 0x7F, 0x41, 0x41, 0x41, 0x3E, // "D"
    0x00, 0x7F, 0x49, 0x49, 0x49, 0x41, // "E"
    0x00, 0x7F, 0x09, 0x09, 0x09, 0x01, // "F"
    0x00, 0x3E, 0x41, 0x49, 0x49, 0x7A, // "G"
    0x00, 0x7F, 0x08, 0x08, 0x08, 0x7F, // "H"
    0x00, 0x00, 0x41, 0x7F, 0x41, 0x00, // "I"
    0x00, 0x30, 0x40, 0x40, 0x40, 0x3F, // "J"
    0x00, 0x7F, 0x08, 0x14, 0x22, 0x41, // "K"
    0x00, 0x7F, 0x40, 0x40, 0x40, 0x40, // "L"
    0x00, 0x7F, 0x02, 0x04, 0x02, 0x7F, // "M"
    0x00, 0x7F, 0x02, 0x04, 0x08, 0x7F, // "N"
    0x00, 0x3E, 0x41, 0x41, 0x41, 0x3E, // "O"
    0x00, 0x7F, 0x09, 0x09, 0x09, 0x06, // "P"
    0x00, 0x3E, 0x41, 0x51, 0x21, 0x5E, // "Q"
    0x00, 0x7F, 0x09, 0x09, 0x19, 0x66, // "R"
    0x00, 0x26, 0x49, 0x49, 0x49, 0x32, // "S"
    0x00, 0x01, 0x01, 0x7F, 0x01, 0x01, // "T"
    0x00, 0x3F, 0x40, 0x40, 0x40, 0x3F, // "U"
    0x00, 0x1F, 0x20, 0x40, 0x20, 0x1F, // "V"
    0x00, 0x3F, 0x40, 0x3C, 0x40, 0x3F, // "W"
    0x00, 0x63, 0x14, 0x08, 0x14, 0x63, // "X"
    0x00, 0x07, 0x08, 0x70, 0x08, 0x07, // "Y"
    0x00, 0x71, 0x49, 0x45, 0x43, 0x00, // "Z"
    0x00, 0x00, 0x7F, 0x41, 0x41, 0x00, // "["
    0x00, 0x02, 0x04, 0x08, 0x10, 0x20, // "\"
    0x00, 0x00, 0x41, 0x41, 0x7F, 0x00, // "]"
    0x00, 0x04, 0x02, 0x01, 0x02, 0x04, // "^"
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, // "_"
    0x00, 0x00, 0x03, 0x07, 0x00, 0x00, // "`"
    0x00, 0x20, 0x54, 0x54, 0x54, 0x78, // "a"
    0x00, 0x7F, 0x44, 0x44, 0x44, 0x38, // "b"
    0x00, 0x38, 0x44, 0x44, 0x44, 0x28, // "c"
    0x00, 0x38, 0x44, 0x44, 0x44, 0x7F, // "d"
    0x00, 0x38, 0x54, 0x54, 0x54, 0x18, // "e"
    0x00, 0x08, 0x7E, 0x09, 0x09, 0x00, // "f"
    0x00, 0x18, 0xA4, 0xA4, 0xA4, 0x7C, // "g"
    0x00, 0x7F, 0x04, 0x04, 0x78, 0x00, // "h"
    0x00, 0x00, 0x00, 0x7D, 0x00, 0x00, // "i"
    0x00, 0x40, 0x80, 0x84, 0x7D, 0x00, // "j"
    0x00, 0x7F, 0x10, 0x28, 0x44, 0x00, // "k"
    0x00, 0x00, 0x00, 0x7F, 0x40, 0x00, // "l"
    0x00, 0x7C, 0x04, 0x18, 0x04, 0x78, // "m"
    0x00, 0x7C, 0x04, 0x04, 0x78, 0x00, // "n"
    0x00, 0x38, 0x44, 0x44, 0x44, 0x38, // "o"
    0x00, 0xFC, 0x44, 0x44, 0x44, 0x38, // "p"
    0x00, 0x38, 0x44, 0x44, 0x44, 0xFC, // "q"
    0x00, 0x44, 0x78, 0x44, 0x04, 0x08, // "r"
    0x00, 0x08, 0x54, 0x54, 0x54, 0x20, // "s"
    0x00, 0x04, 0x3E, 0x44, 0x24, 0x00, // "t"
    0x00, 0x3C, 0x40, 0x20, 0x7C, 0x00, // "u"
    0x00, 0x1C, 0x20, 0x40, 0x20, 0x1C, // "v"
    0x00, 0x3C, 0x60, 0x30, 0x60, 0x3C, // "w"
    0x00, 0x6C, 0x10, 0x10, 0x6C, 0x00, // "x"
    0x00, 0x9C, 0xA0, 0x60, 0x3C, 0x00, // "y"
    0x00, 0x64, 0x54, 0x54, 0x4C, 0x00, // "z"
    0x00, 0x08, 0x3E, 0x41, 0x41, 0x00, // "{"
    0x00, 0x00, 0x00, 0x7F, 0x00, 0x00, // "|"
    0x00, 0x00, 0x41, 0x41, 0x3E, 0x08, // "}"
    0x00, 0x02, 0x01, 0x02, 0x01, 0x00, // "~"
    0x00, 0x3C, 0x26, 0x23, 0x26, 0x3C  //
};

Font6x8::Font6x8() : Font(fontData, 6, 8, 0x20, 0x20 + 96) {}

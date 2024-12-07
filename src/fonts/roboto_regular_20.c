/*******************************************************************************
 * Size: 20 px
 * Bpp: 1
 * Opts: --bpp 1 --size 20 --no-compress --font Roboto-Regular.ttf --symbols ABCDEFGHIJKLMNOPQRSTUVWXYZ
abcdefghijklmnopqrstuvwxyz
0123456789
!@#$%^&*()-_=+[]{}|;:'",.<>?/\  --format lvgl -o roboto_regular_20.c
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef ROBOTO_REGULAR_20
#define ROBOTO_REGULAR_20 1
#endif

#if ROBOTO_REGULAR_20

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xff, 0xf0, 0xc,

    /* U+0022 "\"" */
    0xff, 0xff, 0xf0,

    /* U+0023 "#" */
    0xc, 0x81, 0x10, 0x22, 0x4, 0x47, 0xfe, 0x32,
    0x6, 0x40, 0x88, 0x11, 0x2, 0x23, 0xff, 0x19,
    0x83, 0x20, 0x44, 0x8, 0x80,

    /* U+0024 "$" */
    0xc, 0x6, 0x7, 0xf, 0xee, 0x3e, 0xf, 0x7,
    0x80, 0x70, 0x3e, 0x7, 0xc0, 0x70, 0x1e, 0xf,
    0x6, 0xc7, 0x3f, 0x6, 0x3, 0x0,

    /* U+0025 "%" */
    0x78, 0x6, 0x60, 0x33, 0x11, 0x99, 0x8c, 0xc8,
    0x66, 0x81, 0xe4, 0x0, 0x40, 0x6, 0xf0, 0x2c,
    0xc3, 0x66, 0x13, 0x31, 0x19, 0x88, 0xcc, 0x3,
    0xc0,

    /* U+0026 "&" */
    0x1c, 0x3, 0x20, 0x63, 0x6, 0x30, 0x63, 0x7,
    0x60, 0x3c, 0x1, 0x80, 0x38, 0x6, 0xc6, 0xc6,
    0x6c, 0x3c, 0xc1, 0xc6, 0x3c, 0x3e, 0x60,

    /* U+0027 "'" */
    0xff, 0xc0,

    /* U+0028 "(" */
    0x8, 0xcc, 0xc6, 0x23, 0x18, 0xc6, 0x31, 0x8c,
    0x61, 0xc, 0x61, 0x84, 0x30, 0x0,

    /* U+0029 ")" */
    0x86, 0x18, 0x43, 0x18, 0x63, 0x18, 0xc6, 0x31,
    0x8c, 0xc6, 0x33, 0x11, 0x80, 0x0,

    /* U+002A "*" */
    0x18, 0x18, 0x98, 0xff, 0x3c, 0x3c, 0x66, 0x66,

    /* U+002B "+" */
    0xc, 0x3, 0x0, 0xc0, 0x30, 0xff, 0xc3, 0x0,
    0xc0, 0x30, 0xc, 0x3, 0x0,

    /* U+002C "," */
    0x6d, 0xac,

    /* U+002D "-" */
    0xf8,

    /* U+002E "." */
    0xc0,

    /* U+002F "/" */
    0x2, 0x2, 0x6, 0x4, 0xc, 0xc, 0x8, 0x18,
    0x18, 0x10, 0x30, 0x20, 0x60, 0x60, 0x40, 0xc0,

    /* U+0030 "0" */
    0x3e, 0x31, 0x90, 0x58, 0x3c, 0x1e, 0xf, 0x7,
    0x83, 0xc1, 0xe0, 0xf0, 0x78, 0x34, 0x13, 0x18,
    0xf8,

    /* U+0031 "1" */
    0xc, 0xff, 0xe3, 0xc, 0x30, 0xc3, 0xc, 0x30,
    0xc3, 0xc, 0x30, 0xc0,

    /* U+0032 "2" */
    0x3e, 0x31, 0xb0, 0x78, 0x30, 0x18, 0xc, 0xc,
    0xe, 0x6, 0x6, 0x7, 0x7, 0x7, 0x3, 0x3,
    0xfe,

    /* U+0033 "3" */
    0x3e, 0x31, 0xb0, 0x78, 0x30, 0x18, 0xc, 0xc,
    0x3c, 0x3, 0x0, 0xc0, 0x78, 0x3c, 0x1b, 0x18,
    0xf8,

    /* U+0034 "4" */
    0x3, 0x1, 0xc0, 0xf0, 0x3c, 0x1b, 0x4, 0xc3,
    0x30, 0x8c, 0x63, 0x30, 0xcf, 0xfc, 0xc, 0x3,
    0x0, 0xc0, 0x30,

    /* U+0035 "5" */
    0x7f, 0xb0, 0x18, 0x8, 0x4, 0x2, 0x3, 0xf9,
    0x86, 0x1, 0x80, 0xc0, 0x78, 0x3c, 0x1b, 0x18,
    0xf8,

    /* U+0036 "6" */
    0xe, 0x1c, 0x18, 0xc, 0xc, 0x6, 0x3, 0x79,
    0xc6, 0xc1, 0xe0, 0xf0, 0x78, 0x36, 0x1b, 0x18,
    0x78,

    /* U+0037 "7" */
    0xff, 0xc0, 0x30, 0x18, 0x6, 0x3, 0x0, 0xc0,
    0x30, 0x18, 0x6, 0x3, 0x0, 0xc0, 0x60, 0x18,
    0x6, 0x3, 0x0,

    /* U+0038 "8" */
    0x3e, 0x31, 0xb0, 0x78, 0x3c, 0x1e, 0xd, 0x8c,
    0x7c, 0x63, 0x60, 0xf0, 0x78, 0x3c, 0x1b, 0x18,
    0xf8,

    /* U+0039 "9" */
    0x3c, 0x31, 0xb0, 0xd8, 0x3c, 0x1e, 0xf, 0x7,
    0x83, 0x63, 0x9e, 0xc0, 0x60, 0x20, 0x30, 0x30,
    0xe0,

    /* U+003A ":" */
    0xc0, 0x0, 0xc,

    /* U+003B ";" */
    0x60, 0x0, 0x3, 0x6d, 0xe0,

    /* U+003C "<" */
    0x1, 0x7, 0x1e, 0x70, 0xc0, 0xf0, 0x1e, 0x7,
    0x1,

    /* U+003D "=" */
    0xff, 0x0, 0x0, 0x0, 0xff,

    /* U+003E ">" */
    0x80, 0x70, 0x1f, 0x1, 0xe0, 0x38, 0x78, 0xf1,
    0xc0, 0x80, 0x0,

    /* U+003F "?" */
    0x3c, 0x66, 0xc3, 0x3, 0x3, 0x3, 0x6, 0xe,
    0xc, 0x18, 0x18, 0x18, 0x0, 0x0, 0x18,

    /* U+0040 "@" */
    0x7, 0xe0, 0xc, 0x18, 0x18, 0x4, 0x30, 0x2,
    0x60, 0x2, 0x61, 0xe2, 0xc3, 0x31, 0xc2, 0x31,
    0xc6, 0x21, 0xc4, 0x21, 0xc4, 0x21, 0xc4, 0x21,
    0xc4, 0x23, 0xc6, 0x72, 0x63, 0x9c, 0x60, 0x0,
    0x30, 0x0, 0x1c, 0x0, 0x7, 0xe0,

    /* U+0041 "A" */
    0x3, 0x0, 0x38, 0x1, 0xc0, 0x1b, 0x0, 0xd8,
    0x6, 0xc0, 0x63, 0x3, 0x18, 0x18, 0xc1, 0x83,
    0xf, 0xf8, 0x40, 0x66, 0x3, 0x30, 0x1b, 0x0,
    0x60,

    /* U+0042 "B" */
    0xfe, 0x30, 0xcc, 0x1b, 0x6, 0xc1, 0xb0, 0x6c,
    0x33, 0xf8, 0xc1, 0xb0, 0x3c, 0xf, 0x3, 0xc0,
    0xf0, 0x6f, 0xf0,

    /* U+0043 "C" */
    0x1f, 0x6, 0x19, 0x81, 0x30, 0x3c, 0x7, 0x80,
    0x30, 0x6, 0x0, 0xc0, 0x18, 0x3, 0x1, 0xa0,
    0x36, 0x4, 0x61, 0x87, 0xc0,

    /* U+0044 "D" */
    0xfc, 0x30, 0xcc, 0x1b, 0x6, 0xc0, 0xf0, 0x3c,
    0xf, 0x3, 0xc0, 0xf0, 0x3c, 0xf, 0x6, 0xc1,
    0xb0, 0xcf, 0xc0,

    /* U+0045 "E" */
    0xff, 0xe0, 0x30, 0x18, 0xc, 0x6, 0x3, 0x1,
    0xfe, 0xc0, 0x60, 0x30, 0x18, 0xc, 0x6, 0x3,
    0xfe,

    /* U+0046 "F" */
    0xff, 0xe0, 0x30, 0x18, 0xc, 0x6, 0x3, 0x1,
    0xfe, 0xc0, 0x60, 0x30, 0x18, 0xc, 0x6, 0x3,
    0x0,

    /* U+0047 "G" */
    0x1f, 0x6, 0x39, 0x83, 0x20, 0x3c, 0x1, 0x80,
    0x30, 0x6, 0x0, 0xc3, 0xf8, 0xf, 0x1, 0xb0,
    0x36, 0x6, 0x61, 0xc7, 0xe0,

    /* U+0048 "H" */
    0xc0, 0x78, 0xf, 0x1, 0xe0, 0x3c, 0x7, 0x80,
    0xf0, 0x1f, 0xff, 0xc0, 0x78, 0xf, 0x1, 0xe0,
    0x3c, 0x7, 0x80, 0xf0, 0x18,

    /* U+0049 "I" */
    0xff, 0xff, 0xff, 0xfc,

    /* U+004A "J" */
    0x1, 0x80, 0xc0, 0x60, 0x30, 0x18, 0xc, 0x6,
    0x3, 0x1, 0x80, 0xc0, 0x78, 0x3c, 0x1b, 0x18,
    0xf8,

    /* U+004B "K" */
    0xc0, 0xd8, 0x33, 0xc, 0x63, 0x8c, 0xe1, 0x98,
    0x36, 0x7, 0xe0, 0xec, 0x18, 0xc3, 0x1c, 0x61,
    0xcc, 0x19, 0x81, 0xb0, 0x38,

    /* U+004C "L" */
    0xc0, 0x60, 0x30, 0x18, 0xc, 0x6, 0x3, 0x1,
    0x80, 0xc0, 0x60, 0x30, 0x18, 0xc, 0x6, 0x3,
    0xfe,

    /* U+004D "M" */
    0xe0, 0x1f, 0x80, 0x7e, 0x3, 0xfc, 0xf, 0xd0,
    0x2f, 0x61, 0xbd, 0x86, 0xf2, 0x13, 0xcc, 0xcf,
    0x33, 0x3c, 0x48, 0xf1, 0xe3, 0xc7, 0x8f, 0xc,
    0x3c, 0x30, 0xc0,

    /* U+004E "N" */
    0xc0, 0x7c, 0xf, 0xc1, 0xf8, 0x3d, 0x87, 0xb0,
    0xf3, 0x1e, 0x73, 0xc6, 0x78, 0x6f, 0xd, 0xe0,
    0xfc, 0x1f, 0x81, 0xf0, 0x18,

    /* U+004F "O" */
    0x1f, 0x6, 0x31, 0x83, 0x20, 0x6c, 0x7, 0x80,
    0xf0, 0x1e, 0x3, 0xc0, 0x78, 0xf, 0x1, 0xb0,
    0x26, 0xc, 0x63, 0x7, 0xc0,

    /* U+0050 "P" */
    0xff, 0x30, 0x6c, 0xf, 0x3, 0xc0, 0xf0, 0x3c,
    0xf, 0x6, 0xff, 0x30, 0xc, 0x3, 0x0, 0xc0,
    0x30, 0xc, 0x0,

    /* U+0051 "Q" */
    0x1f, 0x6, 0x31, 0x83, 0x20, 0x6c, 0x7, 0x80,
    0xf0, 0x1e, 0x3, 0xc0, 0x78, 0xf, 0x1, 0xb0,
    0x26, 0xc, 0x63, 0x7, 0xe0, 0x6, 0x0, 0x60,

    /* U+0052 "R" */
    0xff, 0x18, 0x33, 0x3, 0x60, 0x6c, 0xd, 0x81,
    0xb0, 0x36, 0xc, 0xff, 0x18, 0x63, 0xc, 0x60,
    0xcc, 0x19, 0x81, 0xb0, 0x30,

    /* U+0053 "S" */
    0x3e, 0x18, 0x6c, 0xf, 0x3, 0xc0, 0x38, 0x7,
    0xc0, 0xfc, 0xf, 0x80, 0x70, 0xf, 0x3, 0xc0,
    0xd8, 0x61, 0xf0,

    /* U+0054 "T" */
    0xff, 0xe1, 0x80, 0x30, 0x6, 0x0, 0xc0, 0x18,
    0x3, 0x0, 0x60, 0xc, 0x1, 0x80, 0x30, 0x6,
    0x0, 0xc0, 0x18, 0x3, 0x0,

    /* U+0055 "U" */
    0xc0, 0xf0, 0x3c, 0xf, 0x3, 0xc0, 0xf0, 0x3c,
    0xf, 0x3, 0xc0, 0xf0, 0x3c, 0xf, 0x3, 0xc0,
    0x98, 0x61, 0xe0,

    /* U+0056 "V" */
    0xc0, 0x36, 0x3, 0x60, 0x32, 0x6, 0x30, 0x63,
    0x6, 0x18, 0xc1, 0x8c, 0x18, 0xc0, 0xd8, 0xd,
    0x80, 0xd0, 0x7, 0x0, 0x70, 0x6, 0x0,

    /* U+0057 "W" */
    0xc1, 0x83, 0xc1, 0x83, 0xc1, 0x83, 0xc3, 0xc3,
    0x43, 0xc6, 0x62, 0x46, 0x66, 0x46, 0x66, 0x66,
    0x26, 0x64, 0x34, 0x2c, 0x3c, 0x3c, 0x3c, 0x3c,
    0x38, 0x38, 0x18, 0x18, 0x18, 0x18,

    /* U+0058 "X" */
    0xc0, 0xec, 0x19, 0x86, 0x18, 0xc3, 0xb0, 0x3e,
    0x3, 0x80, 0x60, 0xe, 0x3, 0xe0, 0xcc, 0x18,
    0xc6, 0x19, 0xc1, 0xb0, 0x38,

    /* U+0059 "Y" */
    0xe0, 0x76, 0x6, 0x70, 0xe3, 0xc, 0x39, 0xc1,
    0x98, 0x1f, 0x80, 0xf0, 0x6, 0x0, 0x60, 0x6,
    0x0, 0x60, 0x6, 0x0, 0x60, 0x6, 0x0,

    /* U+005A "Z" */
    0xff, 0xc0, 0x70, 0x18, 0xc, 0x3, 0x1, 0x80,
    0xe0, 0x30, 0x18, 0x6, 0x3, 0x0, 0xc0, 0x60,
    0x38, 0xf, 0xfc,

    /* U+005B "[" */
    0xfc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc,
    0xcc, 0xf0,

    /* U+005C "\\" */
    0x40, 0x60, 0x60, 0x20, 0x30, 0x30, 0x18, 0x18,
    0x8, 0xc, 0xc, 0x4, 0x6, 0x6, 0x2, 0x3,

    /* U+005D "]" */
    0xf3, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33,
    0x33, 0xf0,

    /* U+005E "^" */
    0x10, 0x60, 0xe3, 0xc6, 0x89, 0xb3, 0x63,

    /* U+005F "_" */
    0xff, 0x80,

    /* U+0061 "a" */
    0x3c, 0xe6, 0xc3, 0x3, 0x3f, 0x63, 0xc3, 0xc3,
    0xc3, 0xe7, 0x7f,

    /* U+0062 "b" */
    0xc0, 0x60, 0x30, 0x18, 0xd, 0xe7, 0x1b, 0xd,
    0x83, 0xc1, 0xe0, 0xf0, 0x78, 0x3c, 0x37, 0x1b,
    0x78,

    /* U+0063 "c" */
    0x1e, 0x31, 0x98, 0x78, 0x3c, 0x6, 0x3, 0x1,
    0x80, 0x61, 0xb1, 0x8f, 0x80,

    /* U+0064 "d" */
    0x1, 0x80, 0xc0, 0x60, 0x33, 0xdb, 0x1d, 0x87,
    0x83, 0xc1, 0xe0, 0xf0, 0x78, 0x36, 0x1b, 0x1c,
    0xfe,

    /* U+0065 "e" */
    0x1e, 0x31, 0x98, 0x78, 0x3c, 0x1f, 0xff, 0x1,
    0x80, 0x60, 0x30, 0xc7, 0x80,

    /* U+0066 "f" */
    0x1e, 0x60, 0xc1, 0x8f, 0xc6, 0xc, 0x18, 0x30,
    0x60, 0xc1, 0x83, 0x6, 0xc, 0x0,

    /* U+0067 "g" */
    0x3f, 0xb1, 0xd8, 0x78, 0x3c, 0x1e, 0xf, 0x7,
    0x83, 0x61, 0xb1, 0xcf, 0xe0, 0x34, 0x1b, 0x18,
    0xf8,

    /* U+0068 "h" */
    0xc0, 0xc0, 0xc0, 0xc0, 0xde, 0xe7, 0xc3, 0xc3,
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,

    /* U+0069 "i" */
    0xc0, 0xff, 0xff, 0xfc,

    /* U+006A "j" */
    0x30, 0x0, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33,
    0x33, 0xe0,

    /* U+006B "k" */
    0xc0, 0x60, 0x30, 0x18, 0xc, 0x36, 0x33, 0x31,
    0xb0, 0xf0, 0x7c, 0x3b, 0x19, 0x8c, 0x66, 0x1b,
    0xe,

    /* U+006C "l" */
    0xff, 0xff, 0xff, 0xfc,

    /* U+006D "m" */
    0xde, 0x7b, 0x9e, 0x7c, 0x30, 0xf0, 0xc3, 0xc3,
    0xf, 0xc, 0x3c, 0x30, 0xf0, 0xc3, 0xc3, 0xf,
    0xc, 0x3c, 0x30, 0xc0,

    /* U+006E "n" */
    0xde, 0xe7, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xc3, 0xc3, 0xc3,

    /* U+006F "o" */
    0x1e, 0x1c, 0xe6, 0x1b, 0x3, 0xc0, 0xf0, 0x3c,
    0xf, 0x3, 0x61, 0x98, 0xe1, 0xe0,

    /* U+0070 "p" */
    0xfe, 0x71, 0xb0, 0xd8, 0x3c, 0x1e, 0xf, 0x7,
    0x83, 0xc3, 0x71, 0xbf, 0x98, 0xc, 0x6, 0x3,
    0x0,

    /* U+0071 "q" */
    0x3f, 0xb1, 0xd8, 0x78, 0x3c, 0x1e, 0xf, 0x7,
    0x83, 0x61, 0xb1, 0xcf, 0xe0, 0x30, 0x18, 0xc,
    0x6,

    /* U+0072 "r" */
    0xff, 0x31, 0x8c, 0x63, 0x18, 0xc6, 0x30,

    /* U+0073 "s" */
    0x3c, 0x47, 0xc3, 0xc0, 0xf8, 0x7e, 0xf, 0x3,
    0xc3, 0x62, 0x3c,

    /* U+0074 "t" */
    0x30, 0xc3, 0x3f, 0x30, 0xc3, 0xc, 0x30, 0xc3,
    0xc, 0x30, 0x70,

    /* U+0075 "u" */
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xc3, 0xe7, 0x7f,

    /* U+0076 "v" */
    0xc1, 0xb0, 0xd8, 0x44, 0x63, 0x31, 0x90, 0x58,
    0x3c, 0x1c, 0x6, 0x3, 0x0,

    /* U+0077 "w" */
    0x41, 0x4, 0xc7, 0x19, 0x8e, 0x33, 0x14, 0x62,
    0x6c, 0x86, 0xdb, 0xd, 0x16, 0xa, 0x28, 0x1c,
    0x70, 0x30, 0x60, 0x60, 0xc0,

    /* U+0078 "x" */
    0x61, 0xb1, 0x8c, 0xc3, 0xc1, 0xe0, 0x60, 0x78,
    0x3c, 0x33, 0x31, 0xd8, 0x60,

    /* U+0079 "y" */
    0x61, 0xb0, 0xd8, 0x66, 0x63, 0x31, 0x98, 0x58,
    0x3c, 0x1c, 0x6, 0x3, 0x1, 0x0, 0x80, 0xc1,
    0xc0,

    /* U+007A "z" */
    0xff, 0x7, 0x6, 0xc, 0xc, 0x18, 0x30, 0x30,
    0x60, 0xe0, 0xff,

    /* U+007B "{" */
    0xc, 0x63, 0xc, 0x30, 0xc3, 0xc, 0x63, 0x6,
    0xc, 0x30, 0xc3, 0xc, 0x30, 0x60, 0xc0,

    /* U+007C "|" */
    0xff, 0xff, 0xff, 0xff, 0xc0,

    /* U+007D "}" */
    0xc1, 0x83, 0xc, 0x30, 0xc3, 0xc, 0x18, 0x31,
    0x8c, 0x30, 0xc3, 0xc, 0x31, 0x8c, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 79, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 82, .box_w = 2, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 5, .adv_w = 102, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 10},
    {.bitmap_index = 8, .adv_w = 197, .box_w = 11, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 29, .adv_w = 180, .box_w = 9, .box_h = 19, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 51, .adv_w = 234, .box_w = 13, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 76, .adv_w = 199, .box_w = 12, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 99, .adv_w = 56, .box_w = 2, .box_h = 5, .ofs_x = 1, .ofs_y = 10},
    {.bitmap_index = 101, .adv_w = 109, .box_w = 5, .box_h = 21, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 115, .adv_w = 111, .box_w = 5, .box_h = 21, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 129, .adv_w = 138, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 137, .adv_w = 181, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 150, .adv_w = 63, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 152, .adv_w = 88, .box_w = 5, .box_h = 1, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 153, .adv_w = 84, .box_w = 2, .box_h = 1, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 154, .adv_w = 132, .box_w = 8, .box_h = 16, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 170, .adv_w = 180, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 187, .adv_w = 180, .box_w = 6, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 199, .adv_w = 180, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 216, .adv_w = 180, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 233, .adv_w = 180, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 252, .adv_w = 180, .box_w = 9, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 269, .adv_w = 180, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 286, .adv_w = 180, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 305, .adv_w = 180, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 322, .adv_w = 180, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 339, .adv_w = 78, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 342, .adv_w = 68, .box_w = 3, .box_h = 13, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 347, .adv_w = 163, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 356, .adv_w = 176, .box_w = 8, .box_h = 5, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 361, .adv_w = 167, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 372, .adv_w = 151, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 387, .adv_w = 287, .box_w = 16, .box_h = 19, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 425, .adv_w = 209, .box_w = 13, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 450, .adv_w = 199, .box_w = 10, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 469, .adv_w = 208, .box_w = 11, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 490, .adv_w = 210, .box_w = 10, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 509, .adv_w = 182, .box_w = 9, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 526, .adv_w = 177, .box_w = 9, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 543, .adv_w = 218, .box_w = 11, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 564, .adv_w = 228, .box_w = 11, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 585, .adv_w = 87, .box_w = 2, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 589, .adv_w = 177, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 606, .adv_w = 201, .box_w = 11, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 627, .adv_w = 172, .box_w = 9, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 644, .adv_w = 279, .box_w = 14, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 671, .adv_w = 228, .box_w = 11, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 692, .adv_w = 220, .box_w = 11, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 713, .adv_w = 202, .box_w = 10, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 732, .adv_w = 220, .box_w = 11, .box_h = 17, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 756, .adv_w = 197, .box_w = 11, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 777, .adv_w = 190, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 796, .adv_w = 191, .box_w = 11, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 817, .adv_w = 208, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 836, .adv_w = 204, .box_w = 12, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 859, .adv_w = 284, .box_w = 16, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 889, .adv_w = 201, .box_w = 11, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 910, .adv_w = 192, .box_w = 12, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 933, .adv_w = 192, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 952, .adv_w = 85, .box_w = 4, .box_h = 19, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 962, .adv_w = 131, .box_w = 8, .box_h = 16, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 978, .adv_w = 85, .box_w = 4, .box_h = 19, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 988, .adv_w = 134, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 995, .adv_w = 144, .box_w = 9, .box_h = 1, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 997, .adv_w = 174, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1008, .adv_w = 180, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1025, .adv_w = 168, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1038, .adv_w = 180, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1055, .adv_w = 170, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1068, .adv_w = 111, .box_w = 7, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1082, .adv_w = 180, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 1099, .adv_w = 176, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1114, .adv_w = 78, .box_w = 2, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1118, .adv_w = 76, .box_w = 4, .box_h = 19, .ofs_x = -1, .ofs_y = -4},
    {.bitmap_index = 1128, .adv_w = 162, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1145, .adv_w = 78, .box_w = 2, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1149, .adv_w = 280, .box_w = 14, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1169, .adv_w = 177, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1180, .adv_w = 183, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1194, .adv_w = 180, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 1211, .adv_w = 182, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 1228, .adv_w = 108, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1235, .adv_w = 165, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1246, .adv_w = 105, .box_w = 6, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1257, .adv_w = 176, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1268, .adv_w = 155, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1281, .adv_w = 240, .box_w = 15, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1302, .adv_w = 159, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1315, .adv_w = 151, .box_w = 9, .box_h = 15, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 1332, .adv_w = 159, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1343, .adv_w = 108, .box_w = 6, .box_h = 19, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1358, .adv_w = 78, .box_w = 2, .box_h = 17, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 1363, .adv_w = 108, .box_w = 6, .box_h = 19, .ofs_x = 0, .ofs_y = -3}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 64, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 97, .range_length = 29, .glyph_id_start = 65,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Pair left and right glyphs for kerning*/
static const uint8_t kern_pair_glyph_ids[] =
{
    1, 53,
    3, 3,
    3, 8,
    3, 34,
    3, 65,
    3, 67,
    3, 68,
    3, 69,
    3, 71,
    3, 77,
    3, 78,
    3, 79,
    3, 80,
    3, 81,
    3, 83,
    3, 87,
    8, 3,
    8, 8,
    8, 34,
    8, 65,
    8, 67,
    8, 68,
    8, 69,
    8, 71,
    8, 77,
    8, 78,
    8, 79,
    8, 80,
    8, 81,
    8, 83,
    8, 87,
    9, 55,
    9, 56,
    9, 58,
    13, 3,
    13, 8,
    15, 3,
    15, 8,
    16, 16,
    34, 3,
    34, 8,
    34, 32,
    34, 36,
    34, 40,
    34, 48,
    34, 50,
    34, 53,
    34, 54,
    34, 55,
    34, 56,
    34, 58,
    34, 79,
    34, 84,
    34, 85,
    34, 86,
    34, 87,
    34, 89,
    34, 90,
    35, 53,
    35, 55,
    35, 58,
    36, 10,
    36, 53,
    36, 62,
    36, 93,
    37, 13,
    37, 15,
    37, 34,
    37, 53,
    37, 55,
    37, 57,
    37, 58,
    37, 59,
    38, 53,
    38, 67,
    38, 68,
    38, 69,
    38, 70,
    38, 71,
    38, 79,
    38, 81,
    38, 85,
    38, 86,
    38, 87,
    38, 89,
    39, 13,
    39, 15,
    39, 34,
    39, 43,
    39, 53,
    39, 65,
    39, 67,
    39, 68,
    39, 69,
    39, 71,
    39, 79,
    39, 81,
    39, 82,
    39, 85,
    39, 86,
    39, 89,
    41, 34,
    41, 53,
    41, 57,
    41, 58,
    42, 34,
    42, 53,
    42, 57,
    42, 58,
    43, 34,
    44, 14,
    44, 36,
    44, 40,
    44, 48,
    44, 50,
    44, 67,
    44, 68,
    44, 69,
    44, 71,
    44, 77,
    44, 78,
    44, 79,
    44, 80,
    44, 81,
    44, 85,
    44, 86,
    44, 87,
    44, 89,
    45, 3,
    45, 8,
    45, 34,
    45, 36,
    45, 40,
    45, 48,
    45, 50,
    45, 53,
    45, 54,
    45, 55,
    45, 56,
    45, 58,
    45, 85,
    45, 86,
    45, 87,
    45, 89,
    46, 34,
    46, 53,
    46, 57,
    46, 58,
    47, 34,
    47, 53,
    47, 57,
    47, 58,
    48, 13,
    48, 15,
    48, 34,
    48, 53,
    48, 55,
    48, 57,
    48, 58,
    48, 59,
    49, 13,
    49, 15,
    49, 34,
    49, 43,
    49, 57,
    49, 59,
    49, 65,
    49, 67,
    49, 68,
    49, 69,
    49, 71,
    49, 79,
    49, 81,
    49, 84,
    49, 86,
    49, 89,
    50, 53,
    50, 55,
    50, 56,
    50, 58,
    51, 53,
    51, 55,
    51, 58,
    53, 1,
    53, 13,
    53, 14,
    53, 15,
    53, 34,
    53, 36,
    53, 40,
    53, 43,
    53, 48,
    53, 50,
    53, 52,
    53, 53,
    53, 55,
    53, 56,
    53, 58,
    53, 65,
    53, 67,
    53, 68,
    53, 69,
    53, 71,
    53, 77,
    53, 78,
    53, 79,
    53, 80,
    53, 81,
    53, 82,
    53, 83,
    53, 85,
    53, 86,
    53, 87,
    53, 88,
    53, 89,
    53, 90,
    54, 34,
    55, 10,
    55, 13,
    55, 14,
    55, 15,
    55, 34,
    55, 36,
    55, 40,
    55, 48,
    55, 50,
    55, 62,
    55, 65,
    55, 67,
    55, 68,
    55, 69,
    55, 71,
    55, 79,
    55, 81,
    55, 82,
    55, 85,
    55, 86,
    55, 89,
    55, 93,
    56, 10,
    56, 13,
    56, 14,
    56, 15,
    56, 34,
    56, 53,
    56, 62,
    56, 65,
    56, 67,
    56, 68,
    56, 69,
    56, 71,
    56, 79,
    56, 81,
    56, 82,
    56, 85,
    56, 93,
    57, 14,
    57, 36,
    57, 40,
    57, 48,
    57, 50,
    57, 55,
    57, 67,
    57, 68,
    57, 69,
    57, 71,
    57, 79,
    57, 81,
    57, 85,
    57, 86,
    57, 89,
    58, 7,
    58, 10,
    58, 11,
    58, 13,
    58, 14,
    58, 15,
    58, 34,
    58, 36,
    58, 40,
    58, 43,
    58, 48,
    58, 50,
    58, 52,
    58, 53,
    58, 54,
    58, 55,
    58, 56,
    58, 57,
    58, 58,
    58, 62,
    58, 65,
    58, 67,
    58, 68,
    58, 69,
    58, 70,
    58, 71,
    58, 77,
    58, 78,
    58, 79,
    58, 80,
    58, 81,
    58, 82,
    58, 83,
    58, 84,
    58, 85,
    58, 86,
    58, 88,
    58, 89,
    58, 90,
    58, 93,
    59, 34,
    59, 36,
    59, 40,
    59, 48,
    59, 50,
    59, 67,
    59, 68,
    59, 69,
    59, 71,
    59, 79,
    59, 81,
    59, 85,
    59, 86,
    59, 87,
    59, 89,
    60, 43,
    60, 54,
    65, 3,
    65, 8,
    65, 86,
    65, 89,
    66, 3,
    66, 8,
    66, 86,
    66, 88,
    66, 89,
    66, 90,
    67, 3,
    67, 8,
    69, 3,
    69, 8,
    69, 86,
    69, 89,
    70, 3,
    70, 8,
    70, 10,
    70, 62,
    70, 67,
    70, 68,
    70, 69,
    70, 71,
    70, 81,
    70, 93,
    72, 3,
    72, 8,
    75, 67,
    75, 68,
    75, 69,
    75, 71,
    75, 81,
    77, 3,
    77, 8,
    78, 3,
    78, 8,
    79, 3,
    79, 8,
    79, 86,
    79, 88,
    79, 89,
    79, 90,
    80, 3,
    80, 8,
    80, 86,
    80, 88,
    80, 89,
    80, 90,
    82, 3,
    82, 8,
    82, 13,
    82, 15,
    82, 65,
    82, 67,
    82, 68,
    82, 69,
    82, 70,
    82, 71,
    82, 79,
    82, 81,
    82, 84,
    82, 86,
    82, 87,
    82, 89,
    84, 79,
    86, 3,
    86, 8,
    86, 13,
    86, 15,
    86, 65,
    86, 67,
    86, 68,
    86, 69,
    86, 70,
    86, 71,
    86, 79,
    86, 81,
    87, 13,
    87, 15,
    88, 67,
    88, 68,
    88, 69,
    88, 71,
    88, 79,
    88, 81,
    89, 3,
    89, 8,
    89, 13,
    89, 15,
    89, 65,
    89, 67,
    89, 68,
    89, 69,
    89, 70,
    89, 71,
    89, 79,
    89, 81,
    90, 67,
    90, 68,
    90, 69,
    90, 71,
    90, 79,
    90, 81,
    91, 43,
    91, 54
};

/* Kerning between the respective left and right glyphs
 * 4.4 format which needs to scaled with `kern_scale`*/
static const int8_t kern_pair_values[] =
{
    -6, -17, -17, -19, -8, -9, -9, -9,
    -9, -3, -3, -10, -3, -9, -12, 2,
    -17, -17, -19, -8, -9, -9, -9, -9,
    -3, -3, -10, -3, -9, -12, 2, 3,
    3, 3, -27, -27, -27, -27, -35, -19,
    -19, -10, -2, -2, -2, -2, -20, -3,
    -14, -11, -15, -2, -3, -2, -8, -5,
    -8, 2, -4, -4, -9, -4, -5, -2,
    -3, -16, -16, -3, -4, -3, -3, -7,
    -4, 3, -3, -3, -3, -3, -3, -3,
    -3, -3, -4, -3, -4, -37, -37, -27,
    -41, 3, -5, -3, -3, -3, -3, -3,
    -3, -4, -3, -4, -4, 3, -5, 3,
    -4, 3, -5, 3, -4, -3, -10, -5,
    -5, -5, -5, -4, -4, -4, -4, -4,
    -4, -4, -4, -4, -4, -6, -10, -6,
    -52, -52, 3, -10, -10, -10, -10, -43,
    -8, -27, -22, -37, -7, -21, -14, -21,
    3, -5, 3, -4, 3, -5, 3, -4,
    -16, -16, -3, -4, -3, -3, -7, -4,
    -51, -51, -22, -31, -5, -4, -2, -2,
    -2, -2, -2, -2, -2, 2, 2, 2,
    -7, -4, -3, -5, -12, -3, -7, -6,
    -34, -36, -34, -12, -4, -4, -37, -4,
    -4, -2, 3, 3, 2, 3, -18, -15,
    -15, -15, -15, -17, -17, -15, -17, -15,
    -12, -18, -15, -11, -9, -12, -11, -9,
    -3, 3, -35, -6, -35, -12, -2, -2,
    -2, -2, 3, -7, -7, -7, -7, -7,
    -7, -7, -5, -4, -2, -2, 3, 2,
    -19, -9, -19, -7, 2, 2, -5, -5,
    -5, -5, -5, -5, -5, -3, -3, 2,
    -7, -4, -4, -4, -4, 2, -4, -4,
    -4, -4, -3, -4, -3, -5, -5, -5,
    3, -8, -33, -8, -33, -15, -5, -5,
    -15, -5, -5, -2, 3, -15, 3, 3,
    2, 3, 3, -11, -10, -10, -10, -3,
    -10, -6, -6, -10, -6, -10, -6, -9,
    -3, -6, -3, -4, -3, -5, 3, 2,
    -4, -4, -4, -4, -3, -3, -3, -3,
    -3, -3, -3, -4, -4, -4, -3, -3,
    -10, -10, -2, -2, -5, -5, -2, -2,
    -2, -2, -2, -2, -2, -2, -2, -2,
    3, 3, 3, 3, -4, -4, -4, -4,
    -4, 3, -16, -16, -3, -3, -3, -3,
    -3, -16, -16, -16, -16, -21, -21, -2,
    -3, -2, -2, -5, -5, -2, -2, -2,
    -2, 3, 3, -19, -19, -6, -3, -3,
    -3, 2, -3, -3, -3, 8, 3, 3,
    3, -3, 2, 2, -17, -17, -2, -2,
    -2, -2, 2, -2, -2, -2, -19, -19,
    -3, -3, -3, -3, -3, -3, 2, 2,
    -17, -17, -2, -2, -2, -2, 2, -2,
    -2, -2, -2, -2, -2, -2, -2, -2,
    -3, -3
};

/*Collect the kern pair's data in one place*/
static const lv_font_fmt_txt_kern_pair_t kern_pairs =
{
    .glyph_ids = kern_pair_glyph_ids,
    .values = kern_pair_values,
    .pair_cnt = 434,
    .glyph_ids_size = 0
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_pairs,
    .kern_scale = 16,
    .cmap_num = 2,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif
};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t roboto_regular_20 = {
#else
lv_font_t roboto_regular_20 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 22,          /*The maximum line height required by the font*/
    .base_line = 5,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if ROBOTO_REGULAR_20*/


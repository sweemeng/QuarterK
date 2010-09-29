

/*
 *
 * Arial_16
 *
 * created with FontCreator
 * written by F. Maximilian Thiele
 *
 * http://www.apetech.de/fontCreator
 * me@apetech.de
 *
 * File Name           : Arial16.h
 * Date                : 28.06.2009
 * Font size in bytes  : 10214
 * Font width          : 10
 * Font height         : 16
 * Font first char     : 32
 * Font last char      : 128
 * Font used chars     : 96
 *
 * The font data are defined as
 *
 * struct _FONT_ {
 *     uint16_t   font_Size_in_Bytes_over_all_included_Size_it_self;
 *     uint8_t    font_Width_in_Pixel_for_fixed_drawing;
 *     uint8_t    font_Height_in_Pixel_for_all_characters;
 *     unit8_t    font_First_Char;
 *     uint8_t    font_Char_Count;
 *
 *     uint8_t    font_Char_Widths[font_Last_Char - font_First_Char +1];
 *                  // for each character the separate width in pixels,
 *                  // characters < 128 have an implicit virtual right empty row
 *
 *     uint8_t    font_data[];
 *                  // bit field of all characters
 */


#ifndef ARIAL_16_H
#define ARIAL_16_H

#define ARIAL_16_WIDTH 10
#define ARIAL_16_HEIGHT 16

static uint8_t Arial_16[] PROGMEM = {
    0x27, 0xE6, // size
    0x0A, // width
    0x10, // height
    0x20, // first char
    0x60, // char count
    
    // char widths
    0x03, 0x01, 0x04, 0x09, 0x07, 0x0C, 0x09, 0x01, 0x03, 0x03, 
    0x05, 0x07, 0x01, 0x04, 0x01, 0x04, 0x07, 0x04, 0x07, 0x07, 
    0x08, 0x07, 0x07, 0x06, 0x07, 0x07, 0x01, 0x01, 0x07, 0x07, 
    0x07, 0x07, 0x0F, 0x09, 0x09, 0x0A, 0x0A, 0x09, 0x08, 0x0A, 
    0x09, 0x01, 0x06, 0x09, 0x07, 0x0B, 0x09, 0x0A, 0x09, 0x0A, 
    0x09, 0x09, 0x09, 0x09, 0x09, 0x0F, 0x0B, 0x09, 0x09, 0x03, 
    0x04, 0x03, 0x07, 0x09, 0x02, 0x07, 0x07, 0x06, 0x07, 0x07, 
    0x04, 0x07, 0x06, 0x01, 0x02, 0x07, 0x01, 0x0B, 0x06, 0x07, 
    0x07, 0x07, 0x04, 0x06, 0x04, 0x06, 0x07, 0x0B, 0x07, 0x07, 
    0x07, 0x05, 0x01, 0x05, 0x08, 0x08, 
    
    // font data
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //32
    0xFE, 0x17, // 33
    0x1E, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x00, // 34
    0x20, 0x20, 0xF0, 0x2E, 0x20, 0x20, 0xF0, 0x2E, 0x20, 0x02, 0x1E, 0x03, 0x02, 0x02, 0x1E, 0x03, 0x02, 0x02, // 35
    0x38, 0x44, 0xC2, 0xFF, 0x82, 0x86, 0x08, 0x04, 0x08, 0x10, 0x3F, 0x10, 0x08, 0x07, // 36
    0x3C, 0x42, 0x42, 0x42, 0x3C, 0x80, 0x70, 0x0C, 0x82, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x18, 0x06, 0x01, 0x00, 0x0F, 0x10, 0x10, 0x10, 0x0F, // 37
    0x00, 0x9C, 0x62, 0xC2, 0x22, 0x1C, 0x00, 0x00, 0x00, 0x07, 0x08, 0x10, 0x10, 0x11, 0x0A, 0x04, 0x0A, 0x11, // 38
    0x1E, 0x00, // 39
    0xE0, 0x1C, 0x02, 0x0F, 0x70, 0x80, // 40
    0x02, 0x1C, 0xE0, 0x80, 0x70, 0x0F, // 41
    0x04, 0x34, 0x0E, 0x34, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, // 42
    0x80, 0x80, 0x80, 0xF0, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, // 43
    0x00, 0x70, // 44
    0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x02, 0x02, // 45
    0x00, 0x10, // 46
    0x00, 0x80, 0x78, 0x06, 0x18, 0x07, 0x00, 0x00, // 47
    0xF8, 0x04, 0x02, 0x02, 0x02, 0x04, 0xF8, 0x07, 0x08, 0x10, 0x10, 0x10, 0x08, 0x07, // 48
    0x10, 0x08, 0x04, 0xFE, 0x00, 0x00, 0x00, 0x1F, // 49
    0x08, 0x04, 0x02, 0x02, 0x02, 0xC4, 0x38, 0x10, 0x18, 0x14, 0x12, 0x11, 0x10, 0x10, // 50
    0x08, 0x04, 0x42, 0x42, 0x62, 0xBC, 0x00, 0x04, 0x08, 0x10, 0x10, 0x10, 0x08, 0x07, // 51
    0x00, 0x80, 0x40, 0x30, 0x08, 0x04, 0xFE, 0x00, 0x03, 0x02, 0x02, 0x02, 0x02, 0x02, 0x1F, 0x02, // 52
    0x70, 0x2E, 0x22, 0x22, 0x22, 0x42, 0x82, 0x04, 0x08, 0x10, 0x10, 0x10, 0x08, 0x07, // 53
    0xF8, 0x44, 0x22, 0x22, 0x22, 0x44, 0x88, 0x07, 0x08, 0x10, 0x10, 0x10, 0x08, 0x07, // 54
    0x02, 0x02, 0x02, 0xE2, 0x1A, 0x06, 0x00, 0x00, 0x1E, 0x01, 0x00, 0x00, // 55
    0x18, 0xA4, 0x42, 0x42, 0x42, 0xA4, 0x18, 0x07, 0x08, 0x10, 0x10, 0x10, 0x08, 0x07, // 56
    0x78, 0x84, 0x02, 0x02, 0x02, 0x84, 0xF8, 0x04, 0x08, 0x11, 0x11, 0x11, 0x08, 0x07, // 57
    0x10, 0x10, // 58
    0x10, 0x70, // 59
    0x80, 0x40, 0x40, 0x20, 0x20, 0x20, 0x10, 0x00, 0x01, 0x01, 0x02, 0x02, 0x02, 0x04, // 60
    0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, // 61
    0x10, 0x20, 0x20, 0x20, 0x40, 0x40, 0x80, 0x04, 0x02, 0x02, 0x02, 0x01, 0x01, 0x00, // 62
    0x18, 0x04, 0x02, 0x02, 0x82, 0x44, 0x38, 0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 0x00, // 63
    0xC0, 0x30, 0x08, 0x84, 0x44, 0x22, 0x12, 0x12, 0x12, 0x22, 0xF2, 0x04, 0x04, 0x18, 0xE0, 0x0F, 0x10, 0x20, 0x47, 0x48, 0x90, 0x90, 0x90, 0x88, 0x9F, 0x90, 0x90, 0x48, 0x44, 0x23, // 64
    0x00, 0x00, 0xE0, 0x1C, 0x02, 0x1C, 0xE0, 0x00, 0x00, 0x18, 0x07, 0x01, 0x01, 0x01, 0x01, 0x01, 0x07, 0x18, // 65
    0xFE, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0xA4, 0x18, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x08, 0x07, // 66
    0xF0, 0x08, 0x04, 0x02, 0x02, 0x02, 0x02, 0x02, 0x04, 0x08, 0x03, 0x04, 0x08, 0x10, 0x10, 0x10, 0x10, 0x10, 0x08, 0x04, // 67
    0xFE, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x04, 0x08, 0xF0, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x08, 0x04, 0x03, // 68
    0xFE, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x02, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, // 69
    0xFE, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x02, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 70
    0xF0, 0x08, 0x04, 0x02, 0x02, 0x82, 0x82, 0x84, 0x88, 0x80, 0x03, 0x04, 0x08, 0x10, 0x10, 0x10, 0x10, 0x08, 0x04, 0x03, // 71
    0xFE, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0xFE, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, // 72
    0xFE, 0x1F, // 73
    0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x0E, 0x10, 0x10, 0x10, 0x10, 0x0F, // 74
    0xFE, 0x00, 0x80, 0x40, 0xE0, 0x10, 0x08, 0x04, 0x02, 0x1F, 0x01, 0x00, 0x00, 0x00, 0x01, 0x06, 0x08, 0x10, // 75
    0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, // 76
    0xFE, 0x0C, 0x30, 0xC0, 0x00, 0x00, 0x00, 0xC0, 0x30, 0x0C, 0xFE, 0x1F, 0x00, 0x00, 0x00, 0x07, 0x18, 0x07, 0x00, 0x00, 0x00, 0x1F, // 77
    0xFE, 0x04, 0x18, 0x20, 0xC0, 0x00, 0x00, 0x00, 0xFE, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x01, 0x06, 0x08, 0x1F, // 78
    0xF0, 0x08, 0x04, 0x02, 0x02, 0x02, 0x02, 0x04, 0x08, 0xF0, 0x03, 0x04, 0x08, 0x10, 0x10, 0x10, 0x10, 0x08, 0x04, 0x03, // 79
    0xFE, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x44, 0x38, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 80
    0xF0, 0x08, 0x04, 0x02, 0x02, 0x02, 0x02, 0x04, 0x08, 0xF0, 0x03, 0x04, 0x08, 0x10, 0x10, 0x14, 0x14, 0x08, 0x1C, 0x13, // 81
    0xFE, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x44, 0x38, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x03, 0x06, 0x08, 0x10, // 82
    0x18, 0x24, 0x42, 0x42, 0x42, 0x82, 0x82, 0x84, 0x08, 0x04, 0x08, 0x10, 0x10, 0x10, 0x10, 0x10, 0x08, 0x07, // 83
    0x02, 0x02, 0x02, 0x02, 0xFE, 0x02, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, // 84
    0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x07, 0x08, 0x10, 0x10, 0x10, 0x10, 0x10, 0x08, 0x07, // 85
    0x06, 0x38, 0xC0, 0x00, 0x00, 0x00, 0xC0, 0x38, 0x06, 0x00, 0x00, 0x01, 0x06, 0x18, 0x06, 0x01, 0x00, 0x00, // 86
    0x06, 0x78, 0x80, 0x00, 0x00, 0xE0, 0x1C, 0x02, 0x1C, 0xE0, 0x00, 0x00, 0x80, 0x78, 0x06, 0x00, 0x00, 0x07, 0x18, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x18, 0x07, 0x00, 0x00, // 87
    0x00, 0x02, 0x04, 0x18, 0xA0, 0x40, 0xA0, 0x18, 0x04, 0x02, 0x00, 0x10, 0x08, 0x06, 0x01, 0x00, 0x00, 0x00, 0x03, 0x04, 0x08, 0x10, // 88
    0x02, 0x0C, 0x10, 0x60, 0x80, 0x60, 0x10, 0x0C, 0x02, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, // 89
    0x00, 0x02, 0x02, 0x02, 0xC2, 0x22, 0x1A, 0x06, 0x02, 0x10, 0x18, 0x16, 0x11, 0x10, 0x10, 0x10, 0x10, 0x10, // 90
    0xFE, 0x02, 0x02, 0xFF, 0x80, 0x80, // 91
    0x06, 0x78, 0x80, 0x00, 0x00, 0x00, 0x07, 0x18, // 92
    0x02, 0x02, 0xFE, 0x80, 0x80, 0xFF, // 93
    0x40, 0x30, 0x0C, 0x02, 0x0C, 0x30, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 94
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, // 95
    0x02, 0x04, 0x00, 0x00, // 96
    0x40, 0x20, 0x10, 0x10, 0x90, 0x90, 0xE0, 0x0E, 0x11, 0x11, 0x11, 0x10, 0x08, 0x1F, // 97
    0xFE, 0x20, 0x10, 0x10, 0x10, 0x20, 0xC0, 0x1F, 0x08, 0x10, 0x10, 0x10, 0x08, 0x07, // 98
    0xC0, 0x20, 0x10, 0x10, 0x10, 0x20, 0x07, 0x08, 0x10, 0x10, 0x10, 0x08, // 99
    0xC0, 0x20, 0x10, 0x10, 0x10, 0x20, 0xFE, 0x07, 0x08, 0x10, 0x10, 0x10, 0x08, 0x1F, // 100
    0xC0, 0x20, 0x10, 0x10, 0x10, 0x20, 0xC0, 0x07, 0x09, 0x11, 0x11, 0x11, 0x09, 0x05, // 101
    0x10, 0xFC, 0x12, 0x12, 0x00, 0x1F, 0x00, 0x00, // 102
    0xC0, 0x20, 0x10, 0x10, 0x10, 0x20, 0xF0, 0x47, 0x88, 0x90, 0x90, 0x90, 0x48, 0x3F, // 103
    0xFE, 0x20, 0x10, 0x10, 0x10, 0xE0, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x1F, // 104
    0xF2, 0x1F, // 105
    0x00, 0xF2, 0x80, 0x7F, // 106
    0xFE, 0x00, 0x00, 0x80, 0x40, 0x20, 0x10, 0x1F, 0x02, 0x01, 0x01, 0x06, 0x08, 0x10, // 107
    0xFE, 0x1F, // 108
    0xF0, 0x20, 0x10, 0x10, 0x10, 0xE0, 0x20, 0x10, 0x10, 0x10, 0xE0, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x1F, // 109
    0xF0, 0x20, 0x10, 0x10, 0x10, 0xE0, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x1F, // 110
    0xC0, 0x20, 0x10, 0x10, 0x10, 0x20, 0xC0, 0x07, 0x08, 0x10, 0x10, 0x10, 0x08, 0x07, // 111
    0xF0, 0x20, 0x10, 0x10, 0x10, 0x20, 0xC0, 0xFF, 0x08, 0x10, 0x10, 0x10, 0x08, 0x07, // 112
    0xC0, 0x20, 0x10, 0x10, 0x10, 0x20, 0xF0, 0x07, 0x08, 0x10, 0x10, 0x10, 0x08, 0xFF, // 113
    0xF0, 0x20, 0x10, 0x10, 0x1F, 0x00, 0x00, 0x00, // 114
    0xE0, 0x10, 0x10, 0x10, 0x10, 0x20, 0x08, 0x11, 0x11, 0x11, 0x11, 0x0E, // 115
    0x10, 0xFC, 0x10, 0x10, 0x00, 0x1F, 0x10, 0x10, // 116
    0xF0, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x0F, 0x10, 0x10, 0x10, 0x08, 0x1F, // 117
    0x30, 0xC0, 0x00, 0x00, 0x00, 0xC0, 0x30, 0x00, 0x00, 0x07, 0x18, 0x07, 0x00, 0x00, // 118
    0x30, 0xC0, 0x00, 0x00, 0xC0, 0x30, 0xC0, 0x00, 0x00, 0xC0, 0x30, 0x00, 0x07, 0x18, 0x07, 0x00, 0x00, 0x00, 0x07, 0x18, 0x07, 0x00, // 119
    0x10, 0x20, 0xC0, 0x00, 0xC0, 0x20, 0x10, 0x10, 0x08, 0x06, 0x01, 0x06, 0x08, 0x10, // 120
    0x70, 0x80, 0x00, 0x00, 0x00, 0xC0, 0x30, 0x00, 0x81, 0x8E, 0x70, 0x0E, 0x01, 0x00, // 121
    0x10, 0x10, 0x10, 0x10, 0xD0, 0x30, 0x10, 0x10, 0x18, 0x16, 0x11, 0x10, 0x10, 0x10, // 122
    0x00, 0x00, 0xFC, 0x02, 0x02, 0x01, 0x01, 0x7E, 0x80, 0x80, // 123
    0xFE, 0xFF, // 124
    0x02, 0x02, 0xFC, 0x00, 0x00, 0x80, 0x80, 0x7E, 0x01, 0x01, // 125
    0x80, 0x40, 0x40, 0x40, 0x80, 0x80, 0x80, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 126
    0xF8, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0xF8, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1F // 127
    
};

#endif
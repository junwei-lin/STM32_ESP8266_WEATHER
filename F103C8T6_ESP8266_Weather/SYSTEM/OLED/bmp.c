#include "bmp.h"

const unsigned char gImage_qing[200] = { /* 0X00,0X01,0X28,0X00,0X28,0X00, */
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0xE0,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x06,0x0E,0x1C,0x18,0x80,0xC0,0xC0,0xE0,0x60,0x70,0x33,0x33,0x70,0x60,0xE0,
0xC0,0xC0,0x00,0x18,0x1C,0x0E,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x18,0x18,0x18,0x18,0x00,0x00,0x00,0xFE,0xFF,0xC3,0x01,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xC7,0xFF,0x7C,0x00,0x00,0x18,0x18,
0x18,0x18,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x60,0x70,0x38,0x18,0x01,0x03,0x07,0x06,0x0C,0x0C,0x8C,0x8C,0x0C,0x0C,0x0E,
0x07,0x03,0x01,0x18,0x38,0x70,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x07,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*"C:\Users\linjunwei\Desktop\ͼƬ��Դ\100_��.bmp",0*/
/* (40 X 40 )*/
};

const unsigned char gImage_yun[200] = { /* 0X00,0X01,0X28,0X00,0X28,0X00, */
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x80,0xE0,0xF0,0x90,0xD8,0xD8,0x58,0x4C,0x46,0x46,0xC2,0xC2,
0x82,0x86,0x06,0x0E,0x1C,0x18,0x18,0x10,0x70,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0xE0,0x78,0x18,0x0C,0x04,0x04,0x04,0x07,0x07,0x03,0x01,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x03,0x07,0x06,0x04,0x04,0x0C,0x08,
0x38,0xEF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x0F,0x1C,
0x38,0x30,0x30,0x30,0x30,0x30,0x30,0x60,0x40,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0x60,
0x60,0x30,0x30,0x30,0x30,0x30,0x30,0x18,0x1C,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*"C:\Users\linjunwei\Desktop\ͼƬ��Դ\101_��.bmp",0*/
/* (40 X 40 )*/
};
const unsigned char gImage_qingyun[200] = { /* 0X00,0X01,0X28,0X00,0X28,0X00, */
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xC0,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x06,0x86,0xE0,0xF0,0x38,0x18,0x18,0x19,0x19,0x18,0x38,0x30,0xE0,0xC0,0x06,
0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x03,0x83,0xC3,0x60,0x30,0x3F,0x3F,0x38,0x38,0x0C,0x0C,
0x06,0x06,0x02,0x02,0x02,0x03,0x07,0x06,0x0C,0x1C,0x33,0x33,0x33,0x20,0x60,0xE0,
0xC0,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0x73,0xC0,
0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x80,0x80,0x80,0x80,0x80,0x80,0xC0,0xE1,0x7F,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x03,0x03,
0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x03,0x03,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*"C:\Users\linjunwei\Desktop\ͼƬ��Դ\103_����.bmp",0*/
/* (40 X 40 )*/


};
const unsigned char gImage_yin[200] = { /* 0X00,0X01,0X28,0X00,0X28,0X00, */
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0xF0,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x06,0x0E,0x1C,0x18,0x00,0xC0,0xE0,0xE0,0x70,0x70,0x70,0x71,0x71,0xF0,0xF0,
0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xE0,0xC0,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x18,0x18,0x18,0x18,0x18,0x00,0x00,0x7C,0xFF,0xFF,0x01,
0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xC0,0xE0,0x70,0x30,0x00,0x01,0x03,0x07,0x0E,0x0C,0x1C,0x1C,0x1C,0x1C,0x1F,0x1F,
0x1F,0x1F,0x1F,0x1F,0x0F,0x0F,0x0F,0x07,0x03,0x01,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x1F,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*"C:\Users\linjunwei\Desktop\ͼƬ��Դ\104_��.bmp",0*/
/* (40 X 40 )*/
};
const unsigned char gImage_feng[200] = { /* 0X00,0X01,0X28,0X00,0X28,0X00, */
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x78,0x1C,0x24,0x64,0x44,0x8E,0x8F,0xFF,0xFF,
0x98,0xA0,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0x8F,0x0C,
0x18,0x10,0x30,0x20,0x20,0x20,0xFF,0xFF,0x39,0x0D,0x03,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x0F,0x11,0x20,0x21,0x21,0x22,0x22,0x12,0x0E,0x06,0xFF,0xFF,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x03,0x03,0x03,0x03,0x03,0x03,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*"C:\Users\linjunwei\Desktop\ͼƬ��Դ\201_��.bmp",0*/
/* (40 X 40 )*/
};
const unsigned char gImage_dafeng[200] = { /* 0X00,0X01,0X28,0X00,0X28,0X00, */
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,
0x30,0x10,0x10,0x10,0xF0,0x10,0x18,0x08,0xF8,0x18,0x08,0x08,0x0C,0x04,0xE4,0x1C,
0x0C,0x38,0xE0,0xC0,0x83,0xFF,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x10,0x10,0x10,0x11,0x1F,0x10,0x20,0x20,
0x3F,0x30,0x20,0x40,0x60,0x40,0x4F,0x70,0x60,0x38,0x0F,0x06,0x03,0xFF,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0xFF,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x03,0x03,0x03,0x03,
0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*"C:\Users\linjunwei\Desktop\ͼƬ��Դ\205_���.bmp",0*/
/* (40 X 40 )*/
};
const unsigned char gImage_jufeng[200] = { /* 0X00,0X01,0X28,0X00,0X28,0X00, */
0x00,0x00,0x00,0x00,0x00,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,
0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,
0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,
0x80,0x98,0x98,0x98,0x98,0x98,0x98,0x98,0x98,0x98,0x98,0x98,0x98,0x98,0x98,0x98,
0x98,0x98,0x98,0x98,0x98,0x18,0x18,0x18,0x18,0x18,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x11,0x11,0x11,0x11,0x11,
0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x10,0x10,0x10,
0x10,0x10,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x33,0x33,0x33,0x33,0x33,0x33,0x33,
0x33,0x33,0x03,0x03,0x03,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x03,0x03,0x03,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*"C:\Users\linjunwei\Desktop\ͼƬ��Դ\208_쫷�.bmp",0*/
/* (40 X 40 )*/

};
const unsigned char gImage_zhenyu[200] = { /* 0X00,0X01,0X28,0X00,0X28,0X00, */
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x60,0x60,0x00,0x00,0x00,0x00,0x80,0x80,
0x9C,0x9C,0x80,0x80,0x00,0x00,0x00,0x60,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x30,0x30,0x30,
0x00,0x00,0x70,0xFC,0x86,0x83,0xC1,0xE1,0x60,0x61,0x21,0x23,0x23,0x7E,0x7C,0x60,
0xC0,0xC0,0x30,0x30,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0xF0,0x1C,0x0E,0x06,0x02,0x03,0x03,0x03,0x03,0x01,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x03,0x03,0x03,0x03,0x06,0x0E,
0x1C,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x07,0x0C,
0x18,0x18,0x10,0x10,0x18,0x18,0x18,0x10,0x00,0x00,0x78,0x78,0x78,0x00,0x00,0x10,
0x18,0x18,0x18,0x10,0x10,0x18,0x18,0x0C,0x0E,0x03,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x0F,0x0F,0x0F,0x00,0x00,0x3C,
0x3C,0x3C,0x3C,0x00,0x00,0x3C,0x3C,0x3C,0x3C,0x00,0x00,0x0F,0x0F,0x0F,0x0F,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*"C:\Users\linjunwei\Desktop\ͼƬ��Դ\301_����.bmp",0*/
/* (40 X 40 )*/
};
const unsigned char gImage_leizhenyu[200] = { /* 0X00,0X01,0X28,0X00,0X28,0X00, */

0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,
0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0xF0,0x38,
0x0C,0x0C,0x04,0x04,0x06,0x07,0x03,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x01,0x03,0x06,0x06,0x04,0x04,0x0C,0x0C,0x38,0xF0,0xC0,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x07,0x0F,0x18,0x30,0x30,0x20,0x20,0x20,0x30,0x70,0x60,
0x40,0x00,0x00,0x80,0xC0,0x20,0x00,0xC0,0x60,0x30,0x30,0x20,0x20,0x20,0x30,0x30,
0x1C,0x0F,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x3C,0x3E,0x3C,0x00,0x04,0xCE,0xFF,0x7F,0x38,0x10,0x00,0x3C,
0x3E,0x3C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*"C:\Users\linjunwei\Desktop\ͼƬ��Դ\302_������.bmp",0*/
/* (40 X 40 )*/
};
const unsigned char gImage_binbao[200] = { /* 0X00,0X01,0X28,0X00,0X28,0X00, */
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xC0,0xC0,
0x60,0x60,0x20,0x20,0x20,0x60,0x60,0x40,0xC0,0x80,0x80,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0xF8,0x0C,
0x06,0x06,0x02,0x02,0x03,0x03,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x01,0x03,0x03,0x02,0x02,0x06,0x0E,0x1C,0xF8,0xC0,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x03,0x07,0x0C,0x18,0x98,0x90,0x10,0x10,0x18,0x38,0x30,
0x60,0x60,0x40,0x40,0x40,0x60,0x60,0x20,0x30,0x18,0x18,0x10,0x90,0x90,0x18,0x1C,
0x0E,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x03,0x07,0x07,0x03,0x00,0x80,0x80,0x00,0x00,0x00,0x0C,0x1E,0x1E,0x0C,0x00,0x00,
0x80,0x80,0x00,0x03,0x07,0x07,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x07,0x07,0x03,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x07,0x07,0x03,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*"C:\Users\linjunwei\Desktop\ͼƬ��Դ\304_����.bmp",0*/
/* (40 X 40 )*/
};
const unsigned char gImage_yu[200] = { /* 0X00,0X01,0X28,0X00,0X28,0X00, */
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0xE0,0x30,
0x18,0x18,0x08,0x08,0x1C,0x0E,0x07,0x03,0x01,0x01,0x01,0x00,0x00,0x01,0x01,0x03,
0x03,0x06,0x0E,0x08,0x08,0x08,0x18,0x38,0x70,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x0F,0x3C,0x30,0x60,0x60,0x40,0xC0,0x40,0x60,0xC0,0xC0,
0x80,0x80,0x00,0x00,0x00,0x00,0x80,0x80,0xC0,0xE0,0x60,0x40,0xC0,0x40,0x60,0x70,
0x38,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3C,
0x3E,0x38,0x00,0x00,0x30,0x7C,0x7C,0x30,0x01,0x01,0x01,0xC1,0x81,0x01,0x01,0x01,
0x78,0x7C,0x78,0x00,0x00,0x10,0x3C,0x3E,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x07,0x07,0x07,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*"C:\Users\linjunwei\Desktop\ͼƬ��Դ\307_��.bmp",0*/
/* (40 X 40 )*/

};

const unsigned char gImage_baoyu[200] = { /* 0X00,0X01,0X28,0X00,0X28,0X00, */
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0xF0,0x30,
0x18,0x18,0x08,0x08,0x1C,0x0E,0x07,0x03,0x01,0x01,0x01,0x00,0x00,0x01,0x01,0x03,
0x03,0x06,0x0C,0x08,0x08,0x08,0x18,0x38,0x70,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x0F,0x3C,0x30,0x60,0x60,0x40,0xC0,0x40,0x60,0xC0,0xC0,
0x80,0x80,0x00,0x00,0x00,0x00,0x80,0x80,0xC0,0x60,0x40,0x40,0xC0,0x40,0x60,0x70,
0x38,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3C,
0x3E,0x3C,0x00,0xC0,0xC0,0x00,0x30,0x7C,0x79,0x31,0x01,0xC1,0x81,0x01,0x79,0x7D,
0x78,0x00,0x80,0xC0,0x80,0x00,0x3C,0x3E,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x07,0x07,0x03,0x00,0x00,
0x00,0x00,0x07,0x07,0x07,0x02,0x00,0x00,0x00,0x00,0x07,0x07,0x03,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*"C:\Users\linjunwei\Desktop\ͼƬ��Դ\310_����.bmp",0*/
/* (40 X 40 )*/

};
const unsigned char gImage_xue[200] = { /* 0X00,0X01,0X28,0X00,0X28,0X00, */
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xC0,
0xC0,0xC0,0x40,0x40,0x40,0x40,0xC0,0xC0,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0x78,0x1C,
0x0C,0x04,0x06,0x06,0x06,0x07,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x01,0x03,0x07,0x06,0x06,0x04,0x0C,0x0C,0x38,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x07,0x0E,0x18,0x38,0x30,0x20,0x20,0x30,0x30,0x70,0x60,
0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0x60,0x60,0x30,0x30,0x20,0x20,0x30,0x30,0x18,
0x0E,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x08,0x3E,0x1C,0x3E,0x08,0x00,0x00,0x80,0xE0,0xC0,0xE0,0x80,0x00,0x00,
0x08,0x3E,0x1C,0x3E,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x03,0x01,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*"C:\Users\linjunwei\Desktop\ͼƬ��Դ\401_ѩ.bmp",0*/
/* (40 X 40 )*/
};
const unsigned char gImage_yujiaxue[200] = { /* 0X00,0X01,0X28,0X00,0X28,0X00, */
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xC0,
0x40,0x60,0x60,0x20,0x20,0x60,0x60,0xC0,0xC0,0x80,0x80,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0xF8,0x1C,
0x06,0x06,0x02,0x02,0x06,0x03,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x01,0x03,0x03,0x02,0x02,0x06,0x0E,0x1C,0xF8,0xE0,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x01,0x07,0x0C,0x18,0x18,0x10,0x30,0x10,0x18,0x38,0x30,
0x60,0x60,0x40,0x40,0x40,0x40,0x60,0x60,0x30,0x38,0x18,0x10,0x30,0x10,0x18,0x18,
0x0E,0x07,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1C,0x3E,
0x3E,0x1C,0x00,0x00,0x20,0x70,0x70,0x20,0x00,0x00,0x80,0xC0,0xC0,0x80,0x00,0x00,
0x20,0x70,0x70,0x20,0x00,0x00,0x1C,0x3E,0x3E,0x1C,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x03,0x07,0x07,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*"C:\Users\linjunwei\Desktop\ͼƬ��Դ\404_���ѩ.bmp",0*/
/* (40 X 40 )*/
};
const unsigned char gImage_zhenxue[200] = { /* 0X00,0X01,0X28,0X00,0X28,0X00, */
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,
0x70,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0x80,
0x00,0x03,0x03,0xE0,0x78,0x18,0x0C,0x0C,0x04,0x04,0x0C,0x8C,0x98,0xB8,0xF0,0x03,
0x03,0x01,0x80,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x81,0xE1,0x71,0x30,0x18,0x18,0x1F,0x1E,0x1C,0x06,0x07,
0x03,0x01,0x01,0x01,0x01,0x01,0x01,0x03,0x07,0x0F,0x1D,0x19,0x19,0x18,0x18,0x30,
0x70,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x3F,0x70,
0x60,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0x80,0x00,0x00,0xC0,0x80,0x80,0xC0,0x00,0x00,
0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0x60,0x30,0x1F,0x07,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x02,0x03,0x0F,0x07,0x07,0x0F,0x03,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*"C:\Users\linjunwei\Desktop\ͼƬ��Դ\407_��ѩ.bmp",0*/
/* (40 X 40 )*/


};
const unsigned char gImage_wumai[200] = { /* 0X00,0X01,0X28,0X00,0X28,0X00, */

0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x80,0xC0,0xE0,0xF0,0x30,0x30,0x10,0x90,0x10,0x10,0x30,0x30,
0x60,0xE0,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x11,0x11,0x11,0x99,0xFF,0xFF,0x93,0x11,0x11,
0x11,0x11,0x11,0x11,0x11,0x10,0x10,0x10,0x10,0x90,0x9B,0xFF,0xB8,0x10,0x10,0x10,
0x10,0x10,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x03,0x07,0x0F,0x0F,0x19,0x19,0x19,0x11,0x19,0x19,0x19,0x0D,
0x0F,0x07,0x03,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*"C:\Users\linjunwei\Desktop\ͼƬ��Դ\500_����.bmp",0*/
/* (40 X 40 )*/
};
const unsigned char gImage_shachenbao[200] = { /* 0X00,0X01,0X28,0X00,0X28,0X00, */

0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0xC0,
0x00,0x00,0x06,0x04,0x00,0x00,0x00,0x00,0x60,0x60,0x00,0x04,0x06,0x00,0x80,0x80,
0x00,0x01,0x01,0x02,0x06,0xFE,0xFC,0xF8,0xF8,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x20,0x60,0x60,0x44,0x4C,0x40,0x40,
0x60,0x60,0x60,0x60,0x60,0x70,0x31,0x39,0x38,0x3C,0x3C,0x9E,0xFF,0xFF,0xFF,0xEF,
0x07,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x03,0x03,0x08,0xC8,0xC8,0x08,0x18,0x08,0x0B,0x08,0x88,0x8C,
0xCC,0xCE,0xEF,0x7F,0x7F,0x3B,0x03,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*"C:\Users\linjunwei\Desktop\ͼƬ��Դ\503_ɳ����.bmp",0*/
/* (40 X 40 )*/

};
const unsigned char gImage_shengcun[200] = { /* 0X00,0X01,0X28,0X00,0X28,0X00, */
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x8C,0x8C,0x8C,0x8C,0x8C,0x8C,0x8C,0x8C,0x8C,0x8C,0x8C,0x8C,0x8C,0x8C,0x8C,
0x8C,0x8C,0x8C,0x8C,0x8C,0x8C,0x8C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x11,0x11,0x11,0x11,0x11,0x11,0x11,
0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x23,0x23,0x23,0x23,0x23,0x23,0x23,0x23,0x23,0x23,0x23,0x23,0x23,0x23,0x23,
0x23,0x23,0x23,0x23,0x23,0x23,0x23,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*"C:\Users\linjunwei\Desktop\ͼƬ��Դ\509_��������.bmp",0*/
/* (40 X 40 )*/
};
const unsigned char gImage_weizhi[200] = { /* 0X00,0X01,0X28,0X00,0X28,0X00, */
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0xC0,
0x80,0x00,0x00,0x00,0x00,0x00,0xC0,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0x40,
0x00,0x00,0x00,0x00,0x80,0xC0,0xC0,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x0F,0x0F,0x3E,0x78,0xE0,0xE0,0xFF,0xFF,
0x00,0x00,0x00,0xC0,0xF8,0x1F,0x03,0x00,0x00,0x00,0xE0,0xFC,0xFF,0xC7,0xC3,0xDF,
0xFE,0xF0,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x07,
0x00,0x00,0x00,0x00,0x01,0x03,0x07,0x07,0x00,0x00,0x0E,0x07,0x00,0x00,0x00,0x00,
0x00,0x07,0x07,0x01,0x00,0x00,0x00,0x00,0x01,0x07,0x07,0x04,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*"C:\Users\linjunwei\Desktop\ͼƬ��Դ\999_δ֪.bmp",0*/
/* (40 X 40 )*/

};

const unsigned char du[24]={0x02,0x05,0x02,0xF8,0x04,0x02,0x02,0x02,0x04,0x0E,0x80,0x00,0x00,0x00,0x00,0x00,0x01,0x02,0x02,0x02,0x02,0x01,0x00,0x00};/*"��",0*/



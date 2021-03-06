 #ifndef PALETTE_H
 #define PALETTE_H


typedef struct _pal {
	int r;
	int g;
	int b;
} rgb;

rgb palette[64] = {
    {0x68,0x68,0x68},{0x00,0x2A,0x88},{0x14,0x12,0xA7},{0x3B,0x00,0xA4},
    {0x5C,0x00,0x7E},{0x6E,0x00,0x40},{0x6C,0x06,0x00},{0x56,0x1D,0x00},
    {0x33,0x35,0x00},{0x0B,0x48,0x00},{0x00,0x52,0x00},{0x00,0x4F,0x08},
    {0x00,0x40,0x4D},{0x00,0x00,0x00},{0x00,0x00,0x00},{0x00,0x00,0x00},
    {0xAD,0xAD,0xAD},{0x15,0x5F,0xD9},{0x42,0x40,0xFF},{0x75,0x27,0xFE},
    {0xA0,0x1A,0xCC},{0xB7,0x1E,0x7B},{0x8D,0x31,0x0C},{0x71,0x3F,0x00},
    {0x64,0x63,0x2E},{0x38,0x87,0x00},{0x00,0x6E,0x00},{0x00,0x8F,0x32},
    {0x00,0x68,0x65},{0x00,0x00,0x00},{0x00,0x00,0x00},{0x00,0x00,0x00},
    {0xFF,0xFE,0xFF},{0x64,0xB0,0xFF},{0x92,0x9A,0xFF},{0xC6,0x76,0xFF},
    {0xF3,0x6A,0xFF},{0xFE,0x6E,0xCC},{0xFE,0x81,0x70},{0xE1,0xB8,0x72},
    {0xBC,0xBE,0x00},{0xAF,0xC4,0x00},{0x5C,0xE4,0x30},{0x45,0xE0,0x82},
    {0x48,0xCD,0xDE},{0x4F,0x4F,0x4F},{0x00,0x00,0x00},{0x00,0x00,0x00},
    {0xFF,0xFE,0xFF},{0xC0,0xDF,0xFF},{0xD3,0xD2,0xFF},{0xE8,0xC8,0xFF},
    {0xFB,0xC2,0xFF},{0xFE,0xC4,0xEA},{0xFE,0xCC,0xC5},{0xF7,0xEC,0xE1},
    {0xE4,0xE5,0x94},{0xCF,0xEF,0x96},{0xBD,0xF4,0xAB},{0xB3,0xF3,0xCC},
    {0xB5,0xEB,0xF2},{0xB8,0xB8,0xB8},{0x00,0x00,0x00},{0x00,0x00,0x00}
};


#endif
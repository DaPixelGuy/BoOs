#ifndef VGA_GRAPHICS_H
#define VGA_GRAPHICS_H

typedef char byte;
typedef unsigned short word;
typedef unsigned long dword;

#define SZ(x) (sizeof(x)/sizeof(x[0]))

// misc out (3c2h) value for various modes
#define R_COM  0x63 // "common" bits

#define R_W256 0x00
#define R_W320 0x00
#define R_W360 0x04
#define R_W376 0x04
#define R_W400 0x04

#define R_H200 0x00
#define R_H224 0x80
#define R_H240 0x80
#define R_H256 0x80
#define R_H270 0x80
#define R_H300 0x80
#define R_H360 0x00
//I DIDNT MAKE THIS, HE DID:
//[ Jonas Berlin / xkr~47 ]
//[ tel: +358-9-5483430 / +358-40-5884454 ]
//[ Kiloberget 10 F 55, 02610 Esbo, Finland ]
//[ mailto:jberlin@cc.hut.fi ]
//[ http://www.hut.fi/~jberlin ]
#define R_H400 0x00
#define R_H480 0x80
#define R_H564 0x80
#define R_H600 0x80

extern const byte hor_regs[];
extern const byte width_256[];
extern const byte width_320[];
extern const byte width_360[];
extern const byte width_376[];
extern const byte width_400[];

extern const byte ver_regs[];
extern const byte height_200[];
extern const byte height_224[];
extern const byte height_240[];
extern const byte height_256[];
extern const byte height_270[];
extern const byte height_300[];
extern const byte height_360[];
extern const byte height_400[];
extern const byte height_480[];
extern const byte height_564[];
extern const byte height_600[];

// Function declaration for graphics initialization
int init_graph_vga(int width, int height, int chain4);

// Function prototypes
void clearVGA(byte color);
void set_pixel(int x, int y, byte color);
void set_vga_color(int index, byte r, byte g, byte b);

#endif // VGA_GRAPHICS_H



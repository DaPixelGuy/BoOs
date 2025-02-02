#ifndef KEYBOARD_H
#define KEYBOARD_H

#define KEYBOARD_DATA_PORT 0x60      // Data port to read scancode from
#define KEYBOARD_STATUS_PORT 0x64    // Status port to check if data is ready

#ifndef UINT8_T
#define UINT8_T
typedef unsigned char uint8_t;  // Define uint8_t as an unsigned char
#endif


void waitForKey(void);
uint8_t get_scancode(void);
char scan_code_to_char(uint8_t scan_code);
#endif

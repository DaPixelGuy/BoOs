#include "../drivers/screen.h"
#include "../drivers/keyboard.h"
#include "../drivers/vga.h"
#include "util.h"



void main(){
  //char tbuffer[] = ">";
  //clear_screen();
  //for(int i=0;i<MAX_COLS;i++){
  //  kprint("-");
  //}
  //kprint_at("BoOs\n", MAX_COLS/2-2, 1);
  //for(int i=0;i<MAX_COLS;i++){
  //  kprint("-");
  //}
  //kprint("\n");
  //while(1){
  //  waitForKey();
  //  if(scan_code_to_char(get_scancode()) != '?'){
  //    uint8_t scancode = get_scancode();
      //append(tbuffer, scan_code_to_char(get_scancode()));
      //clear_screen();
      //kprint(tbuffer);
      //kprint("\n");
      //print_char(scan_code_to_char(get_scancode()), -1, -1, 0);
  //  }
  //}
  //
    init_graph_vga(320,200,1);
    clearVGA(0);
    set_vga_color(15, 0xFF, 0x00, 0x00);
    set_pixel(100, 100, 15);
}

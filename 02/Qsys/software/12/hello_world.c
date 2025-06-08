/*
 * "Hello World" example.
 *
 * This example prints 'Hello from Nios II' to the STDOUT stream. It runs on
 * the Nios II 'standard', 'full_featured', 'fast', and 'low_cost' example
 * designs. It runs with or without the MicroC/OS-II RTOS and requires a STDOUT
 * device in your system's hardware.
 * The memory footprint of this hosted application is ~69 kbytes by default
 * using the standard reference design.
 *
 * For a reduced footprint version of this template, and an explanation of how
 * to reduce the memory footprint for a given application, see the
 * "small_hello_world" template.
 *
 */

#include <stdio.h>
#include <system.h>
#include <io.h>
#include <unistd.h>

int main()
{
  int i=0;
  //0x40,0 0x79,1  0x24,2  0x30,3  0x02,4  0x12,5  0x7D,6  0x58,7  0x00,8  0x10,9
  int hex[]={0x19,0x79,0x24,0x12,0x40,0x58,0x24,0x00,0x02};    //412507286
  while(1){
	  for (i=0;i<10;i++){
		  IOWR(HEX_BASE,0,hex[i]);
		  usleep(100000);
	  }
  }
  return 0;
}

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
#include <unistd.h>
#include <io.h>
#include <system.h>
int main()
{	int i;
	int ID[]={0x19,0x79,0x24,0x12,0x40,0x58,0x24,0x00,0x02};
	while(1){
	      for(i=0;i<9;i++){
	          IOWR(HEX_BASE, 0, ID[i]);
	          usleep(300000);
	      }
	}

  return 0;
}

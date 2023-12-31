/* Script to automatically run the commands to compile the Lora Mesh Project into
   the .UF2 file format, which can be drag and dropped onto a usb connected rp2040 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main( void ){

    system( "rm -r build" );
    system( "mkdir build" );
    // system( 'cmake from 'project-folder' into 'build')
    system( "cmake -D PICO_SDK_PATH=/Path-To/pico-sdk -B ./build" );
    // system( 'make from 'build'') -C DIRECTORY, Change to DIRECTORY before doing anything.
    system( "make -C build" );

    return 0;
}

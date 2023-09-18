# Raspberry Pi Pico CLI Easy Build

[![Download Repository Zip](https://img.shields.io/badge/Download_Repository_Zip-FFFFFF?style=for-the-badge)]([https://github.com/new?template_name=Lora_Pico_Driver&template_owner=cschorn01](https://github.com/cschorn01/rpi_pico_CLI_easy_build/archive/refs/heads/main.zip))

[![By Chris Schorn](https://img.shields.io/badge/Author-Chris_Schorn-FFFFFF?style=for-the-badge)](https://github.com/cschorn01)
[![CMake](https://img.shields.io/badge/CMake-%23008FBA.svg?style=for-the-badge&logo=cmake&logoColor=white)](https://cmake.org/)
[![Raspberry Pi](https://img.shields.io/badge/-RaspberryPi-C51A4A?style=for-the-badge&logo=Raspberry-Pi)](https://www.raspberrypi.com/products/raspberry-pi-pico/)
<!-- [![MIT License](https://img.shields.io/badge/License-MIT-A31B34?style=for-the-badge)](https://mit-license.org/) -->
<!-- [![Semtech LoRa](https://img.shields.io/badge/LoRa-1CAEED?style=for-the-badge)](https://www.semtech.com/lora)
[![FreeRTOS](https://img.shields.io/badge/FreeRTOS-5CBA5B?style=for-the-badge)](https://www.freertos.org/) -->

[![Description](https://img.shields.io/badge/Description-FFFFFF?style=for-the-badge)](https://github.com/cschorn01/rpi_pico_CLI_easy_build/tree/main#description)
[![Functionality](https://img.shields.io/badge/Functionality-FFFFFF?style=for-the-badge)](https://github.com/cschorn01/rpi_pico_CLI_easy_build/tree/main#functionality)
[![File Structure](https://img.shields.io/badge/file_structure-FFFFFF?style=for-the-badge)](https://github.com/cschorn01/rpi_pico_CLI_easy_build/tree/main#file-structure)
[![How to Use](https://img.shields.io/badge/how_to_use-FFFFFF?style=for-the-badge)](https://github.com/cschorn01/rpi_pico_CLI_easy_build/tree/main#how-to-use)

[![Stargazers repo roster for @cschorn01/rpi_pico_lora_template](https://reporoster.com/stars/cschorn01/rpi_pico_lora_template)](https://github.com/cschorn01/rpi_pico_CLI_easy_build/stargazers)

## Description
Include in your project folder to easily delete, then recreate your build folder, and run cmake. The .uf2 files will be put into the build folder for you.


## Functionality

The `system()` function from the `stdlib.h` library can perform command line prompts, allowing automation of the build process for the Raspberry Pi Pico. This is a series of five commands:
```
rm -r build
mkdir build
cmake -D FREERTOS_KERNEL_PATH=/Path-To/FreeRTOS-Kernel -D PICO_SDK_PATH=/Path-To/pico-sdk -B ./build
make -C build
```

## File Structure
- [rp2040Make.c]()

## How To Use
    <!-- system( "rm -r build" );
    system( "mkdir build" );
    // system( 'cmake from 'project-folder' into 'build')
    system( "cmake -D FREERTOS_KERNEL_PATH=/Path-To/FreeRTOS-Kernel -D PICO_SDK_PATH=/Path-To/pico-sdk -B ./build" );
    // system( 'make from 'build'') -C DIRECTORY, Change to DIRECTORY before doing anything.
    system( "make -C build" ); -->
  


[![TOP](https://img.shields.io/badge/TOP-FFFFFF?style=for-the-badge)](https://github.com/cschorn01/rpi_pico_CLI_easy_build/)

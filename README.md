# Raspberry Pi Pico CLI Easy Build

[![By Chris Schorn](https://img.shields.io/badge/Author-Chris_Schorn-FFFFFF?style=for-the-badge)](https://github.com/cschorn01)
[![Download Repository Zip](https://img.shields.io/badge/Download_Repository_Zip-FFFFFF?style=for-the-badge)]([https://github.com/new?template_name=Lora_Pico_Driver&template_owner=cschorn01](https://github.com/cschorn01/raspberry_pi_pico_CLI_easy_build/archive/refs/heads/main.zip))

![Shell Script](https://img.shields.io/badge/shell_script-%23121011.svg?style=for-the-badge&logo=gnu-bash&logoColor=white)
![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)
[![CMake](https://img.shields.io/badge/CMake-%23008FBA.svg?style=for-the-badge&logo=cmake&logoColor=white)](https://cmake.org/)
[![Raspberry Pi](https://img.shields.io/badge/-RaspberryPi-C51A4A?style=for-the-badge&logo=Raspberry-Pi)](https://www.raspberrypi.com/products/raspberry-pi-pico/)
<!-- [![MIT License](https://img.shields.io/badge/License-MIT-A31B34?style=for-the-badge)](https://mit-license.org/) -->
<!-- [![Semtech LoRa](https://img.shields.io/badge/LoRa-1CAEED?style=for-the-badge)](https://www.semtech.com/lora)
[![FreeRTOS](https://img.shields.io/badge/FreeRTOS-5CBA5B?style=for-the-badge)](https://www.freertos.org/) -->

[![Description](https://img.shields.io/badge/Description-FFFFFF?style=for-the-badge)](https://github.com/cschorn01/raspberry_pi_pico_CLI_easy_build/tree/main#description)
[![Functionality](https://img.shields.io/badge/Functionality-FFFFFF?style=for-the-badge)](https://github.com/cschorn01/raspberry_pi_pico_CLI_easy_build/tree/main#functionality)
[![File Structure](https://img.shields.io/badge/file_structure-FFFFFF?style=for-the-badge)](https://github.com/cschorn01/raspberry_pi_pico_CLI_easy_build/tree/main#file-structure)
[![How to Use](https://img.shields.io/badge/how_to_use-FFFFFF?style=for-the-badge)](https://github.com/cschorn01/raspberry_pi_pico_CLI_easy_build/tree/main#how-to-use)

[![Stargazers repo roster for @cschorn01/raspberry_pi_pico_CLI_easy_build](https://reporoster.com/stars/cschorn01/raspberry_pi_pico_CLI_easy_build)](https://github.com/cschorn01/raspberry_pi_pico_CLI_easy_build/stargazers)

## ![Description](https://img.shields.io/badge/Description-FFFFFF?style=for-the-badge)
Run `./rp2040Make.sh`, or `./a.out`, to perform the Raspberry Pi Pico build command sequence.There is also a version that works with FreeRTOS in [raspberry_pi_pico_lora_template](https://github.com/cschorn01/raspberry_pi_pico_lora_template/blob/main/README.md).


## Functionality

Instead of running the five commands used for building a Raspberry Pi Pico project:
```bash
rm -r build
mkdir build
cmake -D PICO_SDK_PATH=/Absolute/Path/To/pico-sdk -B ./build  #cmake from project folder into build folder
make -C build  # -C changes folder to build before running make
```
Replace that with shell script, or C code running shell commands, including `export PICO_SDK_PATH=/Path/To/pico-sdk`.

## File Structure

The file structure shown here is the layout for the [Raspberry Pi Github Examples](https://github.com/raspberrypi/pico-examples/tree/master) with this file included.

- pico_projects
    - [rp2040Make.c](https://github.com/cschorn01/raspberry_pi_pico_CLI_easy_build/blob/main/rp2040Make.c)
    - [rp2040Make.sh](https://github.com/cschorn01/raspberry_pi_pico_CLI_easy_build/blob/main/rp2040Make.sh)
    - CMakeLists.txt
    - main.c

## How To Use

For this to work on your machine, add the path to your *pico_sdk* folder in the `cmake` command.

```bash
cmake -D PICO_SDK_PATH=/Absolute-Path-To/pico-sdk -B ./build
```

Then the `rp2040Make.sh` file will need its execute permissions changes. For this run:

```bash
chmod +x rp2040Make.sh
```
Now this file can be run using `./rp2040Make.sh`.

For the C code, after you add your path, just compile the code and run the output.

```bash
gcc rp2040Make.c
./a.out
```

After running these command line prompts you should see a build folder appear, the output from CMake, and the build folder become populated.
  
<div align="center" dir="auto">
  <a href="https://github.com/cschorn01/raspberry_pi_pico_CLI_easy_build">
    <img src="https://img.shields.io/badge/Back_To_Top-FFFFFF?style=for-the-badge" alt="Back To Top">
  </a>
</div>

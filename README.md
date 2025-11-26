# pico-project-template
A template with the Raspberry Pi Pico SDK as a submodule. To be used for RP2040 development projects.
- Defines CMakeLists.txt and project structure
- Builds a simple example blink program

## Environment
Setup compiler toolchain for your platform, example for ubuntu:
```bash
# gcc-arm-none-eabi is the cross compiler gcc for an arm target
# libnewlib-arm-none-eabi is the C standard library implementation, it delegates hardware functions to the SDK
# libstdc++-arm-none-eabi-newlib is the C++ standard library similar to above
apt install cmake gcc-arm-none-eabi libnewlib-arm-none-eabi libstdc++-arm-none-eabi-newlib
```
Set `PICO_SDK_PATH` to the path of the SDK (included as submodule here)
```bash
export PICO_SDK_PATH=/path/to/this/repo/ext/pico-sdk
```
Run build for your `platform` and `board`
```bash
mkdir build && cd build
cmake -DPICO_PLATFORM=<platform> -DPICO_BOARD=<board> ..
```

## Reference
- Pico SDK Docs: https://www.raspberrypi.com/documentation/microcontrollers/c_sdk.html
- Pico SDK git: https://github.com/raspberrypi/pico-sdk
- Pico SDK examples: https://github.com/raspberrypi/pico-examples

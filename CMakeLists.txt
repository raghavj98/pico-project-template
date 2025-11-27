cmake_minimum_required(VERSION 3.13)

# initialize the SDK based on PICO_SDK_PATH
# note: this must happen before project()
set(PICO_BOARD_HEADER_DIRS ${CMAKE_CURRENT_LIST_DIR}/boards)
include(pico_sdk_import.cmake)

project(blink)
set(CMAKE_EXPORT_COMPILE_COMMANDS 1)

# initialize the Raspberry Pi Pico SDK
pico_sdk_init()

add_executable(blink
    # Source files go here
    src/blink.c
)

target_link_libraries(blink
    # Pico SDK libs go here
    pico_stdlib
)

pico_add_extra_outputs(blink)

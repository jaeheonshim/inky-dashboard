# == DO NOT EDIT THE FOLLOWING LINES for the Raspberry Pi Pico VS Code Extension to work ==
if(WIN32)
    set(USERHOME $ENV{USERPROFILE})
else()
    set(USERHOME $ENV{HOME})
endif()
set(sdkVersion 2.1.0)
set(toolchainVersion 13_3_Rel1)
set(picotoolVersion 2.1.0)
set(picoVscode ${USERHOME}/.pico-sdk/cmake/pico-vscode.cmake)
if (EXISTS ${picoVscode})
    include(${picoVscode})
endif()
# ====================================================================================
cmake_minimum_required(VERSION 3.13)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(PICO_BOARD pico_w CACHE STRING "Board type")

# Include Raspberry Pi Pico SDK
include(pico_sdk_import.cmake)

# Pimoroni setup
set(PIMORONI_PICO_PATH ${PIMORONI_PICO_PATH} CACHE PATH "Path to Pimoroni Pico")
include(pimoroni_pico_import.cmake)

project(inky_dashboard C CXX ASM)

pico_sdk_init()

add_compile_options(
    -Oz
    -ffunction-sections
    -fdata-sections
)

add_link_options(-Wl,--gc-sections)

# Add LVGL library
file(GLOB_RECURSE LVGL_SOURCES
    "${CMAKE_CURRENT_LIST_DIR}/lvgl/src/*.c"
)
add_library(lvgl STATIC)
target_sources(lvgl PRIVATE ${LVGL_SOURCES})
target_include_directories(lvgl PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/lvgl
    ${CMAKE_CURRENT_LIST_DIR}/lvgl/src
    ${CMAKE_CURRENT_LIST_DIR} # Ensure lv_conf.h is found
)

# Add Pimoroni librarie
add_subdirectory(${PIMORONI_PICO_PATH}/common pimoroni_i2c)
add_subdirectory(${PIMORONI_PICO_PATH}/libraries inky_frame_7)

add_executable(inky_dashboard src/inky_dashboard.cpp src/inky_interface.cpp src/calendar.cpp src/net.cpp)

pico_set_program_name(inky_dashboard "inky_dashboard")
pico_set_program_version(inky_dashboard "0.1")

pico_enable_stdio_uart(inky_dashboard 0)
pico_enable_stdio_usb(inky_dashboard 0)

# Add json
add_subdirectory(json)

# Add include directories
target_include_directories(inky_dashboard PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/src
    ${CMAKE_CURRENT_LIST_DIR}/lvgl
    ${PIMORONI_PICO_PATH}/common
)

# Link libraries
target_link_libraries(inky_dashboard
    pico_cyw43_arch_lwip_threadsafe_background
    pico_lwip
    pico_lwip_http
    inky73
    inky_frame_7
    hardware_pwm
    hardware_spi
    hardware_i2c
    hardware_rtc
    pico_graphics
    psram_display
    pcf85063a
    lvgl
    nlohmann_json::nlohmann_json
    -Wl,--gc-sections
)

# Add font files
file(GLOB FONT_FILES "${CMAKE_CURRENT_SOURCE_DIR}/src/fonts/*.c")
if (FONT_FILES)
    target_sources(inky_dashboard PRIVATE ${FONT_FILES})
endif()

pico_add_extra_outputs(inky_dashboard)
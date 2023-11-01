#
# Copyright (c) 2023  Callender-Consulting
#
# SPDX-License-Identifier: Apache-2.0
#
cmake_minimum_required(VERSION 3.20.0)

#set(BOARD nrf52840dk_nrf52840)
set(BOARD nrf52dk_nrf52832)

find_package(Zephyr)
project(APP_SHELL_BLE)

target_sources(app PRIVATE
  src/main.c
  src/app_cmds.c
  src/shell_bt_nus.c
  src/nus.c
)
target_include_directories(app PRIVATE src)

# zephyr_compile_options(-save-temps)

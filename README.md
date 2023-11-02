# app_shell_bt
Demo showing how to create a command shell over Bluetooth LE.

## How to build the firmware
To build, use the following flow.
1) cd to your caliper_keyboard root directory
2) run "./configure.sh"
3) cd to build directory
4) make

## How to interact with the firmware
YouTube [video](https://www.youtube.com/watch?v=2kn_1hV7DIk) on how to use an Android terminal app to interact with this project's firmware.

NOTE: Several of the Android and IoS terminal apps are a bit difficult to configure.  
In particulare the Nordic "nRF UART 2.0" was not able to correctly interact with this firmware.  
On Android suggest: "Serial Bluetooth Terminal" by Kai Morich.  
On IoS suggest: "BLESerial nRF", by Ed Nieuwenhuy.  

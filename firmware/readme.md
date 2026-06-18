# sonopad

![sonopad](imgur.com image replace me!)

Sonopad is a small macro pad for taking sound controlls off the keyboard, allowing for better control of a systems sound.

* Keyboard Maintainer: [Benjamin Leader](https://github.com/B-Leadr)
* Hardware Supported: SonoPad pcb and Speed xiao RP2040
* Hardware Availability: See repository for project or production files and bill of materials

QMK MSYS needs to be setup to edit this, just clone this and copy these files into the keyboards directory in your qmk_firmware directory. If you just want the compliled firmware ignore this and just use that located in the production folder.

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available

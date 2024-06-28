# Mad Macro 1:  A simple 20 Key Macro Pad

![mad_clover/mad_macro_1](imgur.com image replace me!)

This project was a learning experience for me, to design and build a simple handwired macro pad.  I designed the 3D printed case from scratch and wired using techniques learned from Joe Scotto on YouTube.

* Keyboard Maintainer: [John Steffen](https://github.com/TheMadClover)
* Hardware Supported: Hand wired, with MX switches and any Pro Micro
* Hardware Availability: AliExpress/Amazon

Make example for this keyboard (after setting up your build environment):

    make mad_clover/mad_macro_1:default

Flashing example for this keyboard:

    make mad_clover/mad_macro_1:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available

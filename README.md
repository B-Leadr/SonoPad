# SonoPad
A macro keyboard for managing a system's sound.

## Features:
- 2x4 matrix of buttons
  - Default configuration for basic sound controls (can be customized in keymap)
-Rotary encoder for volume control
-.91" Oled Display

##Enclosure:
- Consists of a base and top plate part that are fastened with 4 M3x5mx4mm heatset inserts and 4 M3x16mm screws
- Base has a 15 degree tilt
- Both parts can be 3D printed
- 
<img width="1520" height="572" alt="Hack_Pad_Case_Good_2026-Jun-18_06-40-43PM-000_CustomizedView10507829683_png" src="https://github.com/user-attachments/assets/a2d67883-012a-40e5-8e3f-5675ea42dcc9" />

## PCB:
-Wiring is simple as all the pullups and power supply are handling on the Speed xiao Rp2040 dev board
-The xiao rp2040 is placed on the back to allow space for the oled panel on the front. They overlap, but by raising the xiao off the back of the board with headers, there should be enough space to allow for both components as long as they are soldered on in the correct order
-Production files are for JLBPCB

<img width="1050" height="743" alt="Screenshot 2026-06-11 163418 Hackpad Schematic" src="https://github.com/user-attachments/assets/7c7d846d-463b-4c17-84e1-fbaab0e4b0eb" />
<img width="1078" height="790" alt="Screenshot 2026-06-11 172127" src="https://github.com/user-attachments/assets/c048fb08-16b5-4fad-b1cc-f50270b0e881" />

## Firmware:
-QMK is used for the configuration, building, and flashing the firmware
-Rotary encoder controls volume
-Oled displays whatever you want (Need to add more features to this possibly multiple keymap layers and display of the current layer)
-All 8 keys map to different keys relating to sound control (Need to add more unique macros)

## BOM:
1x XIAO rp2040
1x EC11 Rotary Encoder
1x 0.91" 128x32 OLED SSD1306 Display
8x Cherry MX Switches
8x 1N4148 Diodes
8x DSA Keycaps
4x M3x16mm Screws
4x M3x5x4 Heatset Inserts
1x Case (2 printed parts)
1x PCB (Etched by JLBPCB)

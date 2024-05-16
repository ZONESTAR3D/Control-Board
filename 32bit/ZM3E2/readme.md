# ZM3E2  
## Board Size  
![Size](Size_ZM3E2.jpg)  

## Schematic diagram [:arrow_down: PDF](./SCH_ZM3E2V1.pdf)  
![schematic diagram](SCH_ZM3E2V1.jpg)

## Pin out [:arrow_down: PDF](./PINOUT_ZM3E2V1.pdf)
![PINOUT](PINOUT_ZM3E2V1.jpg)  

## PCB
### Designator   [:arrow_down: PDF](./designtor.pdf)
![Designator](./designator.jpg)  
### Parts [:blue_book:PDF](./parts.pdf)
![Parts](./parts.jpg)  

## Pin define  
please refer to the file: [***pins_ZM3E2_V1_0.h***](https://github.com/ZONESTAR3D/Control-Board/blob/main/32bit/ZM3E2/pins_ZM3E2_V1_0.h)  
## Wiring reference
![Wiring](Wiring_ZM3E2V1.jpg)  

## Bootloader
### How to programming bootloader of the ZM3E2 control board
### [:arrow_down: Download ZM3E2 bootloader file](./ZM3E2_Bootloader.zip)
The steps for programming the bootloader are as follows:    
1. Short R63 (BOOT0 Pin of the MCU) with tweezers and then power on the control board.
2. Release the tweezers for shorting R63.
3. Programming the bootloader.     

For tools and detailed instructions, please refer to [:book: **the instructions for programming bootloader for ZM3E4**](https://github.com/ZONESTAR3D/Control-Board/blob/main/32bit/ZM3E4/flashBootloader/readme.md).

#### The position of R63 on the control board
![](./R63.jpg)
#### UART1 pins on the control board
![](./UART1.jpg)
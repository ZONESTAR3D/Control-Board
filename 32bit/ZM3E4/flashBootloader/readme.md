## How to flash "bootloader" of ZM3E4 control board
### Tools
You need a UART tool to flash the bootloader to control board, for example a "USB to RS232 TTL Converter".     
![](./tool.jpg)     
- [:gift: Purchase a "USB to RS232 TTL Converter"](https://www.aliexpress.com/item/3256806252760671.html).  
- [:arrow_down: Download driver for "PL2303-HX USB to RS232 TTL Converter"(windows only)](https://github.com/ZONESTAR3D/Control-Board/releases/tag/1.0).     

----
### Wiring
![](0.jpg)
>
    +3.3V       <--> If you UART tool need support power from outside, connect it to your UART tool, otherwise let it float.
    TX0(PA9)    <--> connect to "RXD" of the UART tool  
    RX0(PA10)   <--> connect to "TXD" of the UART tool   
    GND         <--> connect to "GND" of the UART tool   
![](01.jpg)

### Download bootloader bin file and tool
- Download the [:arrow_down:**bootload bin file**](./ZM3E4_SDBootloader.zip) to your PC and unzip it. [:book: Release note of the bootloader](./ReleaseNote.md)       
- Download the [:arrow_down:**Flymcu**](./flymcu.zip) tools to your PC and unzip it.   

### Steps for Uploading Bootloader
#### :one: Short the "boot0" pin on the control board and then power on the control board, and then disconnect "boot0" pin.
:star2: You can use a metal tweezers to short the two points shown in the following picture.    
![](5.gif)
![](ZM3E4V1.jpg) ![](ZM3E4V2.jpg) ![](ZM3E4V3.jpg)      
:warning: ZM3E4V3 has a jumper for selecting to supply power from USB (“NO” is selected by default). Before downloading, the jumper needs to be moved to "YES" (the right position).  
![](ZM3E4V3_01.jpg) 
#### :two: Run Flymcu, and choose the com port of your UART tool
![](1.jpg)
#### :three: Load bootload hex file
![](2.jpg)
![](3.jpg)
#### :four: Click "start ISP" to start upload bootloader
![](flash.gif)
#### :five: Wait until downloading finished.
Usually it take about 15 seconds, you can see the log information in the right window of Flymcu.   
![](6.jpg)

### After uploaded bootloader, you can upload the firmware to the control board by SD card.


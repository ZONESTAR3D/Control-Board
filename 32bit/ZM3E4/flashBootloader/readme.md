## How to flash "bootloader" of ZM3E4 control board
### Tools
You need a simply UART tool to flash the bootloader to control board, for example a "USB to TTL Serial" converter, it looks like the picture below[:point_right: sell link](https://www.aliexpress.com/item/32345829369.html).
![](./tool.jpg) 

### Wiring
![](0.jpg)
>
    +5V         <--> If you UART need support power, connect it to your UART tool, otherwire let it float.   
    TX0(PA9)    <--> connect to "RXD" of the UART tool  
    RX0(PA10)   <--> connect to "TXD" of the UART tool   
    GND         <--> connect to "GND" of the UART tool   

### Download bootload bin file and tool
Download the [:arrow_down:**bootload bin file**](./ZM3E4_SDBootloader.zip) to your PC and unzip it.
Download the [:arrow_down:**Flymcu**](./flymcu.zip) tools to your PC and unzip it.

### Bootload upload steps
#### ::one: Short the "boot0" pin on the control board and then power on the control board, and then disconnect "boot0" pin.
:star2: You can use a metal tweezers to short the two points shown in the following picture.    
![](5.gif)
![](ZM3E4V1.jpg)
![](ZM3E4V2.jpg)
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
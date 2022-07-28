## Flash the bootload to the ZM3E4 control board
### Wiring
![](0.jpg)
>
    +5V         <--> If you UART need support power, connect it to your UART tool, otherwire let it go   
    TX0(PA9)    <--> connect to "TXD" of the UART tool  
    RX0(PA10)   <--> connect to "RXD" of the UART tool   
    GND         <--> connect to "RXD" of the UART tool   
### Download bootload bin file and tool
Download the [bootload bin file :arrow_down:]() to your PC and unzip it
Download the [flymcu :arrow_down:]() tools to your PC and unzip it
### run flymcu, and choose the com port of your UART tool
![](1.jpg)
### load bootload bin file
![](2.jpg)
![](3.jpg)
### click the start ISP button on "flymcu" tool
![](4.jpg)
### short the "boot0" pin on the control board and then power on the control board
:star2: You can use a metal tweezers to short circuit the two points shown in the following picture.    
![](5.jpg)
### Wait until downloading finished.
Usually it take about 5~ 6 seconds, you can see the log information in the right window.   
![](6.jpg)
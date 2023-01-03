# ZM3E4 control board documents 
#### :arrow_down: [Download 3D drawing of ZM3E4](./zm3e4_step.zip)

-----
## :file_folder:[ZM3E4V1.0](./ZM3E4V1/)
### Schematic diagram  
- **[:blue_book: pdf file](./ZM3E4V1/SCH_ZM3E4V1.pdf)** 
- **[:art: Schematic Diagram](./ZM3E4V1/SCH_ZM3E4V1.jpg)**
### PCB
- **[:blue_book: pdf file](./ZM3E4V1/PCB_ZM3E4_V1.pdf)** 
- **[:art: PCB TOP Layer](./ZM3E4V1/PCB_TOP_ZM3E4_V1.jpg)** 
- **[:art: PCB Bottom Layer](./ZM3E4V1/PCB_BOTTOM_ZM3E4_V1.jpg)** 

### Pin define  
Please refer to the file: [***pins_ZM3E4_V1_0.h***](./ZM3E4V1/pins_ZM3E4_V1_0.h)

## :file_folder: [ZM3E4V2.0](./ZM3E4V20/)
### Schematic diagram
- **[:blue_book: pdf file](./ZM3E4V20/SCH_ZM3E4V20.pdf)** 
- **[:art: Schematic Diagram](./ZM3E4V20/SCH_ZM3E4V20.jpg)**
### PCB
- **[:blue_book: pdf file](./ZM3E4V20/PCB_ZM3E4_V20.pdf)** 
- **[:art: PCB TOP Layer](./ZM3E4V20/PCB_TOP_ZM3E4_V20.jpg)**  
- **[:art: PCB Bottom Layer](./ZM3E4V20/PCB_BOTTOM_ZM3E4_V20.jpg)**  
### Pin define
Please refer to the file: [***pins_ZM3E4_V2_0.h***](./ZM3E4V20/pins_ZM3E4_V2_0.h)

## :file_folder: [ZM3E4V2.1](./ZM3E4V21/)
### Schematic diagram
- **[:blue_book: pdf file](./ZM3E4V21/SCH_ZM3E4V21.pdf)** 
- **[:art: Schematic Diagram](./ZM3E4V21/SCH_ZM3E4V21.jpg)**
### PCB
- **[:blue_book: pdf file](./ZM3E4V21/PCB_ZM3E4_V21.pdf)** 
- **[:art: PCB TOP Layer](./ZM3E4V21/PCB_TOP_ZM3E4_V21.jpg)**  
- **[:art: PCB Bottom Layer](./ZM3E4V21/PCB_BOTTOM_ZM3E4_V21.jpg)**  
### Pin define
Pin define is the same with ZM3E4V2.0, please refer to the file: [***pins_ZM3E4_V2_0.h***](./ZM3E4V20/pins_ZM3E4_V2_0.h)

-----
## :file_folder: [Bootloader](./flashBootloader/readme.md)
Bootloader is the boot program inside MCU. After MCU is started, it is necessary to run the bootloader to load the application program (Marlin) to the memory of MCU for running. At the same time, the Bootloader also has a built-in SD card driver and file system to achieve the function of upgrading firmware (Marlin program) through the SD card.     
About how to flash bootloader to the control board, please refer to [**here**](./flashBootloader/readme.md)


-----
## Wiring Diagram 
- **[Common wiring diagram for common motor wires](./Wiring/ZM3E4_Wiring_Diagram_4PINMotorCable.jpg)**
- **[Common wiring diagram for 6 pin motor wires(motor + ENDSTOPs)](./Wiring/ZM3E4_Wiring_Diagram_6PINMotorCable.jpg)**
- **[Wiring Diagram for Z8 & Z10](./Wiring/Z8_Z10_ZM3E4_DualZ_6PinMotorWire.jpg)**
- **[Wiring Diagram for Z9M3](./Wiring/Z9M3_ZM3E4.jpg)**
- **[Wiring Diagram for Z9M4](./Wiring/Z9M4_ZM3E4.jpg)**
- **[Wiring Diagram for Z9V5](./Wiring/Z9V5_ZM3E4.jpg)**

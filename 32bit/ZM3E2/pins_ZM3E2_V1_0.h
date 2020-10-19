/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2019 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#pragma once

#ifndef __STM32F1__
  #error "Oops! Select an STM32F1 board in 'Tools > Board.'"  
#endif

#define BOARD_INFO_NAME      "ZONESTAR ZM3E2 V1.0"

#define DISABLE_DEBUG
//#define DISABLE_JTAG



#define FLASH_EEPROM_EMULATION
#define EEPROM_PAGE_SIZE     (0x800) // 2KB
#define EEPROM_START_ADDRESS uint32(0x8000000 + (STM32_FLASH_SIZE) * 1024 - 2 * EEPROM_PAGE_SIZE)
#define E2END                (EEPROM_PAGE_SIZE - 1)


//=============================================================================
// ZONESTAR ZM3E2 V1.0 (STM32F130RCT6) board pin assignments
//=============================================================================
//	PA0		PWR_HOLD	//	PB0		BEEP			//	PC0	   		HEATER_0			  
//	PA1     FAN_PIN     //	PB1     KILL            //	PC1         HEATER_BED               
//	PA2	    TX2    		//	PB2	    LCD_SDA         //	PC2	        TEMP_BED              
//	PA3	    RX2    		//	PB3	    E1_EN           //	PC3	        TEMP_E0
//	PA4     SD_CS		//	PB4     Z_STOP          //	PC4         SD_DETECT
//	PA5     SD_SCK      //	PB5     Z_DIR           //	PC5         BTN_EN2
//	PA6     SD_MISO 	//	PB6     Z_STEP          //	PC6         FAN1
//	PA7     SD_MOSI     //	PB7     Z_EN            //	PC7         FIL_RUNOUT
//	PA8     SD_SCK      //	PB8     Y_STEP          //	PC8         X_EN
//	PA9     X_DIR       //	PB9     Y_DIR           //	PC9         X_STEP
//	PA10    LCD_SCK     //	PB10    BTN_ENC         //	PC10        Z_MIN_PROBE_PIN
//	PA11    USB_D-      //	PB11    BTN_EN1         //	PC11        FIL_RUNOUT2
//	PA12    USB_D+      //	PB12    LED             //	PC12        E1_DIR
//	PA13    MS1         //	PB13    E0_EN           //	PC13        Y_STOP
//	PA14    MS2         //	PB14    E0_STEP         //	PC14        Y_EN
//	PA15    PWM         //	PB15    E0_DIR          //	PC15        X_STOP

//	PD0	 	NC
//	PD1     NC
//	PD2	    E1_STEP
//=============================================================================

//EXP1 connector
//	   MARK     I/O     
//	10	MOSI 	PB1    	KILL
//	9	SCK  	PB0		BEEP
//	8	TX1  	PA9		DOGLCD_CS
//	7	RX1  	PA10	DOGLCD_SCK
//	6	ENA	 	PC5    	BTN_EN2
//	5	DAT  	PB2    	DOGLCD_MOSI
//	4	TX3  	PB10   	BTN_ENC
//	3	RX3  	PB11	BTN_EN1
//	2	+5V
//	1	GND

//AUX1 connector
//	1	+5V 	    	
//	2	TX2  	PA2		UART2_TX
//	3	RX2  	PA3		UART2_RX
//	4	GND

//AUX2 connector to BLtouch
//	1	+5V 	    	
//	2	SEN  	
//	3	PWM  	
//	4	GND
//=============================================================================


//
// Limit Switches
//
#define X_STOP_PIN         PC15
#define Y_STOP_PIN         PC13
#define Z_STOP_PIN         PB4

//
// Steppers
//
#define	MS1_PIN	   		   PA13
#define	MS2_PIN	   		   PA14

#define X_STEP_PIN         PC9
#define X_DIR_PIN          PA8
#define X_ENABLE_PIN       PC8

#define Y_STEP_PIN         PB8
#define Y_DIR_PIN          PB9
#define Y_ENABLE_PIN       PC14

#define Z_STEP_PIN         PB6
#define Z_DIR_PIN          PB5
#define Z_ENABLE_PIN       PB7

#define E0_STEP_PIN        PB14
#define E0_DIR_PIN         PB15
#define E0_ENABLE_PIN      PB13

#define E1_STEP_PIN        PD2
#define E1_DIR_PIN         PC12
#define E1_ENABLE_PIN      PB3

//
// Heaters
//
#define HEATER_0_PIN       PC0   // EXTRUDER 1
#define HEATER_BED_PIN     PC1   // BED

//
// Temperature Sensors
//
#define TEMP_BED_PIN       PC2   // Analog Input
#define TEMP_0_PIN         PC3   // Analog Input

//
// Fans
//
#define FAN1_PIN            PC6
#define FAN_PIN             PA1


//Filament run out sensor
#define	FIL_RUNOUT_PIN	   	PC7 			//E0_SW
//#define	FIL_RUNOUT2_PIN	   PC11			//E1_SW

//BLTouch(3DTouch)
#define	SERVO0_PIN		   PA15
#define	Z_MIN_PROBE_PIN	   PC10


#define LED_PIN            PB12
#define	KILL_PIN		   PB1			//@EXP1
#define	SUICIDE_PIN		   PA0

//SD card
#define SD_DETECT_PIN      PC4
#define HAS_ONBOARD_SD
#ifndef SDCARD_CONNECTION
  #define SDCARD_CONNECTION              ONBOARD
#endif
#if SD_CONNECTION_IS(ONBOARD)
#define ENABLE_SPI1
#define SD_DETECT_PIN      PC4
#define SCK_PIN            PA5
#define MISO_PIN           PA6
#define MOSI_PIN           PA7
#define SS_PIN             PA4
#endif
#define ON_BOARD_SPI_DEVICE 1       //SPI1
#define ONBOARD_SD_CS_PIN  PA4   	// Chip select for "System" SD card

//
// LCD Pins
//
#if ENABLED(ZONESTAR_12864LCD)
#define	LCDSCREEN_NAME		"ZONESTAR LCD12864"
#define LCD_PINS_RS 		PA9		//7 DOGLCD_CS
#define LCD_PINS_ENABLE 	PB2		//6 DOGLCD_MOSI
#define LCD_PINS_D4 		PA10	//8 DOGLCD_SCK
#define LCD_PINS_D5 		-1    	//mosi
#define LCD_PINS_D6 		-1      
#define LCD_PINS_D7 		-1
#define BEEPER_PIN          PB0	
#define BTN_EN1 			PB11
#define BTN_EN2 			PC5
#define BTN_ENC 			PB10
#endif 

#if HAS_GRAPHICAL_LCD
#define BOARD_ST7920_DELAY_1 DELAY_NS(125)
#define BOARD_ST7920_DELAY_2 DELAY_NS(150)
#define BOARD_ST7920_DELAY_3 DELAY_NS(125)
#endif



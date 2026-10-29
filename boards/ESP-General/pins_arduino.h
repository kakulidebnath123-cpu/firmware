
#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <stdint.h>

#define USB_VID 0x303a
#define USB_PID 0x1001

// SHARED SPI HARDWARE BUS
#define SPI_MOSI             23  
#define SPI_MISO             19  
#define SPI_SCLK             18  

// ILI9341 2.8" SCREEN PINMAP
#define BOARD_HAS_TFT
#define TFT_MOSI             SPI_MOSI
#define TFT_MISO             SPI_MISO
#define TFT_SCLK             SPI_SCLK
#define TFT_CS                2  
#define TFT_DC                4  
#define TFT_RST              15  
#define TFT_BL                0  

// 5-SWITCH NAVIGATION INTERFACE
#define BUTTON_UP            13  
#define BUTTON_DOWN          14  
#define BUTTON_LEFT          25  
#define BUTTON_RIGHT         32  
#define BUTTON_SELECT        33  

// NRF24L01 2.4GHz CONFIGURATION
#define HAS_NRF24
#define NRF24_MOSI           SPI_MOSI
#define NRF24_MISO           SPI_MISO
#define NRF24_SCK            SPI_SCLK
#define NRF24_CS             26  
#define NRF24_CE             27  

// CC1101 SUB-GHz CONFIGURATION
#define HAS_CC1101
#define CC1101_MOSI          SPI_MOSI
#define CC1101_MISO          SPI_MISO
#define CC1101_SCK           SPI_SCLK
#define CC1101_CS             5  
#define CC1101_GDO0          12  

// PN532 NFC MODULE CONFIGURATION
#define HAS_PN532
#define PN532_SDA            21  
#define PN532_SCL            22  

// INFRARED SNIFFER/BLASTER
#define HAS_IR
#define IR_RX_PIN            16  
#define IR_TX_PIN            17  

#endif

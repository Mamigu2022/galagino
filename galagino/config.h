#ifndef _CONFIG_H_
#define _CONFIG_H_

// disable e.g. if roms are missing
#define ENABLE_PACMAN
#define ENABLE_GALAGA
#define ENABLE_DKONG
#define ENABLE_FROGGER
#define ENABLE_DIGDUG
#define ENABLE_1942

#if !defined(ENABLE_PACMAN) && !defined(ENABLE_GALAGA) && !defined(ENABLE_DKONG) && !defined(ENABLE_FROGGER) && !defined(ENABLE_DIGDUG) && !defined(ENABLE_1942)
#error "At least one machine has to be enabled!"
#endif

// check if only one machine is enabled
#if (( defined(ENABLE_PACMAN) && !defined(ENABLE_GALAGA) && !defined(ENABLE_DKONG) && !defined(ENABLE_FROGGER) && !defined(ENABLE_DIGDUG) && !defined(ENABLE_1942)) || \
     (!defined(ENABLE_PACMAN) &&  defined(ENABLE_GALAGA) && !defined(ENABLE_DKONG) && !defined(ENABLE_FROGGER) && !defined(ENABLE_DIGDUG) && !defined(ENABLE_1942)) || \
     (!defined(ENABLE_PACMAN) && !defined(ENABLE_GALAGA) &&  defined(ENABLE_DKONG) && !defined(ENABLE_FROGGER) && !defined(ENABLE_DIGDUG) && !defined(ENABLE_1942)) || \
     (!defined(ENABLE_PACMAN) && !defined(ENABLE_GALAGA) && !defined(ENABLE_DKONG) &&  defined(ENABLE_FROGGER) && !defined(ENABLE_DIGDUG) && !defined(ENABLE_1942)) || \
     (!defined(ENABLE_PACMAN) && !defined(ENABLE_GALAGA) && !defined(ENABLE_DKONG) && !defined(ENABLE_FROGGER) &&  defined(ENABLE_DIGDUG) && !defined(ENABLE_1942)) || \
     (!defined(ENABLE_PACMAN) && !defined(ENABLE_GALAGA) && !defined(ENABLE_DKONG) && !defined(ENABLE_FROGGER) && !defined(ENABLE_DIGDUG) &&  defined(ENABLE_1942)))
  #define SINGLE_MACHINE
#endif

// game config

#define MASTER_ATTRACT_MENU_TIMEOUT  20000   // start games randomly while sitting idle in menu for 20 seconds, undefine to disable

#include "dip_switches.h"


// x and y offset of 224x288 pixels inside the 240x320 screen
#define TFT_X_OFFSET  8
#define TFT_Y_OFFSET 16

//#define LED_PIN        16   // pin used for optional WS2812 stripe
#define LED_BRIGHTNESS 50   // range 0..255

// audio config
 //#define SND_DIFF   // set to output differential audio on GPIO25 _and_ inverted on GPIO26
#define SND_LEFT_CHANNEL
// Pins used for buttons
#define BTN_START_PIN  27
#define BTN_COIN_PIN   32   // if this is not defined, then start will act as coin & start
//#ifdef ODROID_GO
//#define EJE_X          34
//#define EJE_Y          35
//#else
#define BTN_LEFT_PIN   12
#define BTN_RIGHT_PIN  0
#define BTN_DOWN_PIN   4
#define BTN_UP_PIN      2
//#endif
#define BTN_FIRE_PIN   13
#define BUTTON_EXTRA    32
//#define TFT_MAC  0x20  // some CYD need this to rotate properly and have correct colors

// video config
#define TFT_SPICLK 40000000 // 40 Mhz. Some displays cope with 80 Mhz

#define TFT_MISO -1
#define TFT_MOSI 23
#define TFT_SCLK 18

#define TFT_CS 5
#define TFT_DC 21
#define TFT_RST -1
#define TFT_BL 14   // don't set if backlight is hard wired
#define TFT_ILI9341 // define for ili9341, otherwise st7789
 #define TFT_VFLIP   // define for upside down

// #define TFT_MAC  0x20  // some CYD need this to rotate properly and have correct colors

// x and y offset of 224x288 pixels inside the 240x320 screen
#define TFT_X_OFFSET 8
#define TFT_Y_OFFSET 16

//#define LED_PIN 16        // pin used for optional WS2812 stripe
#define LED_BRIGHTNESS 50 // range 0..255

// audio config (leave both commented out for GPIO 25 for Audio)
// #define SND_DIFF   // set to output differential audio on GPIO25 _and_ inverted on GPIO26
#define SND_LEFT_CHANNEL // Use GPIO 26 for audio

//#define NUNCHUCK_INPUT

#define NUNCHUCK_SDA 16
#define NUNCHUCK_SCL 17

#define NUNCHUCK_MOVE_THRESHOLD 30 // This is the dead-zone for where minor movements on the stick will not be considered valid movements

// Pins used for buttons


#endif // _CONFIG_H_

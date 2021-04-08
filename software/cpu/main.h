#ifndef DEFINES
#define DEFINES

// ===== Includes =====
#include "system.h"
#include "altera_avalon_pio_regs.h"

#include <stdlib.h>
// ====================

// ===== My overrides =====
#define uint8_t unsigned char
#define uint16_t unsigned short

#define true  1
#define false 0
// ========================

// ===== Game constants =====
#define DELAY 125000

#define MOVEMENT_UP    0
#define MOVEMENT_DOWN  1
#define MOVEMENT_RIGHT 2
#define MOVEMENT_LEFT  3

#define SIZE_X   16
#define SIZE_Y   12
#define SIZE_XY 192
// ==============================

#endif

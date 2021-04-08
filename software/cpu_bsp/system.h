/*
 * system.h - SOPC Builder system and BSP software package information
 *
 * Machine generated for CPU 'nios2_gen2_0' in SOPC Builder design 'cpu'
 * SOPC Builder design path: C:/Users/User/Desktop/Coursework-on-Verilog/cpu.sopcinfo
 *
 * Generated: Wed May 05 18:49:21 MSK 2021
 */

/*
 * DO NOT MODIFY THIS FILE
 *
 * Changing this file will have subtle consequences
 * which will almost certainly lead to a nonfunctioning
 * system. If you do modify this file, be aware that your
 * changes will be overwritten and lost when this file
 * is generated again.
 *
 * DO NOT MODIFY THIS FILE
 */

/*
 * License Agreement
 *
 * Copyright (c) 2008
 * Altera Corporation, San Jose, California, USA.
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * This agreement shall be governed in all respects by the laws of the State
 * of California and by the laws of the United States of America.
 */

#ifndef __SYSTEM_H_
#define __SYSTEM_H_

/* Include definitions from linker script generator */
#include "linker.h"


/*
 * CPU configuration
 *
 */

#define ALT_CPU_ARCHITECTURE "altera_nios2_gen2"
#define ALT_CPU_BIG_ENDIAN 0
#define ALT_CPU_BREAK_ADDR 0x00008820
#define ALT_CPU_CPU_ARCH_NIOS2_R1
#define ALT_CPU_CPU_FREQ 50000000u
#define ALT_CPU_CPU_ID_SIZE 1
#define ALT_CPU_CPU_ID_VALUE 0x00000000
#define ALT_CPU_CPU_IMPLEMENTATION "tiny"
#define ALT_CPU_DATA_ADDR_WIDTH 0x10
#define ALT_CPU_DCACHE_LINE_SIZE 0
#define ALT_CPU_DCACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_DCACHE_SIZE 0
#define ALT_CPU_EXCEPTION_ADDR 0x00004020
#define ALT_CPU_FLASH_ACCELERATOR_LINES 0
#define ALT_CPU_FLASH_ACCELERATOR_LINE_SIZE 0
#define ALT_CPU_FLUSHDA_SUPPORTED
#define ALT_CPU_FREQ 50000000
#define ALT_CPU_HARDWARE_DIVIDE_PRESENT 0
#define ALT_CPU_HARDWARE_MULTIPLY_PRESENT 0
#define ALT_CPU_HARDWARE_MULX_PRESENT 0
#define ALT_CPU_HAS_DEBUG_CORE 1
#define ALT_CPU_HAS_DEBUG_STUB
#define ALT_CPU_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define ALT_CPU_HAS_JMPI_INSTRUCTION
#define ALT_CPU_ICACHE_LINE_SIZE 0
#define ALT_CPU_ICACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_ICACHE_SIZE 0
#define ALT_CPU_INST_ADDR_WIDTH 0x10
#define ALT_CPU_NAME "nios2_gen2_0"
#define ALT_CPU_OCI_VERSION 1
#define ALT_CPU_RESET_ADDR 0x00004000


/*
 * CPU configuration (with legacy prefix - don't use these anymore)
 *
 */

#define NIOS2_BIG_ENDIAN 0
#define NIOS2_BREAK_ADDR 0x00008820
#define NIOS2_CPU_ARCH_NIOS2_R1
#define NIOS2_CPU_FREQ 50000000u
#define NIOS2_CPU_ID_SIZE 1
#define NIOS2_CPU_ID_VALUE 0x00000000
#define NIOS2_CPU_IMPLEMENTATION "tiny"
#define NIOS2_DATA_ADDR_WIDTH 0x10
#define NIOS2_DCACHE_LINE_SIZE 0
#define NIOS2_DCACHE_LINE_SIZE_LOG2 0
#define NIOS2_DCACHE_SIZE 0
#define NIOS2_EXCEPTION_ADDR 0x00004020
#define NIOS2_FLASH_ACCELERATOR_LINES 0
#define NIOS2_FLASH_ACCELERATOR_LINE_SIZE 0
#define NIOS2_FLUSHDA_SUPPORTED
#define NIOS2_HARDWARE_DIVIDE_PRESENT 0
#define NIOS2_HARDWARE_MULTIPLY_PRESENT 0
#define NIOS2_HARDWARE_MULX_PRESENT 0
#define NIOS2_HAS_DEBUG_CORE 1
#define NIOS2_HAS_DEBUG_STUB
#define NIOS2_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define NIOS2_HAS_JMPI_INSTRUCTION
#define NIOS2_ICACHE_LINE_SIZE 0
#define NIOS2_ICACHE_LINE_SIZE_LOG2 0
#define NIOS2_ICACHE_SIZE 0
#define NIOS2_INST_ADDR_WIDTH 0x10
#define NIOS2_OCI_VERSION 1
#define NIOS2_RESET_ADDR 0x00004000


/*
 * Define for each module class mastered by the CPU
 *
 */

#define __ALTERA_AVALON_ONCHIP_MEMORY2
#define __ALTERA_AVALON_PIO
#define __ALTERA_NIOS2_GEN2


/*
 * System configuration
 *
 */

#define ALT_DEVICE_FAMILY "Cyclone IV E"
#define ALT_IRQ_BASE NULL
#define ALT_LOG_PORT "/dev/null"
#define ALT_LOG_PORT_BASE 0x0
#define ALT_LOG_PORT_DEV null
#define ALT_LOG_PORT_TYPE ""
#define ALT_NUM_EXTERNAL_INTERRUPT_CONTROLLERS 0
#define ALT_NUM_INTERNAL_INTERRUPT_CONTROLLERS 1
#define ALT_NUM_INTERRUPT_CONTROLLERS 1
#define ALT_STDERR "/dev/null"
#define ALT_STDERR_BASE 0x0
#define ALT_STDERR_DEV null
#define ALT_STDERR_TYPE ""
#define ALT_STDIN "/dev/null"
#define ALT_STDIN_BASE 0x0
#define ALT_STDIN_DEV null
#define ALT_STDIN_TYPE ""
#define ALT_STDOUT "/dev/null"
#define ALT_STDOUT_BASE 0x0
#define ALT_STDOUT_DEV null
#define ALT_STDOUT_TYPE ""
#define ALT_SYSTEM_NAME "cpu"


/*
 * apple_o configuration
 *
 */

#define ALT_MODULE_CLASS_apple_o altera_avalon_pio
#define APPLE_O_BASE 0x9030
#define APPLE_O_BIT_CLEARING_EDGE_REGISTER 0
#define APPLE_O_BIT_MODIFYING_OUTPUT_REGISTER 0
#define APPLE_O_CAPTURE 0
#define APPLE_O_DATA_WIDTH 16
#define APPLE_O_DO_TEST_BENCH_WIRING 0
#define APPLE_O_DRIVEN_SIM_VALUE 0
#define APPLE_O_EDGE_TYPE "NONE"
#define APPLE_O_FREQ 50000000
#define APPLE_O_HAS_IN 0
#define APPLE_O_HAS_OUT 1
#define APPLE_O_HAS_TRI 0
#define APPLE_O_IRQ -1
#define APPLE_O_IRQ_INTERRUPT_CONTROLLER_ID -1
#define APPLE_O_IRQ_TYPE "NONE"
#define APPLE_O_NAME "/dev/apple_o"
#define APPLE_O_RESET_VALUE 0
#define APPLE_O_SPAN 16
#define APPLE_O_TYPE "altera_avalon_pio"


/*
 * erace_o configuration
 *
 */

#define ALT_MODULE_CLASS_erace_o altera_avalon_pio
#define ERACE_O_BASE 0x9010
#define ERACE_O_BIT_CLEARING_EDGE_REGISTER 0
#define ERACE_O_BIT_MODIFYING_OUTPUT_REGISTER 0
#define ERACE_O_CAPTURE 0
#define ERACE_O_DATA_WIDTH 16
#define ERACE_O_DO_TEST_BENCH_WIRING 0
#define ERACE_O_DRIVEN_SIM_VALUE 0
#define ERACE_O_EDGE_TYPE "NONE"
#define ERACE_O_FREQ 50000000
#define ERACE_O_HAS_IN 0
#define ERACE_O_HAS_OUT 1
#define ERACE_O_HAS_TRI 0
#define ERACE_O_IRQ -1
#define ERACE_O_IRQ_INTERRUPT_CONTROLLER_ID -1
#define ERACE_O_IRQ_TYPE "NONE"
#define ERACE_O_NAME "/dev/erace_o"
#define ERACE_O_RESET_VALUE 0
#define ERACE_O_SPAN 16
#define ERACE_O_TYPE "altera_avalon_pio"


/*
 * hal configuration
 *
 */

#define ALT_INCLUDE_INSTRUCTION_RELATED_EXCEPTION_API
#define ALT_MAX_FD 32
#define ALT_SYS_CLK none
#define ALT_TIMESTAMP_CLK none


/*
 * movement_i configuration
 *
 */

#define ALT_MODULE_CLASS_movement_i altera_avalon_pio
#define MOVEMENT_I_BASE 0x9040
#define MOVEMENT_I_BIT_CLEARING_EDGE_REGISTER 0
#define MOVEMENT_I_BIT_MODIFYING_OUTPUT_REGISTER 0
#define MOVEMENT_I_CAPTURE 0
#define MOVEMENT_I_DATA_WIDTH 2
#define MOVEMENT_I_DO_TEST_BENCH_WIRING 0
#define MOVEMENT_I_DRIVEN_SIM_VALUE 0
#define MOVEMENT_I_EDGE_TYPE "NONE"
#define MOVEMENT_I_FREQ 50000000
#define MOVEMENT_I_HAS_IN 1
#define MOVEMENT_I_HAS_OUT 0
#define MOVEMENT_I_HAS_TRI 0
#define MOVEMENT_I_IRQ -1
#define MOVEMENT_I_IRQ_INTERRUPT_CONTROLLER_ID -1
#define MOVEMENT_I_IRQ_TYPE "NONE"
#define MOVEMENT_I_NAME "/dev/movement_i"
#define MOVEMENT_I_RESET_VALUE 0
#define MOVEMENT_I_SPAN 16
#define MOVEMENT_I_TYPE "altera_avalon_pio"


/*
 * onchip_memory2_0 configuration
 *
 */

#define ALT_MODULE_CLASS_onchip_memory2_0 altera_avalon_onchip_memory2
#define ONCHIP_MEMORY2_0_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define ONCHIP_MEMORY2_0_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define ONCHIP_MEMORY2_0_BASE 0x4000
#define ONCHIP_MEMORY2_0_CONTENTS_INFO ""
#define ONCHIP_MEMORY2_0_DUAL_PORT 0
#define ONCHIP_MEMORY2_0_GUI_RAM_BLOCK_TYPE "AUTO"
#define ONCHIP_MEMORY2_0_INIT_CONTENTS_FILE "cpu_onchip_memory2_0"
#define ONCHIP_MEMORY2_0_INIT_MEM_CONTENT 1
#define ONCHIP_MEMORY2_0_INSTANCE_ID "NONE"
#define ONCHIP_MEMORY2_0_IRQ -1
#define ONCHIP_MEMORY2_0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define ONCHIP_MEMORY2_0_NAME "/dev/onchip_memory2_0"
#define ONCHIP_MEMORY2_0_NON_DEFAULT_INIT_FILE_ENABLED 0
#define ONCHIP_MEMORY2_0_RAM_BLOCK_TYPE "AUTO"
#define ONCHIP_MEMORY2_0_READ_DURING_WRITE_MODE "DONT_CARE"
#define ONCHIP_MEMORY2_0_SINGLE_CLOCK_OP 0
#define ONCHIP_MEMORY2_0_SIZE_MULTIPLE 1
#define ONCHIP_MEMORY2_0_SIZE_VALUE 16384
#define ONCHIP_MEMORY2_0_SPAN 16384
#define ONCHIP_MEMORY2_0_TYPE "altera_avalon_onchip_memory2"
#define ONCHIP_MEMORY2_0_WRITABLE 1


/*
 * rst_n_i configuration
 *
 */

#define ALT_MODULE_CLASS_rst_n_i altera_avalon_pio
#define RST_N_I_BASE 0x9050
#define RST_N_I_BIT_CLEARING_EDGE_REGISTER 0
#define RST_N_I_BIT_MODIFYING_OUTPUT_REGISTER 0
#define RST_N_I_CAPTURE 0
#define RST_N_I_DATA_WIDTH 1
#define RST_N_I_DO_TEST_BENCH_WIRING 0
#define RST_N_I_DRIVEN_SIM_VALUE 0
#define RST_N_I_EDGE_TYPE "NONE"
#define RST_N_I_FREQ 50000000
#define RST_N_I_HAS_IN 1
#define RST_N_I_HAS_OUT 0
#define RST_N_I_HAS_TRI 0
#define RST_N_I_IRQ -1
#define RST_N_I_IRQ_INTERRUPT_CONTROLLER_ID -1
#define RST_N_I_IRQ_TYPE "NONE"
#define RST_N_I_NAME "/dev/rst_n_i"
#define RST_N_I_RESET_VALUE 0
#define RST_N_I_SPAN 16
#define RST_N_I_TYPE "altera_avalon_pio"


/*
 * score_o configuration
 *
 */

#define ALT_MODULE_CLASS_score_o altera_avalon_pio
#define SCORE_O_BASE 0x9000
#define SCORE_O_BIT_CLEARING_EDGE_REGISTER 0
#define SCORE_O_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SCORE_O_CAPTURE 0
#define SCORE_O_DATA_WIDTH 8
#define SCORE_O_DO_TEST_BENCH_WIRING 0
#define SCORE_O_DRIVEN_SIM_VALUE 0
#define SCORE_O_EDGE_TYPE "NONE"
#define SCORE_O_FREQ 50000000
#define SCORE_O_HAS_IN 0
#define SCORE_O_HAS_OUT 1
#define SCORE_O_HAS_TRI 0
#define SCORE_O_IRQ -1
#define SCORE_O_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SCORE_O_IRQ_TYPE "NONE"
#define SCORE_O_NAME "/dev/score_o"
#define SCORE_O_RESET_VALUE 0
#define SCORE_O_SPAN 16
#define SCORE_O_TYPE "altera_avalon_pio"


/*
 * snake_head_o configuration
 *
 */

#define ALT_MODULE_CLASS_snake_head_o altera_avalon_pio
#define SNAKE_HEAD_O_BASE 0x9020
#define SNAKE_HEAD_O_BIT_CLEARING_EDGE_REGISTER 0
#define SNAKE_HEAD_O_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SNAKE_HEAD_O_CAPTURE 0
#define SNAKE_HEAD_O_DATA_WIDTH 16
#define SNAKE_HEAD_O_DO_TEST_BENCH_WIRING 0
#define SNAKE_HEAD_O_DRIVEN_SIM_VALUE 0
#define SNAKE_HEAD_O_EDGE_TYPE "NONE"
#define SNAKE_HEAD_O_FREQ 50000000
#define SNAKE_HEAD_O_HAS_IN 0
#define SNAKE_HEAD_O_HAS_OUT 1
#define SNAKE_HEAD_O_HAS_TRI 0
#define SNAKE_HEAD_O_IRQ -1
#define SNAKE_HEAD_O_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SNAKE_HEAD_O_IRQ_TYPE "NONE"
#define SNAKE_HEAD_O_NAME "/dev/snake_head_o"
#define SNAKE_HEAD_O_RESET_VALUE 0
#define SNAKE_HEAD_O_SPAN 16
#define SNAKE_HEAD_O_TYPE "altera_avalon_pio"

#endif /* __SYSTEM_H_ */

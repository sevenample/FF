/*
 * system.h - SOPC Builder system and BSP software package information
 *
 * Machine generated for CPU 'nios2cpu' in SOPC Builder design 'DE0Qsys'
 * SOPC Builder design path: C:/Users/johnn/Desktop/final/02/Qsys/DE0Qsys.sopcinfo
 *
 * Generated: Sun Jun 08 17:34:26 CST 2025
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

#define ALT_CPU_ARCHITECTURE "altera_nios2_qsys"
#define ALT_CPU_BIG_ENDIAN 0
#define ALT_CPU_BREAK_ADDR 0x3000820
#define ALT_CPU_CPU_FREQ 133333328u
#define ALT_CPU_CPU_ID_SIZE 1
#define ALT_CPU_CPU_ID_VALUE 0x00000000
#define ALT_CPU_CPU_IMPLEMENTATION "tiny"
#define ALT_CPU_DATA_ADDR_WIDTH 0x1a
#define ALT_CPU_DCACHE_LINE_SIZE 0
#define ALT_CPU_DCACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_DCACHE_SIZE 0
#define ALT_CPU_EXCEPTION_ADDR 0x2800020
#define ALT_CPU_FLUSHDA_SUPPORTED
#define ALT_CPU_FREQ 133333328
#define ALT_CPU_HARDWARE_DIVIDE_PRESENT 0
#define ALT_CPU_HARDWARE_MULTIPLY_PRESENT 0
#define ALT_CPU_HARDWARE_MULX_PRESENT 0
#define ALT_CPU_HAS_DEBUG_CORE 1
#define ALT_CPU_HAS_DEBUG_STUB
#define ALT_CPU_HAS_JMPI_INSTRUCTION
#define ALT_CPU_ICACHE_LINE_SIZE 0
#define ALT_CPU_ICACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_ICACHE_SIZE 0
#define ALT_CPU_INST_ADDR_WIDTH 0x1a
#define ALT_CPU_NAME "nios2cpu"
#define ALT_CPU_RESET_ADDR 0x2800000


/*
 * CPU configuration (with legacy prefix - don't use these anymore)
 *
 */

#define NIOS2_BIG_ENDIAN 0
#define NIOS2_BREAK_ADDR 0x3000820
#define NIOS2_CPU_FREQ 133333328u
#define NIOS2_CPU_ID_SIZE 1
#define NIOS2_CPU_ID_VALUE 0x00000000
#define NIOS2_CPU_IMPLEMENTATION "tiny"
#define NIOS2_DATA_ADDR_WIDTH 0x1a
#define NIOS2_DCACHE_LINE_SIZE 0
#define NIOS2_DCACHE_LINE_SIZE_LOG2 0
#define NIOS2_DCACHE_SIZE 0
#define NIOS2_EXCEPTION_ADDR 0x2800020
#define NIOS2_FLUSHDA_SUPPORTED
#define NIOS2_HARDWARE_DIVIDE_PRESENT 0
#define NIOS2_HARDWARE_MULTIPLY_PRESENT 0
#define NIOS2_HARDWARE_MULX_PRESENT 0
#define NIOS2_HAS_DEBUG_CORE 1
#define NIOS2_HAS_DEBUG_STUB
#define NIOS2_HAS_JMPI_INSTRUCTION
#define NIOS2_ICACHE_LINE_SIZE 0
#define NIOS2_ICACHE_LINE_SIZE_LOG2 0
#define NIOS2_ICACHE_SIZE 0
#define NIOS2_INST_ADDR_WIDTH 0x1a
#define NIOS2_RESET_ADDR 0x2800000


/*
 * Define for each module class mastered by the CPU
 *
 */

#define __ALTERA_AVALON_JTAG_UART
#define __ALTERA_AVALON_NEW_SDRAM_CONTROLLER
#define __ALTERA_AVALON_PIO
#define __ALTERA_NIOS2_QSYS
#define __ALTPLL


/*
 * System configuration
 *
 */

#define ALT_DEVICE_FAMILY "Cyclone III"
#define ALT_ENHANCED_INTERRUPT_API_PRESENT
#define ALT_IRQ_BASE NULL
#define ALT_LOG_PORT "/dev/null"
#define ALT_LOG_PORT_BASE 0x0
#define ALT_LOG_PORT_DEV null
#define ALT_LOG_PORT_TYPE ""
#define ALT_NUM_EXTERNAL_INTERRUPT_CONTROLLERS 0
#define ALT_NUM_INTERNAL_INTERRUPT_CONTROLLERS 1
#define ALT_NUM_INTERRUPT_CONTROLLERS 1
#define ALT_STDERR "/dev/jtag_uart"
#define ALT_STDERR_BASE 0x40
#define ALT_STDERR_DEV jtag_uart
#define ALT_STDERR_IS_JTAG_UART
#define ALT_STDERR_PRESENT
#define ALT_STDERR_TYPE "altera_avalon_jtag_uart"
#define ALT_STDIN "/dev/jtag_uart"
#define ALT_STDIN_BASE 0x40
#define ALT_STDIN_DEV jtag_uart
#define ALT_STDIN_IS_JTAG_UART
#define ALT_STDIN_PRESENT
#define ALT_STDIN_TYPE "altera_avalon_jtag_uart"
#define ALT_STDOUT "/dev/jtag_uart"
#define ALT_STDOUT_BASE 0x40
#define ALT_STDOUT_DEV jtag_uart
#define ALT_STDOUT_IS_JTAG_UART
#define ALT_STDOUT_PRESENT
#define ALT_STDOUT_TYPE "altera_avalon_jtag_uart"
#define ALT_SYSTEM_NAME "DE0Qsys"


/*
 * hal configuration
 *
 */

#define ALT_MAX_FD 32
#define ALT_SYS_CLK none
#define ALT_TIMESTAMP_CLK none


/*
 * hex configuration
 *
 */

#define ALT_MODULE_CLASS_hex altera_avalon_pio
#define HEX_BASE 0x30
#define HEX_BIT_CLEARING_EDGE_REGISTER 0
#define HEX_BIT_MODIFYING_OUTPUT_REGISTER 0
#define HEX_CAPTURE 0
#define HEX_DATA_WIDTH 8
#define HEX_DO_TEST_BENCH_WIRING 0
#define HEX_DRIVEN_SIM_VALUE 0
#define HEX_EDGE_TYPE "NONE"
#define HEX_FREQ 10000000
#define HEX_HAS_IN 0
#define HEX_HAS_OUT 1
#define HEX_HAS_TRI 0
#define HEX_IRQ -1
#define HEX_IRQ_INTERRUPT_CONTROLLER_ID -1
#define HEX_IRQ_TYPE "NONE"
#define HEX_NAME "/dev/hex"
#define HEX_RESET_VALUE 0
#define HEX_SPAN 16
#define HEX_TYPE "altera_avalon_pio"


/*
 * jtag_uart configuration
 *
 */

#define ALT_MODULE_CLASS_jtag_uart altera_avalon_jtag_uart
#define JTAG_UART_BASE 0x40
#define JTAG_UART_IRQ 1
#define JTAG_UART_IRQ_INTERRUPT_CONTROLLER_ID 0
#define JTAG_UART_NAME "/dev/jtag_uart"
#define JTAG_UART_READ_DEPTH 64
#define JTAG_UART_READ_THRESHOLD 8
#define JTAG_UART_SPAN 8
#define JTAG_UART_TYPE "altera_avalon_jtag_uart"
#define JTAG_UART_WRITE_DEPTH 64
#define JTAG_UART_WRITE_THRESHOLD 8


/*
 * sdram_ctrl configuration
 *
 */

#define ALT_MODULE_CLASS_sdram_ctrl altera_avalon_new_sdram_controller
#define SDRAM_CTRL_BASE 0x2800000
#define SDRAM_CTRL_CAS_LATENCY 3
#define SDRAM_CTRL_CONTENTS_INFO
#define SDRAM_CTRL_INIT_NOP_DELAY 0.0
#define SDRAM_CTRL_INIT_REFRESH_COMMANDS 2
#define SDRAM_CTRL_IRQ -1
#define SDRAM_CTRL_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SDRAM_CTRL_IS_INITIALIZED 1
#define SDRAM_CTRL_NAME "/dev/sdram_ctrl"
#define SDRAM_CTRL_POWERUP_DELAY 200.0
#define SDRAM_CTRL_REFRESH_PERIOD 7.8125
#define SDRAM_CTRL_REGISTER_DATA_IN 1
#define SDRAM_CTRL_SDRAM_ADDR_WIDTH 0x16
#define SDRAM_CTRL_SDRAM_BANK_WIDTH 2
#define SDRAM_CTRL_SDRAM_COL_WIDTH 8
#define SDRAM_CTRL_SDRAM_DATA_WIDTH 16
#define SDRAM_CTRL_SDRAM_NUM_BANKS 4
#define SDRAM_CTRL_SDRAM_NUM_CHIPSELECTS 1
#define SDRAM_CTRL_SDRAM_ROW_WIDTH 12
#define SDRAM_CTRL_SHARED_DATA 0
#define SDRAM_CTRL_SIM_MODEL_BASE 0
#define SDRAM_CTRL_SPAN 8388608
#define SDRAM_CTRL_STARVATION_INDICATOR 0
#define SDRAM_CTRL_TRISTATE_BRIDGE_SLAVE ""
#define SDRAM_CTRL_TYPE "altera_avalon_new_sdram_controller"
#define SDRAM_CTRL_T_AC 5.5
#define SDRAM_CTRL_T_MRD 3
#define SDRAM_CTRL_T_RCD 20.0
#define SDRAM_CTRL_T_RFC 70.0
#define SDRAM_CTRL_T_RP 20.0
#define SDRAM_CTRL_T_WR 14.0


/*
 * syspll configuration
 *
 */

#define ALT_MODULE_CLASS_syspll altpll
#define SYSPLL_BASE 0x3001020
#define SYSPLL_IRQ -1
#define SYSPLL_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SYSPLL_NAME "/dev/syspll"
#define SYSPLL_SPAN 16
#define SYSPLL_TYPE "altpll"

#endif /* __SYSTEM_H_ */

# STM32_NUCLEO_C031C6_Blinky_Baremetal
Minimal C implementation for LED blink on STM32C031C6. Uses CubeMX and low level drivers for SWD/debug, clock initialization, and to generate a delay using SysTick. All GPIO configuration and toggling is done via direct memory-mapped register access. Project also includes a basic error handler.

###Hardware Setup

    **Board:** NUCLEO-C031C6
    
    **MCU:** STM32C031C6 (ARM Cortex-M0+)
    
    **Debugger:** ST-LINK V2-1 (SWD interface)

    **Onboard LED:** Configured to PA5 (User LED 4)

###Software Setup

  **IDE:** STM32CubeIDE 2.0.0 
  
  **Programming Languages:** C

  **Toolchain: ** GNU Tools for STM32 (installed automatically by IDE)

  **Libraries:** *STM32 LL libraries
    * CMISIS STM32C0xx
    * CMISIS STM32C031xx memory map

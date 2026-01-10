# Blinky
## STM32 NUCLEO-C031C6 Bare Metal Implementation

Bare-metal C implementation for LED blink on STM32C031C6. Uses CubeMX and low level drivers for SWD/debug, clock initialization, and to generate a delay using SysTick. All GPIO configuration and toggling is done via direct memory-mapped register access. Project also includes a basic error handler.

### 🛠️ STM32 Nucleo Setup

| Category | Details |
| :--- | :--- |
| **Hardware** | NUCLEO-C031C6 (ARM Cortex-M0+) |
| **Debugger** | ST-LINK V2-1 (SWD interface) |
| **IDE** | STM32CubeIDE 2.0.0 |
| **Toolchain** | GNU Tools for STM32 (13.3.rel1) |
| **Libraries** | STM32 LL, CMSIS STM32C0xx, CMSIS STM32C031xx |

<img width="820" height="701" alt="Nucleo Blinky" src="https://github.com/user-attachments/assets/ea27fe97-89f1-4aca-86e8-41562b8a013d" />



### 🚀 How to Run

1. **Import:** Open the`Blinky` folder as an STM32CubeIDE project.
3. **Build & Flash:** Select **Project > Build**, then use the **Run** or **Debug** icons.
4. **Monitor:**
    * Observe the onboard LED blink.

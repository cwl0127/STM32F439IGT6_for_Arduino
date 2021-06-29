/*
  Copyright (c) 2011 Arduino.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#include "pins_arduino.h"

#ifdef __cplusplus
extern "C"
{
#endif

  // Pin number
  // Match Table 17. NUCLEO-F429ZI pin assignments
  // from UM1974 STM32 Nucleo-144 board
  const PinName digitalPin[] = {
      PA_0,  // Digital pin 0
      PA_1,  // Digital pin 1
      PA_2,  // Digital pin 2
      PA_3,  // Digital pin 3
      PA_4,  // Digital pin 4
      PA_5,  // Digital pin 5
      PA_6,  // Digital pin 6
      PA_7,  // Digital pin 7
      PA_8,  // Digital pin 8
      PA_9,  // Digital pin 9
      PA_10, // Digital pin 10
      PA_11, // Digital pin 11
      PA_12, // Digital pin 12
      PA_13, // Digital pin 13
      PA_14, // Digital pin 14
      PA_15, // Digital pin 15

      PB_0,  // Digital pin 16
      PB_1,  // Digital pin 17
      PB_2,  // Digital pin 18
      PB_3,  // Digital pin 19
      PB_4,  // Digital pin 20
      PB_5,  // Digital pin 21
      PB_6,  // Digital pin 22
      PB_7,  // Digital pin 23
      PB_8,  // Digital pin 24
      PB_9,  // Digital pin 25
      PB_10, // Digital pin 26
      PB_11, // Digital pin 27
      PB_12, // Digital pin 28
      PB_13, // Digital pin 29
      PB_14, // Digital pin 30
      PB_15, // Digital pin 31

      PC_0,  // Digital pin 32
      PC_1,  // Digital pin 33
      PC_2,  // Digital pin 34
      PC_3,  // Digital pin 35
      PC_4,  // Digital pin 36
      PC_5,  // Digital pin 37
      PC_6,  // Digital pin 38
      PC_7,  // Digital pin 39
      PC_8,  // Digital pin 40
      PC_9,  // Digital pin 41
      PC_10, // Digital pin 42
      PC_11, // Digital pin 43
      PC_12, // Digital pin 44
      PC_13, // Digital pin 45
      PC_14, // Digital pin 46
      PC_15, // Digital pin 47

      PD_0,  // Digital pin 48
      PD_1,  // Digital pin 49
      PD_2,  // Digital pin 50
      PD_3,  // Digital pin 51
      PD_4,  // Digital pin 52
      PD_5,  // Digital pin 53
      PD_6,  // Digital pin 54
      PD_7,  // Digital pin 55
      PD_8,  // Digital pin 56
      PD_9,  // Digital pin 57
      PD_10, // Digital pin 58
      PD_11, // Digital pin 59
      PD_12, // Digital pin 60
      PD_13, // Digital pin 61
      PD_14, // Digital pin 62
      PD_15, // Digital pin 63

      PE_0,  // Digital pin 64
      PE_1,  // Digital pin 65
      PE_2,  // Digital pin 66
      PE_3,  // Digital pin 67
      PE_4,  // Digital pin 68
      PE_5,  // Digital pin 69
      PE_6,  // Digital pin 70
      PE_7,  // Digital pin 71
      PE_8,  // Digital pin 72
      PE_9,  // Digital pin 73
      PE_10, // Digital pin 74
      PE_11, // Digital pin 75
      PE_12, // Digital pin 76
      PE_13, // Digital pin 77
      PE_14, // Digital pin 78
      PE_15, // Digital pin 79

      PF_0,
      PF_1,
      PF_2,
      PF_3,
      PF_4,
      PF_5,
      PF_6,
      PF_7,
      PF_8,
      PF_9,
      PF_10,
      PF_11,
      PF_12,
      PF_13,
      PF_14,
      PF_15,

      PG_0,
      PG_1,
      PG_2,
      PG_3,
      PG_4,
      PG_5,
      PG_6,
      PG_7,
      PG_8,
      PG_9,
      PG_10,
      PG_11,
      PG_12,
      PG_13,
      PG_14,
      PG_15,

      PH_0, // Digital pin 112, used by the external oscillator
      PH_1, // Digital pin 113, used by the external oscillator
      PH_2,
      PH_3,
      PH_4,
      PH_5,
      PH_6,
      PH_7,
      PH_8,
      PH_9,
      PH_10,
      PH_11,
      PH_12,
      PH_13,
      PH_14,
      PH_15,

      PI_0,
      PI_1,
      PI_2,
      PI_3,
      PI_4,
      PI_5,
      PI_6,
      PI_7,
      PI_8,
      PI_9,
      PI_10,
      PI_11};

  // Analog (Ax) pin number array
  const uint32_t analogInputPin[] = {
      0,  // A0,  PA0
      1,  // A1,  PA1
      2,  // A2,  PA2
      3,  // A3,  PA3
      4,  // A4,  PA4
      5,  // A5,  PA5
      6,  // A6,  PA6
      7,  // A7,  PA7
      16, // A8,  PB0
      17, // A9,  PB1
      32, // A10, PC0
      33, // A11, PC1
      34, // A12, PC2
      35, // A13, PC3
      36, // A14, PC4
      37, // A15, PC5
      83, // A16, PF3
      84, // A17, PF4
      85, // A18, PF5
      86, // A19, PF6
      87, // A20, PF7
      88, // A21, PF8
      89, // A22, PF9
      90  // A23, PF10
  };

#ifdef __cplusplus
}
#endif

// ----------------------------------------------------------------------------

#ifdef __cplusplus
extern "C"
{
#endif

  /**
  * @brief  System Clock Configuration
  *         The system Clock is configured as follow :
  *            System Clock source            = PLL (HSE)
  *            SYSCLK(Hz)                     = 168000000
  *            HCLK(Hz)                       = 168000000
  *            AHB Prescaler                  = 1
  *            APB1 Prescaler                 = 4
  *            APB2 Prescaler                 = 2
  *            HSE Frequency(Hz)              = 8000000
  *            PLL_M                          = 8
  *            PLL_N                          = 336
  *            PLL_P                          = 2
  *            PLL_Q                          = 7
  *            VDD(V)                         = 3.3
  *            Main regulator output voltage  = Scale1 mode
  *            Flash Latency(WS)              = 5
  * @param  None
  * @retval None
  */
  WEAK void SystemClock_Config(void)
  {
    RCC_OscInitTypeDef RCC_OscInitStruct = {0};
    RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

    /** Configure the main internal regulator output voltage
  */
    __HAL_RCC_PWR_CLK_ENABLE();
    __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);
    /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
    RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSE;
    RCC_OscInitStruct.HSEState = RCC_HSE_ON;
    RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
    RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSE;
    RCC_OscInitStruct.PLL.PLLM = 8;
    RCC_OscInitStruct.PLL.PLLN = 336;
    RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
    RCC_OscInitStruct.PLL.PLLQ = 7;
    HAL_RCC_OscConfig(&RCC_OscInitStruct);

    /* Activate the Over-Drive mode */
    // HAL_PWREx_EnableOverDrive();

    /** Initializes the CPU, AHB and APB buses clocks*/
    RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK | RCC_CLOCKTYPE_SYSCLK | RCC_CLOCKTYPE_PCLK1 | RCC_CLOCKTYPE_PCLK2;
    RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
    RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
    RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV4;
    RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV2;

    HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_5);

    /* Ensure CCM RAM clock is enabled */
    __HAL_RCC_CCMDATARAMEN_CLK_ENABLE();
  }

#ifdef __cplusplus
}
#endif

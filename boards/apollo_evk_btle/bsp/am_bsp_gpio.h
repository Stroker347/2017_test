//*****************************************************************************
//
//! @file am_bsp_gpio.h
//!
//! @brief Functions to aid with configuring the GPIOs.
//
//*****************************************************************************

//*****************************************************************************
//
// Copyright (c) 2016, Ambiq Micro
// All rights reserved.
// 
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
// 
// 1. Redistributions of source code must retain the above copyright notice,
// this list of conditions and the following disclaimer.
// 
// 2. Redistributions in binary form must reproduce the above copyright
// notice, this list of conditions and the following disclaimer in the
// documentation and/or other materials provided with the distribution.
// 
// 3. Neither the name of the copyright holder nor the names of its
// contributors may be used to endorse or promote products derived from this
// software without specific prior written permission.
// 
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
// ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
// LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
// CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
// SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
// CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
// ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
// POSSIBILITY OF SUCH DAMAGE.
//
// This is part of revision 1.1.0 of the AmbiqSuite Development Package.
//
//*****************************************************************************
#ifndef AM_BSP_GPIO_H
#define AM_BSP_GPIO_H

#ifdef __cplusplus
extern "C"
{
#endif

//*****************************************************************************
//
// Miscellaneous pins.
//
//*****************************************************************************
#define AM_BSP_GPIO_BUTTON0             39
#define AM_BSP_GPIO_BUTTON1             26
#define AM_BSP_GPIO_BUTTON2             24
#define AM_BSP_GPIO_BUTTON3             46
#define AM_BSP_GPIO_LED0                43
#define AM_BSP_GPIO_LED1                44
#define AM_BSP_GPIO_LED2                45
#define AM_BSP_GPIO_LED3                47

//*****************************************************************************
//
// COM_UART pins.
//
//*****************************************************************************
#define AM_BSP_GPIO_COM_UART_RX         36
#define AM_BSP_GPIO_CFG_COM_UART_RX     AM_HAL_PIN_36_UARTRX
#define AM_BSP_GPIO_COM_UART_TX         35
#define AM_BSP_GPIO_CFG_COM_UART_TX     AM_HAL_PIN_35_UARTTX

//*****************************************************************************
//
// DA14581 pins.
//
//*****************************************************************************
#define AM_BSP_GPIO_DA14581_POWER       44//3
#define AM_BSP_GPIO_CFG_DA14581_POWER   AM_HAL_GPIO_OUTPUT//AM_HAL_PIN_3_PSOURCE
#define AM_BSP_GPIO_DA14581_RESET       24//17
#define AM_BSP_GPIO_CFG_DA14581_RESET   AM_HAL_PIN_OUTPUT

//*****************************************************************************
//
// IOM1 pins.
//
//*****************************************************************************
#define AM_BSP_GPIO_IOM1_MISO           9
#define AM_BSP_GPIO_CFG_IOM1_MISO       AM_HAL_PIN_9_M1MISO
#define AM_BSP_GPIO_IOM1_MOSI           10
#define AM_BSP_GPIO_CFG_IOM1_MOSI       AM_HAL_PIN_10_M1MOSI
#define AM_BSP_GPIO_IOM1_SCK            8
#define AM_BSP_GPIO_CFG_IOM1_SCK        (AM_HAL_PIN_8_M1SCK | AM_HAL_GPIO_HIGH_DRIVE)

//*****************************************************************************
//
// ITM pins.
//
//*****************************************************************************
#define AM_BSP_GPIO_ITM_SWO             41
#define AM_BSP_GPIO_CFG_ITM_SWO         AM_HAL_PIN_41_SWO

//*****************************************************************************
//
// PWM pins.
//
//*****************************************************************************
#define AM_BSP_GPIO_PWM_LED             43
#define AM_BSP_GPIO_CFG_PWM_LED         AM_HAL_PIN_43_TCTB0

//*****************************************************************************
//
// UART pins.
//
//*****************************************************************************
#define AM_BSP_GPIO_UART_CTS            2//6
#define AM_BSP_GPIO_CFG_UART_CTS        AM_HAL_PIN_INPUT//AM_HAL_PIN_6_UACTS
#define AM_BSP_GPIO_UART_RTS            3//5
#define AM_BSP_GPIO_CFG_UART_RTS        AM_HAL_PIN_OUTPUT//AM_HAL_PIN_5_UARTS
#define AM_BSP_GPIO_UART_RX             1
#define AM_BSP_GPIO_CFG_UART_RX         AM_HAL_PIN_1_UARTRX
#define AM_BSP_GPIO_UART_TX             0
#define AM_BSP_GPIO_CFG_UART_TX         AM_HAL_PIN_0_UARTTX

//*****************************************************************************
//
// Convenience macros for enabling and disabling pins by function.
//
//*****************************************************************************
#define am_bsp_pin_enable(name)                                               \
    am_hal_gpio_pin_config(AM_BSP_GPIO_ ## name, AM_BSP_GPIO_CFG_ ## name);

#define am_bsp_pin_disable(name)                                              \
    am_hal_gpio_pin_config(AM_BSP_GPIO_ ## name, AM_HAL_PIN_DISABLE);

#ifdef __cplusplus
}
#endif

#endif // AM_BSP_GPIO_H

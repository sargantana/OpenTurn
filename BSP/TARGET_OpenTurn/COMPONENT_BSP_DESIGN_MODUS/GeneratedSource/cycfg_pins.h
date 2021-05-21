/*******************************************************************************
* File Name: cycfg_pins.h
*
* Description:
* Pin configuration
* This file was automatically generated and should not be modified.
* Tools Package 2.3.0.4276
* mtb-pdl-cat1 2.2.0.7891
* personalities 4.0.0.0
* udd 3.0.0.936
*
********************************************************************************
* Copyright 2021 Cypress Semiconductor Corporation
* SPDX-License-Identifier: Apache-2.0
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
********************************************************************************/

#if !defined(CYCFG_PINS_H)
#define CYCFG_PINS_H

#include "cycfg_notices.h"
#include "cy_gpio.h"
#include "cycfg_routing.h"
#if defined (CY_USING_HAL)
	#include "cyhal_hwmgr.h"
#endif //defined (CY_USING_HAL)
#include "cy_smartio.h"

#if defined(__cplusplus)
extern "C" {
#endif

#define ENC0_I_ENABLED 1U
#define ENC0_I_PORT GPIO_PRT0
#define ENC0_I_PORT_NUM 0U
#define ENC0_I_PIN 3U
#define ENC0_I_NUM 3U
#define ENC0_I_DRIVEMODE CY_GPIO_DM_HIGHZ
#define ENC0_I_INIT_DRIVESTATE 1
#ifndef ioss_0_port_0_pin_3_HSIOM
	#define ioss_0_port_0_pin_3_HSIOM HSIOM_SEL_GPIO
#endif
#define ENC0_I_HSIOM ioss_0_port_0_pin_3_HSIOM
#define ENC0_I_IRQ ioss_interrupts_gpio_0_IRQn
#if defined (CY_USING_HAL)
	#define ENC0_I_HAL_PORT_PIN P0_3
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ENC0_I P0_3
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ENC0_I_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ENC0_I_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ENC0_I_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_NONE
#endif //defined (CY_USING_HAL)
#define ENC0_A_ENABLED 1U
#define ENC0_A_PORT GPIO_PRT0
#define ENC0_A_PORT_NUM 0U
#define ENC0_A_PIN 4U
#define ENC0_A_NUM 4U
#define ENC0_A_DRIVEMODE CY_GPIO_DM_HIGHZ
#define ENC0_A_INIT_DRIVESTATE 1
#ifndef ioss_0_port_0_pin_4_HSIOM
	#define ioss_0_port_0_pin_4_HSIOM HSIOM_SEL_GPIO
#endif
#define ENC0_A_HSIOM ioss_0_port_0_pin_4_HSIOM
#define ENC0_A_IRQ ioss_interrupts_gpio_0_IRQn
#if defined (CY_USING_HAL)
	#define ENC0_A_HAL_PORT_PIN P0_4
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ENC0_A P0_4
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ENC0_A_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ENC0_A_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ENC0_A_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_NONE
#endif //defined (CY_USING_HAL)
#define ENC0_B_ENABLED 1U
#define ENC0_B_PORT GPIO_PRT0
#define ENC0_B_PORT_NUM 0U
#define ENC0_B_PIN 5U
#define ENC0_B_NUM 5U
#define ENC0_B_DRIVEMODE CY_GPIO_DM_HIGHZ
#define ENC0_B_INIT_DRIVESTATE 1
#ifndef ioss_0_port_0_pin_5_HSIOM
	#define ioss_0_port_0_pin_5_HSIOM HSIOM_SEL_GPIO
#endif
#define ENC0_B_HSIOM ioss_0_port_0_pin_5_HSIOM
#define ENC0_B_IRQ ioss_interrupts_gpio_0_IRQn
#if defined (CY_USING_HAL)
	#define ENC0_B_HAL_PORT_PIN P0_5
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ENC0_B P0_5
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ENC0_B_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ENC0_B_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ENC0_B_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_NONE
#endif //defined (CY_USING_HAL)
#define ISENSE_A_ENABLED 1U
#define ISENSE_A_PORT GPIO_PRT10
#define ISENSE_A_PORT_NUM 10U
#define ISENSE_A_PIN 0U
#define ISENSE_A_NUM 0U
#define ISENSE_A_DRIVEMODE CY_GPIO_DM_ANALOG
#define ISENSE_A_INIT_DRIVESTATE 1
#ifndef ioss_0_port_10_pin_0_HSIOM
	#define ioss_0_port_10_pin_0_HSIOM HSIOM_SEL_GPIO
#endif
#define ISENSE_A_HSIOM ioss_0_port_10_pin_0_HSIOM
#define ISENSE_A_IRQ ioss_interrupts_gpio_10_IRQn
#if defined (CY_USING_HAL)
	#define ISENSE_A_HAL_PORT_PIN P10_0
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ISENSE_A P10_0
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ISENSE_A_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ISENSE_A_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ISENSE_A_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
#endif //defined (CY_USING_HAL)
#define ISENSE_B_ENABLED 1U
#define ISENSE_B_PORT GPIO_PRT10
#define ISENSE_B_PORT_NUM 10U
#define ISENSE_B_PIN 1U
#define ISENSE_B_NUM 1U
#define ISENSE_B_DRIVEMODE CY_GPIO_DM_ANALOG
#define ISENSE_B_INIT_DRIVESTATE 1
#ifndef ioss_0_port_10_pin_1_HSIOM
	#define ioss_0_port_10_pin_1_HSIOM HSIOM_SEL_GPIO
#endif
#define ISENSE_B_HSIOM ioss_0_port_10_pin_1_HSIOM
#define ISENSE_B_IRQ ioss_interrupts_gpio_10_IRQn
#if defined (CY_USING_HAL)
	#define ISENSE_B_HAL_PORT_PIN P10_1
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ISENSE_B P10_1
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ISENSE_B_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ISENSE_B_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ISENSE_B_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
#endif //defined (CY_USING_HAL)
#define ISENSE_C_ENABLED 1U
#define ISENSE_C_PORT GPIO_PRT10
#define ISENSE_C_PORT_NUM 10U
#define ISENSE_C_PIN 2U
#define ISENSE_C_NUM 2U
#define ISENSE_C_DRIVEMODE CY_GPIO_DM_ANALOG
#define ISENSE_C_INIT_DRIVESTATE 1
#ifndef ioss_0_port_10_pin_2_HSIOM
	#define ioss_0_port_10_pin_2_HSIOM HSIOM_SEL_GPIO
#endif
#define ISENSE_C_HSIOM ioss_0_port_10_pin_2_HSIOM
#define ISENSE_C_IRQ ioss_interrupts_gpio_10_IRQn
#if defined (CY_USING_HAL)
	#define ISENSE_C_HAL_PORT_PIN P10_2
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ISENSE_C P10_2
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ISENSE_C_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ISENSE_C_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ISENSE_C_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
#endif //defined (CY_USING_HAL)
#define V_BUS_ENABLED 1U
#define V_BUS_PORT GPIO_PRT10
#define V_BUS_PORT_NUM 10U
#define V_BUS_PIN 3U
#define V_BUS_NUM 3U
#define V_BUS_DRIVEMODE CY_GPIO_DM_ANALOG
#define V_BUS_INIT_DRIVESTATE 1
#ifndef ioss_0_port_10_pin_3_HSIOM
	#define ioss_0_port_10_pin_3_HSIOM HSIOM_SEL_GPIO
#endif
#define V_BUS_HSIOM ioss_0_port_10_pin_3_HSIOM
#define V_BUS_IRQ ioss_interrupts_gpio_10_IRQn
#if defined (CY_USING_HAL)
	#define V_BUS_HAL_PORT_PIN P10_3
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define V_BUS P10_3
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define V_BUS_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define V_BUS_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define V_BUS_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
#endif //defined (CY_USING_HAL)
#define TEMP1_ENABLED 1U
#define TEMP1_PORT GPIO_PRT10
#define TEMP1_PORT_NUM 10U
#define TEMP1_PIN 4U
#define TEMP1_NUM 4U
#define TEMP1_DRIVEMODE CY_GPIO_DM_ANALOG
#define TEMP1_INIT_DRIVESTATE 1
#ifndef ioss_0_port_10_pin_4_HSIOM
	#define ioss_0_port_10_pin_4_HSIOM HSIOM_SEL_GPIO
#endif
#define TEMP1_HSIOM ioss_0_port_10_pin_4_HSIOM
#define TEMP1_IRQ ioss_interrupts_gpio_10_IRQn
#if defined (CY_USING_HAL)
	#define TEMP1_HAL_PORT_PIN P10_4
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define TEMP1 P10_4
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define TEMP1_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define TEMP1_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define TEMP1_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
#endif //defined (CY_USING_HAL)
#define TEMP2_ENABLED 1U
#define TEMP2_PORT GPIO_PRT10
#define TEMP2_PORT_NUM 10U
#define TEMP2_PIN 5U
#define TEMP2_NUM 5U
#define TEMP2_DRIVEMODE CY_GPIO_DM_ANALOG
#define TEMP2_INIT_DRIVESTATE 1
#ifndef ioss_0_port_10_pin_5_HSIOM
	#define ioss_0_port_10_pin_5_HSIOM HSIOM_SEL_GPIO
#endif
#define TEMP2_HSIOM ioss_0_port_10_pin_5_HSIOM
#define TEMP2_IRQ ioss_interrupts_gpio_10_IRQn
#if defined (CY_USING_HAL)
	#define TEMP2_HAL_PORT_PIN P10_5
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define TEMP2 P10_5
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define TEMP2_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define TEMP2_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define TEMP2_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
#endif //defined (CY_USING_HAL)
#define DRV_ENABLE_ENABLED 1U
#define DRV_ENABLE_PORT GPIO_PRT11
#define DRV_ENABLE_PORT_NUM 11U
#define DRV_ENABLE_PIN 2U
#define DRV_ENABLE_NUM 2U
#define DRV_ENABLE_DRIVEMODE CY_GPIO_DM_ANALOG
#define DRV_ENABLE_INIT_DRIVESTATE 1
#ifndef ioss_0_port_11_pin_2_HSIOM
	#define ioss_0_port_11_pin_2_HSIOM HSIOM_SEL_GPIO
#endif
#define DRV_ENABLE_HSIOM ioss_0_port_11_pin_2_HSIOM
#define DRV_ENABLE_IRQ ioss_interrupts_gpio_11_IRQn
#if defined (CY_USING_HAL)
	#define DRV_ENABLE_HAL_PORT_PIN P11_2
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define DRV_ENABLE P11_2
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define DRV_ENABLE_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define DRV_ENABLE_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define DRV_ENABLE_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
#endif //defined (CY_USING_HAL)
#define DRV_CAL_ENABLED 1U
#define DRV_CAL_PORT GPIO_PRT11
#define DRV_CAL_PORT_NUM 11U
#define DRV_CAL_PIN 3U
#define DRV_CAL_NUM 3U
#define DRV_CAL_DRIVEMODE CY_GPIO_DM_ANALOG
#define DRV_CAL_INIT_DRIVESTATE 1
#ifndef ioss_0_port_11_pin_3_HSIOM
	#define ioss_0_port_11_pin_3_HSIOM HSIOM_SEL_GPIO
#endif
#define DRV_CAL_HSIOM ioss_0_port_11_pin_3_HSIOM
#define DRV_CAL_IRQ ioss_interrupts_gpio_11_IRQn
#if defined (CY_USING_HAL)
	#define DRV_CAL_HAL_PORT_PIN P11_3
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define DRV_CAL P11_3
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define DRV_CAL_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define DRV_CAL_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define DRV_CAL_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
#endif //defined (CY_USING_HAL)
#define ECO_IN_ENABLED 1U
#define ECO_IN_PORT GPIO_PRT12
#define ECO_IN_PORT_NUM 12U
#define ECO_IN_PIN 6U
#define ECO_IN_NUM 6U
#define ECO_IN_DRIVEMODE CY_GPIO_DM_ANALOG
#define ECO_IN_INIT_DRIVESTATE 1
#ifndef ioss_0_port_12_pin_6_HSIOM
	#define ioss_0_port_12_pin_6_HSIOM HSIOM_SEL_GPIO
#endif
#define ECO_IN_HSIOM ioss_0_port_12_pin_6_HSIOM
#define ECO_IN_IRQ ioss_interrupts_gpio_12_IRQn
#if defined (CY_USING_HAL)
	#define ECO_IN_HAL_PORT_PIN P12_6
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ECO_IN P12_6
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ECO_IN_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ECO_IN_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ECO_IN_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
#endif //defined (CY_USING_HAL)
#define ECO_OUT_ENABLED 1U
#define ECO_OUT_PORT GPIO_PRT12
#define ECO_OUT_PORT_NUM 12U
#define ECO_OUT_PIN 7U
#define ECO_OUT_NUM 7U
#define ECO_OUT_DRIVEMODE CY_GPIO_DM_ANALOG
#define ECO_OUT_INIT_DRIVESTATE 1
#ifndef ioss_0_port_12_pin_7_HSIOM
	#define ioss_0_port_12_pin_7_HSIOM HSIOM_SEL_GPIO
#endif
#define ECO_OUT_HSIOM ioss_0_port_12_pin_7_HSIOM
#define ECO_OUT_IRQ ioss_interrupts_gpio_12_IRQn
#if defined (CY_USING_HAL)
	#define ECO_OUT_HAL_PORT_PIN P12_7
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ECO_OUT P12_7
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ECO_OUT_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ECO_OUT_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ECO_OUT_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
#endif //defined (CY_USING_HAL)
#define ENC_SSC_DO_ENABLED 1U
#define ENC_SSC_DO_PORT GPIO_PRT2
#define ENC_SSC_DO_PORT_NUM 2U
#define ENC_SSC_DO_PIN 0U
#define ENC_SSC_DO_NUM 0U
#define ENC_SSC_DO_DRIVEMODE CY_GPIO_DM_HIGHZ
#define ENC_SSC_DO_INIT_DRIVESTATE 1
#ifndef ioss_0_port_2_pin_0_HSIOM
	#define ioss_0_port_2_pin_0_HSIOM HSIOM_SEL_GPIO
#endif
#define ENC_SSC_DO_HSIOM ioss_0_port_2_pin_0_HSIOM
#define ENC_SSC_DO_IRQ ioss_interrupts_gpio_2_IRQn
#if defined (CY_USING_HAL)
	#define ENC_SSC_DO_HAL_PORT_PIN P2_0
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ENC_SSC_DO P2_0
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ENC_SSC_DO_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ENC_SSC_DO_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ENC_SSC_DO_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_NONE
#endif //defined (CY_USING_HAL)
#define ENC_SSC_DI_ENABLED 1U
#define ENC_SSC_DI_PORT GPIO_PRT2
#define ENC_SSC_DI_PORT_NUM 2U
#define ENC_SSC_DI_PIN 1U
#define ENC_SSC_DI_NUM 1U
#define ENC_SSC_DI_DRIVEMODE CY_GPIO_DM_STRONG_IN_OFF
#define ENC_SSC_DI_INIT_DRIVESTATE 1
#ifndef ioss_0_port_2_pin_1_HSIOM
	#define ioss_0_port_2_pin_1_HSIOM HSIOM_SEL_GPIO
#endif
#define ENC_SSC_DI_HSIOM ioss_0_port_2_pin_1_HSIOM
#define ENC_SSC_DI_IRQ ioss_interrupts_gpio_2_IRQn
#if defined (CY_USING_HAL)
	#define ENC_SSC_DI_HAL_PORT_PIN P2_1
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ENC_SSC_DI P2_1
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ENC_SSC_DI_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ENC_SSC_DI_HAL_DIR CYHAL_GPIO_DIR_OUTPUT 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ENC_SSC_DI_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_STRONG
#endif //defined (CY_USING_HAL)
#define ENC_SSC_SCK_ENABLED 1U
#define ENC_SSC_SCK_PORT GPIO_PRT2
#define ENC_SSC_SCK_PORT_NUM 2U
#define ENC_SSC_SCK_PIN 2U
#define ENC_SSC_SCK_NUM 2U
#define ENC_SSC_SCK_DRIVEMODE CY_GPIO_DM_HIGHZ
#define ENC_SSC_SCK_INIT_DRIVESTATE 1
#ifndef ioss_0_port_2_pin_2_HSIOM
	#define ioss_0_port_2_pin_2_HSIOM HSIOM_SEL_GPIO
#endif
#define ENC_SSC_SCK_HSIOM ioss_0_port_2_pin_2_HSIOM
#define ENC_SSC_SCK_IRQ ioss_interrupts_gpio_2_IRQn
#if defined (CY_USING_HAL)
	#define ENC_SSC_SCK_HAL_PORT_PIN P2_2
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ENC_SSC_SCK P2_2
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ENC_SSC_SCK_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ENC_SSC_SCK_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ENC_SSC_SCK_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_NONE
#endif //defined (CY_USING_HAL)
#define ENC_SSC_CS0_ENABLED 1U
#define ENC_SSC_CS0_PORT GPIO_PRT2
#define ENC_SSC_CS0_PORT_NUM 2U
#define ENC_SSC_CS0_PIN 3U
#define ENC_SSC_CS0_NUM 3U
#define ENC_SSC_CS0_DRIVEMODE CY_GPIO_DM_HIGHZ
#define ENC_SSC_CS0_INIT_DRIVESTATE 1
#ifndef ioss_0_port_2_pin_3_HSIOM
	#define ioss_0_port_2_pin_3_HSIOM HSIOM_SEL_GPIO
#endif
#define ENC_SSC_CS0_HSIOM ioss_0_port_2_pin_3_HSIOM
#define ENC_SSC_CS0_IRQ ioss_interrupts_gpio_2_IRQn
#if defined (CY_USING_HAL)
	#define ENC_SSC_CS0_HAL_PORT_PIN P2_3
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ENC_SSC_CS0 P2_3
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ENC_SSC_CS0_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ENC_SSC_CS0_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ENC_SSC_CS0_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_NONE
#endif //defined (CY_USING_HAL)
#define ENC_SSC_CS1_ENABLED 1U
#define ENC_SSC_CS1_PORT GPIO_PRT2
#define ENC_SSC_CS1_PORT_NUM 2U
#define ENC_SSC_CS1_PIN 4U
#define ENC_SSC_CS1_NUM 4U
#define ENC_SSC_CS1_DRIVEMODE CY_GPIO_DM_HIGHZ
#define ENC_SSC_CS1_INIT_DRIVESTATE 1
#ifndef ioss_0_port_2_pin_4_HSIOM
	#define ioss_0_port_2_pin_4_HSIOM HSIOM_SEL_GPIO
#endif
#define ENC_SSC_CS1_HSIOM ioss_0_port_2_pin_4_HSIOM
#define ENC_SSC_CS1_IRQ ioss_interrupts_gpio_2_IRQn
#if defined (CY_USING_HAL)
	#define ENC_SSC_CS1_HAL_PORT_PIN P2_4
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ENC_SSC_CS1 P2_4
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ENC_SSC_CS1_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ENC_SSC_CS1_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ENC_SSC_CS1_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_NONE
#endif //defined (CY_USING_HAL)
#define ENC1_I_ENABLED 1U
#define ENC1_I_PORT GPIO_PRT2
#define ENC1_I_PORT_NUM 2U
#define ENC1_I_PIN 5U
#define ENC1_I_NUM 5U
#define ENC1_I_DRIVEMODE CY_GPIO_DM_HIGHZ
#define ENC1_I_INIT_DRIVESTATE 1
#ifndef ioss_0_port_2_pin_5_HSIOM
	#define ioss_0_port_2_pin_5_HSIOM HSIOM_SEL_GPIO
#endif
#define ENC1_I_HSIOM ioss_0_port_2_pin_5_HSIOM
#define ENC1_I_IRQ ioss_interrupts_gpio_2_IRQn
#if defined (CY_USING_HAL)
	#define ENC1_I_HAL_PORT_PIN P2_5
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ENC1_I P2_5
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ENC1_I_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ENC1_I_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ENC1_I_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_NONE
#endif //defined (CY_USING_HAL)
#define ENC1_A_ENABLED 1U
#define ENC1_A_PORT GPIO_PRT2
#define ENC1_A_PORT_NUM 2U
#define ENC1_A_PIN 6U
#define ENC1_A_NUM 6U
#define ENC1_A_DRIVEMODE CY_GPIO_DM_HIGHZ
#define ENC1_A_INIT_DRIVESTATE 1
#ifndef ioss_0_port_2_pin_6_HSIOM
	#define ioss_0_port_2_pin_6_HSIOM HSIOM_SEL_GPIO
#endif
#define ENC1_A_HSIOM ioss_0_port_2_pin_6_HSIOM
#define ENC1_A_IRQ ioss_interrupts_gpio_2_IRQn
#if defined (CY_USING_HAL)
	#define ENC1_A_HAL_PORT_PIN P2_6
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ENC1_A P2_6
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ENC1_A_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ENC1_A_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ENC1_A_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_NONE
#endif //defined (CY_USING_HAL)
#define ENC1_B_ENABLED 1U
#define ENC1_B_PORT GPIO_PRT2
#define ENC1_B_PORT_NUM 2U
#define ENC1_B_PIN 7U
#define ENC1_B_NUM 7U
#define ENC1_B_DRIVEMODE CY_GPIO_DM_HIGHZ
#define ENC1_B_INIT_DRIVESTATE 1
#ifndef ioss_0_port_2_pin_7_HSIOM
	#define ioss_0_port_2_pin_7_HSIOM HSIOM_SEL_GPIO
#endif
#define ENC1_B_HSIOM ioss_0_port_2_pin_7_HSIOM
#define ENC1_B_IRQ ioss_interrupts_gpio_2_IRQn
#if defined (CY_USING_HAL)
	#define ENC1_B_HAL_PORT_PIN P2_7
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ENC1_B P2_7
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ENC1_B_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ENC1_B_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ENC1_B_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_NONE
#endif //defined (CY_USING_HAL)
#define DEBUG_UART_RX_ENABLED 1U
#define DEBUG_UART_RX_PORT GPIO_PRT3
#define DEBUG_UART_RX_PORT_NUM 3U
#define DEBUG_UART_RX_PIN 0U
#define DEBUG_UART_RX_NUM 0U
#define DEBUG_UART_RX_DRIVEMODE CY_GPIO_DM_HIGHZ
#define DEBUG_UART_RX_INIT_DRIVESTATE 1
#ifndef ioss_0_port_3_pin_0_HSIOM
	#define ioss_0_port_3_pin_0_HSIOM HSIOM_SEL_GPIO
#endif
#define DEBUG_UART_RX_HSIOM ioss_0_port_3_pin_0_HSIOM
#define DEBUG_UART_RX_IRQ ioss_interrupts_gpio_3_IRQn
#if defined (CY_USING_HAL)
	#define DEBUG_UART_RX_HAL_PORT_PIN P3_0
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define DEBUG_UART_RX P3_0
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define DEBUG_UART_RX_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define DEBUG_UART_RX_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define DEBUG_UART_RX_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_NONE
#endif //defined (CY_USING_HAL)
#define DEBUG_UART_TX_ENABLED 1U
#define DEBUG_UART_TX_PORT GPIO_PRT3
#define DEBUG_UART_TX_PORT_NUM 3U
#define DEBUG_UART_TX_PIN 1U
#define DEBUG_UART_TX_NUM 1U
#define DEBUG_UART_TX_DRIVEMODE CY_GPIO_DM_STRONG_IN_OFF
#define DEBUG_UART_TX_INIT_DRIVESTATE 1
#ifndef ioss_0_port_3_pin_1_HSIOM
	#define ioss_0_port_3_pin_1_HSIOM HSIOM_SEL_GPIO
#endif
#define DEBUG_UART_TX_HSIOM ioss_0_port_3_pin_1_HSIOM
#define DEBUG_UART_TX_IRQ ioss_interrupts_gpio_3_IRQn
#if defined (CY_USING_HAL)
	#define DEBUG_UART_TX_HAL_PORT_PIN P3_1
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define DEBUG_UART_TX P3_1
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define DEBUG_UART_TX_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define DEBUG_UART_TX_HAL_DIR CYHAL_GPIO_DIR_OUTPUT 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define DEBUG_UART_TX_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_STRONG
#endif //defined (CY_USING_HAL)
#define CANFD_RX_ENABLED 1U
#define CANFD_RX_PORT GPIO_PRT5
#define CANFD_RX_PORT_NUM 5U
#define CANFD_RX_PIN 0U
#define CANFD_RX_NUM 0U
#define CANFD_RX_DRIVEMODE CY_GPIO_DM_PULLUP
#define CANFD_RX_INIT_DRIVESTATE 1
#ifndef ioss_0_port_5_pin_0_HSIOM
	#define ioss_0_port_5_pin_0_HSIOM HSIOM_SEL_GPIO
#endif
#define CANFD_RX_HSIOM ioss_0_port_5_pin_0_HSIOM
#define CANFD_RX_IRQ ioss_interrupts_gpio_5_IRQn
#if defined (CY_USING_HAL)
	#define CANFD_RX_HAL_PORT_PIN P5_0
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CANFD_RX P5_0
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CANFD_RX_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CANFD_RX_HAL_DIR CYHAL_GPIO_DIR_BIDIRECTIONAL 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CANFD_RX_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_PULLUP
#endif //defined (CY_USING_HAL)
#define CANFD_TX_ENABLED 1U
#define CANFD_TX_PORT GPIO_PRT5
#define CANFD_TX_PORT_NUM 5U
#define CANFD_TX_PIN 1U
#define CANFD_TX_NUM 1U
#define CANFD_TX_DRIVEMODE CY_GPIO_DM_STRONG
#define CANFD_TX_INIT_DRIVESTATE 1
#ifndef ioss_0_port_5_pin_1_HSIOM
	#define ioss_0_port_5_pin_1_HSIOM HSIOM_SEL_GPIO
#endif
#define CANFD_TX_HSIOM ioss_0_port_5_pin_1_HSIOM
#define CANFD_TX_IRQ ioss_interrupts_gpio_5_IRQn
#if defined (CY_USING_HAL)
	#define CANFD_TX_HAL_PORT_PIN P5_1
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CANFD_TX P5_1
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CANFD_TX_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CANFD_TX_HAL_DIR CYHAL_GPIO_DIR_BIDIRECTIONAL 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CANFD_TX_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_STRONG
#endif //defined (CY_USING_HAL)
#define GPIO0_ENABLED 1U
#define LED0_ENABLED GPIO0_ENABLED
#define GPIO0_PORT GPIO_PRT5
#define LED0_PORT GPIO0_PORT
#define GPIO0_PORT_NUM 5U
#define LED0_PORT_NUM GPIO0_PORT_NUM
#define GPIO0_PIN 6U
#define LED0_PIN GPIO0_PIN
#define GPIO0_NUM 6U
#define LED0_NUM GPIO0_NUM
#define GPIO0_DRIVEMODE CY_GPIO_DM_STRONG
#define LED0_DRIVEMODE GPIO0_DRIVEMODE
#define GPIO0_INIT_DRIVESTATE 1
#define LED0_INIT_DRIVESTATE GPIO0_INIT_DRIVESTATE
#ifndef ioss_0_port_5_pin_6_HSIOM
	#define ioss_0_port_5_pin_6_HSIOM HSIOM_SEL_GPIO
#endif
#define GPIO0_HSIOM ioss_0_port_5_pin_6_HSIOM
#define LED0_HSIOM GPIO0_HSIOM
#define GPIO0_IRQ ioss_interrupts_gpio_5_IRQn
#define LED0_IRQ GPIO0_IRQ
#if defined (CY_USING_HAL)
	#define GPIO0_HAL_PORT_PIN P5_6
	#define LED0_HAL_PORT_PIN GPIO0_HAL_PORT_PIN
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define GPIO0 P5_6
	#define LED0 GPIO0
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define GPIO0_HAL_IRQ CYHAL_GPIO_IRQ_NONE
	#define LED0_HAL_IRQ GPIO0_HAL_IRQ
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define GPIO0_HAL_DIR CYHAL_GPIO_DIR_BIDIRECTIONAL 
	#define LED0_HAL_DIR GPIO0_HAL_DIR
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define GPIO0_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_STRONG
	#define LED0_HAL_DRIVEMODE GPIO0_HAL_DRIVEMODE
#endif //defined (CY_USING_HAL)
#define GPIO1_ENABLED 1U
#define LED1_ENABLED GPIO1_ENABLED
#define GPIO1_PORT GPIO_PRT5
#define LED1_PORT GPIO1_PORT
#define GPIO1_PORT_NUM 5U
#define LED1_PORT_NUM GPIO1_PORT_NUM
#define GPIO1_PIN 7U
#define LED1_PIN GPIO1_PIN
#define GPIO1_NUM 7U
#define LED1_NUM GPIO1_NUM
#define GPIO1_DRIVEMODE CY_GPIO_DM_STRONG
#define LED1_DRIVEMODE GPIO1_DRIVEMODE
#define GPIO1_INIT_DRIVESTATE 1
#define LED1_INIT_DRIVESTATE GPIO1_INIT_DRIVESTATE
#ifndef ioss_0_port_5_pin_7_HSIOM
	#define ioss_0_port_5_pin_7_HSIOM HSIOM_SEL_GPIO
#endif
#define GPIO1_HSIOM ioss_0_port_5_pin_7_HSIOM
#define LED1_HSIOM GPIO1_HSIOM
#define GPIO1_IRQ ioss_interrupts_gpio_5_IRQn
#define LED1_IRQ GPIO1_IRQ
#if defined (CY_USING_HAL)
	#define GPIO1_HAL_PORT_PIN P5_7
	#define LED1_HAL_PORT_PIN GPIO1_HAL_PORT_PIN
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define GPIO1 P5_7
	#define LED1 GPIO1
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define GPIO1_HAL_IRQ CYHAL_GPIO_IRQ_NONE
	#define LED1_HAL_IRQ GPIO1_HAL_IRQ
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define GPIO1_HAL_DIR CYHAL_GPIO_DIR_BIDIRECTIONAL 
	#define LED1_HAL_DIR GPIO1_HAL_DIR
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define GPIO1_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_STRONG
	#define LED1_HAL_DRIVEMODE GPIO1_HAL_DRIVEMODE
#endif //defined (CY_USING_HAL)
#define GPIO2_ENABLED 1U
#define GPIO2_PORT GPIO_PRT6
#define GPIO2_PORT_NUM 6U
#define GPIO2_PIN 2U
#define GPIO2_NUM 2U
#define GPIO2_DRIVEMODE CY_GPIO_DM_HIGHZ
#define GPIO2_INIT_DRIVESTATE 1
#ifndef ioss_0_port_6_pin_2_HSIOM
	#define ioss_0_port_6_pin_2_HSIOM HSIOM_SEL_GPIO
#endif
#define GPIO2_HSIOM ioss_0_port_6_pin_2_HSIOM
#define GPIO2_IRQ ioss_interrupts_gpio_6_IRQn
#if defined (CY_USING_HAL)
	#define GPIO2_HAL_PORT_PIN P6_2
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define GPIO2 P6_2
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define GPIO2_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define GPIO2_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define GPIO2_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_NONE
#endif //defined (CY_USING_HAL)
#define GPIO3_ENABLED 1U
#define GPIO3_PORT GPIO_PRT6
#define GPIO3_PORT_NUM 6U
#define GPIO3_PIN 3U
#define GPIO3_NUM 3U
#define GPIO3_DRIVEMODE CY_GPIO_DM_HIGHZ
#define GPIO3_INIT_DRIVESTATE 1
#ifndef ioss_0_port_6_pin_3_HSIOM
	#define ioss_0_port_6_pin_3_HSIOM HSIOM_SEL_GPIO
#endif
#define GPIO3_HSIOM ioss_0_port_6_pin_3_HSIOM
#define GPIO3_IRQ ioss_interrupts_gpio_6_IRQn
#if defined (CY_USING_HAL)
	#define GPIO3_HAL_PORT_PIN P6_3
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define GPIO3 P6_3
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define GPIO3_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define GPIO3_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define GPIO3_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_NONE
#endif //defined (CY_USING_HAL)
#define SWO_ENABLED 1U
#define DEBUG_I2C_SCL_ENABLED SWO_ENABLED
#define SWO_PORT GPIO_PRT6
#define DEBUG_I2C_SCL_PORT SWO_PORT
#define SWO_PORT_NUM 6U
#define DEBUG_I2C_SCL_PORT_NUM SWO_PORT_NUM
#define SWO_PIN 4U
#define DEBUG_I2C_SCL_PIN SWO_PIN
#define SWO_NUM 4U
#define DEBUG_I2C_SCL_NUM SWO_NUM
#define SWO_DRIVEMODE CY_GPIO_DM_OD_DRIVESLOW
#define DEBUG_I2C_SCL_DRIVEMODE SWO_DRIVEMODE
#define SWO_INIT_DRIVESTATE 1
#define DEBUG_I2C_SCL_INIT_DRIVESTATE SWO_INIT_DRIVESTATE
#ifndef ioss_0_port_6_pin_4_HSIOM
	#define ioss_0_port_6_pin_4_HSIOM HSIOM_SEL_GPIO
#endif
#define SWO_HSIOM ioss_0_port_6_pin_4_HSIOM
#define DEBUG_I2C_SCL_HSIOM SWO_HSIOM
#define SWO_IRQ ioss_interrupts_gpio_6_IRQn
#define DEBUG_I2C_SCL_IRQ SWO_IRQ
#if defined (CY_USING_HAL)
	#define SWO_HAL_PORT_PIN P6_4
	#define DEBUG_I2C_SCL_HAL_PORT_PIN SWO_HAL_PORT_PIN
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define SWO P6_4
	#define DEBUG_I2C_SCL SWO
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define SWO_HAL_IRQ CYHAL_GPIO_IRQ_NONE
	#define DEBUG_I2C_SCL_HAL_IRQ SWO_HAL_IRQ
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define SWO_HAL_DIR CYHAL_GPIO_DIR_BIDIRECTIONAL 
	#define DEBUG_I2C_SCL_HAL_DIR SWO_HAL_DIR
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define SWO_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_OPENDRAINDRIVESLOW
	#define DEBUG_I2C_SCL_HAL_DRIVEMODE SWO_HAL_DRIVEMODE
#endif //defined (CY_USING_HAL)
#define DEBUG_I2C_SDA_ENABLED 1U
#define DEBUG_I2C_SDA_PORT GPIO_PRT6
#define DEBUG_I2C_SDA_PORT_NUM 6U
#define DEBUG_I2C_SDA_PIN 5U
#define DEBUG_I2C_SDA_NUM 5U
#define DEBUG_I2C_SDA_DRIVEMODE CY_GPIO_DM_OD_DRIVESLOW
#define DEBUG_I2C_SDA_INIT_DRIVESTATE 1
#ifndef ioss_0_port_6_pin_5_HSIOM
	#define ioss_0_port_6_pin_5_HSIOM HSIOM_SEL_GPIO
#endif
#define DEBUG_I2C_SDA_HSIOM ioss_0_port_6_pin_5_HSIOM
#define DEBUG_I2C_SDA_IRQ ioss_interrupts_gpio_6_IRQn
#if defined (CY_USING_HAL)
	#define DEBUG_I2C_SDA_HAL_PORT_PIN P6_5
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define DEBUG_I2C_SDA P6_5
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define DEBUG_I2C_SDA_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define DEBUG_I2C_SDA_HAL_DIR CYHAL_GPIO_DIR_BIDIRECTIONAL 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define DEBUG_I2C_SDA_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_OPENDRAINDRIVESLOW
#endif //defined (CY_USING_HAL)
#define CYBSP_SWDIO_ENABLED 1U
#define CYBSP_SWDIO_PORT GPIO_PRT6
#define CYBSP_SWDIO_PORT_NUM 6U
#define CYBSP_SWDIO_PIN 6U
#define CYBSP_SWDIO_NUM 6U
#define CYBSP_SWDIO_DRIVEMODE CY_GPIO_DM_PULLUP
#define CYBSP_SWDIO_INIT_DRIVESTATE 1
#ifndef ioss_0_port_6_pin_6_HSIOM
	#define ioss_0_port_6_pin_6_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_SWDIO_HSIOM ioss_0_port_6_pin_6_HSIOM
#define CYBSP_SWDIO_IRQ ioss_interrupts_gpio_6_IRQn
#if defined (CY_USING_HAL)
	#define CYBSP_SWDIO_HAL_PORT_PIN P6_6
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_SWDIO P6_6
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_SWDIO_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_SWDIO_HAL_DIR CYHAL_GPIO_DIR_BIDIRECTIONAL 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_SWDIO_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_PULLUP
#endif //defined (CY_USING_HAL)
#define CYBSP_SWDCK_ENABLED 1U
#define CYBSP_SWDCK_PORT GPIO_PRT6
#define CYBSP_SWDCK_PORT_NUM 6U
#define CYBSP_SWDCK_PIN 7U
#define CYBSP_SWDCK_NUM 7U
#define CYBSP_SWDCK_DRIVEMODE CY_GPIO_DM_PULLDOWN
#define CYBSP_SWDCK_INIT_DRIVESTATE 1
#ifndef ioss_0_port_6_pin_7_HSIOM
	#define ioss_0_port_6_pin_7_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_SWDCK_HSIOM ioss_0_port_6_pin_7_HSIOM
#define CYBSP_SWDCK_IRQ ioss_interrupts_gpio_6_IRQn
#if defined (CY_USING_HAL)
	#define CYBSP_SWDCK_HAL_PORT_PIN P6_7
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_SWDCK P6_7
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_SWDCK_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_SWDCK_HAL_DIR CYHAL_GPIO_DIR_BIDIRECTIONAL 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_SWDCK_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_PULLDOWN
#endif //defined (CY_USING_HAL)
#define PWM_AL_ENABLED 1U
#define PWM_AL_PORT GPIO_PRT7
#define PWM_AL_PORT_NUM 7U
#define PWM_AL_PIN 0U
#define PWM_AL_NUM 0U
#define PWM_AL_DRIVEMODE CY_GPIO_DM_STRONG_IN_OFF
#define PWM_AL_INIT_DRIVESTATE 1
#ifndef ioss_0_port_7_pin_0_HSIOM
	#define ioss_0_port_7_pin_0_HSIOM HSIOM_SEL_GPIO
#endif
#define PWM_AL_HSIOM ioss_0_port_7_pin_0_HSIOM
#define PWM_AL_IRQ ioss_interrupts_gpio_7_IRQn
#if defined (CY_USING_HAL)
	#define PWM_AL_HAL_PORT_PIN P7_0
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define PWM_AL P7_0
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define PWM_AL_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define PWM_AL_HAL_DIR CYHAL_GPIO_DIR_OUTPUT 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define PWM_AL_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_STRONG
#endif //defined (CY_USING_HAL)
#define PWM_AH_ENABLED 1U
#define PWM_AH_PORT GPIO_PRT7
#define PWM_AH_PORT_NUM 7U
#define PWM_AH_PIN 1U
#define PWM_AH_NUM 1U
#define PWM_AH_DRIVEMODE CY_GPIO_DM_STRONG_IN_OFF
#define PWM_AH_INIT_DRIVESTATE 1
#ifndef ioss_0_port_7_pin_1_HSIOM
	#define ioss_0_port_7_pin_1_HSIOM HSIOM_SEL_GPIO
#endif
#define PWM_AH_HSIOM ioss_0_port_7_pin_1_HSIOM
#define PWM_AH_IRQ ioss_interrupts_gpio_7_IRQn
#if defined (CY_USING_HAL)
	#define PWM_AH_HAL_PORT_PIN P7_1
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define PWM_AH P7_1
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define PWM_AH_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define PWM_AH_HAL_DIR CYHAL_GPIO_DIR_OUTPUT 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define PWM_AH_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_STRONG
#endif //defined (CY_USING_HAL)
#define PWM_BL_ENABLED 1U
#define PWM_BL_PORT GPIO_PRT7
#define PWM_BL_PORT_NUM 7U
#define PWM_BL_PIN 2U
#define PWM_BL_NUM 2U
#define PWM_BL_DRIVEMODE CY_GPIO_DM_STRONG_IN_OFF
#define PWM_BL_INIT_DRIVESTATE 1
#ifndef ioss_0_port_7_pin_2_HSIOM
	#define ioss_0_port_7_pin_2_HSIOM HSIOM_SEL_GPIO
#endif
#define PWM_BL_HSIOM ioss_0_port_7_pin_2_HSIOM
#define PWM_BL_IRQ ioss_interrupts_gpio_7_IRQn
#if defined (CY_USING_HAL)
	#define PWM_BL_HAL_PORT_PIN P7_2
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define PWM_BL P7_2
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define PWM_BL_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define PWM_BL_HAL_DIR CYHAL_GPIO_DIR_OUTPUT 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define PWM_BL_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_STRONG
#endif //defined (CY_USING_HAL)
#define PWM_BH_ENABLED 1U
#define PWM_BH_PORT GPIO_PRT7
#define PWM_BH_PORT_NUM 7U
#define PWM_BH_PIN 3U
#define PWM_BH_NUM 3U
#define PWM_BH_DRIVEMODE CY_GPIO_DM_STRONG_IN_OFF
#define PWM_BH_INIT_DRIVESTATE 1
#ifndef ioss_0_port_7_pin_3_HSIOM
	#define ioss_0_port_7_pin_3_HSIOM HSIOM_SEL_GPIO
#endif
#define PWM_BH_HSIOM ioss_0_port_7_pin_3_HSIOM
#define PWM_BH_IRQ ioss_interrupts_gpio_7_IRQn
#if defined (CY_USING_HAL)
	#define PWM_BH_HAL_PORT_PIN P7_3
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define PWM_BH P7_3
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define PWM_BH_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define PWM_BH_HAL_DIR CYHAL_GPIO_DIR_OUTPUT 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define PWM_BH_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_STRONG
#endif //defined (CY_USING_HAL)
#define PWM_CL_ENABLED 1U
#define PWM_CL_PORT GPIO_PRT8
#define PWM_CL_PORT_NUM 8U
#define PWM_CL_PIN 0U
#define PWM_CL_NUM 0U
#define PWM_CL_DRIVEMODE CY_GPIO_DM_STRONG_IN_OFF
#define PWM_CL_INIT_DRIVESTATE 1
#ifndef ioss_0_port_8_pin_0_HSIOM
	#define ioss_0_port_8_pin_0_HSIOM HSIOM_SEL_GPIO
#endif
#define PWM_CL_HSIOM ioss_0_port_8_pin_0_HSIOM
#define PWM_CL_IRQ ioss_interrupts_gpio_8_IRQn
#if defined (CY_USING_HAL)
	#define PWM_CL_HAL_PORT_PIN P8_0
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define PWM_CL P8_0
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define PWM_CL_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define PWM_CL_HAL_DIR CYHAL_GPIO_DIR_OUTPUT 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define PWM_CL_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_STRONG
#endif //defined (CY_USING_HAL)
#define PWM_CH_ENABLED 1U
#define PWM_CH_PORT GPIO_PRT8
#define PWM_CH_PORT_NUM 8U
#define PWM_CH_PIN 1U
#define PWM_CH_NUM 1U
#define PWM_CH_DRIVEMODE CY_GPIO_DM_STRONG_IN_OFF
#define PWM_CH_INIT_DRIVESTATE 1
#ifndef ioss_0_port_8_pin_1_HSIOM
	#define ioss_0_port_8_pin_1_HSIOM HSIOM_SEL_GPIO
#endif
#define PWM_CH_HSIOM ioss_0_port_8_pin_1_HSIOM
#define PWM_CH_IRQ ioss_interrupts_gpio_8_IRQn
#if defined (CY_USING_HAL)
	#define PWM_CH_HAL_PORT_PIN P8_1
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define PWM_CH P8_1
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define PWM_CH_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define PWM_CH_HAL_DIR CYHAL_GPIO_DIR_OUTPUT 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define PWM_CH_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_STRONG
#endif //defined (CY_USING_HAL)
#define DRV_SPI_MOSI_ENABLED 1U
#define DRV_SPI_MOSI_PORT GPIO_PRT9
#define DRV_SPI_MOSI_PORT_NUM 9U
#define DRV_SPI_MOSI_PIN 0U
#define DRV_SPI_MOSI_NUM 0U
#define DRV_SPI_MOSI_DRIVEMODE CY_GPIO_DM_HIGHZ
#define DRV_SPI_MOSI_INIT_DRIVESTATE 1
#ifndef ioss_0_port_9_pin_0_HSIOM
	#define ioss_0_port_9_pin_0_HSIOM HSIOM_SEL_GPIO
#endif
#define DRV_SPI_MOSI_HSIOM ioss_0_port_9_pin_0_HSIOM
#define DRV_SPI_MOSI_IRQ ioss_interrupts_gpio_9_IRQn
#if defined (CY_USING_HAL)
	#define DRV_SPI_MOSI_HAL_PORT_PIN P9_0
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define DRV_SPI_MOSI P9_0
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define DRV_SPI_MOSI_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define DRV_SPI_MOSI_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define DRV_SPI_MOSI_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_NONE
#endif //defined (CY_USING_HAL)
#define DRV_SPI_MISO_ENABLED 1U
#define DRV_SPI_MISO_PORT GPIO_PRT9
#define DRV_SPI_MISO_PORT_NUM 9U
#define DRV_SPI_MISO_PIN 1U
#define DRV_SPI_MISO_NUM 1U
#define DRV_SPI_MISO_DRIVEMODE CY_GPIO_DM_STRONG_IN_OFF
#define DRV_SPI_MISO_INIT_DRIVESTATE 1
#ifndef ioss_0_port_9_pin_1_HSIOM
	#define ioss_0_port_9_pin_1_HSIOM HSIOM_SEL_GPIO
#endif
#define DRV_SPI_MISO_HSIOM ioss_0_port_9_pin_1_HSIOM
#define DRV_SPI_MISO_IRQ ioss_interrupts_gpio_9_IRQn
#if defined (CY_USING_HAL)
	#define DRV_SPI_MISO_HAL_PORT_PIN P9_1
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define DRV_SPI_MISO P9_1
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define DRV_SPI_MISO_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define DRV_SPI_MISO_HAL_DIR CYHAL_GPIO_DIR_OUTPUT 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define DRV_SPI_MISO_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_STRONG
#endif //defined (CY_USING_HAL)
#define DRV_SPI_SCK_ENABLED 1U
#define DRV_SPI_SCK_PORT GPIO_PRT9
#define DRV_SPI_SCK_PORT_NUM 9U
#define DRV_SPI_SCK_PIN 2U
#define DRV_SPI_SCK_NUM 2U
#define DRV_SPI_SCK_DRIVEMODE CY_GPIO_DM_HIGHZ
#define DRV_SPI_SCK_INIT_DRIVESTATE 1
#ifndef ioss_0_port_9_pin_2_HSIOM
	#define ioss_0_port_9_pin_2_HSIOM HSIOM_SEL_GPIO
#endif
#define DRV_SPI_SCK_HSIOM ioss_0_port_9_pin_2_HSIOM
#define DRV_SPI_SCK_IRQ ioss_interrupts_gpio_9_IRQn
#if defined (CY_USING_HAL)
	#define DRV_SPI_SCK_HAL_PORT_PIN P9_2
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define DRV_SPI_SCK P9_2
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define DRV_SPI_SCK_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define DRV_SPI_SCK_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define DRV_SPI_SCK_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_NONE
#endif //defined (CY_USING_HAL)
#define DRV_SPI_CS_ENABLED 1U
#define DRV_SPI_CS_PORT GPIO_PRT9
#define DRV_SPI_CS_PORT_NUM 9U
#define DRV_SPI_CS_PIN 3U
#define DRV_SPI_CS_NUM 3U
#define DRV_SPI_CS_DRIVEMODE CY_GPIO_DM_HIGHZ
#define DRV_SPI_CS_INIT_DRIVESTATE 1
#ifndef ioss_0_port_9_pin_3_HSIOM
	#define ioss_0_port_9_pin_3_HSIOM HSIOM_SEL_GPIO
#endif
#define DRV_SPI_CS_HSIOM ioss_0_port_9_pin_3_HSIOM
#define DRV_SPI_CS_IRQ ioss_interrupts_gpio_9_IRQn
#if defined (CY_USING_HAL)
	#define DRV_SPI_CS_HAL_PORT_PIN P9_3
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define DRV_SPI_CS P9_3
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define DRV_SPI_CS_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define DRV_SPI_CS_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define DRV_SPI_CS_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_NONE
#endif //defined (CY_USING_HAL)
#define DRV_NFAULT_ENABLED 1U
#define DRV_NFAULT_PORT GPIO_PRT9
#define DRV_NFAULT_PORT_NUM 9U
#define DRV_NFAULT_PIN 4U
#define DRV_NFAULT_NUM 4U
#define DRV_NFAULT_DRIVEMODE CY_GPIO_DM_ANALOG
#define DRV_NFAULT_INIT_DRIVESTATE 1
#ifndef ioss_0_port_9_pin_4_HSIOM
	#define ioss_0_port_9_pin_4_HSIOM HSIOM_SEL_GPIO
#endif
#define DRV_NFAULT_HSIOM ioss_0_port_9_pin_4_HSIOM
#define DRV_NFAULT_IRQ ioss_interrupts_gpio_9_IRQn
#if defined (CY_USING_HAL)
	#define DRV_NFAULT_HAL_PORT_PIN P9_4
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define DRV_NFAULT P9_4
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define DRV_NFAULT_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define DRV_NFAULT_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define DRV_NFAULT_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
#endif //defined (CY_USING_HAL)
#define CAN_FAULT_ENABLED 1U
#define CAN_FAULT_PORT GPIO_PRT9
#define CAN_FAULT_PORT_NUM 9U
#define CAN_FAULT_PIN 5U
#define CAN_FAULT_NUM 5U
#define CAN_FAULT_DRIVEMODE CY_GPIO_DM_ANALOG
#define CAN_FAULT_INIT_DRIVESTATE 1
#ifndef ioss_0_port_9_pin_5_HSIOM
	#define ioss_0_port_9_pin_5_HSIOM HSIOM_SEL_GPIO
#endif
#define CAN_FAULT_HSIOM ioss_0_port_9_pin_5_HSIOM
#define CAN_FAULT_IRQ ioss_interrupts_gpio_9_IRQn
#if defined (CY_USING_HAL)
	#define CAN_FAULT_HAL_PORT_PIN P9_5
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CAN_FAULT P9_5
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CAN_FAULT_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CAN_FAULT_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CAN_FAULT_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
#endif //defined (CY_USING_HAL)
#define SMART_IO_ENABLED 1U
#define SMART_IO_HW SMARTIO_PRT9

extern const cy_stc_gpio_pin_config_t ENC0_I_config;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t ENC0_I_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t ENC0_A_config;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t ENC0_A_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t ENC0_B_config;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t ENC0_B_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t ISENSE_A_config;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t ISENSE_A_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t ISENSE_B_config;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t ISENSE_B_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t ISENSE_C_config;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t ISENSE_C_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t V_BUS_config;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t V_BUS_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t TEMP1_config;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t TEMP1_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t TEMP2_config;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t TEMP2_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t DRV_ENABLE_config;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t DRV_ENABLE_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t DRV_CAL_config;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t DRV_CAL_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t ECO_IN_config;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t ECO_IN_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t ECO_OUT_config;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t ECO_OUT_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t ENC_SSC_DO_config;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t ENC_SSC_DO_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t ENC_SSC_DI_config;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t ENC_SSC_DI_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t ENC_SSC_SCK_config;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t ENC_SSC_SCK_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t ENC_SSC_CS0_config;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t ENC_SSC_CS0_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t ENC_SSC_CS1_config;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t ENC_SSC_CS1_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t ENC1_I_config;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t ENC1_I_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t ENC1_A_config;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t ENC1_A_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t ENC1_B_config;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t ENC1_B_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t DEBUG_UART_RX_config;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t DEBUG_UART_RX_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t DEBUG_UART_TX_config;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t DEBUG_UART_TX_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t CANFD_RX_config;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t CANFD_RX_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t CANFD_TX_config;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t CANFD_TX_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t GPIO0_config;
#define LED0_config GPIO0_config
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t GPIO0_obj;
	#define LED0_obj GPIO0_obj
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t GPIO1_config;
#define LED1_config GPIO1_config
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t GPIO1_obj;
	#define LED1_obj GPIO1_obj
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t GPIO2_config;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t GPIO2_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t GPIO3_config;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t GPIO3_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t SWO_config;
#define DEBUG_I2C_SCL_config SWO_config
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t SWO_obj;
	#define DEBUG_I2C_SCL_obj SWO_obj
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t DEBUG_I2C_SDA_config;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t DEBUG_I2C_SDA_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t CYBSP_SWDIO_config;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t CYBSP_SWDIO_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t CYBSP_SWDCK_config;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t CYBSP_SWDCK_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t PWM_AL_config;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t PWM_AL_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t PWM_AH_config;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t PWM_AH_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t PWM_BL_config;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t PWM_BL_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t PWM_BH_config;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t PWM_BH_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t PWM_CL_config;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t PWM_CL_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t PWM_CH_config;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t PWM_CH_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t DRV_SPI_MOSI_config;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t DRV_SPI_MOSI_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t DRV_SPI_MISO_config;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t DRV_SPI_MISO_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t DRV_SPI_SCK_config;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t DRV_SPI_SCK_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t DRV_SPI_CS_config;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t DRV_SPI_CS_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t DRV_NFAULT_config;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t DRV_NFAULT_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t CAN_FAULT_config;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t CAN_FAULT_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_smartio_config_t SMART_IO_config;

void init_cycfg_pins(void);

#if defined(__cplusplus)
}
#endif


#endif /* CYCFG_PINS_H */

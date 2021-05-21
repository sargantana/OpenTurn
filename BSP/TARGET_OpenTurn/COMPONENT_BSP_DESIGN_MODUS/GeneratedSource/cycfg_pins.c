/*******************************************************************************
* File Name: cycfg_pins.c
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

#include "cycfg_pins.h"

const cy_stc_gpio_pin_config_t ENC0_I_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_HIGHZ,
	.hsiom = ENC0_I_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t ENC0_I_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = ENC0_I_PORT_NUM,
		.channel_num = ENC0_I_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t ENC0_A_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_HIGHZ,
	.hsiom = ENC0_A_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t ENC0_A_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = ENC0_A_PORT_NUM,
		.channel_num = ENC0_A_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t ENC0_B_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_HIGHZ,
	.hsiom = ENC0_B_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t ENC0_B_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = ENC0_B_PORT_NUM,
		.channel_num = ENC0_B_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t ISENSE_A_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_ANALOG,
	.hsiom = ISENSE_A_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t ISENSE_A_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = ISENSE_A_PORT_NUM,
		.channel_num = ISENSE_A_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t ISENSE_B_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_ANALOG,
	.hsiom = ISENSE_B_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t ISENSE_B_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = ISENSE_B_PORT_NUM,
		.channel_num = ISENSE_B_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t ISENSE_C_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_ANALOG,
	.hsiom = ISENSE_C_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t ISENSE_C_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = ISENSE_C_PORT_NUM,
		.channel_num = ISENSE_C_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t V_BUS_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_ANALOG,
	.hsiom = V_BUS_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t V_BUS_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = V_BUS_PORT_NUM,
		.channel_num = V_BUS_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t TEMP1_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_ANALOG,
	.hsiom = TEMP1_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t TEMP1_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = TEMP1_PORT_NUM,
		.channel_num = TEMP1_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t TEMP2_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_ANALOG,
	.hsiom = TEMP2_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t TEMP2_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = TEMP2_PORT_NUM,
		.channel_num = TEMP2_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t DRV_ENABLE_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_ANALOG,
	.hsiom = DRV_ENABLE_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t DRV_ENABLE_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = DRV_ENABLE_PORT_NUM,
		.channel_num = DRV_ENABLE_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t DRV_CAL_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_ANALOG,
	.hsiom = DRV_CAL_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t DRV_CAL_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = DRV_CAL_PORT_NUM,
		.channel_num = DRV_CAL_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t ECO_IN_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_ANALOG,
	.hsiom = ECO_IN_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t ECO_IN_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = ECO_IN_PORT_NUM,
		.channel_num = ECO_IN_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t ECO_OUT_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_ANALOG,
	.hsiom = ECO_OUT_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t ECO_OUT_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = ECO_OUT_PORT_NUM,
		.channel_num = ECO_OUT_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t ENC_SSC_DO_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_HIGHZ,
	.hsiom = ENC_SSC_DO_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t ENC_SSC_DO_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = ENC_SSC_DO_PORT_NUM,
		.channel_num = ENC_SSC_DO_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t ENC_SSC_DI_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_STRONG_IN_OFF,
	.hsiom = ENC_SSC_DI_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t ENC_SSC_DI_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = ENC_SSC_DI_PORT_NUM,
		.channel_num = ENC_SSC_DI_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t ENC_SSC_SCK_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_HIGHZ,
	.hsiom = ENC_SSC_SCK_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t ENC_SSC_SCK_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = ENC_SSC_SCK_PORT_NUM,
		.channel_num = ENC_SSC_SCK_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t ENC_SSC_CS0_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_HIGHZ,
	.hsiom = ENC_SSC_CS0_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t ENC_SSC_CS0_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = ENC_SSC_CS0_PORT_NUM,
		.channel_num = ENC_SSC_CS0_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t ENC_SSC_CS1_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_HIGHZ,
	.hsiom = ENC_SSC_CS1_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t ENC_SSC_CS1_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = ENC_SSC_CS1_PORT_NUM,
		.channel_num = ENC_SSC_CS1_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t ENC1_I_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_HIGHZ,
	.hsiom = ENC1_I_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t ENC1_I_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = ENC1_I_PORT_NUM,
		.channel_num = ENC1_I_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t ENC1_A_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_HIGHZ,
	.hsiom = ENC1_A_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t ENC1_A_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = ENC1_A_PORT_NUM,
		.channel_num = ENC1_A_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t ENC1_B_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_HIGHZ,
	.hsiom = ENC1_B_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t ENC1_B_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = ENC1_B_PORT_NUM,
		.channel_num = ENC1_B_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t DEBUG_UART_RX_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_HIGHZ,
	.hsiom = DEBUG_UART_RX_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t DEBUG_UART_RX_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = DEBUG_UART_RX_PORT_NUM,
		.channel_num = DEBUG_UART_RX_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t DEBUG_UART_TX_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_STRONG_IN_OFF,
	.hsiom = DEBUG_UART_TX_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t DEBUG_UART_TX_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = DEBUG_UART_TX_PORT_NUM,
		.channel_num = DEBUG_UART_TX_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CANFD_RX_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_PULLUP,
	.hsiom = CANFD_RX_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t CANFD_RX_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = CANFD_RX_PORT_NUM,
		.channel_num = CANFD_RX_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CANFD_TX_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_STRONG,
	.hsiom = CANFD_TX_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t CANFD_TX_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = CANFD_TX_PORT_NUM,
		.channel_num = CANFD_TX_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t GPIO0_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_STRONG,
	.hsiom = GPIO0_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t GPIO0_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = GPIO0_PORT_NUM,
		.channel_num = GPIO0_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t GPIO1_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_STRONG,
	.hsiom = GPIO1_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t GPIO1_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = GPIO1_PORT_NUM,
		.channel_num = GPIO1_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t GPIO2_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_HIGHZ,
	.hsiom = GPIO2_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t GPIO2_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = GPIO2_PORT_NUM,
		.channel_num = GPIO2_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t GPIO3_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_HIGHZ,
	.hsiom = GPIO3_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t GPIO3_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = GPIO3_PORT_NUM,
		.channel_num = GPIO3_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t SWO_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_OD_DRIVESLOW,
	.hsiom = SWO_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t SWO_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = SWO_PORT_NUM,
		.channel_num = SWO_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t DEBUG_I2C_SDA_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_OD_DRIVESLOW,
	.hsiom = DEBUG_I2C_SDA_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t DEBUG_I2C_SDA_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = DEBUG_I2C_SDA_PORT_NUM,
		.channel_num = DEBUG_I2C_SDA_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_SWDIO_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_PULLUP,
	.hsiom = CYBSP_SWDIO_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t CYBSP_SWDIO_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = CYBSP_SWDIO_PORT_NUM,
		.channel_num = CYBSP_SWDIO_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_SWDCK_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_PULLDOWN,
	.hsiom = CYBSP_SWDCK_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t CYBSP_SWDCK_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = CYBSP_SWDCK_PORT_NUM,
		.channel_num = CYBSP_SWDCK_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t PWM_AL_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_STRONG_IN_OFF,
	.hsiom = PWM_AL_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t PWM_AL_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = PWM_AL_PORT_NUM,
		.channel_num = PWM_AL_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t PWM_AH_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_STRONG_IN_OFF,
	.hsiom = PWM_AH_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t PWM_AH_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = PWM_AH_PORT_NUM,
		.channel_num = PWM_AH_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t PWM_BL_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_STRONG_IN_OFF,
	.hsiom = PWM_BL_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t PWM_BL_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = PWM_BL_PORT_NUM,
		.channel_num = PWM_BL_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t PWM_BH_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_STRONG_IN_OFF,
	.hsiom = PWM_BH_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t PWM_BH_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = PWM_BH_PORT_NUM,
		.channel_num = PWM_BH_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t PWM_CL_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_STRONG_IN_OFF,
	.hsiom = PWM_CL_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t PWM_CL_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = PWM_CL_PORT_NUM,
		.channel_num = PWM_CL_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t PWM_CH_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_STRONG_IN_OFF,
	.hsiom = PWM_CH_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t PWM_CH_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = PWM_CH_PORT_NUM,
		.channel_num = PWM_CH_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t DRV_SPI_MOSI_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_HIGHZ,
	.hsiom = DRV_SPI_MOSI_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t DRV_SPI_MOSI_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = DRV_SPI_MOSI_PORT_NUM,
		.channel_num = DRV_SPI_MOSI_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t DRV_SPI_MISO_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_STRONG_IN_OFF,
	.hsiom = DRV_SPI_MISO_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t DRV_SPI_MISO_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = DRV_SPI_MISO_PORT_NUM,
		.channel_num = DRV_SPI_MISO_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t DRV_SPI_SCK_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_HIGHZ,
	.hsiom = DRV_SPI_SCK_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t DRV_SPI_SCK_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = DRV_SPI_SCK_PORT_NUM,
		.channel_num = DRV_SPI_SCK_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t DRV_SPI_CS_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_HIGHZ,
	.hsiom = DRV_SPI_CS_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t DRV_SPI_CS_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = DRV_SPI_CS_PORT_NUM,
		.channel_num = DRV_SPI_CS_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t DRV_NFAULT_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_ANALOG,
	.hsiom = DRV_NFAULT_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t DRV_NFAULT_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = DRV_NFAULT_PORT_NUM,
		.channel_num = DRV_NFAULT_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CAN_FAULT_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_ANALOG,
	.hsiom = CAN_FAULT_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t CAN_FAULT_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = CAN_FAULT_PORT_NUM,
		.channel_num = CAN_FAULT_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_smartio_config_t SMART_IO_config = 
{
	.clkSrc = CY_SMARTIO_CLK_ASYNC,
	.bypassMask = CY_SMARTIO_CHANNEL0|CY_SMARTIO_CHANNEL1|CY_SMARTIO_CHANNEL2|CY_SMARTIO_CHANNEL3|CY_SMARTIO_CHANNEL4|CY_SMARTIO_CHANNEL5|0u|0u,
	.ioSyncEn = 0u|0u|0u|0u|0u|0u|0u|0u,
	.chipSyncEn = 0u|0u|0u|0u|0u|0u|0u|0u,
	.lutCfg0 = NULL,
	.lutCfg1 = NULL,
	.lutCfg2 = NULL,
	.lutCfg3 = NULL,
	.lutCfg4 = NULL,
	.lutCfg5 = NULL,
	.lutCfg6 = NULL,
	.lutCfg7 = NULL,
	.duCfg = NULL,
	.hldOvr = false,
};


void init_cycfg_pins(void)
{
	Cy_GPIO_Pin_Init(ENC0_I_PORT, ENC0_I_PIN, &ENC0_I_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&ENC0_I_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(ENC0_A_PORT, ENC0_A_PIN, &ENC0_A_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&ENC0_A_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(ENC0_B_PORT, ENC0_B_PIN, &ENC0_B_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&ENC0_B_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(ISENSE_A_PORT, ISENSE_A_PIN, &ISENSE_A_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&ISENSE_A_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(ISENSE_B_PORT, ISENSE_B_PIN, &ISENSE_B_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&ISENSE_B_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(ISENSE_C_PORT, ISENSE_C_PIN, &ISENSE_C_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&ISENSE_C_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(V_BUS_PORT, V_BUS_PIN, &V_BUS_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&V_BUS_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(TEMP1_PORT, TEMP1_PIN, &TEMP1_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&TEMP1_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(TEMP2_PORT, TEMP2_PIN, &TEMP2_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&TEMP2_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(DRV_ENABLE_PORT, DRV_ENABLE_PIN, &DRV_ENABLE_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&DRV_ENABLE_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(DRV_CAL_PORT, DRV_CAL_PIN, &DRV_CAL_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&DRV_CAL_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(ECO_IN_PORT, ECO_IN_PIN, &ECO_IN_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&ECO_IN_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(ECO_OUT_PORT, ECO_OUT_PIN, &ECO_OUT_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&ECO_OUT_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(ENC_SSC_DO_PORT, ENC_SSC_DO_PIN, &ENC_SSC_DO_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&ENC_SSC_DO_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(ENC_SSC_DI_PORT, ENC_SSC_DI_PIN, &ENC_SSC_DI_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&ENC_SSC_DI_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(ENC_SSC_SCK_PORT, ENC_SSC_SCK_PIN, &ENC_SSC_SCK_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&ENC_SSC_SCK_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(ENC_SSC_CS0_PORT, ENC_SSC_CS0_PIN, &ENC_SSC_CS0_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&ENC_SSC_CS0_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(ENC_SSC_CS1_PORT, ENC_SSC_CS1_PIN, &ENC_SSC_CS1_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&ENC_SSC_CS1_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(ENC1_I_PORT, ENC1_I_PIN, &ENC1_I_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&ENC1_I_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(ENC1_A_PORT, ENC1_A_PIN, &ENC1_A_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&ENC1_A_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(ENC1_B_PORT, ENC1_B_PIN, &ENC1_B_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&ENC1_B_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(DEBUG_UART_RX_PORT, DEBUG_UART_RX_PIN, &DEBUG_UART_RX_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&DEBUG_UART_RX_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(DEBUG_UART_TX_PORT, DEBUG_UART_TX_PIN, &DEBUG_UART_TX_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&DEBUG_UART_TX_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(CANFD_RX_PORT, CANFD_RX_PIN, &CANFD_RX_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&CANFD_RX_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(CANFD_TX_PORT, CANFD_TX_PIN, &CANFD_TX_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&CANFD_TX_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(GPIO0_PORT, GPIO0_PIN, &GPIO0_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&GPIO0_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(GPIO1_PORT, GPIO1_PIN, &GPIO1_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&GPIO1_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(GPIO2_PORT, GPIO2_PIN, &GPIO2_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&GPIO2_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(GPIO3_PORT, GPIO3_PIN, &GPIO3_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&GPIO3_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(SWO_PORT, SWO_PIN, &SWO_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&SWO_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(DEBUG_I2C_SDA_PORT, DEBUG_I2C_SDA_PIN, &DEBUG_I2C_SDA_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&DEBUG_I2C_SDA_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(CYBSP_SWDIO_PORT, CYBSP_SWDIO_PIN, &CYBSP_SWDIO_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&CYBSP_SWDIO_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(CYBSP_SWDCK_PORT, CYBSP_SWDCK_PIN, &CYBSP_SWDCK_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&CYBSP_SWDCK_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(PWM_AL_PORT, PWM_AL_PIN, &PWM_AL_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&PWM_AL_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(PWM_AH_PORT, PWM_AH_PIN, &PWM_AH_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&PWM_AH_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(PWM_BL_PORT, PWM_BL_PIN, &PWM_BL_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&PWM_BL_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(PWM_BH_PORT, PWM_BH_PIN, &PWM_BH_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&PWM_BH_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(PWM_CL_PORT, PWM_CL_PIN, &PWM_CL_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&PWM_CL_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(PWM_CH_PORT, PWM_CH_PIN, &PWM_CH_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&PWM_CH_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(DRV_SPI_MOSI_PORT, DRV_SPI_MOSI_PIN, &DRV_SPI_MOSI_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&DRV_SPI_MOSI_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(DRV_SPI_MISO_PORT, DRV_SPI_MISO_PIN, &DRV_SPI_MISO_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&DRV_SPI_MISO_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(DRV_SPI_SCK_PORT, DRV_SPI_SCK_PIN, &DRV_SPI_SCK_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&DRV_SPI_SCK_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(DRV_SPI_CS_PORT, DRV_SPI_CS_PIN, &DRV_SPI_CS_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&DRV_SPI_CS_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(DRV_NFAULT_PORT, DRV_NFAULT_PIN, &DRV_NFAULT_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&DRV_NFAULT_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(CAN_FAULT_PORT, CAN_FAULT_PIN, &CAN_FAULT_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&CAN_FAULT_obj);
#endif //defined (CY_USING_HAL)

}

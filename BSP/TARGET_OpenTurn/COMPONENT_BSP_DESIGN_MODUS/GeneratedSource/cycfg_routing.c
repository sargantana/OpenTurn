/*******************************************************************************
* File Name: cycfg_routing.c
*
* Description:
* Establishes all necessary connections between hardware elements.
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

#include "cycfg_routing.h"

#include "cy_trigmux.h"

#include "stdbool.h"

#include "cy_device_headers.h"

void init_cycfg_routing(void)
{
	Cy_TrigMux_Connect(TRIG_IN_MUX_2_HSIOM_TR_OUT2, TRIG_OUT_MUX_2_TCPWM0_TR_IN7, false, TRIGGER_TYPE_LEVEL);
	Cy_TrigMux_Connect(TRIG_IN_MUX_2_HSIOM_TR_OUT3, TRIG_OUT_MUX_2_TCPWM0_TR_IN6, false, TRIGGER_TYPE_LEVEL);
	Cy_TrigMux_Connect(TRIG_IN_MUX_2_HSIOM_TR_OUT8, TRIG_OUT_MUX_2_TCPWM0_TR_IN8, false, TRIGGER_TYPE_LEVEL);
	Cy_TrigMux_Connect(TRIG_IN_MUX_2_HSIOM_TR_OUT9, TRIG_OUT_MUX_2_TCPWM0_TR_IN9, false, TRIGGER_TYPE_LEVEL);
	SAR0->MUX_SWITCH_SQ_CTRL = SAR_V2_MUX_SWITCH_SQ_CTRL_MUX_SQ_CTRL_P0_Msk;
	SAR0->MUX_SWITCH0 = SAR_V2_MUX_SWITCH0_MUX_FW_P0_VPLUS_Msk;
	SAR1->MUX_SWITCH_SQ_CTRL = SAR_V2_MUX_SWITCH_SQ_CTRL_MUX_SQ_CTRL_P1_Msk;
	SAR1->MUX_SWITCH0 = SAR_V2_MUX_SWITCH0_MUX_FW_P1_VPLUS_Msk;
	SAR0->CTRL |= SAR_V2_CTRL_ENABLED_Msk;
	SAR1->CTRL |= SAR_V2_CTRL_ENABLED_Msk;
}

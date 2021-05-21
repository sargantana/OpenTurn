/*******************************************************************************
* File Name: cycfg_routing.h
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

#if !defined(CYCFG_ROUTING_H)
#define CYCFG_ROUTING_H

#if defined(__cplusplus)
extern "C" {
#endif

#include "cycfg_notices.h"
void init_cycfg_routing(void);
#define init_cycfg_connectivity() init_cycfg_routing()
#define ioss_0_port_0_pin_3_HSIOM P0_3_TCPWM0_TR_ONE_CNT_IN3
#define ioss_0_port_0_pin_4_HSIOM P0_4_PERI_TR_IO_INPUT2
#define ioss_0_port_0_pin_5_HSIOM P0_5_PERI_TR_IO_INPUT3
#define ioss_0_port_2_pin_0_HSIOM P2_0_SCB1_SPI_MOSI
#define ioss_0_port_2_pin_1_HSIOM P2_1_SCB1_SPI_MISO
#define ioss_0_port_2_pin_2_HSIOM P2_2_SCB1_SPI_CLK
#define ioss_0_port_2_pin_3_HSIOM P2_3_SCB1_SPI_SELECT0
#define ioss_0_port_2_pin_4_HSIOM P2_4_SCB1_SPI_SELECT1
#define ioss_0_port_2_pin_5_HSIOM P2_5_TCPWM0_TR_ONE_CNT_IN2
#define ioss_0_port_2_pin_6_HSIOM P2_6_PERI_TR_IO_INPUT8
#define ioss_0_port_2_pin_7_HSIOM P2_7_PERI_TR_IO_INPUT9
#define ioss_0_port_5_pin_0_HSIOM P5_0_CANFD0_TTCAN_RX0
#define ioss_0_port_5_pin_1_HSIOM P5_1_CANFD0_TTCAN_TX0
#define ioss_0_port_6_pin_4_HSIOM P6_4_SCB6_I2C_SCL
#define ioss_0_port_6_pin_5_HSIOM P6_5_SCB6_I2C_SDA
#define ioss_0_port_6_pin_6_HSIOM P6_6_CPUSS_SWJ_SWDIO_TMS
#define ioss_0_port_6_pin_7_HSIOM P6_7_CPUSS_SWJ_SWCLK_TCLK
#define ioss_0_port_7_pin_0_HSIOM P7_0_TCPWM0_LINE262
#define ioss_0_port_7_pin_1_HSIOM P7_1_TCPWM0_LINE_COMPL262
#define ioss_0_port_7_pin_2_HSIOM P7_2_TCPWM0_LINE263
#define ioss_0_port_7_pin_3_HSIOM P7_3_TCPWM0_LINE_COMPL263
#define ioss_0_port_8_pin_0_HSIOM P8_0_TCPWM0_LINE258
#define ioss_0_port_8_pin_1_HSIOM P8_1_TCPWM0_LINE_COMPL258
#define ioss_0_port_9_pin_0_HSIOM P9_0_SCB2_SPI_MOSI
#define ioss_0_port_9_pin_1_HSIOM P9_1_SCB2_SPI_MISO
#define ioss_0_port_9_pin_2_HSIOM P9_2_SCB2_SPI_CLK
#define ioss_0_port_9_pin_3_HSIOM P9_3_SCB2_SPI_SELECT0
#define ioss_0_port_10_pin_0_ANALOG P10_0_PASS_SARMUX_PADS0
#define ioss_0_port_10_pin_1_ANALOG P10_1_PASS_SARMUX_PADS1
#define ioss_0_port_12_pin_6_ANALOG P12_6_SRSS_ECO_IN
#define ioss_0_port_12_pin_7_ANALOG P12_7_SRSS_ECO_OUT

#define ENC0_A_digital_in_0_TRIGGER_IN TRIG_IN_MUX_2_HSIOM_TR_OUT2
#define ENC0_B_digital_in_0_TRIGGER_IN TRIG_IN_MUX_2_HSIOM_TR_OUT3
#define ENC1_A_digital_in_0_TRIGGER_IN TRIG_IN_MUX_2_HSIOM_TR_OUT8
#define ENC1_B_digital_in_0_TRIGGER_IN TRIG_IN_MUX_2_HSIOM_TR_OUT9
#define ENCODER0_count_0_TRIGGER_OUT TRIG_OUT_MUX_2_TCPWM0_TR_IN7
#define ENCODER0_start_0_TRIGGER_OUT TRIG_OUT_MUX_2_TCPWM0_TR_IN6
#define ENCODER1_count_0_TRIGGER_OUT TRIG_OUT_MUX_2_TCPWM0_TR_IN8
#define ENCODER1_start_0_TRIGGER_OUT TRIG_OUT_MUX_2_TCPWM0_TR_IN9

#define SAR0_VPLUS0_PIN 0
#define SAR0_VPLUS0_PORT 0
#define SAR1_VPLUS0_PIN 1
#define SAR1_VPLUS0_PORT 0

#define TCPWM0_GRP0_CNT2_COUNT_VALUE 0xB
#define TCPWM0_GRP0_CNT2_RELOAD_VALUE 0x2
#define TCPWM0_GRP0_CNT2_START_VALUE 0xC
#define TCPWM0_GRP0_CNT3_COUNT_VALUE 0xA
#define TCPWM0_GRP0_CNT3_RELOAD_VALUE 0x2
#define TCPWM0_GRP0_CNT3_START_VALUE 0x9

#if defined(__cplusplus)
}
#endif


#endif /* CYCFG_ROUTING_H */

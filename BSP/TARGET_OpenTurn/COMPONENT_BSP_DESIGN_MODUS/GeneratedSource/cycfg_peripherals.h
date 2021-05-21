/*******************************************************************************
* File Name: cycfg_peripherals.h
*
* Description:
* Peripheral Hardware Block configuration
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

#if !defined(CYCFG_PERIPHERALS_H)
#define CYCFG_PERIPHERALS_H

#include "cycfg_notices.h"
#include "cy_canfd.h"
#include "cy_sysclk.h"
#if defined (CY_USING_HAL)
	#include "cyhal_hwmgr.h"
#endif //defined (CY_USING_HAL)
#include "cy_sysanalog.h"
#include "cy_sar.h"
#include "cycfg_routing.h"
#include "cy_scb_spi.h"
#include "cy_scb_i2c.h"
#include "cy_mcwdt.h"
#include "cy_tcpwm_quaddec.h"
#include "cy_tcpwm_pwm.h"

#if defined(__cplusplus)
extern "C" {
#endif

#define CANFD_ENABLED 1U
#define CANFD_HW CANFD0
#define CANFD_CHANNEL CANFD0_CH0
#define CANFD_STD_ID_FILTER_ID_0 0
#define CANFD_EXT_ID_FILTER_ID_0 0
#define CANFD_DATA_0 0
#define CANFD_DATA_1 1
#define CANFD_DATA_2 2
#define CANFD_DATA_3 3
#define CANFD_DATA_4 4
#define CANFD_DATA_5 5
#define CANFD_DATA_6 6
#define CANFD_DATA_7 7
#define CANFD_DATA_8 8
#define CANFD_DATA_9 9
#define CANFD_DATA_10 10
#define CANFD_DATA_11 11
#define CANFD_DATA_12 12
#define CANFD_DATA_13 13
#define CANFD_DATA_14 14
#define CANFD_DATA_15 15
#define CANFD_IRQ_0 canfd_0_interrupts0_0_IRQn
#define CANFD_IRQ_1 canfd_0_interrupts1_0_IRQn
#define pass_0_ENABLED 1U
#define pass_0_aref_0_ENABLED 1U
#define pass_0_saradc_0_ENABLED 1U
#define ADC0_ENABLED 1U
#define ADC0_HW SAR0
#define ADC0_IRQ pass_interrupt_sar_IRQn
#define ADC0_CTL ((uint32_t)CY_SAR_VREF_PWR_100 | (uint32_t)CY_SAR_VREF_SEL_VDDA_DIV_2 | (uint32_t)CY_SAR_BYPASS_CAP_ENABLE | (uint32_t)CY_SAR_NEG_SEL_VREF | (uint32_t)CY_SAR_CTRL_NEGVREF_HW | (uint32_t)CY_SAR_CTRL_COMP_DLY_4 | (uint32_t)CY_SAR_COMP_PWR_100 | (uint32_t)CY_SAR_DEEPSLEEP_SARMUX_OFF | (uint32_t)CY_SAR_SARSEQ_SWITCH_ENABLE)
#define ADC0_SAMPLE ((uint32_t)SAR_SAMPLE_CTRL_EOS_DSI_OUT_EN_Msk | (uint32_t)CY_SAR_RIGHT_ALIGN | (uint32_t)CY_SAR_DIFFERENTIAL_SIGNED | (uint32_t)CY_SAR_SINGLE_ENDED_UNSIGNED | (uint32_t)CY_SAR_AVG_CNT_2 | (uint32_t)CY_SAR_AVG_MODE_SEQUENTIAL_FIXED | (uint32_t)CY_SAR_TRIGGER_MODE_FW_ONLY)
#define ADC0_CH0_CONFIG (((uint32_t)SAR0_VPLUS0_PORT << SAR_CHAN_CONFIG_POS_PORT_ADDR_Pos) | (uint32_t)(SAR0_VPLUS0_PIN << SAR_CHAN_CONFIG_POS_PIN_ADDR_Pos) | CY_SAR_CHAN_SINGLE_ENDED | CY_SAR_CHAN_AVG_DISABLE | (uint32_t)CY_SAR_CHAN_SAMPLE_TIME_0)
#define ADC0_VREF_MV 1650UL
#define ADC1_ENABLED 1U
#define ADC1_HW SAR1
#define ADC1_IRQ pass_interrupt_sar_IRQn
#define ADC1_CTL ((uint32_t)CY_SAR_VREF_PWR_100 | (uint32_t)CY_SAR_VREF_SEL_VDDA_DIV_2 | (uint32_t)CY_SAR_BYPASS_CAP_ENABLE | (uint32_t)CY_SAR_NEG_SEL_VREF | (uint32_t)CY_SAR_CTRL_NEGVREF_HW | (uint32_t)CY_SAR_CTRL_COMP_DLY_4 | (uint32_t)CY_SAR_COMP_PWR_100 | (uint32_t)CY_SAR_DEEPSLEEP_SARMUX_OFF | (uint32_t)CY_SAR_SARSEQ_SWITCH_ENABLE)
#define ADC1_SAMPLE ((uint32_t)SAR_SAMPLE_CTRL_EOS_DSI_OUT_EN_Msk | (uint32_t)CY_SAR_RIGHT_ALIGN | (uint32_t)CY_SAR_DIFFERENTIAL_SIGNED | (uint32_t)CY_SAR_SINGLE_ENDED_UNSIGNED | (uint32_t)CY_SAR_AVG_CNT_2 | (uint32_t)CY_SAR_AVG_MODE_SEQUENTIAL_FIXED | (uint32_t)CY_SAR_TRIGGER_MODE_FW_ONLY)
#define ADC1_CH0_CONFIG (((uint32_t)SAR1_VPLUS0_PORT << SAR_CHAN_CONFIG_POS_PORT_ADDR_Pos) | (uint32_t)(SAR1_VPLUS0_PIN << SAR_CHAN_CONFIG_POS_PIN_ADDR_Pos) | CY_SAR_CHAN_SINGLE_ENDED | CY_SAR_CHAN_AVG_DISABLE | (uint32_t)CY_SAR_CHAN_SAMPLE_TIME_0)
#define ADC1_VREF_MV 1650UL
#define TLE_SPI_ENABLED 1U
#define TLE_SPI_HW SCB1
#define TLE_SPI_IRQ scb_1_interrupt_IRQn
#define DEBUG_UART_ENABLED 1U
#define _DRV_SPI_ENABLED DEBUG_UART_ENABLED
#define DEBUG_UART_HW SCB2
#define _DRV_SPI_HW DEBUG_UART_HW
#define DEBUG_UART_IRQ scb_2_interrupt_IRQn
#define _DRV_SPI_IRQ DEBUG_UART_IRQ
#define DEBUG_I2C_ENABLED 1U
#define DEBUG_I2C_HW SCB6
#define DEBUG_I2C_IRQ scb_6_interrupt_IRQn
#define WATCHDOG_ENABLED 1U
#define WATCHDOG_HW MCWDT_STRUCT0
#define ENCODER1_ENABLED 1U
#define ENCODER1_HW TCPWM0
#define ENCODER1_NUM 2UL
#define ENCODER0_ENABLED 1U
#define ENCODER0_HW TCPWM0
#define ENCODER0_NUM 3UL
#define PWMA_ENABLED 1U
#define PWMA_HW TCPWM0
#define PWMA_NUM 258UL
#define PWMB_ENABLED 1U
#define PWMB_HW TCPWM0
#define PWMB_NUM 262UL
#define PWMC_ENABLED 1U
#define PWMC_HW TCPWM0
#define PWMC_NUM 263UL

extern const cy_stc_canfd_bitrate_t CANFD_nominalBitrateConfig;
extern const cy_stc_canfd_bitrate_t CANFD_dataBitrateConfig;
extern const cy_stc_canfd_transceiver_delay_compensation_t CANFD_tdcConfig;
extern const cy_stc_id_filter_t CANFD_stdIdFilter_0;
extern const cy_stc_canfd_f0_t CANFD_extIdFilterF0Config_0;
extern const cy_stc_canfd_f1_t CANFD_extIdFilterF1Config_0;
extern const cy_stc_extid_filter_t CANFD_extIdFilter_0;
extern const cy_stc_extid_filter_t CANFD_extIdFilters[];
extern const cy_stc_canfd_extid_filter_config_t CANFD_extIdFiltersConfig;
extern const cy_stc_canfd_global_filter_config_t CANFD_globalFilterConfig;
extern const cy_en_canfd_fifo_config_t CANFD_rxFifo0Config;
extern const cy_en_canfd_fifo_config_t CANFD_rxFifo1Config;
extern const cy_stc_canfd_config_t CANFD_config;
extern cy_stc_canfd_t0_t CANFD_T0RegisterBuffer_0;
extern cy_stc_canfd_t1_t CANFD_T1RegisterBuffer_0;
extern uint32_t CANFD_dataBuffer_0[];
extern cy_stc_canfd_tx_buffer_t CANFD_txBuffer_0;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t CANFD_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_sysanalog_config_t pass_0_aref_0_config;
extern const cy_stc_sar_common_config_t pass_0_saradc_0_config;
extern const cy_stc_sar_config_t ADC0_config;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t ADC0_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_sar_config_t ADC1_config;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t ADC1_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_scb_spi_config_t TLE_SPI_config;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t TLE_SPI_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_scb_spi_config_t DEBUG_UART_config;
#define _DRV_SPI_config DEBUG_UART_config
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t DEBUG_UART_obj;
	#define _DRV_SPI_obj DEBUG_UART_obj
#endif //defined (CY_USING_HAL)
extern const cy_stc_scb_i2c_config_t DEBUG_I2C_config;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t DEBUG_I2C_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_mcwdt_config_t WATCHDOG_config;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t WATCHDOG_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_tcpwm_quaddec_config_t ENCODER1_config;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t ENCODER1_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_tcpwm_quaddec_config_t ENCODER0_config;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t ENCODER0_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_tcpwm_pwm_config_t PWMA_config;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t PWMA_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_tcpwm_pwm_config_t PWMB_config;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t PWMB_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_tcpwm_pwm_config_t PWMC_config;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t PWMC_obj;
#endif //defined (CY_USING_HAL)

void init_cycfg_peripherals(void);

#if defined(__cplusplus)
}
#endif


#endif /* CYCFG_PERIPHERALS_H */

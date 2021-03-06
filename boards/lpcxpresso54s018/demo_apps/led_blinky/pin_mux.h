/*
 * Copyright 2019 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

#ifndef _PIN_MUX_H_
#define _PIN_MUX_H_

/*!
 * @addtogroup pin_mux
 * @{
 */

/***********************************************************************************************************************
 * API
 **********************************************************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif

/*!
 * @brief Calls initialization functions.
 *
 */
void BOARD_InitBootPins(void);

/*!
 * @brief Enables digital function */
#define IOCON_PIO_DIGITAL_EN 0x0100u
/*!
 * @brief Selects pin function 0 */
#define IOCON_PIO_FUNC0 0x00u
/*!
 * @brief Input filter disabled */
#define IOCON_PIO_INPFILT_OFF 0x0200u
/*!
 * @brief Input function is not inverted */
#define IOCON_PIO_INV_DI 0x00u
/*!
 * @brief Selects pull-up function */
#define IOCON_PIO_MODE_PULLUP 0x20u
/*!
 * @brief Open drain is disabled */
#define IOCON_PIO_OPENDRAIN_DI 0x00u
/*!
 * @brief Standard mode, output slew rate control is enabled */
#define IOCON_PIO_SLEW_STANDARD 0x00u
/*!
 * @brief Select Analog/Digital mode.: Digital mode. */
#define PIO010_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Selects pin function.: Alternative connection 6. */
#define PIO010_FUNC_ALT6 0x06u
/*!
 * @brief
 * Selects function mode (on-chip pull-up/pull-down resistor control).
 * : Inactive.
 * Inactive (no pull-down/pull-up resistor enabled).
 */
#define PIO010_MODE_INACTIVE 0x00u

/*! @name PIO2_2 (coord C3), J9[6]/LED3/P2_2-CT1MAT1-USR_LED3
  @{ */
#define BOARD_LED3_GPIO GPIO /*!<@brief GPIO device name: GPIO */
#define BOARD_LED3_PORT 2U   /*!<@brief PORT device name: 2U */
#define BOARD_LED3_PIN 2U    /*!<@brief 2U pin index: 2 */
                             /* @} */

/*! @name SWO (coord P2), U16[12]/SWO_TRGT
  @{ */
/* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitPins(void); /* Function assigned for the Cortex-M4F */

#if defined(__cplusplus)
}
#endif

/*!
 * @}
 */
#endif /* _PIN_MUX_H_ */

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/

/*
 * Copyright (C) 2020 Koen Zandberg <koen@bergzand.net>
 *               2023 Gunar Schorcht <gunar@schorcht.net>
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v2.1. See the file LICENSE in the top level
 * directory for more details.
 */

/**
 * @ingroup     boards_seeedstudio-gd32
 * @{
 *
 * @file
 * @brief       Board specific definitions for the SeeedStudio GD32 RISC-V board
 *
 * @author      Koen Zandberg <koen@bergzand.net>
 * @author      Gunar Schorcht <gunar@schorcht.net>
 */

#ifndef BOARD_H
#define BOARD_H

#ifdef __cplusplus
extern "C" {
#endif

#include "macros/units.h"

/**
 * @name    Button pin definitions
 * @{
 */
#define BTN0_PIN            GPIO_PIN(PORT_A, 0)
#define BTN0_MODE           GPIO_IN
#define BTN0_INT_FLANK      GPIO_RISING

#define BTN1_PIN            GPIO_PIN(PORT_C, 13)
#define BTN1_MODE           GPIO_IN
#define BTN1_INT_FLANK      GPIO_RISING
/** @} */

/**
 * @name    LED (on-board) configuration
 * @{
 */
#define LED0_PIN            GPIO_PIN(PORT_B, 5)
#define LED0_MASK           (1 << 5)
#define LED0_ON             (GPIOB->BC = LED0_MASK)
#define LED0_OFF            (GPIOB->BOP = LED0_MASK)
#define LED0_TOGGLE         (GPIOB->OCTL ^= LED0_MASK)

#define LED1_PIN            GPIO_PIN(PORT_B, 0)
#define LED1_MASK           (1 << 0)
#define LED1_ON             (GPIOB->BC = LED1_MASK)
#define LED1_OFF            (GPIOB->BOP = LED1_MASK)
#define LED1_TOGGLE         (GPIOB->OCTL ^= LED1_MASK)

#define LED2_PIN            GPIO_PIN(PORT_B, 1)
#define LED2_MASK           (1 << 1)
#define LED2_ON             (GPIOB->BC = LED2_MASK)
#define LED2_OFF            (GPIOB->BOP = LED2_MASK)
#define LED2_TOGGLE         (GPIOB->OCTL ^= LED2_MASK)

#define LED_RED_PIN         LED0_PIN    /**< LED0 is red */
#define LED_GREEN_PIN       LED1_PIN    /**< LED1 is green */
#define LED_BLUE_PIN        LED2_PIN    /**< LED2 is blue */
/** @} */

/**
 * @name    Xtimer configuration
 * @{
 */
#define XTIMER_HZ                   MHZ(1)
#define XTIMER_WIDTH                (16)
/** @} */

#ifdef __cplusplus
}
#endif

#endif /* BOARD_H */
/** @} */

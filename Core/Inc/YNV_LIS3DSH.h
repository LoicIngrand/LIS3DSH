/*
 * YNV_LIS3DSH.h
 *
 *  Created on: Jan 18, 2021
 *      Author: Ingra
 */

#ifndef INC_YNV_LIS3DSH_H_
#define INC_YNV_LIS3DSH_H_

#include "stm32f4xx_hal.h"

/* Register Address Define */
#define LIS3DSH_CTRL_REG4_ADDR	0x20
#define LIS3DSH_CTRL_REG5_ADDR	0x24
#define LIS3DSH_STATUS_ADDR		0x27
#define LIS3DSH_OUT_X_ADDR		0x28
#define LIS3DSH_OUT_Y_ADDR		0x2A
#define LIS3DSH_OUT_Z_ADDR		0x2C

/* Configuration Parameters Define */
#define LIS3DSH_REG4_ODR_DISABLED	((uint8_t) 0x00)
#define LIS3DSH_REG4_ODR_3_125_HZ	((uint8_t) 0x10)
#define LIS3DSH_REG4_ODR_6_25_HZ	((uint8_t) 0x20)
#define LIS3DSH_REG4_ODR_12_5_HZ	((uint8_t) 0x30)
#define LIS3DSH_REG4_ODR_25_HZ		((uint8_t) 0x40)
#define LIS3DSH_REG4_ODR_50_HZ		((uint8_t) 0x50)
#define LIS3DSH_REG4_ODR_100_HZ		((uint8_t) 0x60)
#define LIS3DSH_REG4_ODR_400_HZ		((uint8_t) 0x70)
#define LIS3DSH_REG4_ODR_800_HZ		((uint8_t) 0x80)
#define LIS3DSH_REG4_ODR_1600_HZ	((uint8_t) 0x90)

#define LIS3DSH_REG5_FSCALE_2G		((uint8_t) 0x00)
#define LIS3DSH_REG5_FSCALE_4G		((uint8_t) 0x08)
#define LIS3DSH_REG5_FSCALE_6G		((uint8_t) 0x10)
#define LIS3DSH_REG5_FSCALE_8G		((uint8_t) 0x18)
#define LIS3DSH_REG5_FSCALE_16G		((uint8_t) 0x20)
#define LIS3DSH_REG5_SIM_4			((uint8_t) 0x00)
#define LIS3DSH_REG5_SIM_3			((uint8_t) 0x01)


#endif /* INC_YNV_LIS3DSH_H_ */

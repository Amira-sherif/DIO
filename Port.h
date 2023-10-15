/*
 * Port.h
 *
 *  Created on: Oct 15, 2023
 *      Author: lapshop
 */

#ifndef PORT_H_
#define PORT_H_

#include "hw_gpio.h"
#include "STD_Types.h"
#include "Bit_Math.h"

typedef  uint8 Port_PinType   ;
typedef   uint8 Dio_ChannelType;
typedef uint8 Dio_LevelType  ;
typedef uint8 Dio_PortType  ;
#define PORTF                    5

/******************************* PORT NUMBER **********************************/
#define GPIO_PORTA                    0
#define GPIO_PORTB                    1
#define GPIO_PORTC                    2
#define GPIO_PORTD                    3
#define GPIO_PORTE                    4
#define GPIO_PORTF                    5

/******************************************************************************/
/*! \Description : Initialize GPIO PORT                                       */
/*! \return      None                                                         */
/*! \arguments   None                                                         */
/******************************************************************************/

void Port_Init(void);




#endif /* PORT_H_ */

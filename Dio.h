/*
 * Dio.h
 *
 *  Created on: Oct 15, 2023
 *      Author: lapshop
 */

#ifndef DIO_H_
#define DIO_H_
/******************************* Includes *************************************/
#include <std_types.h>
#include "Bit_Math.h"
#include "hw_gpio.h"
#include "STD_Types.h"




/******************************************************************************/
/******************************* Defines **************************************/
/******************************************************************************/
#define OUTPUT_HIGH 1
#define OUTPUT_LOW  0

#define PULLUP      1
#define NO_PULLUP   0

#define STD_LOW   0
#define STD_HIGH  1
typedef uint8 Dio_ChannelType  ;
typedef uint8  Dio_LevelType    ;
typedef uint8 Dio_PortLevelType;
typedef uint8  Dio_PortType     ;

 #define MAXCHANNEL       45


/******************************* PORT NUMBER **********************************/
#define PORTA                    0
#define PORTB                    1
#define PORTC                    2
#define PORTD                    3
#define PORTE                    4
#define PORTF                    5
/******************************************************************************/

/******************************** PIN NUMBER FOR PORTF **********************************/
#define PIN0                     37
#define PIN1                     38
#define PIN2                     39
#define PIN3                     40
#define PIN4                     41
#define PIN5                     42
#define PIN6                     43
#define PIN7                     44
/******************************************************************************/
/******************************************************************************/




Dio_LevelType Dio_ReadChannel(Dio_ChannelType ChannelId);
Dio_LevelType Dio_WriteChannel(Dio_ChannelType ChannelId, Dio_LevelType Level);
/******************************************************************************/
/*! \Description : Read Port Value                 */
/*! \return      None                                                         */
/*! \arguments   Copy_u8PortId to select specific Port Id                     */
/******************************************************************************/
Dio_PortLevelType Dio_ReadPort(Dio_PortType PortId);
void Dio_WritePort(Dio_PortType PortId,Dio_PortLevelType Level);



#endif /* DIO_H_ */

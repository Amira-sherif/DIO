/*
 * Port.c
 *
 *  Created on: Oct 15, 2023
 *      Author: lapshop
 */




#include "Port.h"

//intialize PORTF
void Port_Init (void)
{
    SET_BIT(SYSCTL_RCGCGPIO_R,PORTF);
       while(GET_BIT(SYSCTL_PRGPIO_R,PORTF) == 0){};
       GPIO_PORTF_LOCK_R = 0x4C4F434B;
       GPIO_PORTF_CR_R   = 0x1F;

}

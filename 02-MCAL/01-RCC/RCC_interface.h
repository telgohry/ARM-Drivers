/*************************************************************************************************/
/* Author    : Tarek Gohry                                                                       */
/* Version   : V01                                                                               */
/* Date      : 25 June 2023                                                                      */
/*************************************************************************************************/

#ifndef RCC_INTERFACE_H
#define RCC_INTERFACE_H

#define  RCC_AHB          0    
#define  RCC_APB1         1
#define  RCC_APB2         2

#define  HSI_ON           0

#define  HSE_ON           16
#define  HSE_BYP          18
#define  CSS_ON           19

#define  PLL_ON           24

#define  SW0              0
#define  SW1              1

#define  PLL_SRC          16
#define  PLL_XTPRE        17
#define  PLL_MUL0         18
#define  PLL_MUL1         19
#define  PLL_MUL2         20
#define  PLL_MUL3         21


void RCC_voidInitSysClock(void); /* Using configurations */
void RCC_voidEnableClock(u8 Copy_u8BusId, u8 Copy_u8PerId);
void RCC_voidDisableClock(u8 Copy_u8BusId, u8 Copy_u8PerId);


#endif 
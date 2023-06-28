/*************************************************************************************************/
/* Author    : Tarek Gohry                                                                       */
/* Version   : V01                                                                               */
/* Date      : 25 June 2023                                                                      */
/*************************************************************************************************/

#ifndef RCC_CONFIG_H
#define RCC_CONFIG_H

/* Options:               RCC_HSE_CRYSTAL
                          RCC_HSE_RC
					      RCC_HSI
					      RCC_PLL  */
					   
#define  RCC_CLOCK_TYPE   RCC_HSE_CRYSTAL



/* Options:               RCC_PLL_IN_HSE 
                          RCC_PLL_IN_HSE_DIV_2
					      RCC_PLL_IN_HSI_DIV_2  */
						  
#if      RCC_CLOCK_TYPE==RCC_PLL
#define  RCC_PLL_INPUT    RCC_PLL_IN_HSE_DIV_2
#endif 


/* Options:  2 to 16 */
#if      RCC_CLOCK_TYPE==RCC_PLL
#define  RCC_MUL_VALUE   4
#endif 


#endif 
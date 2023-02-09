/**
 * APM Generated Driver API Header File
 * 
 * @file apm.h
 * 
 * @defgroup  apm APM
 * 
 * @brief This file contains API prototypes for APM module.
 *
 * @version APM Driver Version 1.0.0
*/
/*
© [2023] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/

#ifndef APM_H
#define APM_H

/**
  Section: Included Files
*/

#include <stdint.h>

/**
  Section: APM APIs
*/

/**
 * @ingroup apm
 * @brief  This API initializes the APM module.
 * @pre This routine must be called only once, before any other APM routine is called.
 * @param none
 * @return none
 */ 
void APM_Initialize(void);

/**
 * @ingroup apm
 * @brief  This function starts the APM Operation.
 * @pre This routine must be called only once after the APM_Initialize() is called.
 * @param none
 * @return none
 */ 
void APM_Start(void);

/**
 * @ingroup apm
 * @brief  This function stops the APM Operation.
 * @pre This routine must be called only once after the APM_Initialize() is called.
 * @param none
 * @return none
 */ 
void APM_Stop(void);

/**
 * @ingroup apm
 * @brief  This function sets a value for the Prescaler in APM.
 * @pre APM should be initialized with APM_Initialize() before calling this API.
 * @param 16-bit value to be written to APMPRE register
 * @return none
 */ 
void APM_PrescalerSet(uint16_t prescalerVal);

/**
 * @ingroup apm
 * @brief  This function sets a value for the Period in APM
 * @pre APM should be initialized with APM_Initialize() before calling this API.
 * @param 16-bit value to be written to APMPER register
 * @return none
 */ 
void APM_PeriodSet(uint16_t periodVal);

/**
 * @ingroup apm
 * @brief  This function sets a count in Start 1 Event of the APM.
 * @pre APM should be initialized with APM_Initialize() before calling this API.
 * @param 16-bit value to be written to APMSTART1 register
 * @return none
 */ 
void APM_Start1CountSet(uint16_t Start1Val);

/**
 * @ingroup apm
 * @brief  This function sets a count in Start 2 Event of the APM.
 * @pre APM should be initialized with APM_Initialize() before calling this API.
 * @pre This function must be called after the APM_Start1CountSet() is called.
 * @param 24-bit value to be written to APMSTART2 register
 * @return none
 */ 
void APM_Start2CountSet(uint24_t Start2Val);

/**
 * @ingroup apm
 * @brief  This function sets a count in End 1 Event of the APM.
 * @pre APM should be initialized with APM_Initialize() before calling this API.
 * @pre This function must be called after the APM_Start1CountSet() is called.
 * @param 24-bit value to be written to APMEND1 register
 * @return none
 */ 
void APM_End1CountSet(uint24_t End1Val);

/**
 * @ingroup apm
 * @brief  This function sets a count in End 2 Event of the APM.
 * @pre APM should be initialized with APM_Initialize() before calling this API.
 * @pre This function must be called after the APM_Start1CountSet() is called.
 * @pre This function must be called after the APM_Start2CountSet() is called.
 * @pre This function must be called after the APM_End1CountSet() is called.
 * @param 24-bit value to be written to APMEND1 register
 * @return none
 */ 
void APM_End2CountSet(uint24_t End2Val);

/**
 * @ingroup apm
 * @brief  This function returns the status of the peripherals in APM.
 * @pre APM should be initialized with APM_Initialize() before calling this API.
 * @param none
 * @return 16-bit data from APMSTATUS register.
 */ 
uint16_t APM_StatusGet(void);

#endif // APM_H
/**
 End of File
*/

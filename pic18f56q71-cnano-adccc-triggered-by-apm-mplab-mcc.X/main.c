 /*
 * MAIN Generated Driver File
 * 
 * @file main.c
 * 
 * @defgroup main MAIN
 * 
 * @brief This is the generated driver implementation file for the MAIN driver.
 *
 * @version MAIN Driver Version 1.0.0
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

#include "mcc_generated_files/system/system.h"
#include <string.h>
#include "OLEDC_Click.h"
#include "OLED_functions.h"
#include "OLEDC_colors.h"
#include "OLEDC_shapes.h"
#include "OLEDC_shapeHandler.h"

#define MAX_INTENSITY_LEVEL             (9)
#define INTENSITY_SATURATION(x)         ((x < MAX_INTENSITY_LEVEL) ? x : MAX_INTENSITY_LEVEL)
#define MAP_RESULT_TO_INTENSITY(x)      (x / 277)

/* Function Prototypes */
void ADCCC_Handler(void);
void updateBarLevel(uint16_t result);

int main(void)
{
    uint8_t apm_status = OFF; 
    uint8_t apm_displayed_status = OFF;
    
    SYSTEM_Initialize();                        /* Initializing the MCU peripherals */
    oledC_setup();                              /* Initializing the OLED screen */
    OLED_displayInit();                         /* Setting the OLED screen background to black */
    ADC_SetADIInterruptHandler(ADCCC_Handler);  /* Setting the ADCCC Interrupt Handler */
    OLED_displayInterface();                    /* Display application interface on the OLED screen */
    INTERRUPT_GlobalInterruptHighEnable();      /* Enable Global Interrupts */

    while(1)
    {
        /* Check APM Status */
        if(APM_StatusGet())
        {
            apm_status = ON;
        }
        else
        {
            apm_status = OFF;
        }
        
        /* Update the displayed APM Status */
        if(apm_displayed_status != apm_status)
        {
            apm_displayed_status = apm_status;
            OLED_clearAPMStatus();
            OLED_displayAPMStatus(apm_displayed_status);
        }
    }    
}

void ADCCC_Handler(void)
{
    /* Store the conversion result */
    uint16_t result = ADC_GetConversionResult();
    /* Update the bar-meter from the OLED screen based on the conversion result */
    updateBarLevel(result);
}

void updateBarLevel(uint16_t result)
{
    uint8_t intensity; 
    static uint8_t old_intensity;
    
    /* Map the conversion result to a value between 0 and 9 to be displayed on the OLED screen */
    intensity = INTENSITY_SATURATION(MAP_RESULT_TO_INTENSITY(result));
    
    /* If the intensity has changed -> redisplay it on the OLED screen */
    if(intensity != old_intensity)
    {
        OLED_clearIntensity();    
        for(uint8_t i = 0; i < intensity; i++)
        {
            OLED_displayIntensity(i);
        } 
    }
    /* Save the previous state of the intensity */
    old_intensity = intensity;
}
/**
 * Generated Pins header File
 * 
 * @file pins.h
 * 
 * @defgroup  pinsdriver Pins Driver
 * 
 * @brief This is generated driver header for pins. 
 *        This header file provides APIs for all pins selected in the GUI.
 *
 * @version Driver Version  3.1.0
*/

/*
© [2022] Microchip Technology Inc. and its subsidiaries.

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

#ifndef PINS_H
#define PINS_H

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set RA1 aliases
#define oledC_RW_TRIS                 TRISAbits.TRISA1
#define oledC_RW_LAT                  LATAbits.LATA1
#define oledC_RW_PORT                 PORTAbits.RA1
#define oledC_RW_WPU                  WPUAbits.WPUA1
#define oledC_RW_OD                   ODCONAbits.ODCA1
#define oledC_RW_ANS                  ANSELAbits.ANSELA1
#define oledC_RW_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define oledC_RW_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define oledC_RW_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define oledC_RW_GetValue()           PORTAbits.RA1
#define oledC_RW_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define oledC_RW_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define oledC_RW_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define oledC_RW_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define oledC_RW_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define oledC_RW_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define oledC_RW_SetAnalogMode()      do { ANSELAbits.ANSELA1 = 1; } while(0)
#define oledC_RW_SetDigitalMode()     do { ANSELAbits.ANSELA1 = 0; } while(0)
   
// get/set RA3 aliases
#define oledC_RST_TRIS                 TRISAbits.TRISA3
#define oledC_RST_LAT                  LATAbits.LATA3
#define oledC_RST_PORT                 PORTAbits.RA3
#define oledC_RST_WPU                  WPUAbits.WPUA3
#define oledC_RST_OD                   ODCONAbits.ODCA3
#define oledC_RST_ANS                  ANSELAbits.ANSELA3
#define oledC_RST_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define oledC_RST_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define oledC_RST_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define oledC_RST_GetValue()           PORTAbits.RA3
#define oledC_RST_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define oledC_RST_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define oledC_RST_SetPullup()          do { WPUAbits.WPUA3 = 1; } while(0)
#define oledC_RST_ResetPullup()        do { WPUAbits.WPUA3 = 0; } while(0)
#define oledC_RST_SetPushPull()        do { ODCONAbits.ODCA3 = 0; } while(0)
#define oledC_RST_SetOpenDrain()       do { ODCONAbits.ODCA3 = 1; } while(0)
#define oledC_RST_SetAnalogMode()      do { ANSELAbits.ANSELA3 = 1; } while(0)
#define oledC_RST_SetDigitalMode()     do { ANSELAbits.ANSELA3 = 0; } while(0)
   
// get/set RA4 aliases
#define IO_RA4_TRIS                 TRISAbits.TRISA4
#define IO_RA4_LAT                  LATAbits.LATA4
#define IO_RA4_PORT                 PORTAbits.RA4
#define IO_RA4_WPU                  WPUAbits.WPUA4
#define IO_RA4_OD                   ODCONAbits.ODCA4
#define IO_RA4_ANS                  ANSELAbits.ANSELA4
#define IO_RA4_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define IO_RA4_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define IO_RA4_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define IO_RA4_GetValue()           PORTAbits.RA4
#define IO_RA4_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define IO_RA4_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define IO_RA4_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define IO_RA4_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define IO_RA4_SetPushPull()        do { ODCONAbits.ODCA4 = 0; } while(0)
#define IO_RA4_SetOpenDrain()       do { ODCONAbits.ODCA4 = 1; } while(0)
#define IO_RA4_SetAnalogMode()      do { ANSELAbits.ANSELA4 = 1; } while(0)
#define IO_RA4_SetDigitalMode()     do { ANSELAbits.ANSELA4 = 0; } while(0)
   
// get/set RA5 aliases
#define oledC_nCS_TRIS                 TRISAbits.TRISA5
#define oledC_nCS_LAT                  LATAbits.LATA5
#define oledC_nCS_PORT                 PORTAbits.RA5
#define oledC_nCS_WPU                  WPUAbits.WPUA5
#define oledC_nCS_OD                   ODCONAbits.ODCA5
#define oledC_nCS_ANS                  ANSELAbits.ANSELA5
#define oledC_nCS_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define oledC_nCS_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define oledC_nCS_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define oledC_nCS_GetValue()           PORTAbits.RA5
#define oledC_nCS_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define oledC_nCS_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define oledC_nCS_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define oledC_nCS_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define oledC_nCS_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define oledC_nCS_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define oledC_nCS_SetAnalogMode()      do { ANSELAbits.ANSELA5 = 1; } while(0)
#define oledC_nCS_SetDigitalMode()     do { ANSELAbits.ANSELA5 = 0; } while(0)
   
// get/set RB0 aliases
#define oledC_DC_TRIS                 TRISBbits.TRISB0
#define oledC_DC_LAT                  LATBbits.LATB0
#define oledC_DC_PORT                 PORTBbits.RB0
#define oledC_DC_WPU                  WPUBbits.WPUB0
#define oledC_DC_OD                   ODCONBbits.ODCB0
#define oledC_DC_ANS                  ANSELBbits.ANSELB0
#define oledC_DC_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define oledC_DC_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define oledC_DC_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define oledC_DC_GetValue()           PORTBbits.RB0
#define oledC_DC_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define oledC_DC_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define oledC_DC_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define oledC_DC_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define oledC_DC_SetPushPull()        do { ODCONBbits.ODCB0 = 0; } while(0)
#define oledC_DC_SetOpenDrain()       do { ODCONBbits.ODCB0 = 1; } while(0)
#define oledC_DC_SetAnalogMode()      do { ANSELBbits.ANSELB0 = 1; } while(0)
#define oledC_DC_SetDigitalMode()     do { ANSELBbits.ANSELB0 = 0; } while(0)
   
// get/set RB3 aliases
#define oledC_EN_TRIS                 TRISBbits.TRISB3
#define oledC_EN_LAT                  LATBbits.LATB3
#define oledC_EN_PORT                 PORTBbits.RB3
#define oledC_EN_WPU                  WPUBbits.WPUB3
#define oledC_EN_OD                   ODCONBbits.ODCB3
#define oledC_EN_ANS                  ANSELBbits.ANSELB3
#define oledC_EN_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define oledC_EN_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define oledC_EN_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define oledC_EN_GetValue()           PORTBbits.RB3
#define oledC_EN_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define oledC_EN_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define oledC_EN_SetPullup()          do { WPUBbits.WPUB3 = 1; } while(0)
#define oledC_EN_ResetPullup()        do { WPUBbits.WPUB3 = 0; } while(0)
#define oledC_EN_SetPushPull()        do { ODCONBbits.ODCB3 = 0; } while(0)
#define oledC_EN_SetOpenDrain()       do { ODCONBbits.ODCB3 = 1; } while(0)
#define oledC_EN_SetAnalogMode()      do { ANSELBbits.ANSELB3 = 1; } while(0)
#define oledC_EN_SetDigitalMode()     do { ANSELBbits.ANSELB3 = 0; } while(0)
   
// get/set RC2 aliases
#define IO_RC2_TRIS                 TRISCbits.TRISC2
#define IO_RC2_LAT                  LATCbits.LATC2
#define IO_RC2_PORT                 PORTCbits.RC2
#define IO_RC2_WPU                  WPUCbits.WPUC2
#define IO_RC2_OD                   ODCONCbits.ODCC2
#define IO_RC2_ANS                  ANSELCbits.ANSELC2
#define IO_RC2_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define IO_RC2_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define IO_RC2_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define IO_RC2_GetValue()           PORTCbits.RC2
#define IO_RC2_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define IO_RC2_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define IO_RC2_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define IO_RC2_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define IO_RC2_SetPushPull()        do { ODCONCbits.ODCC2 = 0; } while(0)
#define IO_RC2_SetOpenDrain()       do { ODCONCbits.ODCC2 = 1; } while(0)
#define IO_RC2_SetAnalogMode()      do { ANSELCbits.ANSELC2 = 1; } while(0)
#define IO_RC2_SetDigitalMode()     do { ANSELCbits.ANSELC2 = 0; } while(0)
   
// get/set RC5 aliases
#define IO_RC5_TRIS                 TRISCbits.TRISC5
#define IO_RC5_LAT                  LATCbits.LATC5
#define IO_RC5_PORT                 PORTCbits.RC5
#define IO_RC5_WPU                  WPUCbits.WPUC5
#define IO_RC5_OD                   ODCONCbits.ODCC5
#define IO_RC5_ANS                  ANSELCbits.ANSELC5
#define IO_RC5_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define IO_RC5_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define IO_RC5_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define IO_RC5_GetValue()           PORTCbits.RC5
#define IO_RC5_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define IO_RC5_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define IO_RC5_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define IO_RC5_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define IO_RC5_SetPushPull()        do { ODCONCbits.ODCC5 = 0; } while(0)
#define IO_RC5_SetOpenDrain()       do { ODCONCbits.ODCC5 = 1; } while(0)
#define IO_RC5_SetAnalogMode()      do { ANSELCbits.ANSELC5 = 1; } while(0)
#define IO_RC5_SetDigitalMode()     do { ANSELCbits.ANSELC5 = 0; } while(0)
   
// get/set RC6 aliases
#define oledC_SCK_TRIS                 TRISCbits.TRISC6
#define oledC_SCK_LAT                  LATCbits.LATC6
#define oledC_SCK_PORT                 PORTCbits.RC6
#define oledC_SCK_WPU                  WPUCbits.WPUC6
#define oledC_SCK_OD                   ODCONCbits.ODCC6
#define oledC_SCK_ANS                  ANSELCbits.ANSELC6
#define oledC_SCK_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define oledC_SCK_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define oledC_SCK_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define oledC_SCK_GetValue()           PORTCbits.RC6
#define oledC_SCK_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define oledC_SCK_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define oledC_SCK_SetPullup()          do { WPUCbits.WPUC6 = 1; } while(0)
#define oledC_SCK_ResetPullup()        do { WPUCbits.WPUC6 = 0; } while(0)
#define oledC_SCK_SetPushPull()        do { ODCONCbits.ODCC6 = 0; } while(0)
#define oledC_SCK_SetOpenDrain()       do { ODCONCbits.ODCC6 = 1; } while(0)
#define oledC_SCK_SetAnalogMode()      do { ANSELCbits.ANSELC6 = 1; } while(0)
#define oledC_SCK_SetDigitalMode()     do { ANSELCbits.ANSELC6 = 0; } while(0)
   
/**
 * @ingroup  pinsdriver
 * @brief GPIO and peripheral I/O initialization
 * @param none
 * @return none
 */
void PIN_MANAGER_Initialize (void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handling routine
 * @param none
 * @return none
 */
void PIN_MANAGER_IOC(void);


#endif // PINS_H
/**
 End of File
*/
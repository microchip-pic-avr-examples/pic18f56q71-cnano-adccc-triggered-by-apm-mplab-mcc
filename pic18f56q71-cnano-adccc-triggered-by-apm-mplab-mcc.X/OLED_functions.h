/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef OLED_FUNCTIONS_H
#define	OLED_FUNCTIONS_H

#define FONT_SIZE_X                     25
#define FONT_SIZE_Y                     25
#define UPPER                           96
#define LOWER                           0
#define ON                              1
#define OFF                             0
#define LOGO_RESOLUTION                 1
#define LOGO_ARRAY_SIZE                 23
#define LOGO_X                          32
#define LOGO_Y                          65
#define TEXT_SCALE_X                    1
#define TEXT_SCALE_Y                    2
#define TEXT_ALIGNMENT_X                6
#define TEXT1_ALIGNMENT_Y               2
#define TEXT2_ALIGNMENT_Y               19
#define BAR_METER_LINE_X1               5
#define BAR_METER_LINE_X2               89
#define BAR_METER_LINE_Y1               38
#define BAR_METER_LINE_Y2               55
#define BAR_METER_WIDTH                 1
#define BAR_METER_CLEAR_WIDTH           2
#define INTENSITY_CELL_OFFSET           3
#define INTENSITY_CELL_WIDTH            7
#define INTENSITY_CELL_INTERSPACE       1
#define NUMBER_OF_INTENSITY_CELLS       9
#define STATUS_ALIGNMENT_X              30
#define STATUS_ALIGNMENT_Y              2
#define STATUS_WIDTH                    25
#define STATUS_HEIGHT                   17

void OLED_clearScreen(void);
void OLED_displayInit(void);
void OLED_displayInterface(void);
void OLED_displayIntensity(uint8_t index);
void OLED_displayAPMStatus(uint8_t status);
void OLED_clearIntensity(void);
void OLED_clearAPMStatus(void);
void OLED_setBackground(uint16_t color);

#endif	/* OLED_FUNCTIONS_H */


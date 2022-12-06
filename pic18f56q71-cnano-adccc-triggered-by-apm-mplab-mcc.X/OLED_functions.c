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
#include <stdio.h>
#include "OLEDC_colors.h"
#include "OLEDC_Click.h"
#include "OLEDC_shapeHandler.h"
#include "OLED_functions.h"

uint16_t background_color;
static const uint32_t logo[LOGO_ARRAY_SIZE] = {
        0b11111111111000000000011111111111,
        0b11111111100000000000001111111111,
        0b11111111000000000000000111111111,
        0b11111110000000000000000111111111,
        0b11111100000000000000000011111111,
        0b11111000000010000000100011111111,
        0b11111000000110000001100001111111,
        0b11110000001111000011110000111111,
        0b11110000001111100011111000111111,
        0b11110000000111100001111000011111,
        0b11110000000111110001111100001111,
        0b11110001000011110000111110001111,
        0b11110001100011111000111110001111,
        0b11110011110001111100011111001111,
        0b11110111110000111100001111001111,
        0b11111111100000111100001111111111,
        0b11111111100000011100000111111111,
        0b11111111000000011000000011111111,
        0b11111110000000000000000011111111,
        0b11111110000000000000000001111111,
        0b11111110000000000000000001111111,
        0b11111111100000000000000111111111,
        0b11111111111000000000011111111111
    };

void OLED_clearScreen(void)
{
    oledC_setColumnAddressBounds(LOWER,UPPER);
    oledC_setRowAddressBounds(LOWER,UPPER);
    for(uint8_t x = LOWER; x < UPPER; x++){
        for(uint8_t y = LOWER; y < UPPER; y++){
            oledC_sendColorInt(background_color);
        }
    }
}

void OLED_displayInterface(void)
{
    shape_params_t params;

    /* Microchip Logo*/
    params.bitmap.color = OLEDC_COLOR_RED;
    params.bitmap.x = LOGO_X;
    params.bitmap.y = LOGO_Y;
    params.bitmap.sx = LOGO_RESOLUTION;
    params.bitmap.sy = LOGO_RESOLUTION;
    params.bitmap.bit_array = logo;
    params.bitmap.array_length = LOGO_ARRAY_SIZE;
    oledC_addShape(0, OLED_SHAPE_BITMAP, &params);

    /* APM text */
    params.string.color = OLEDC_COLOR_WHITE;
    params.string.x = TEXT_ALIGNMENT_X;
    params.string.y = TEXT1_ALIGNMENT_Y;
    params.string.scale_x = TEXT_SCALE_X;
    params.string.scale_y = TEXT_SCALE_Y;
    params.string.string = "APM:";
    oledC_addShape(1, OLED_SHAPE_STRING, &params);

    /* Intensity text */
    params.string.color = OLEDC_COLOR_WHITE;
    params.string.x = TEXT_ALIGNMENT_X;
    params.string.y = TEXT2_ALIGNMENT_Y;
    params.string.scale_x = TEXT_SCALE_X;
    params.string.scale_y = TEXT_SCALE_Y;
    params.string.string = "INTENSITY:";
    oledC_addShape(2, OLED_SHAPE_STRING, &params);
    
    params.rectangle.color = OLEDC_COLOR_WHITE;
    params.rectangle.xs = BAR_METER_LINE_X1;
    params.rectangle.ys = BAR_METER_LINE_Y1;
    params.rectangle.xe = BAR_METER_LINE_X2 + BAR_METER_WIDTH;
    params.rectangle.ye = BAR_METER_LINE_Y1 + BAR_METER_WIDTH;
    oledC_addShape(3, OLED_SHAPE_RECTANGLE, &params);
    /* x1 = 5; y1 = 38; x2 = 89; y2 = 55 */
    params.rectangle.color = OLEDC_COLOR_WHITE;
    params.rectangle.xs = BAR_METER_LINE_X1;
    params.rectangle.ys = BAR_METER_LINE_Y1;
    params.rectangle.xe = BAR_METER_LINE_X1 + BAR_METER_WIDTH;
    params.rectangle.ye = BAR_METER_LINE_Y2 + BAR_METER_WIDTH;
    oledC_addShape(4, OLED_SHAPE_RECTANGLE, &params);
    
    params.rectangle.color = OLEDC_COLOR_WHITE;
    params.rectangle.xs = BAR_METER_LINE_X1;
    params.rectangle.ys = BAR_METER_LINE_Y2;
    params.rectangle.xe = BAR_METER_LINE_X2 + BAR_METER_WIDTH;
    params.rectangle.ye = BAR_METER_LINE_Y2 + BAR_METER_WIDTH;
    oledC_addShape(5, OLED_SHAPE_RECTANGLE, &params);
    
    params.rectangle.color = OLEDC_COLOR_WHITE;
    params.rectangle.xs = BAR_METER_LINE_X2;
    params.rectangle.ys = BAR_METER_LINE_Y1;
    params.rectangle.xe = BAR_METER_LINE_X2 + BAR_METER_WIDTH;
    params.rectangle.ye = BAR_METER_LINE_Y2 + BAR_METER_WIDTH;
    oledC_addShape(6, OLED_SHAPE_RECTANGLE, &params); 
    
    oledC_redrawIndex(1);
    oledC_redrawIndex(2);
    oledC_redrawIndex(0);
    oledC_redrawIndex(3);
    oledC_redrawIndex(4);
    oledC_redrawIndex(5);
    oledC_redrawIndex(6);
}

void OLED_displayIntensity(uint8_t index)
{
    shape_params_t params;
    
    if(index < NUMBER_OF_INTENSITY_CELLS / 3)
    {
        params.rectangle.color = OLEDC_COLOR_RED;
    }
    else 
    if(index < NUMBER_OF_INTENSITY_CELLS / 3 * 2)
    {
        params.rectangle.color = OLEDC_COLOR_YELLOW;
    }
    else
    {
        params.rectangle.color = OLEDC_COLOR_GREEN;
    }
    
    params.rectangle.xs = ((index + 1) * (INTENSITY_CELL_WIDTH + INTENSITY_CELL_INTERSPACE)) + index;
    params.rectangle.ys = BAR_METER_LINE_Y1 + INTENSITY_CELL_OFFSET;
    params.rectangle.xe = (((index + 1) * (INTENSITY_CELL_WIDTH + INTENSITY_CELL_INTERSPACE)) + index) + INTENSITY_CELL_WIDTH;
    params.rectangle.ye = BAR_METER_LINE_Y2 + BAR_METER_WIDTH - INTENSITY_CELL_OFFSET;
    oledC_addShape(index, OLED_SHAPE_RECTANGLE, &params);
    
    oledC_redrawIndex(index);
}

void OLED_displayAPMStatus(uint8_t status)
{
    shape_params_t params;

    params.string.x = STATUS_ALIGNMENT_X;
    params.string.y = STATUS_ALIGNMENT_Y;
    params.string.scale_x = TEXT_SCALE_X;
    params.string.scale_y = TEXT_SCALE_Y; 
    if(status == ON)
    {
        params.string.string = "ON";
        params.string.color = OLEDC_COLOR_GREEN;
    }
    else if(status == OFF)
    {
        params.string.string = "OFF";
        params.string.color = OLEDC_COLOR_RED;
    }
    oledC_addShape(0, OLED_SHAPE_STRING, &params);
    
    oledC_redrawIndex(0);
}

void OLED_setBackground(uint16_t color)
{
    background_color = color;
    OLED_clearScreen();
}

void OLED_clearIntensity(void)
{
    shape_params_t params;
    
    params.rectangle.color = OLEDC_COLOR_BLACK;
    params.rectangle.xs = BAR_METER_LINE_X1 + BAR_METER_CLEAR_WIDTH;
    params.rectangle.ys = BAR_METER_LINE_Y1 + BAR_METER_CLEAR_WIDTH;
    params.rectangle.xe = BAR_METER_LINE_X2 - BAR_METER_CLEAR_WIDTH;
    params.rectangle.ye = BAR_METER_LINE_Y2 - BAR_METER_CLEAR_WIDTH;
    oledC_addShape(7, OLED_SHAPE_RECTANGLE, &params);
    
    oledC_redrawIndex(7);
}

void OLED_clearAPMStatus(void)
{
    shape_params_t params;
    
    params.rectangle.color = OLEDC_COLOR_BLACK;
    params.rectangle.xs = STATUS_ALIGNMENT_X;
    params.rectangle.ys = STATUS_ALIGNMENT_Y;
    params.rectangle.xe = STATUS_ALIGNMENT_X + STATUS_WIDTH;
    params.rectangle.ye = STATUS_ALIGNMENT_Y + STATUS_HEIGHT;
    oledC_addShape(8, OLED_SHAPE_RECTANGLE, &params);
    
    oledC_redrawIndex(8);
}

void OLED_displayInit(void)
{
    OLED_setBackground(OLEDC_COLOR_BLACK);
}
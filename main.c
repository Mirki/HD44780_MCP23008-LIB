/*
 * main.c
 *
 * Created: 06.01.2015 23:32:29
 *  Author: Mirki
 */ 
#define F_CPU 8000000

#include <avr/io.h>
#include "i2cmaster.h"
#include "MCP23008.h"
#include "I2C_LCD.h"



int main(void)
{
	
	i2c_init();
	lcd_init();
	lcd_light(true);
	lcd_printlcc(1,1,"This is a Test");
	lcd_printlcc(2,1,"MCP23008 LCD");


	
    while(1)
    {
     
    }
}
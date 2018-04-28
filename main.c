/*
 * spi_test.c
 *
 * Created: 28.08.2017 13:28:39
 * Author : Karol
 */ 

#include <util/delay.h>
#include <avr/io.h>
#include "lcd.h"


int main(void)
{
	lcd_init();
	blink_off();
	Slide_text("test systemu");
    while (1) 
    {
		
		
	
    }
}


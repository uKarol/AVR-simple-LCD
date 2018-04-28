/*
 * spi_test.c
 *
 * Created: 28.08.2017 13:28:39
 * Author : Karol
 */ 

#include <util/delay.h>
#include <avr/io.h>
#include "lcd.h"

char pl_char1[] = {0,0,14,1,15,17,15,2}; //¹
char pl_char2[] = {2,4,31,2,4,8,31,0}; //Ÿ
char pl_char3[] = {0,4,31,2,4,8,31,0}; //¿
char pl_char4[] = {4,4,6,12,4,4,4,0};//³
char pl_char5[] = {2,4,14,16,14,1,30,0};	 //œ
char pl_char6[] = {2,4,14,16,16,17,14,0}; //æ


int main(void)
{
	lcd_init();
	lcd_defchar(0x82, pl_char3);
    lcd_defchar(0x80, pl_char1);
	lcd_defchar(0x81, pl_char2);
	lcd_defchar(0x83, pl_char4);
	lcd_defchar(0x84, pl_char5);
	lcd_defchar(0x85, pl_char6);
	//lcd_locate(0,0);
	//lcd_put_string("cze""\x84""\x85"", dzisiaj");
	blink_off();
	Slide_text("dziadostwo w koncu zaczelo dzialac");
	//lcd_locate(0,1);
	//lcd_put_string("test systemu");
    while (1) 
    {
		
		
	
    }
}


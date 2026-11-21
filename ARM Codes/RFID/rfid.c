//******************************************************************************
//
//                  Rfid Demo
//
//******************************************************************************
// Microcontroller: LPC2148
// Compiler:        Keil
// Target Hardware: ARM7 Universal Development Board
// Company:         ADVANCE TECH (I) PVT. LTD
// Author  : 				Prateek Gupta
//******************************************************************************
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//                 Hardware Settings for ARM7 Development Board
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//  Microcontroller:LPC2148
//  Ext.Oscillator:	12 MHz
//
//	PINOUT:	LCD   -   LPC2148 
//					----------------- 
//					DB0   -   	P1.16 
//					DB1   -   	P1.17 
//					DB2   -   	P1.18
//					DB3   -   	P1.19 
//					DB4   -   	P1.20 
//					DB5   -   	P1.21 
//					DB6   -   	P1.22
//					DB7   -   	P1.23 
//					RS    -   	P1.24 
//					E     -   	P1.25 
//					R/W   -   	GND
//***************************************************************************

//**************************INCLUDES********************************************
#include <LPC214x.h>
//////////////////////////USER SETTINGS//////////////////////////////////
#define DATA_PORT_SET       IOSET1
#define DATA_PORT_CLR       IOCLR1
#define DATA_DIR            IODIR1
#define D7					23
#define D6					22
#define D5					21
#define D4					20
#define D3					19
#define D2					18
#define D1					17
#define D0					16
//Set data port pins
#define DATA_PORT    				(unsigned long)((1<<D7)|(1<<D6)|(1<<D5)|(1<<D4))|((1<<D3)|(1<<D2)|(1<<D1)|(1<<D0))

#define CTRL_PORT_SET       IOSET1
#define CTRL_PORT_CLR       IOCLR1
#define CTRL_DIR            IODIR1
#define CTRL_RS             24
#define CTRL_EN             25
#define RFID_buzz           4
////////////////////////End of USER SETTINGS////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
#include"delay.h"
#include"lcd.h"
#include"uart0.h"
//**********************End of INCLUDES*****************************************

int i;
char temp[15];

int main()
{
	IODIR0 = (1 << 4);
	IOSET0 = (1 << 4);
  init_lcd();
  string_lcd("RFID test code");
  delay_ms(1000);
  while(1)
  {
        for(i=0;i<6;i++)
        {
                init_uart0(9600);
                temp[i]=rec_uart0();
        }
        cmd_lcd(0xc0);
        for(i=0;i<6;i++)
        {
                data_lcd(temp[i]);
        }
        delay_ms(1000);
  }
}

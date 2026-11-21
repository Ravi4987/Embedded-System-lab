	 #include<lpc214x.h>
	 #include "lcdarm.h"
	 #define RS (1<<0)
	 #define E  (1<<1)

	 void delay(unsigned long int h)
      {
        unsigned long int i,j;
        for(j=0;j<h;j++)
        for(i=0;i<500;i++);
      }


	 void lcdcmd(char dat)
	 {
	 	IOCLR0=0xffffffff;
		IOCLR0=RS;
		IOSET0=dat<<2;
		IOSET0=E;
		delay(20);
		IOCLR0=E;
	 }

	 void lcddata(char dat)
	 {
	 	IOCLR0=0xffffffff;
		IOSET0=RS;
		IOSET0=dat<<2;
		IOSET0=E;
		delay(20);
		IOCLR0=E;
	   	 
	 }

	 void initlcd()
	 {
	 
	  lcdcmd(0x38);
	  lcdcmd(0x0e);
	  lcdcmd(0x06);
	  lcdcmd(0x01);
	 
	 }


	 int main()
     {
       IODIR0=0xffffffff;
       initlcd();
       while(1)
       {
        lcdcmd(0x80);
        lcddata('R');
        lcddata('A');
        lcddata('V');
        lcddata('I');
        delay(1000);
		lcdcmd(0XC0);
		lcddata('P');
		lcddata('R');
		lcddata('A');
		lcddata('K');
		lcddata('A');
		lcddata('S');
		lcddata('H');
		lcdcmd(0x0C);
        }
      }

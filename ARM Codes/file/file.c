  #include<lpc214x.h>
  #include "C:\Users\Dell\Desktop\ARM\lcdarm.h"

  void delay(unsigned long int h)
      {
        unsigned long int i,j;
        for(j=0;j<h;j++)
        for(i=0;i<500;i++);
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
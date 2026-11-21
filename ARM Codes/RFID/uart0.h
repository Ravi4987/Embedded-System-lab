/*
start-up settings in configuration wizard

VPBDIV_SETUP enable by tick
and set VPB Clock = CPU Clock / 2
means 60 mhz/ 2 = 30 mhz i.e. PCLK = 30 MHZ

Note: if don't want to change setting then PCLK is 15Mhz as its default value is (VPB Clock = CPU Clock/4 )
*/


#define PCLK 15000000UL

void init_uart0 (unsigned int Baud_Rate)					    // Initialize Serial Interface       
{               	   
  	PINSEL0 |= 0x00000005;           //Enable RxD0 and TxD0                    
    U0LCR = 0x83;                   // 8 bits, no Parity, 1 Stop bit    
	  U0DLM = 0x00;
    U0DLL = PCLK /(16*Baud_Rate);		// Baud Rate @ 15MHz Pclk Clock as default setting        
    U0LCR = 0x03;					 					// DLAB = 0  
}

void trans_uart0 (unsigned char ch)   // Write character to Serial Port   
{                  		
   while (!(U0LSR & 0x20));
  	U0THR = ch;
}
unsigned char rec_uart0 (void)		// Read character from Serial Port   
{            
  while (!(U0LSR & 0x01));
  return (U0RBR);
}

void  string_uart0(unsigned char *str)	 //A function to send a string on UART0
{  
   while(*str)
   {  
      trans_uart0(*str++);	    
   }
}

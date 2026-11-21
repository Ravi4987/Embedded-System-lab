#include<lpc213x.h>


void SPI_Init()
{
		PINSEL0=PINSEL0 | 0x00001500;

		S0SPCR = 0x0020;

		S0SPCCR = 0x10;

}


void SPI_Write(char data)
{
 	char flush;

	IOCLR0 = (1<<7);

	S0SPDR = data;

	while((S0SPSR & 0x80)==0);

	flush = S0SPDR;

	IOSET0 = (1<<7);


}


char SPI_Read()
{
 	 IOCLR0 = (1<<7);

	 S0SPDR = 0xFF;

	 while((S0SPSR & 0x80)==0);

	 IOSET0 = (1<<7);

	 return S0SPDR;


}

int main()
{
   int i;

    SPI_Init();

	 for(i=0;i<10;i++)		 // Send 80 clock
	 {
		SPI_Write(0xFF);
	 }

	  SPI_Write(0x40);

	  SPI_Write(0x00);

	  SPI_Write(0x00);

	  SPI_Write(0x00);
 
	  SPI_Write(0x00);

	  SPI_Write(0x95); 

	  if(SPI_Read()==0x01)
	  {
	  
	  	 SPI_Write(0x11);
	  
	  }
	  

	  while(1);




}
	 #include<lpc214x.h>
	 void delay()
	 {
	  unsigned long int i;
	  for(i=0;i<=500000;i++);
	 
	 }

	 int main()
	 {
	  IODIR0&=~(1<<1);
	  IODIR0&=~(1<<2);
	  IODIR0|=(1<<0);
	  while(1)
	  {
	    if(IOPIN0&(1<<1))
		IOSET0=(1<<0);
		else if(IOPIN0&(1<<2))
		IOCLR0=(1<<0);
	  
	  
	  }
	 
	 
	 
	 }
	#include<lpc214x.h>
  void delay()
  {
    unsigned long int i;
    for(i=0;i<5000;i++);
  
  
  }


  int main()
  {	   
  int m,x,y;
  unsigned char arr[] = {0x3f, 0x06, 0x5b, 0x4f, 0x66, 0x6d, 0x7d, 0x07, 0xff, 0x6f};

    IODIR0=0x7f;
	IODIR1=(1<<16)|(1<<17);
	IODIR1=~(1<<18);
	IODIR1=~(1<<19);
	x=0;
	y=0;
      
	  m=x*10+y*1;

		
	    
    while(1)
	{
	   if(m>99)
	   {
	   x=0;
	   y=0;
	   m=0;
	   }
	   
	   IOCLR0=0x7f;// set port0 as output
	   IOSET0=arr[x];		 // sent digit "1" on segment
	   IOSET1=(1<<17);	 // Switch on pin 17, segment 1
	   IOCLR1=(1<<16);	
	   delay();

	   IOCLR0=0x7f;
	   IOSET0=arr[y];
	   IOSET1=(1<<16);
	   IOCLR1=(1<<17);
		delay();  
	
		
       if(IOPIN1&(1<<18))
	   {
	      m++;
       	  x=m/10;
		  y=m%10;

	  while(IOPIN1&(1<<18))
	   {
	      
	   IOCLR0=0x7f;// set port0 as output
	   IOSET0=arr[x];		 // sent digit "1" on segment
	   IOSET1=(1<<17);	 // Switch on pin 17, segment 1
	   IOCLR1=(1<<16);	
	   delay();

	   IOCLR0=0x7f;
	   IOSET0=arr[y];
	   IOSET1=(1<<16);
	   IOCLR1=(1<<17);
		delay();
	   	} 
	   }

	   else if(IOPIN1&(1<<19))
	   {
	   
	   	  m--;
		  x=m/10;
		  y=m%10;
		  while(IOPIN1&(1<<19))
		  {

	   IOCLR0=0xffffffff;// set port0 as output
	   IOSET0=arr[x];		 // sent digit "1" on segment
	   IOSET1=(1<<17);	 // Switch on pin 17, segment 1
	   IOCLR1=(1<<16);	
	   delay();

	   IOCLR0=0xffffffff;
	   IOSET0=arr[y];
	   IOSET1=(1<<16);
	   IOCLR1=(1<<17);
		delay();
		}

		
		 
			
		

	   }

	  }	
	  



	 }
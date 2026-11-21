 /*********************************
 * Segment used common cathode 
 * First segment_pin 1.17
 * Second segment_pin 1.16
 * Data lines 0.0-0.7
 *******************************************/
 
 
 
 
 
 
 #include<lpc214x.h>
  void delay()
  {
    unsigned long int i;
    for(i=0;i<5000;i++);
  
  
  }


  int main()
  {
  
    IODIR0=0xffffffff;
	IODIR1=(1<<16)|(1<<17);

	while(1)
	{

	   IOCLR0=0xffffffff;// set port0 as output
	   IOSET0=0x06;		 // sent digit "1" on segment
	   IOSET1=(1<<17);	 // Switch on pin 17, segment 1
	   IOCLR1=(1<<16);	 // Switch on pin 17, segment 1
	   delay();

	   IOCLR0=0xffffffff;
	   IOSET0=0x5b;
	   IOSET1=(1<<16);
	   IOCLR1=(1<<17);
		delay();

	
	
	}
  
  
  
  }
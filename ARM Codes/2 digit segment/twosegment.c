  #include<lpc214x.h>
  void delay()
  {
    unsigned long int i;
    for(i=0;i<5000;i++);
  
  
  }


  int main()
  {	   
  int c,d,e;
  unsigned char arr[] = {0x3f, 0x06, 0x5b, 0x4f, 0x66, 0x6d, 0x7d, 0x07, 0xff, 0x67};

  
    IODIR0=0xffffffff;
	IODIR1=(1<<16)|(1<<17);

	while(1)
	{
	for(c=0;c<=9;c++)
	{
	   for(d=0;d<=9;d++)
	   {
	   for(e=0;e<=10;e++)
	   {
	   IOCLR0=0xffffffff;// set port0 as output
	   IOSET0=arr[c];		 // sent digit "1" on segment
	   IOSET1=(1<<17);	 // Switch on pin 17, segment 1
	   IOCLR1=(1<<16);	 // Switch on pin 17, segment 1
	   delay();

	   IOCLR0=0xffffffff;
	   IOSET0=arr[d];
	   IOSET1=(1<<16);
	   IOCLR1=(1<<17);
		delay();
		}
		}
		//delay();
	  }
	
	}
  
  
  
  }
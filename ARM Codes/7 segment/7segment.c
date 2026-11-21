   #include<lpc214x.h>

   void delay()
   {
   unsigned long int i;
   	 for(i=0;i<500000;i++);
    
   }

   int main()
   {
   int a;
   unsigned char arr[] = {0x3f, 0x06, 0x5b, 0x4f, 0x66, 0x6d, 0x7d, 0x07, 0xff, 0x67};
   IODIR0=(1<<0)|(1<<1)|(1<<2)|(1<<3)|(1<<4)|(1<<5)|(1<<6);
   while(1)
   {
   	   for(a=0;a<=9;a++)
	   {
	      IOCLR0=(1<<0)|(1<<1)|(1<<2)|(1<<3)|(1<<4)|(1<<5)|(1<<6);
	     IOSET0=arr[a];
		 delay();  
	   }
     
   
   }
   
   
   }
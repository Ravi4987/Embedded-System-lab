 #include<lpc214x.h>

void delay()
{

unsigned long int i;
for(i=0;i<=50000;i++);

}

int main()
{

 IODIR0=(1<<0)|(1<<1)|(1<<2)|(1<<3)|(1<<4)|(1<<5)|(1<<6);
 while(1)
 { int j;
   for(j=0;j<7;j++)
   {
   IOSET0=(1<<j);
   delay();
   IOCLR0=(1<<j);
   delay();
 	}
 
 
 }
 
 
 
 
 }


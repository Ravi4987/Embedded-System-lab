#include<lpc21xx.h>
int val=100;
void d(unsigned int p)
{
  int i,j;
  for(i=0;i<=p;i++)
  for(j=0;j<=1275;j++);
}
int main()
{
  IODIR0=0xfffffff;
   while(1)
   {	if(IOPIN0 & 1<<5)
   {
    IOSET0|=1<<0;
	d(val);
	IOCLR0|=1<<0;
	d(val);
   }
	 IOCLR0|=1<<5;
   }
}
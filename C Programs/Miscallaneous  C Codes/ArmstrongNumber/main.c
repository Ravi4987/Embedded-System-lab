/********************************************************Program to print Armstrong Number*******************************************************************

		Armstrong numbers are those whose sum of cube of their digits are equal to number itself for example 153= 1^3 + 5^3 + 3^3


*************************************************************************************************************************************************************/


#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int num,quot=1,rem,i,sum=0;
	
	
	for(i=2;i<500;i++)
	{
		
		num=i;
		quot=1;
		sum=0;
		
		while(quot>0)
		{
			
			quot = num/10;
			rem =  num%10;
			
			sum += rem*rem*rem;
			num = quot;
		}
		
	  if(sum==i)  printf("Armstrong Number:%d\n",i);	
		
		
	}
	
	return 0;
}

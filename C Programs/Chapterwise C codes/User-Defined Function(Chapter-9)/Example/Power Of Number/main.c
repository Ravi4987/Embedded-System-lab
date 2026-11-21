/***********************************************Power Of Number using function***********************************************************************************/
#include <stdio.h>
#include <stdlib.h>



int main() {
	
	float x;
	int n;
	float power(float num,int pow);
	
	printf("Enter number:");
	scanf("%f",&x);
	
	printf("Enter its power:");
	scanf("%d",&n);
	
	
	printf("Value:%f",power(x,n));
	
	
	return 0;
}


float power(float num,int pow)
{
	int i;
	float result=1;
	
	if(pow==0) return(1);
	
	else
	{
	
	
		for(i=0;i<pow;i++)
		{
			result = result*num;
			
			
		}
	
	}
	
	return(result);
	
}

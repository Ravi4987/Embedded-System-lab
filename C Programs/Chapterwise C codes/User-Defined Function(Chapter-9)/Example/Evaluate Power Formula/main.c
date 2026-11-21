/***************************************************Evaluate Power Formula**********************************************************************************************


								Formula 
								
								y = x^n
								
								where x and y are floating point number and n is an integer



/*******************************************************************************************************************************************************************/



#include <stdio.h>
#include <stdlib.h>



int main() {
	float x;
	int n;
	
	float power(float num,int pow);
	
	printf("Enter number and its power:");
	scanf("%f%d",&x,&n);
	
	printf("Solution is %f",power(x,n));
	
	return 0;
}


float power(float num,int pow)
{
	
	if(pow==0) return 1;
	
	else
	{
		
		return num*power(num,pow-1);
		
	}
	
	
	
	
}


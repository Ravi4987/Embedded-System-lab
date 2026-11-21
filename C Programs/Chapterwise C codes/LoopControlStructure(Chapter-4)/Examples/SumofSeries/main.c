/*******************************************************Program to calculate sum of series upto n terms************************************************************/
#include <stdio.h>
#include <stdlib.h>

/******************************************

		Series is
		
		x + cubeoof(x)/3! + xtopowerof5/5!.....
		




******************************************/

int main() {
	float x,term,sum;
	int i,n,fact=1;
	
	printf("Enter the value of x:");
	scanf("%f",&x);
	
	printf("Enter the value of n:");
	scanf("%d",&n);
	
	term=x;
	
	sum=x;
	
	for(i=1;i<=n-1;i++)
	{
		
		term *= x*x;
		fact *= (2*i+1)*(2*i);
		
		sum +=term/fact;
		
		
	}
	
	
	printf("Sum of the series is %f",sum);
	
	
	return 0;
}

/**********************************To compute the value of binomial coefficient(ncr)*****************************************************************************************

					Formula =  n!/(r!*(n-r)!)


*****************************************************************************************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>



int main() {
	int n,r,ncr;
	
	printf("Enter the value of n and r:");
	scanf("%d%d",&n,&r);
	
	if(n<r)  printf("Invalid input");
	
	else
	{
		
		ncr = fact(n)/(fact(r)*fact(n-r));
		
		printf("Value of binomial coefficient is %d",ncr);
		
		
		
	}
	
	
	
	
	return 0;
}


fact(int val)
{
	if(val==0) return(1);
	
	else return val*fact(val-1);
	
	
	
}

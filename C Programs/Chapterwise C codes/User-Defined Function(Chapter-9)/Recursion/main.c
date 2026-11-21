/**************************************************************************************************************************************
					Recursion is refer to a process in which function call itself
					
		In this program we are going to find factorial of given number using Recursion


***************************************************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>



int main() {
	int n;
	
	printf("Enter number whose factorial is to find:");
	scanf("%d",&n);
	
	if(n<0)
	{
		printf("\nInvalid Number\n");
		
	}
	
	else printf("%d!=%d",n,fact(n));
	
	
	
	return 0;
}


fact(int x)
{
	int sum;
	
	printf("\n%d\n",x);
	
	if(x==0)  return 1;
	
	//else return(x*fact(x-1));
	
	else
	{
		printf("\nSum:%d\n",sum);	
		sum += x*fact(x-1);
		
		return(sum);
		
	}
	
	
	
	
	
}

/*****************************************************************************************************************************************
							Fibonacci sequence using Recursion
							
							f(1) = 0
							
							f(2) = 1
							
							f(n) = f(n-1) + f(n-2)  where n>3
							
							
		A recursive definition for fibonacci number f(n) is 
										n if n<=1		
							f(n) =  {   f(n-1) + f(n-2) if n>1



*****************************************************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>



int main() {
	int n,i;
	
	printf("Enter the number of terms:");
	scanf("%d",&n);
	
	printf("Fibonacci Sequence is\n");
	
	for(i=0;i<n;i++)
	{
		printf("%3d",fib(i));
		
	}
	
	
	
	return 0;
}


fib(int j)
{
	if(j<=1) return j;
	
	else return fib(j-1)+fib(j-2);
	
	
	
}

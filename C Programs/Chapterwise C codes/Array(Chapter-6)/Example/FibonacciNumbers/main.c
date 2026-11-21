/*********************************************Program to print first 20 Fibonacci number*************************************************************************/

/********************************************************************************************

Fibonacci Numbers are those numbers which is sum of its previous two numbers

here we Fib[1]=1 and Fib[2]=1


********************************************************************************************/

#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int fib[25],i,j;
	
	fib[1]=1;
	fib[2]=1;
	
	for(i=3;i<=20;i++)
	fib[i]=fib[i-2]+fib[i-1];
	
	printf("First 20 Fibonacci Numbers are\n");
	
	for(i=1;i<=20;i++)
	printf("fib[%d]:%d\n",i,fib[i]);
	
	

	
	return 0;
}

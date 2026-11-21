/*******************************************Accessing a function using Pointer with parameters***********************************************************************/
#include <stdio.h>
#include <stdlib.h>



int main() {
	int a,b;
	
	int add(int n1, int n2);
	int (*ptr)(int num1,int num2);
	
	ptr = add;
	
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	
	
	
	printf("Addition:%d",(*ptr)(a,b));
	
	
	
	
	return 0;
}

add(int n1, int n2)					// User defined function
{
	
	return(n1+n2);
	
	
	
}


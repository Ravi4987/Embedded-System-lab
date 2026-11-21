/*****************************************************Nested if else statement *******************************************************************/
#include <stdio.h>
#include <stdlib.h>



int main() {
	int a,b,c,big;
	
	
	printf("Enter the value of three numbers:");
	scanf("%d%d%d",&a,&b,&c);
	
	
	if(a>b)
	{
		
		if(a>c)
			big=a;
		
		else
			big=c;
		
	}
	
	else
	{
		
		if(b>c) big=b;  else big=c;
		
	}
	
	printf("Largest number is %d",big);
	
	
	return 0;
}

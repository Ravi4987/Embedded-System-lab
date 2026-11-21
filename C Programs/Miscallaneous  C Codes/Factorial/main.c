/*****************************************************Program to find factorial of given number**********************************************************/

#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int number,factorial=1,i;
	
Start:	printf("Enter a number:");
	scanf("%d",&number);
	
	if(number<0)  
	{
		printf("Number must be +ve\n");
		goto Start;
		
		
	}
	
	if(number==0 || number==1)
	{
		
		goto End;
		
	}
	for(i=number;i>=1;--i)
	{
		
		factorial *=i;
		
		
	}
	
End:	printf("Factorial is %d",factorial);
	
	
	
	
	
	return 0;
}

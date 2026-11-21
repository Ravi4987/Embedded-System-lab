#include <stdio.h>
#include <stdlib.h>



int main() {
	
	
	int number,power,result=1,i;
	
	
	printf("Enter the  number:");
	scanf("%d",&number);
	
	printf("Enter the power:");
	scanf("%d",&power);
	
	for(i=1;i<=power;i++)
	{
		
		
		result *= number;
		
		
	}
	
	
	printf("Result is %d",result);
	
	
	
	
	
	return 0;
}

/**************************************************Program to find Sum of Square of Digits**************************************************************/
#include <stdio.h>
#include <stdlib.h>

#define  DO   0

int main() {
	int number,quot=1,rem,sum=0;
	
	printf("Enter the number:");
	scanf("%d",&number);

#if   DO 	
	
	do	
	{
		
		quot=number/10;
		rem=number%10;
	
		sum +=rem*rem;
	//	printf("Sum:%d\n",sum);
		number=quot;
		
		
		
	}
	while(quot>0);
	
#else
	
	while(quot>0)
		{
		
		quot=number/10;
		rem=number%10;
	
		sum +=rem*rem;
	//	printf("Sum:%d\n",sum);
		number=quot;
		
		
		
	}
	
#endif
	
	printf("Sum of Square of Digits:%d",sum);	
	return 0;
}

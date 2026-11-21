/********************************************************Program to find sum of 5 digit number******************************************************************************/

#include <stdio.h>
#include <stdlib.h>



int main() {
	int Number, quotient, remainder,sum=0;
	
Enter:	printf("Enter five digit number:");
	scanf("%d",&Number);
	
	if((Number/10000)>0)
	{
		sum+=Number%10;        // One's place digit
		quotient=Number/10;
		sum+=quotient%10;		// Ten's place digit
		quotient=quotient/10;
		sum+=quotient%10;		// 100th place digit					
		quotient=quotient/10;
		sum+=quotient%10;		// 1000th place digit
		quotient=quotient/10;
		sum+=quotient%10;		// 10000th place digit
		
		printf("Sum of digit is %d",sum);
		
		
	}
	
	else
	{
		
		printf("Not a valid number enter again\n");
		goto Enter;
		
	}
	
	
	
	return 0;
}

/********************************* Program to find largest number without using Array**********************************************/

#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int s1,s2,n;
	
	printf("How many integers are there:");
	scanf("%d",&n);
	
	printf("Enter first number:");
	scanf("%d",&s1);
	
	n=n-1;
	
	for(;n>=1;n--)
	{
		
		printf("Enter next number:");
		scanf("%d",&s2);
		
		if(s1<s2)
		{
			s1=s2;
		}
		
		
	}
	
	printf("Largest number is %d",s1);
	
	
	
	
	
	
	
	
	
	return 0;
}

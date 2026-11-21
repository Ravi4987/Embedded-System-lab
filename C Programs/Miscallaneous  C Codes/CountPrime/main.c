#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int max=0,prime_no=0;
	int i=0,j=0,count=0;
	
	printf("Enter number upto which you want to count prime number:");
	scanf("%d",&max);
	
	for(i=2;i<=max;i++)
	{
		
		for(j=2;j<i;j++)
		{
			
			if((i%j)==0)
			{
				count++;
				
			}
			
		}
		
		if(count>1)
		{
			count=0;
		}
		
		else
		{
			count=0;
			prime_no++;
		}
				
	}
	
	prime_no++;
	
	printf("No of prime no. is %d",prime_no);
	
	return 0;
}

/*******************************************************Program to find whether number is Prime or not(Break Statement in Loop)***********************************************************/
#include <stdio.h>
#include <stdlib.h>



int main() {
	int n,i;
	
	printf("Enter a number:");
	scanf("%d",&n);
	
	i=2;
	
	while(i<=n-1)
	{
		if(n%i==0)
		{
			printf("Not a prime number");
			break;
			
		}
		
		i++;
	}
	
	if(i==n)
	printf("Prime Number");
	
	
	
	return 0;
}

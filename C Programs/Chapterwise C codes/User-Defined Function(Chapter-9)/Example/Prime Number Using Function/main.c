/***************************************Program to print prime number using function***************************************************************************/
#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int n;
	void prime(int num);
	
	printf("Enter number upto which prime numbers is to be find:");
	scanf("%d",&n);
	
	prime(n);
	
	
	return 0;
}



void prime(int num)
{
	int tot=0,i,j,flag=0;
	
	for(i=2;i<num;i++)
	{
		flag=0;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)			// Not a prime number
			{
				flag=1;
				break;
				
			}
			
			
		}
		
		if(flag==0)				// if flag set to 0 it means number is prime number
		{
			tot++;
			printf("\nPrime Number:%d\n",i);
			
			
		}
		
		
	}
	
	
	printf("\n\nTotal prime number:%d",tot);
	
}

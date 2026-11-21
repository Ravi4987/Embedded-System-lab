/***************************PrimeNumberCount using loop and break statement***************************/
#include <stdio.h>
#include <stdlib.h>



int main() {
	int i,j,n,count=0;
	
	printf("Enter number upto which Prime number has to count:");
	scanf("%d",&n);
	
	for(i=2;i<=n;i++)
	{
		
		  for(j=2;j<=i-1;j++)
		  {
		  	
		  	  if(i%j==0)
		  	  break;
		  	
		  	
		  }
		
		if(i==j)  
		{
		  printf("Prime Number:%d\n",i);
		  count++;	
		}
		
		
		
		
	}
	
	printf("Total Prime number:%d",count);
	
	
	
	
	return 0;
}

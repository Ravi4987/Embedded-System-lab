/*************************************************Program to find trace(sum of diagonal element) of Square matrix**************************************************************/
#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int a[10][10], i,j,n,sum=0;
	
	
	printf("Enter the order of square matrix:");
	scanf("%d",&n);
	
	printf("Enter the element of Array\n");
	
	for(i=0;i<n;i++)
	{
		
		for(j=0;j<n;j++)
		{
			
			printf("a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
			
			
		}
		
	}
	
	for(i=0;i<n;i++)
	{
		
		sum +=a[i][i];
		
		
	}
	
	printf("Array\n\n");
	
	
	for(i=0;i<n;i++)
	{
		printf("\n");
		
		for(j=0;j<n;j++)
		{
			
			
			printf("   %d   ",a[i][j]);
			//printf("   ");
			
			
		}
		
		
		
		
	}
	
	printf("\n\nTrace of the matrix is %d",sum);
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

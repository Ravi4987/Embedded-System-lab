/*******************************************************Program to print pattern*****************************************************************************



			10  9  8  7  6  5  4  3  2  1  0
				10 9  8  7  5  3  2  1  0
				   10 9  8  5  2  1  0
				      10 9  5  1  0
				         10 5  0
				            5

************************************************************************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int rows,i,j,k,l;
	
	printf("Enter the number of rows:");
	scanf("%d",&rows);
	
	
	for(i=1;i<=rows;i++)
	{
		
		
		for(j=1;j<i;j++)
		{
			
			printf("  ");
		}
		
		
		
		for(j=10;j>=rows+i;j--)
		{
			
			printf("%2d",j);
			
			
		}
		
		printf(" 5");
		
		for(k=rows-i;k>=0;k--)
		{
			printf("%2d",k);
			
		}
		
		printf("\n");
		
		
		
		
		
		
		
		
		
		
	}
		
	
	
	for(j=1;j<rows;j++)
		{
			
			printf("  ");
		}
	
	printf("   5");
	
	
	
	return 0;
}

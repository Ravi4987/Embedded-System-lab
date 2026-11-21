/***********************************Program to find transpose of matrix*************************************************************************/
#include <stdio.h>
#include <stdlib.h>



int main() {
		int rows,col,a[10][10],trans[10][10];
	int i,j;
	
	printf("Enter no of row :");
	scanf("%d",&rows);
	
	printf("Enter no of coloumn:");
	scanf("%d",&col);
	
	printf("Enter the element of matrix\n");
	
	for(i=0;i<rows;i++)
	{
		
		for(j=0;j<col;j++)
		{
			printf("\na[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
			
			
		}
		
	}
	
	printf("Array A\n\n");
	
	for(i=0;i<rows;i++)
	{
		printf("\n");
		for(j=0;j<col;j++)
		{
			
			printf("%d  ",a[i][j]);
		}
	
	
     }
	
	
	for(i=0;i<rows;i++)
	{
		
			for(j=0;j<col;j++)
			{
				trans[j][i]=a[i][j];
					
			}	
		
	}	
	
	printf("\n\nTranspose of Matrix  A\n\n");		// row become coloumn and column become row
	
	for(i=0;i<col;i++)
	{
		printf("\n");
		for(j=0;j<rows;j++)
		{
			
			printf("%d  ",trans[i][j]);
		}
	
	
     }
	
	
	
	
	return 0;
}

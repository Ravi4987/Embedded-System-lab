/***************************************Sum of frame element of matrix********************************************************************************/
#include <stdio.h>
#include <stdlib.h>



int main() {
	int rows,col,a[10][10];
	int sum,i,j;
	
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
	
	printf("Array\n\n");
	
	for(i=0;i<rows;i++)
	{
		printf("\n");
		for(j=0;j<col;j++)
		{
			
			printf("%d  ",a[i][j]);
		}
		
		
		
		
	}
	
	for(i=0;i<rows;i+=rows-1)				// sum of 1st and last rows
	for(j=0;j<col;j++)
	{
		sum += a[i][j];
		
	}
	
	
	for(j=0;j<col;j+=col-1)					// sum of 1st and last column
	for(i=1;i<rows-1;i++)
	{
		sum += a[i][j];
		
	}
	
	printf("\n\nSum of frame element is %d",sum);
	
	
	return 0;
}

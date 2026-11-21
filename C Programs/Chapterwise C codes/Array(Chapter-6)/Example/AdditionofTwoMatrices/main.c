/****************************************************Program to find resultant of two matrcies**********************************************************************/
#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int a[10][10],b[10][10],s[10][10],row,col,i,j;
	
	printf("Enter the Row and column(i.e Order) of two matrices:");
	scanf("%d%d",&row,&col);
	
	printf("Enter the element of matrices a\n");
	
	for(i=0;i<row;i++)				// Input of element of matrix A
	{
		
		for(j=0;j<col;j++)
		{
			
			printf("a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
			
		}
		
		
	}
	
	
	
	
	printf("Enter the element of matrices B\n");
	
	for(i=0;i<row;i++)				// Input of element of matrix B
	{
		
		for(j=0;j<col;j++)
		{
			
			printf("b[%d][%d]:",i,j);
			scanf("%d",&b[i][j]);
			
		}
		
		
	}
	
	
	printf("\n\nMatrix A\n\n");
	
	for(i=0;i<row;i++)				// Element of Matrix A
	{
		printf("\n");
		for(j=0;j<col;j++)
		{
			
			printf("%d  ",a[i][j]);
			
		}
		
		
		
	}



	printf("\n\nMatrix B\n\n");
	
	for(i=0;i<row;i++)				// Element of Matrix B
	{
		printf("\n");
		for(j=0;j<col;j++)
		{
			
			printf("%d  ",b[i][j]);
			
		}
		
		
		
	}
	
	
	for(i=0;i<row;i++)
	{
		
	  for(j=0;j<col;j++)
	  {
	  	
	  		s[i][j]=a[i][j]+b[i][j];	
	  }	
		
		
		
	}
	
	
	
	printf("\n\nMatrix Resultant S\n\n");
	
	for(i=0;i<row;i++)				// Element of Resultant Matrix B
	{
		printf("\n");
		for(j=0;j<col;j++)
		{
			
			printf("%d  ",s[i][j]);
			
		}
		
		
		
	}	
	
	
	
	
	
	
	return 0;
}

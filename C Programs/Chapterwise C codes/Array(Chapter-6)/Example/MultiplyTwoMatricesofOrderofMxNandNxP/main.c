/************************************Product of two of order mxn and nxp***************************************************************************************/
#include <stdio.h>
#include <stdlib.h>

/*******************************************************************************************************

  if Matrix A is of order MxN and matrix B is of order NxP  then their product matrix S will be
  
  of order MxP



********************************************************************************************************/


int main() {
	int a[10][10],b[10][10],s[10][10];
	int m,n,p,i,j,k;
	
	printf("Enter the value of m,n and p:");
	scanf("%d%d%d",&m,&n,&p);
	
	
	printf("\nEnter the value of matrix A\n");
	
	for(i=0;i<m;i++)						// input of matrix A
	{
		
		for(j=0;j<n;j++)
		{
			
			printf("a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
		
		
		
	}
	
	
	printf("\nEnter the value of matrix B\n");
	
	for(i=0;i<n;i++)
	{
		
		for(j=0;j<p;j++)							// input of matrix B
		{
			
			printf("b[%d][%d]:",i,j);
			scanf("%d",&b[i][j]);
		}
		
		
		
	}
	
	
	
	printf("\n\nMatrix A\n\n");					// Matrix A element
	
	for(i=0;i<m;i++)
	{
		
		printf("\n");
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		
		
	}
	
	
	printf("\n\nMatrix B\n\n");				// Matrix B element
	
	for(i=0;i<n;i++)
	{
		
		printf("\n");
		for(j=0;j<p;j++)
		{
			printf("%d ",b[i][j]);
		}
		
		
	}
	
	
	
	for(i=0;i<m;i++)				/// Product processing of two matrix
	{
		
		
		for(j=0;j<p;j++)
		{
			
			s[i][j]=0;
			for(k=0;k<n;k++)
			{
				s[i][j] += a[i][k]*b[k][j];
				
			}
			
			
		}
		
		
		
	}
	
	
	printf("\n\nMatrix S\n\n");
	
	for(i=0;i<m;i++)			// Resultanta matrix S
	{
		
		printf("\n");
		for(j=0;j<p;j++)
		{
			printf("%d ",s[i][j]);
		}
		
		
	}	
	
	
	
	
	
	
	
	return 0;
}

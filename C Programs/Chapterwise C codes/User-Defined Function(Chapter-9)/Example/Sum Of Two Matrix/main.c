/******************************************Sum of Two Matrix using Function***************************************************************************/
#include <stdio.h>
#include <stdlib.h>

/*************************************************************************************************************
			It should be noted that the array we choose is of 20 row and 20 column
			
			so if the address of a[0][0] is 2291712 then address of next row first element(i.e a[1][0])
			
			is 2291792( 2291712+20x4 )


*************************************************************************************************************/

int main() {
	int a[20][20],b[20][20],s[20][20];
	int i,j,row,col;
	
	
	
	void arraysum(int *ap,int *bp,int *sp,int r,int c);
	
	printf("Enter the row and column of matrix:");
	scanf("%d%d",&row,&col);
	
	printf("Enter the Elements of Array A\n");			// Input of Array A
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
			
			
		}
		
		
		
	}
	
	
	
	printf("\n\nEnter the Elements of Array B\n");			// Input of Array B
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("a[%d][%d]:",i,j);
			scanf("%d",&b[i][j]);
			
			
		}
		
		
		
	}
	
	
	printf("\n\nElements of Array A\n");			// element of Array A
	for(i=0;i<row;i++)
	{
		
		printf("\n");
		for(j=0;j<col;j++)
		{
			printf("%d ",a[i][j]);
			
			
		}
		
		
		
	}
	
	
	
	printf("\n\nElements of Array B\n");			// element of Array B
	for(i=0;i<row;i++)
	{
		
		printf("\n");
		for(j=0;j<col;j++)
		{
			printf("%d ",b[i][j]);
			
			
		}
		
		
		
	}
	
	

	arraysum(a[0],b[0],s[0],row,col);		// Passing starting address of each array and row column value to function
	
	
	printf("\n\nElements of Array S\n");			// element of Array S
	for(i=0;i<row;i++)
	{
		
		printf("\n");
		for(j=0;j<col;j++)
		{
			printf("%d ",s[i][j]);
			
			
		}
		
		
		
	}
	
	
	return 0;
}


void arraysum(int *ap,int *bp,int *sp,int r,int c)
{
	int i,j,tolele;
	
	tolele=r*c;
	
	
	printf("\nPredefined Array by Function\n");
	for(i=0;i<r;i++)
	{
		
		for(j=0;j<c;j++)
		{
			*(sp+j) = *(ap+j) + *(bp+j);
		}
		
		sp += 20;		// pointer will get address of next row
		ap += 20;
		bp += 20;
		
		
	}
	
	
	
	
	
}

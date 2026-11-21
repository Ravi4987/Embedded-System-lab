/******************************************Transpose of Matrix using Function***********************************************************************************/
#include <stdio.h>
#include <stdlib.h>


int main() {
  int a[20][20],row,col,i,j;
  
  void Matrixtranspose(int x[][20],int r,int c);
  
  printf("Enter row and column:");
  scanf("%d%d",&row,&col);
  
    printf("Enter the element of Array A\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
			
			
		}
		
		
	}
	
	printf("\nMatrix A\n");
	
	for(i=0;i<row;i++)
	{
		printf("\n");
		for(j=0;j<col;j++)
		{
			printf("%d ",a[i][j]);
			
		}
		
		
		
	}
	
	Matrixtranspose(a,row,col);
	
	
	
	return 0;
}


void Matrixtranspose(int x[][20],int r,int c)
{
	
	int temp[20][20],i,j;
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			temp[j][i]=x[i][j];
			
		}
		
		
	}
	
	
	printf("\nTranspose Matrix\n");
	
	for(i=0;i<c;i++)
	{
		printf("\n");
		for(j=0;j<r;j++)
		{
			printf("%d ",temp[i][j]);
			
		}
		
		
		
	}
	
	
	
	
	
}

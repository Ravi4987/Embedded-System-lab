/************************************************Trace of Matrix Using Function********************************************************************/
#include <stdio.h>
#include <stdlib.h>



int main() {
	int a[20][20],row,col,i,j;
  
  int TraceMatrix(int x[][20],int r,int c);
  
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
	
	printf("\nTrace is %d",TraceMatrix(a,row,col));
	
	
	return 0;
}

int TraceMatrix(int x[][20],int r,int c)
{
	int s=0,i,j;
	
	
	for(i=0;i<r;i+=r-1)
	{
		for(j=0;j<c;j++)
		{
			s += x[i][j];
			
		}
		
		
		
	}
	
	
	for(j=0;j<c;j+=c-1)
	{
		for(i=1;i<r-1;i++)
		{
			s += x[i][j];
			
		}
		
		
	}
	
	
	return(s);
	
	
	
	
	
	
	
	
	
}

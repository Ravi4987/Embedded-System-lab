#include <stdio.h>
#include <stdlib.h>

#define Func 1

int main(int argc, char *argv[]) {
	int x[3][4]={
					{6,2,3,4},
					
					{5,6,7,8},
					
					{9,7,1,5},
									};
									
	int a[3][4];
									
	int *ptr,*aptr,row=3,col=4,i,j;
	
	ptr=x[0];
	
	aptr=a[0];
	
	printf("\nEnter the element of Array A\n");
	for(i=0;i<row;i++)
	{
		
		for(j=0;j<col;j++)
		{
			printf("a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
			
			
		}
		
		
		
	}
	
	void ArrayByFunc(int *xp,int *ap,int r,int c);
//	printf("\n%d\n",*(*(x+2)+3));
//	printf("\n%d\n",*x[0]);
//	printf("\n%d\n",*(ptr+4));


#if Func
		ArrayByFunc(x[0],a[0],row,col);

	
#else 
	printf("\nPredefined Array\n");
	for(i=0;i<row*col;i++)
	{
		if((i)%4==0)  printf("\n");
		printf("%d  ",*(ptr+i));
		
	}
	
	
	
	
	
	printf("\nFetching Array A element by pointer\n\n");
	for(i=0;i<row*col;i++)
	{
		if((i)%4==0)  printf("\n");
		printf("%d  ",*(aptr+i));
		
	}
	
	
	
#endif	
	
	
	
	
	return 0;
}



void ArrayByFunc(int *xp,int *ap,int r,int c)
{
	int i;
	printf("\nPredefined Array by Function\n");
	for(i=0;i<r*c;i++)
	{
		if((i)%4==0)  printf("\n");
		printf("%d  ",*(xp+i));
		
	}
	
	
	printf("\nFetching Array A element by pointer by Function\n\n");
	for(i=0;i<r*c;i++)
	{
		if((i)%4==0)  printf("\n");
		printf("%d  ",*(ap+i));
		
	}
	
	
	
	
}

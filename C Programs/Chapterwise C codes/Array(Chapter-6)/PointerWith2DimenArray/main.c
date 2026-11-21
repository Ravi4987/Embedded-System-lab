/***********************************************Pointer with two dimensional array************************************************************************/
#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int a[3][4]={	{10,20,30},
	
					{40,50,60},
	
					{70,80,90},
	
	
				};
				
				
				
	int i,j;
	
	
	
	
	for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<4;j++)
		{
			
			printf(" a[%d][%d]:%d",i,j,*(*(a+i)+j));
		}
		
		
	}
	
	printf("\n\n");
	
	printf("%d",(a[i]));
	
	
	
	
	
	
	
	
	return 0;
}

/***************************************************Bubble Sort************************************************************/
#include <stdio.h>
#include <stdlib.h>

#define  Ascen    0

int main() {
	int a[5],i,j,temp;
	
	
	printf("Enter the element of Array\n");
	for(i=0;i<5;i++)
	{
		printf("\na[%d]:",i);
		scanf("%d",&a[i]);
		
		
	}
	
	
	
	
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<5-i;j++)
		{
			
			
#if	 Ascen			
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				
				
			}
			
#else
		if(a[j+1]>a[j])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				
				
			}
		
#endif		
			
			
			
		}
		
	}
	
	printf("\n\nSorted Array\n");
	for(i=0;i<5;i++)
	printf("\na[%d]:%d",i,a[i]);
	
	
	
	
	
	
	
	
	return 0;
}

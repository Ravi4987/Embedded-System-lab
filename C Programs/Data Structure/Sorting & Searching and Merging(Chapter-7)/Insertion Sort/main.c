/**************************************************Insertion Sort************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define Ascen  0

int main() {
	
	int a[5],i,j,temp,pos;
	
	printf("Enter the elements\n");
	for(i=0;i<5;i++)
	{
		printf("\na[%d]:",i);
		scanf("%d",&a[i]);
		
	}
	
	for(i=1;i<5;i++)
	{
		temp=a[i];
		pos = i-1;
		
#if   Ascen		
		while(temp<a[pos]&&pos>=0)
		
#else
       while(temp>a[pos]&&pos>=0)
       
#endif
		{
			a[pos+1]=a[pos];
			pos=pos-1;
			
		}
		
		a[pos+1]=temp;
		
	/*	printf("\n\nPass %d\n",i);				// For Debugging Purpose
		for(j=0;j<=i;j++)
		printf("\na[%d]:%d",j,a[j]);		*/
		
	}
	
	printf("\n\nSorted Array is\n");
	for(i=0;i<5;i++)
	printf("\na[%d]:%d",i,a[i]);
	
	
	
	
	return 0;
}

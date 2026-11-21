#include <stdio.h>
#include <stdlib.h>

#define   Ascen	1

int main() {
	int a[5],i,j,temp,position,pass,flag=1;
	
	
	printf("Enter the elements\n");
	for(i=0;i<5;i++)
	{
		
		printf("\na[%d]:",i);
		scanf("%d",&a[i]);
		
	}
	
	pass=1;

	while(pass<=5-1 && flag)
	{
		flag=0;
		for(i=0;i<4;i++)
		{
			
			
#if       Ascen			
			if(a[i]>a[i+1])
			
#else    
			if(a[i+1]>a[i])
			
#endif
			{
				flag=1;
				
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
				
				
				
			}
			
			
		}
		
	/*	printf("\n\nPass:%d\n",pass);							// for Debugging Purpose
		for(j=0;j<5;j++)  printf("\na[%d]:%d",j,a[j]);  */
		
		
			pass++;	
				
		
	}
	
	
printf("\n\nSorted Array\n");

for(i=0;i<5;i++)
printf("\na[%d]:%d",i,a[i]);	

	
	
	
	
	
	
	
	
	return 0;
}

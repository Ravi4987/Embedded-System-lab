/**************************************************Linear Search************************************************************************************/
#include <stdio.h>
#include <stdlib.h>



int main() {
	int a[5],i,j,found=0,se;
	
	
	printf("Enter the Elements\n");
	for(i=0;i<5;i++)
	{
		printf("\na[%d]:",i);
		scanf("%d",&a[i]);
	}
	
	printf("\nEnter the element to be searched:");
	scanf("%d",&se);
	
	
	for(i=0;i<5;i++)
	{
		if(se==a[i])
		{
			found=1;
			break;
			
		}
		
	}
	
	
	if(found)
	{
		
		printf("\nElement is found at position:%d",i);
		
		
	}
	
	else
	printf("\nElement is not found\n");
	
	
	
	
	
	return 0;
}

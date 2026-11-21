/******************************************Program to delete array element at specified position*****************************************************************************************/
#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int a[]={10,20,30,40,50};
	 int index,i,size;
	
	size = sizeof(a)/sizeof(int);
	
again:	printf("Enter the position(1 to 5) at which element is to be deleted:");
	scanf("%d",&index);
	
	if(index>size || index==0 || index<0)
	{
		printf("\nWrong value Enter again\n");
		goto again;
		
	}
	
	else{
		
		printf("Array before deletion\n");
		
		for(i=0;i<size;i++)  printf("%d ",a[i]);
		
		if(index==size)  a[index-1]=0;
		
		else{
			
			
			for(i=index-1;i<size-1;i++)
			{
					
					a[i]=a[i+1];	
				
			}
			
			
			
		}
		
		
	}
	
	printf("\n\nArray after deletion\n");
		
		for(i=0;i<size-1;i++)  printf("%d ",a[i]);
	
	
	
	
	
	
	return 0;
}

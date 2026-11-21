/****************************************Program to sort an Array and use a menu system to determine whether sort should be asen or descending********************************************************************************/
#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int a[5],i,j,asc,big,index;
	
	printf("Enter 5 element of Array:");
	
	for(i=0;i<5;i++)
	{
		
		printf("\na[%d]:",i);
		scanf("%d",&a[i]);
	}
	
	printf("\n\nArray is\n");
	for(i=0;i<5;i++)
	{
		printf("\na[%d]:%d",i,a[i]);
	}
	
again:	printf("\n\nType 1 to sort array in ascending order or 0 to sort in descending order:");
	scanf("%d",&asc);
	
	
		
		switch(asc)
		{
			case 0:						// Ascending order case
				j=5;
				big=a[0];
				while(j>0)
				{
					big=a[j-1];
					index=j-1;
					for(i=j-1;i>=0;i--)
					{
					    if(big<a[i]){
					    	big=a[i];
					    	index=i;
						}	
											   
					}				   	
					a[index]=a[j-1];
					a[j-1]=big;
					
					j--;
					
				}
				break;
				
			case 1:						// Descending order case
				j=0;
				big=a[0];
				
				while(j<5)
				{
					big=a[j];
					index=j;
				for(i=j;i<5;i++)
				{
					
					if(big<a[i])
				   {
					    	big=a[i];
					    	index=i;
					}
					
					
				}
				
				a[index]=a[j];
				a[j]=big;
				j++;
				
			}
				
			break;	
				
			default:									// Wrong value
				printf("Wrong value Enter again");
		        goto again;
			
			
			
			
		}
		
	printf("Sorted Array is\n");
	for(i=0;i<5;i++)
	{
		printf("\na[%d]:%d",i,a[i]);
	}	
		
	
		
	
	
	
	return 0;
}

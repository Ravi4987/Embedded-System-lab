/*******************************************binary Search***************************************************/
#include <stdio.h>
#include <stdlib.h>



int main() {
	int a[40],n,i,j,se,First,last,mid;
	
	
	printf("Enter the total no of elements:");
	scanf("%d",&n);
	
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
	{
		printf("\na[%d]:",i);
		scanf("%d",&a[i]);
		
	}
	
	printf("\nEnter the element to be search:");
	scanf("%d",&se);
	
	First=0;
	last=n-1;
	
	mid=(First+last)/2;
	
	while(First<last && a[mid]!=se)
	{
		if(a[mid]<se) First = mid+1;
		if(a[mid]>se) last = mid -1;
		
		mid=(First+last)/2;
	}
	
	if(a[mid]==se) printf("\nElement found at %d",mid);
	
	else printf("\nElement is not found");
	
	
	
	
	
	return 0;
}

/*******************************************Program to find largest number of array using pointer**********************************************************************************/
#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int n,i;
	
	float a[20],big;
	
	printf("Enter total numbers:");
	scanf("%d",&n);
	
	
	for(i=0;i<n;i++)             // Input of element of array
	{
		printf("\na[%d]:",i);
		scanf("%f",&a[i]);
		
	}
	
	big = *a;
	
	for(i=0;i<n;i++)
	{
		
		if(a[i]>big)  big = *(a+i);
		
	}
	
	
	printf("Largest Number is %f",big);
	
	
	
	
	
	
	return 0;
}

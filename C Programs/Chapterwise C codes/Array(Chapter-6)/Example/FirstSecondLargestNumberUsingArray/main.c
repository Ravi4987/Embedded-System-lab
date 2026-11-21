/************************************************Program to find first and second largest number using array************************************************************************************/
#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int n,i;
	float a[10],big1=0,big2=0;
	
	
	printf("Enter the total number:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		
		printf("a[%d]:",i);
		scanf("%f",&a[i]);
		
		if(a[i]>big1) big1=a[i];
		
	}
	
	for(i=0;i<n;i++)
	{
		if(big1==a[i])  continue;
		
		if(a[i]>big2)  big2=a[i];
		
	}
	
	printf("\nFirst largest number is %f and second largest number is %f ",big1,big2);
	
	
	return 0;
}

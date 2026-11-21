/*****************************************************Program to find largest Number using Array***********************************************/
#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int n,i;
	float a[20],big;
	
	
	printf("Enter total Number:");
	scanf("%d",&n);
	
	printf("Enter values:");
	for(i=0;i<n;i++)
	{
		
		scanf("%f",&a[i]);
	}
	
	big=a[0];
	
	for(i=0;i<n;i++)
	{
		if(a[i]>big)   big=a[i];
		
	}
	
	printf("Largest Number is %f",big);
	
	
	
	return 0;
}

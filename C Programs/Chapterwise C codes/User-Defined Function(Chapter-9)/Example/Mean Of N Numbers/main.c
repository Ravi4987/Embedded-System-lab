/************************************************Mean of N numbers using function******************************************************************/
#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int a[20],n,i;
	float mean(int *add,int t);
	
	
	printf("Enter the total element:");
	scanf("%d",&n);
	
	printf("Enter the value of element\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]:",i);
		scanf("%d",&a[i]);
		
		
	}
	
	
	printf("Mean:%f",mean(a,n));
	
	
	
	
	
	return 0;
}

float mean(int *add,int t)
{
	int sum=0,j;
	
	for(j=0;j<t;j++)
	{
		
		sum += *add++;
		
	}
	
	return((float)sum/t);
	
	
	
}

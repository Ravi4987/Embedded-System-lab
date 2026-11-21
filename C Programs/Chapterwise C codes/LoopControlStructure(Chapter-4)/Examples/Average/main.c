/********************************************Program to calculate average of n numbers***********************************************************/
#include <stdio.h>
#include <stdlib.h>



int main() {
	float sum,avg,number;
	int i,n;
	
	printf("Enter total number to be averaged:");
	scanf("%d",&n);
	
	printf("\nEnter %d numbers\n",n);
	for(i=1;i<=n;i++)
	{
		
		scanf("%f",&number);
		sum += number;
		
		
	}
	
	avg=sum/n;
	
	
	printf("Average is %6.2f",avg);
	
	
	
	
	return 0;
}

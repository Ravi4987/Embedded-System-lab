/**************************************************Program to find sum of series*******************************************************************

						Series is

						1 - 1/2^2 + 1/3^2 - 1/4^2 + 1/5^2.......




***************************************************************************************************************************************************/


#include <stdio.h>
#include <stdlib.h>
#include<math.h>


int main() {
	
	int n,i;
	float sum=0;
	
	
	printf("Enter the value of n upto which sum is required:");
	scanf("%d",&n);
	
	
//	sum=pow(-1,3);
	for(i=1;i<=n-1;n++)
	{
		
		sum  -= pow(-1,i)/(i*i);
	
//	sum = sum - pow(-1,2);
		
		
	}
	
	printf("Sum:%f",sum);
	
	
	
	
	return 0;
}

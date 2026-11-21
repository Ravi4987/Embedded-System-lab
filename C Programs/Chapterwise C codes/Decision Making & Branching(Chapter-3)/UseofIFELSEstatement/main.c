/************************************************Program To illustarate use of if else*********************************************************/
#include <stdio.h>
#include <stdlib.h>



int main() {
	int a,b,c,big;
	
	
	printf("Enter the value of three numbers:");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>b)
	{
		big=a;
		
		
	}
	
	else
	{
		big=b;
	}
	
	if(c>big)
	{
		
		printf("largest number is %d\n",c);
		
	}
	
	else
	{
		
		printf("largest number is %d\n",big);
		
	}
	
	
	return 0;
}

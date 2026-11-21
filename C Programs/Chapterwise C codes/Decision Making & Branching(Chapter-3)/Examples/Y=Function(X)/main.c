/********************************************Program to evaluate the function*****************************************************/
#include <stdio.h>
#include <stdlib.h>

/**************************************************************************************************************
				y= 5 for x>0
				y=0  for x=0
				y=-5 for x<0

**************************************************************************************************************/

int main() {
	
	int x,y;
	
	printf("Enter the value of x:");
	scanf("%d",&x);
	
	switch(x)
	{
		case 0:
			y=0;
			break;
			
		default:
			
			if(x>0) y=5;
			else y=-5;
			break;
	}
	
	printf("Value of y=%d",y);
	
	
	
	
	
	
	
	
	return 0;
}

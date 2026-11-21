/*************************************Swapping values using diffrent methods*******************************************************/

#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int x=10, y=20;
	
	printf("Before swapping x is %d and y is %d\n",x,y);
	
/***************************First method**************************************************************/	
	/*x=x+y;
	y=x-y;
	x=x-y;*/
	
	
	
/***************************One step method**************************************************************/	
	x=x+y-(y=x);
	
	printf("After swapping x is %d and y is %d",x,y);
	
	
	
	
	return 0;
}

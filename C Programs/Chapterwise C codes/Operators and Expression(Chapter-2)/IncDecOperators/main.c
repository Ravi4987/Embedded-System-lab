/******************************************************Program to study Increment and decrement operators*********************************************************************/
#include <stdio.h>
#include <stdlib.h>



int main() {
	int x=0,y=15;
	
	x=++y;   //  in this first value of y increments and then assign to x
	printf("value of x after pre-increment:%d\n",x);
	
	x=0;
	y=15;
	
	x=y++;   ///  in this first of all value of y assign to x and then its value will be incremented
	printf("value of x after post-increment:%d",x);
	
	
	return 0;
}

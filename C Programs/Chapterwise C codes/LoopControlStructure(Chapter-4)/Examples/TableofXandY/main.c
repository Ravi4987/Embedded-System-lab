/***************************************************Program to produce table of x and y**************************************************/
#include <stdio.h>
#include <stdlib.h>



int main() {
	
	float x=4.5,y;
	
	printf("y");
	
	printf("    ");
	
	printf("x");
	
	printf("\n");
	
	for(y=1;y<=10;y++)
	{
		
		printf("%f",y);
		
		printf("    ");
		
		printf("%f",x);
		
		printf("\n");
		
		x +=0.5;
		
	}
	
	
	return 0;
}

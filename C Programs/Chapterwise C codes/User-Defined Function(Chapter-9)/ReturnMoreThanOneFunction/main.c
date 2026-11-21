/**************************************Function returns more than one value******************************************************************************************/
#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int x, square, cube;
	
	printf("Enter number:");
	scanf("%d",&x);
	
	compute(x,&square,&cube);
	
	printf("Square:%d\n",square);
	printf("Cube:%d\n",cube);
	
	
	return 0;
}

compute(a,b,c)						// User Defined Function
int a, *b, *c;
{
	
	*b= a*a;
	*c=a*a*a;
}



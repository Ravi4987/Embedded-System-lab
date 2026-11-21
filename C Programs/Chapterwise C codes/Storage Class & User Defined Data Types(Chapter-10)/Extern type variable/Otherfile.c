#include <stdio.h>
#include <stdlib.h>

extern int x;		//  with extern prefix we can use global variable of other file

void sample()
{
//	int x;
	printf("Value of x in other file:%d\n",x);
	
	
}

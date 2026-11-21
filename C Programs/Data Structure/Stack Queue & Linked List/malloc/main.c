/************************************************malloc************************************************************/
#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int *p;
	
	p = (int *)malloc(sizeof(int));		// malloc function free the number of bytes given as parameter and gives starting address of that free space
	
	*p=11;
	
	printf("Address of pointer is %u\n",p);
	printf("Value at Address is %d",*p);
	
	
	
	
	
	return 0;
}

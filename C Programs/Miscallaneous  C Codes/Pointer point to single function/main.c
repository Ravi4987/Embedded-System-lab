#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	void function();
	void (*pointer)();
	
	pointer=function;
	
	(*pointer)();
	
	
	return 0;
}


void function()
{
	printf("user defined program\n");
	
}

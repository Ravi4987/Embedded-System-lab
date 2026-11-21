#include <stdio.h>
#include <stdlib.h>

#define constant 1

int main() {
	
	
#if constant 
printf("Conditional execution using macro\n");
#endif

if(constant)
{
	
printf("Conditional execution using normal\n");	
}
return 0;
}

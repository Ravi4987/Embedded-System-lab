/*******************************************Pointer to function*************************************************************************************/
#include <stdio.h>
#include <stdlib.h>



int main() {
	void mess();
	void (*ptr)();			// Declaring pointer that will point address of any function
	ptr = mess;				// Assigning address of function mess
	
	printf("Address of the function is %d\n",ptr);
	
	(*ptr)();			// Accessing function using pointer
		
	
	return 0;
}

void mess()				// User defined function
{
	printf("I am in the subprogram\n");
	
}

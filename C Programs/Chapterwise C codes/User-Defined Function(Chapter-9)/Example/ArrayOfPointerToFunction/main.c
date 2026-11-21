/********************************************Accessing multiple function using array of pointer***********************************************************************************/
#include <stdio.h>
#include <stdlib.h>



int main() {
	
	void func1();		// Function Declaration
	void func2();
	void func3();
	
	void (*ptr[])()={func1,func2,func3};			// Array of pointers that points to multiple function
	
	(*ptr[0])();				/// Accessing function using pointer with corresponding index
	
	(*ptr[1])();
	
	(*ptr[2])();
	
	
	return 0;
}

void func1()
{
	
	printf("\nThis is Function1\n");
	
}

void func2()
{
	
	printf("\nThis is Function2\n");
	
}

void func3()
{
	
	printf("\nThis is Function3\n");
	
}

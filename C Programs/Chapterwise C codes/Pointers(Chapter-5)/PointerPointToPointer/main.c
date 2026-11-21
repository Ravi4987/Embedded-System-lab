/*******************************************************Program to illustrate Pointer point to pointer*************************************************************/
#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int var=10, *ptr,**pointer;
	
	ptr=&var;
	
	pointer=&ptr;					// Another Pointer to store the Address of Pointer
	
	
	printf("Address of variable using ADDRESS OF OPERATOR:%d\n",&var);
	
	printf("Address of variable using POINTER:%d\n",ptr);
	
	printf("Value using DIRECT VARIABLE:%d\n",var);
	
	
	printf("Value using pointer:%d\n",*ptr);
	
	
	printf("Address of Pointer using ADDRESS OF OPERATOR:%d\n",&ptr);
	
	printf("Address of Pointer using POINTER POINT TO POINTER:%d\n",pointer);
	
	printf("value of POINTER POINT TO POINTER:%d\n",*pointer);
	
	
	printf("Value of variable using POINTER POINT TO POINTER:%d\n",**pointer);
	
	
	
	
	
	
	return 0;
}

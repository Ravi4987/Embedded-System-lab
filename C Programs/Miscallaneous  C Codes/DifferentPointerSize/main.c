/**************************************************Program to study different pointer size********************************************************************/
#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	
	int id=1, *intptr=&id;
	char c='R', *cptr=&c;
	
	printf("Address of integer pointer is %d\n",intptr);			
	intptr++;														// intger type pointer address will increase by 4 because int data type has 4 bytes size
	printf("Address of integer pointer after increment is %d\n",intptr);   
	printf("\n");
	
	
	printf("Address of character pointer is %d\n",cptr);
	cptr++;															// Character type pointer address will increase by 1 because char data type has 1 byte size 
	printf("Adrees of character pointer after increment is %d\n",cptr);
	
	
	
	
	
	
	return 0;
}

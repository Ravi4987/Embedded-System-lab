/********************************************An intro to pointers**************************************************************************/

#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int var=10;
	int *poi;
	
	poi=&var;
	
	
	printf("Address of variable using ADDRESS OF OPERATOR is %d\n",&var);
	
	printf("Address of variable using POINTER  is %d\n",poi);
	
	
	printf("Value at address of variable using variable itself is %d\n",var);
	
	printf("Value at address of variable using VALUE AT ADDRESS OPERATOR is %d\n",* (&var));
	
	
	printf("Value at address of varibale using POINTER is %d\n",*poi);
	
	
	
	
	
	return 0;
}

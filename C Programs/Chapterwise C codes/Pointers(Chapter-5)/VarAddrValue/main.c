/*****************************************************Program to check variable address and value store at that location*************************************************************************/
#include <stdio.h>
#include <stdlib.h>



int main() {
	int var=10;
	
	
	printf("Address of variable is %d\n",&var);
	
	printf("value store in variable using direct variable:%d\n",var);
	
	printf("value store in variable using value at address oprator:%d\n",*(&var));
	
	
	
	
	return 0;
}

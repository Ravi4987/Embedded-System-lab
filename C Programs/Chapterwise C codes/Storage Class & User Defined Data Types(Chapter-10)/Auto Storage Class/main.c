/****************************************************Auto Storage Class*********************************************************************************/
#include <stdio.h>
#include <stdlib.h>


int main() {
	
	auto int i;
	
	printf("Value of variable i:%d\n",i);		// Auto type variable if not intialise its value will be unpredicatble
	
    i=3;
	{
		printf("Value of variable at starting of block:%d\n",i);
auto int i=6;
		{
			printf("Value of variable at middle of block:%d\n",i);
			
		}
		
		
		printf("Value of variable at ending of block:%d\n",i);
	}
	
	printf("Value of variable at outside of block:%d\n",i);
	
	
	return 0;
}

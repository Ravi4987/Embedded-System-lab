/******************************************************Static Variable*********************************************************************/
#include <stdio.h>
#include <stdlib.h>


/******************************************************Note*********************************************************************

     1. Static variable stored in memory.
     
     2. if not initialized its initial value is 0.
     
     3. local(visible) to the block in which it is declared.
     
     4. it retains its value between different calls. That is when for the first time a function is called, a static variable
     
     	is created with initial value zero and in subsequent calls it retain its present value.

*********************************************************************************************************************************/

#define withstatic 1

int main(int argc, char *argv[]) {
	
	counter();
	counter();
	counter();
	
	return 0;
}


counter()
{
	
#if withstatic==1
     static int j=1;
     
#else
	int j=1;
#endif

	printf("%d\n",j);
	j++;
	
	
	
}

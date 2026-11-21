/**************************************************IfELIF PreProcesser Intro***********************************************************************/
#include <stdio.h>
#include <stdlib.h>

#define variable 5

int main() {
	
	
#if variable==2

	printf("Variable Value:%d",variable);
	
#elif  variable==1
	
	printf("Variable Value:%d",variable);
	
#else

	printf("Null value");
	
#endif	
	
	
	
	
	return 0;
}

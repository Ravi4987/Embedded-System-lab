/*******************************************************Ifdef PreProcesser Intro*****************************************************************/
#include <stdio.h>
#include <stdlib.h>


/************************************************************************************************************************
				
						if IBMpc define then respective statement will execute
						
						otherwise else part will be executed



************************************************************************************************************************/



#define IBMPc  1					//  Comment this to execute else part

int main() {
	
#ifdef 	IBMPc
	
	printf("Code Suitable for IBM-Pc");
	
#else

	printf("Code Suitable for HCL Machine");
	
#endif	
	
	
	return 0;
}

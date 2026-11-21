/********************************************************Extern type variable************************************************************/
#include <stdio.h>
#include <stdlib.h>

/*********************************************Note***********************************************************************

			1. Stored in memory
			
			2. if not initialized in the declaration statement their value is zero.
			
			3. global i.e visible to all function.
			
			4. retain its value till the program execution terminates.

/********************************************************************************************************************/


int x=12;			//  This variable is global type variable it is visible to all function in this file

int main(int argc, char *argv[]) {
	
	void sample();
	
	printf("Value of x in main file:%d\n",x);
	
	sample();
	
}

/********************************************Ifndef Preprocesser  Intro*****************************************************************/
#include <stdio.h>
#include <stdlib.h>


/*************************************************************************************************************

    There is one header file named as DEFINE.h in this header file TEST is defined if not defined 
    
    previously



*************************************************************************************************************/



#define TEST 20			//  Comment this section to get the value of TEST defined in DEFINE.H

#include "DEFINE.h"


int main() {
	
	
	printf("Test value:%d",TEST);
	
	return 0;
}

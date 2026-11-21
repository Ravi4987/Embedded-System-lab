/**********************************************************Register Storage Class*************************************************************************/
#include <stdio.h>
#include <stdlib.h>

/****************************************************Note*******************************************************************************

			1. Stored in processer register, if a register is available. if register is not available the variable is stored in main 
			
			   memory and works as if storage class is auto. As soon as register becomes available, the storage class of that variable
			   
			   is converted to register type.
			   
			2. If not initialized, its intial value is zero.
			
			3. local to the block in which the variable is declared.
			
			4. it retain its value till the remains in the block in which the variable is declared.
			
			5. You cannnot use this variable with all types of variable. for example
			
						register float x;
						register double x;
						
			   since float and double variables require 4 and 8 byte respectively. But CPU register are usually 16 bit registes
			   
			   and therefore cannot store a float and double value.



***********************************************************************************************************************************/

int main() {
	
	
	register int x;

	
	for(x=0;x<5;++x)
	printf("x:%d\n",x);
	
	
	
	
	
	
	
	
	return 0;
}

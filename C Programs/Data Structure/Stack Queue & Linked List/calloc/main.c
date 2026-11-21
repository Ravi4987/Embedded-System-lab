/******************************************calloc*************************************************************/
#include <stdio.h>
#include <stdlib.h>


/***********************************************************************

As malloc caloc also give starting address of free memory


but it takes two parameter one is no of blocks required

another is number of bytes required for each block

if there is not enough space it gives null


***********************************************************************/





int main() {
	
	int *p,numofbyt,numofblck;
	
	p=(int *)calloc(numofblck,numofbyt);
	
	if(p==NULL)
	{
		printf("Memory not allocate");
		
		
	}
	
	else
	{
	  *p=10;
	  
	  printf("Address of pointer is %u\n",p);
	  printf("Value at Address is %d\n",*p);
	  
	  	
		
		
	}
	
	
	
	
	
	return 0;
}

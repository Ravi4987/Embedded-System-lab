/*************************************************Program to illustrate use of if *****************************************************************/
#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int marks=33;
	
	if(marks>=33)				/// if there is only one statement to be executed then the pair of braces can be dropped
	printf("Pass\n");
	
	if(marks>=33)
	{
	  printf("Pass ");
	  printf("with marks %d",marks);	
		
		
	}
	
	
	return 0;
}

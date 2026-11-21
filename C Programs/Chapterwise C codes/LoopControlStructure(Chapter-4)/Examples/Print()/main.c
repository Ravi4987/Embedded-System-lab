/********************************************Program to print star pattern*********************************************************

										*
										*+
										*++
										*+++
										*++++

**********************************************************************************************************************/


#include <stdio.h>
#include <stdlib.h>



int main() {
	int row,plus;
	
	printf("*\n");
	
	for(row=1;row<=5;row++)
	{
		
		printf("*");
		for(plus=1;plus<=row;plus++)
		printf("+");
		
		printf("\n");
		
		
		
		
		
	}
	
	
	
	return 0;
}

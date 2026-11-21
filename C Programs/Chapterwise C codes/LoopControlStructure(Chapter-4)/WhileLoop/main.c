/*****************************************************Program to illustrate the use of while loop***********************************************************************/
#include <stdio.h>
#include <stdlib.h>



int main() {
	int num=0,s=0;
	
	while(num<=10)
	{
		s += num;
		num += 1;
		
	}
	
printf("Sum is %d",s);	
	
	
	return 0;
}

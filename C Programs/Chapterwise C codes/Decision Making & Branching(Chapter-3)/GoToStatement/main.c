/**************************************************************Go To Statement*********************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include<math.h>



int main() {
	int number;
	float squareroot;
	
	
start:	printf("Enter a number whose square root is to find:");
		scanf("%d",&number);
		
		if(number<0)
		{
		  	goto start;
			
		}
		
		else
		{
		  squareroot=sqrt(number);
		  printf("Square root is %f",squareroot);	
		}
	
	
	
	
	return 0;
}

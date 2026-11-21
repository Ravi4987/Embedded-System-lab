/*******************************************************Program to print Star and Number pattern**************************************************

               1										*  *  *  *  *
               											
               2    2									  *   *  *  *
               
               3    3    3									  *  *   *
               
               4	4	 4	   4								  *   *
               
               
               5    5    5     5									  *


****************************************************************************************************************************************************/


#include <stdio.h>
#include <stdlib.h>



int main() {
	int i,j,k;
	
	
	for(i=1;i<=5;i++)							// Number pattern For Loop
	{
		
		  
		
		  for(j=1;j<=i;j++)
		  {
		  	 
		  	
		  	  printf("    %d",i);
		  	
		  	
		  }
		
		
		printf("\n");
		
		
	}
	
	
	printf("\n");
	printf("\n");
	printf("\n");
	
	
	
	for(i=5;i>=1;i--)							// Star pattern For Loop
	{
		
		  for(k=0;k<5-i;k++)
		  {
		  	
		  	printf("  ");
		  	
		  }
		
		  for(j=1;j<=i;j++)
		  {
		  	 
		  	
		  	  printf("* ");
		  	  //printf(" ");
		  	
		  }
		
		
		printf("\n");
		
		
	}
	
	
	
	
	
	return 0;
}

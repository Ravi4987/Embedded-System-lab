/*******************************************************Program to find value of function(Using Nested Loop)*****************************************************************/
#include <stdio.h>
#include <stdlib.h>

/***********************************
  Function is 
 
  z=cubeof(x)+cubeof(y)
  
  where the value to be assigned are x= 1,2,3  and y= 2,3

*********************************/

int main() {
	int x,y,z;
	
	printf("\n x    y    z\n");
	
	for(x=1;x<=3;x++)
	{
		
		for(y=2;y<=3;y++)
		{
			z=x*x*x+y*y*y;
			
			printf("\n %d%5d%5d",x,y,z);
			
			
		}
		
		
		
		
	}
	
	
	
	return 0;
}

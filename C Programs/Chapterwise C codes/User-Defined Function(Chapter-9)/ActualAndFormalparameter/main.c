/******************************************Actual and formal parameters*************************************************************************************/
#include <stdio.h>
#include <stdlib.h>



int main() {
		int a,b,sum;		/// a and b are actual parameters
		
		printf("Enter two numbers:");
		scanf("%d%d",&a,&b);
		
		sum=add(a,b);
		
		printf("Sum:%d",sum);	
	
	
	return 0;
}



add(x,y)
int x,y;				// x and y are formal parameters
{
	
	
	return(x+y);
	
	
}

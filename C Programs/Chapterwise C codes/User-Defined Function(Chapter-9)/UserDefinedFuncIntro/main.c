/***********************************************An intro to User defined Function***********************************************************************/
#include <stdio.h>
#include <stdlib.h>

#define  Type 0

#if Type
int square(int a)
{
	int s;
	
	s=a*a;
	
	return(s);
	
	
	
}

#else
square(a)				// When we not declare function type then its default return type is integer
int a;					// we can also define argument type after function name 
{
//	int s;
	
//	s=a*a;
	
	return(a*a);
	
	
	
}

#endif

int main() {
	int num;
//	int square(int a);
	printf("Enter the number whose square is to find:");
	scanf("%d",&num);

	printf("Square is %d",square(num));
	
	
	
	
	
	
	
	
	return 0;
}

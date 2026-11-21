/****************************************Global and local variable*********************************************************************/
#include <stdio.h>
#include <stdlib.h>

int a,b,c,big;        // Global variables

int main() {
	
	int lar;			// Local variable
	
	printf("Enter three numbers:");
	scanf("%d%d%d",&a,&b,&c);
	
	lar = largest(a,b,c);
	
	printf("largest number is %d",lar);
	
	
	
	return 0;
}


largest(a,b,c)
int a,b,c;
{
	if(a>b)	big=a;
	else big=b;
	
	if(c>big)	big=c;
	
	return(big);
	
	
	
	
}

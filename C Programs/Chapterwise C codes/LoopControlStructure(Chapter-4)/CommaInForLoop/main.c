/*********************************************************Comma Operator In For Loop******************/
#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int i,j=0,isum=0,jsum=0;
	
	for(i=0,j=0;i<=10,j<=5;i++,j++)
	{
		isum +=i;
		jsum +=j;
		
	}
	
	
	printf("isum is %d\n",isum);
	printf("jsum is %d",jsum);
	
	
	
	return 0;
}

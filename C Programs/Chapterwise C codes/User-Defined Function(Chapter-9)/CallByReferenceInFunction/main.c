/*****************************************Passing value from actual arguments to formal arguments using Call by Refrence method************************************************************************/

/***********************************************************************************************************************************************

			This program is about swapping two variable values we have to check whether by changing the value of formal arguments
			
			is their any change in value of actaul arguments
			
			In Call By Refrence method we actually passes the address of actual arguments into formal arguments
			
			so by changing value of formal arguments there will be similar change in actual arguments



************************************************************************************************************************************************/



#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int a,b;				// Actual Arguments
	
	
	printf("Enter the value of a and b:");
	scanf("%d%d",&a,&b);
	
	printf("\nBefore swapping\n");
	printf("a:%d  b:%d",a,b);
	
	swap(&a,&b);
	
	printf("\nAfter swapping\n");
	printf("a:%d  b:%d",a,b);
	
	
	
	
	
	
	
	return 0;
}


swap(int *x,int *y)			//  x and y are formal arguments
{
	int temp;
	
	temp=*x;
	
	*x = *y;
	
	*y = temp; 
	
	
	
	
	
}


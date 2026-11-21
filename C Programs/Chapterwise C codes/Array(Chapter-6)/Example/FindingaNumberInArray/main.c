/*******************************************Program to find a number in an array of list 100 **********************************************************************************/
#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int a[100],flag=0,i;
	int number=10;			// Number to be find in array
	
	a[50]=10;
	
	for(i=0;i<100;i++)
	{
		if(number==a[i])
		{
			flag=1;
			break;
		}
		
		
	}
	
	if(flag==1)   printf("Number find at a[%d]",i);
	
	else  printf("Number is not present in Array");
	
	
	
	
	
	
	
	
	
	return 0;
}

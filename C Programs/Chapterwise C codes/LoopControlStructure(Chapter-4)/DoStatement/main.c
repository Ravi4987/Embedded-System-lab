/***********************************************Program to illustrate the use of Do Statement*************************************************************/
#include <stdio.h>
#include <stdlib.h>



int main() {
	int num,sum=0;
	
//	num=1;
 num=11;	// By using this value statement is executed only one time
	
	do
	{
		
		sum += num;
		num +=1;
		
	}
	while(num<=10);
	
	printf("Sum is %d",sum);
	
	
	
	
	return 0;
}

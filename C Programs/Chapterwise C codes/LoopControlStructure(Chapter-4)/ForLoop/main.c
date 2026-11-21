/************************************************Program to illustrate use of ForLoop**************************************************************/
#include <stdio.h>
#include <stdlib.h>

#define   Preintialisation        0
#define   Postincrement     	  0
#define   BothPrePost		      0
#define   OutsideInitiIncreCond   0


int main() {
	int num,sum=0;
	
#if Preintialisation								// For Loop can be use with Preinitialisation of variable
	printf("Preinitialisation section:\n");
	   num=0;
	for(;num<=10;num++)
	{
		sum += num;
	}
	
#elif   Postincrement								// For Loop can be use with Postincrement of variable
   printf("Postincrement section:\n");
   for(num=0;num<=10;)
   {
   	
   	  sum += num;
   	  num++;
   	
   }
   
#elif   BothPrePost								// You can do initialisation and increment outside the for loop
       printf("BothPrePost section:\n");
   	   num=0;
   	   for(;num<=10;)
   	   {
   	   	
   	   	sum += num;
   	     num++;
   	   	
	   }
	   
#elif   OutsideInitiIncreCond					// You can do initialisation ,increment and set condition outside the for loop
		printf("OutsideInitiIncreCond section:\n");
		num=0;
		
		for(;;)
		{
			if(num>10) 
			break;
			
			sum +=  num;
			num++;
			
		}
		
   
#else											/// Normal use of For loop 
	printf("Normal section:\n");
  for(num=0;num<=10;num++)
  {
  	  sum += num;
  	
  }

#endif
	
	printf("Sum is %d",sum);
	return 0;
}

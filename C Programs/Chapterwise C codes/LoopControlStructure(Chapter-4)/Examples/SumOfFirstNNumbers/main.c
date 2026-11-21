/**********************************************Program to find sum of first of n natural numbers*****************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define  DO  0

int main() {
	
	int numbers,sum=0,n;
	
	printf("Enter the number upto which sum is required:");
	scanf("%d",&numbers);
	
#if   DO
    n=0;
  	do
  	{
  		
  		sum  += n;
  		n++;
  		
  		
	  }
	  
	while(n<=numbers);
	
#else


  for(n=0;n<=numbers;n++)
  {
  	
  	 sum += n; 
  	
  	
  }	

#endif


printf("Sum:%d",sum);	
	
	
	
	
	
	return 0;
}

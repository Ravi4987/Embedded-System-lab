/******************************************************Program to find prime number between two numbers************************************************/

#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int A,B, count=0,i,j,flag=1;
	
Start:	printf("Enter the two numbers:");
	scanf("%d%d",&A,&B);
	
	if(A>B)
	{
		
		printf("A is greater than B\n");
		goto Start;
	}
	
//	if(A==2)  count=1;
	
//	for(i=A;i<=B;i++)					// if you want to find prime number between two numbers including that numbers also

	for(i=A+1;i<B;i++)					// if you only want to find prime number between two numbers
	{
		
				flag=1;
		
				for(j=2;j<=i/2;j++)
				{
					
					if(i%j==0){
						
						flag=0;
						break;
					}
				
					
					
				}
				
				if(flag){
					printf("Prime Number is :%d\n",i);
					count++;
				}	
						
		
	

		
		
		
	}
	
	
	printf("Total no of prime number:%d",count);
	
	
	return 0;
}

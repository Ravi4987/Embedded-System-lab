/****************************************************Intoduction To Arrays**********************************************************************/

#include <stdio.h>
#include <stdlib.h>



int main() {
	 
	 int i[5],j;
	 
	 printf("Enter Five elements of array:");
	 for(j=0;j<5;j++)
	 {
	 	
	 	scanf("%d",&i[j]);
	 }
	
	printf("\n");
	
	printf("Elements of array are:");
	
	for(j=0;j<5;j++)
	{
		printf("\n");
		printf("%d:%d",j+1,i[j]);
		
		
		
		
	}
	
	
	
	return 0;
}

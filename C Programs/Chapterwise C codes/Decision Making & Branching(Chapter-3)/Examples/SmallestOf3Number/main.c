/*********************************************Program to find smallest of 3 number************************************************************/
#include <stdio.h>
#include <stdlib.h>



int main() {
	float n1,n2,n3;
	
	printf("Enter three numbers\n");
	scanf("%f%f%f",&n1,&n2,&n3);
	
	if(n1<n2)
	{
		if(n1<n3)  printf("Smallest number is %f",n1);
		
		else printf("Smallest number is %f",n3);
		
		
	}
	
	else
	{
		
		if(n2<n3)  printf("Smallest number is %f",n2);
		
		else printf("Smallest number is %f",n3);
		
		
	}
	
	
	
	return 0;
}

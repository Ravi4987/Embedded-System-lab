/**************************************************Program to calculate Gross salary*****************************************************/

#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int basic,gross;
	float DR,HR;
	
	
	printf("Enter Basic salary:");
	scanf("%d",&basic);
	
	DR=0.40*basic;
	printf("Dearness Allowanance is %f\n",DR);
	
	HR=0.20*basic;
	printf("House rent Allowanance is %f\n",HR);
	
	gross=basic+HR+DR;
	printf("Gross salary is %d\n",gross);
	
	
	return 0;
}
